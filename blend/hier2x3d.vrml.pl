#!/bin/perl
use strict;
# use warnings;

# Genrerate HAnim humanoid from hierarchy
#
# STDIN is a joint:segment hierarchy like ones that appear in the standard.  This is a requirement.
# The centers are pulled from sed.sh
# STDOUT is VRML Skeleton

my %centerOf = ();

my $trailing_joints = "]\njoints [\n";
my $trailing_sites = "]\nsites [\n";
my $trailing_segments = "]\nsegments [\n";


sub printVRML {
	my($prev) = shift @_;  # $prev is parent
	$prev->{line} =~ /^([ |]*)(.*) : (.*)\r*$/;
	my $parent_indent = length($1);
	my $parent_joint = $2;
	my $parent_segment = $3;
	# print STDERR "$1$2 : $3\r\n";

	if ($centerOf{$parent_joint}) {
		if ($parent_joint !~ /_end$/) {
			print               " " x $parent_indent.'DEF Toddler_'.$parent_joint.' HAnimJoint { name "'.$parent_joint.'"';
			print ' center '.$centerOf{$parent_joint}.' skinCoordIndex [ ] skinCoordWeight [ ] children ['."\n";
			print " " x $parent_indent.'DEF Toddler_'.$parent_segment.' HAnimSegment { name "'.$parent_segment.'" children [ TouchSensor { description "Joint '.$parent_joint.'" } Transform { translation '.$centerOf{$parent_joint}.' children USE HAnimSiteShape } Shape { geometry LineSet { vertexCount 2 coord Coordinate { point ['.$centerOf{$prev->{parent}->{joint}}.' '.$centerOf{$parent_joint}.'] } } } ] }'."\n";

                	print " " x ($parent_indent+2).'DEF Toddler_'.$parent_segment.'_pt HAnimSite { name "'.$parent_segment.'_pt" children [  ] }';
			
			# print " " x $parent_indent."]}\n";
			$trailing_joints   .= " " x $parent_indent.'USE Toddler_'.$parent_joint.''."\n";
			$trailing_segments .= " " x $parent_indent.'USE Toddler_'.$parent_segment."\n";
			$trailing_sites    .= " " x $parent_indent.'USE Toddler_'.$parent_segment."_pt\n";
		}
	}
	foreach my $child (@{$prev->{children}}) {   # go through child joints
		&printVRML($child);
	}
	if ($centerOf{$parent_joint}) {
		print " " x $parent_indent."]}\n";
	}
}

open(TABLE, "sh sed.sh|");

while(<TABLE>) {
	chomp;
	my $joint = $_;
	$joint =~ s/\r*$//;
	my $center = <TABLE>;
	$center =~ s/\r*$//;
	chomp $center;
	# print STDERR "$joint center = $center\r\n";
	$centerOf{$joint} = $center;
}

close(TABLE);

sub readHierarchy {
	my $node = {};
	$node->{children} = ();
	$node->{indent} = -1;
	foreach (<STDIN>) {
		my $line = $_;
		chomp $line;
		$line =~ /([ |]*)(.*) : (.*)/;
		my $indent = length($1);
		my $joint = $2;
		my $segment = $3;
		my $obj = {};
		$obj->{line} = $line;
		$obj->{indent} = $indent;
		$obj->{joint} = $joint;
		$obj->{segment} = $segment;
		$obj->{children} = ();
		# print "$line\n";
		if ($obj->{indent} > $node->{indent}) {
			$obj->{parent} = $node;
			# print "$obj->{joint} parent 1 is $node->{joint}\n";
		} elsif ($obj->{indent} == $node->{indent}) {

			$obj->{parent} = $node->{parent};
			# print "$obj->{joint} parent 2 is $node->{parent}->{joint}\n";
		} else {
			while ($obj->{indent} < $node->{indent}) {
				$node = $node->{parent};
			}
			$obj->{parent} = $node->{parent};
			# print "$obj->{joint} parent 3 is $node->{joint}\n";
		}
		push @{$obj->{parent}->{children}}, $obj;
		$node = $obj;
	}
	while (0 < $node->{indent}) {
		$node = $node->{parent};
	}
	return $node;
}

print << "HUMANHEADER";
#X3D V4.0 utf8

PROFILE Immersive

COMPONENT HAnim:2
COMPONENT Texturing:3

NavigationInfo { type [ "EXAMINE" "ANY"] headlight FALSE }

PointLight { location 0 10 0 }
DirectionalLight { }
DirectionalLight { direction 0 0 1 }

DEF ToddlerView Transform { children [
 Transform { translation -1 0.924 0 children [ ]}
  DEF ViewToddler Viewpoint { description "Toddler Front View"
   position 0 1.5 2 orientation 0.5 0 0 -0.5 centerOfRotation 0 0.5 0 }
  DEF SceneCoordSystem Transform { scale 0.175 0.175 0.175 children [
   Inline { url ["JointCoordinateAxes.x3dv"] } ]}

Transform {
    children [
	    DEF HAnimSiteShape Shape {
		     geometry DEF DiamondBox Box {
		     	size 0.02 0.02 0.02
		     }
		     appearance Appearance {
			material Material {
				diffuseColor 1 1 0
				transparency 0.3
			}
		     }
	    }
    ]
}

DEF ToddlerHumanoid Group { children [

DEF Toddler HAnimHumanoid {
  skeleton [
HUMANHEADER
my $parent = &readHierarchy();
&printVRML($parent);
print "\n".$trailing_joints;
print "\n".$trailing_segments;
print "\n".$trailing_sites;
print << "HUMANFOOTER";
]
  skin [ 
DEF babyskin Shape { # 
 appearance Appearance {
   texture ImageTexture { url [ "IMAGE.png" ] }

   material Material {
emissiveColor 0 0 0 
specularColor 0 0 0
shininess 0.5
transparency 0 
		}
	} # appearance
	geometry DEF ToddlerSkin IndexedFaceSet { # triangle mesh
                creaseAngle 0 
		ccw    TRUE
		convex TRUE
		solid  TRUE
		coord DEF ToddlerSkinCoord Coordinate {
		    point [ ]
		}
		coordIndex [
		]
		texCoordIndex [
		]
                texCoord TextureCoordinate {
                    point [ ]
                }
	} # geometry
   } # Shape 
 ]  # skin 
 skinCoord USE ToddlerSkinCoord
}
]}   # Added by John
]}   # ToddlerView

DEF Toddler_z100sTimer TimeSensor { cycleInterval 100 loop TRUE enabled TRUE }
DEF Toddler_ActivateSensor ProximitySensor { size 1000000 1000000 1000000 }
ROUTE Toddler_ActivateSensor.enterTime TO Toddler_z100sTimer.startTime

DEF SkipAnimation Group {
 children [
DEF SkipTimer TimeSensor { cycleInterval 1.73 loop TRUE enabled FALSE }
DEF Skip_r_kneeRotInterp OrientationInterpolator { key [ 0, 0.125, 0.2083, 0.2917, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1 ] 
      keyValue [
      		 -1 0 0 -0.1,
      		 -1 0 0 -0.3,
		 -1 0 0 -0.5,
		 -1 0 0 -0.7,
		 -1 0 0 -0.9, 
                 -1 0 0 -1.0,
		 -1 0 0 -0.75,
		 1 0 0 -0.5,
		 1 0 0 -0.25,
		 -1 0 0 -0.1
		] }
DEF Skip_r_hipRotInterp OrientationInterpolator { key [ 0, 0.125, 0.2083, 0.2917, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1 ] 
      keyValue [
      		 1 0 0 -0.1,
      		 1 0 0 -0.3,
		 1 0 0 -0.5,
		 1 0 0 -0.7,
		 1 0 0 -0.9, 
                 1 0 0 -1.0,
		 1 0 0 -0.75,
		 -1 0 0 -0.5,
		 -1 0 0 -0.25,
		 1 0 0 -0.1
		 ] }

#DEF Skip_l_kneeRotInterp OrientationInterpolator { key [ 0, 0.2083, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1 ] 
#      keyValue [ 1 0 0 -0.3226, 1 0 0 -0.1556, 1 0 0 -0.08678, 1 0 0 -0.8751, 1 0 0 -1.131, 1 0 0 -0.09961, 1 0 0 -0.3942, 1 0 0 -0.3226 ] }

#DEF Skip_l_hipRotInterp OrientationInterpolator { key [ 0, 0.25, 0.375, 0.5, 0.6667, 0.7917, 0.9167, 1 ] 
#      keyValue [ -0.873 0.06094 0.484 -0.2865, 0.9963 -0.01057 0.08481 -0.2488, 0.9965 0.01591 -0.08222 -0.3836, -0.7018 -0.03223 -0.7117 -0.1289, -1 0 0 -0.5518, -0.9964 0.02231 0.0817 -0.5351, -0.9809 0.04912 0.1881 -0.5204, -0.873 0.06094 0.484 -0.2865 ] }

] }

ROUTE SkipTimer.fraction_changed TO Skip_r_kneeRotInterp.set_fraction
ROUTE SkipTimer.fraction_changed TO Skip_r_hipRotInterp.set_fraction
#ROUTE SkipTimer.fraction_changed TO Skip_l_kneeRotInterp.set_fraction
#ROUTE SkipTimer.fraction_changed TO Skip_l_hipRotInterp.set_fraction

ROUTE Skip_r_kneeRotInterp.value_changed TO Toddler_r_knee.rotation
ROUTE Skip_r_hipRotInterp.value_changed TO Toddler_r_hip.rotation
#ROUTE Skip_l_kneeRotInterp.value_changed TO Toddler_l_knee.rotation
#ROUTE Skip_l_hipRotInterp.value_changed TO Toddler_l_hip.rotation
HUMANFOOTER
