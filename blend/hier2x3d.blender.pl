#!/bin/perl
use strict;
use warnings;

# Genrerate HAnim humanoid from hierarchy
# STDIN -- hierarchy file
# STDOUT -- python output

my %joints = ();
my $segments = "";

sub printPython {
	my($prev) = @_;  # $prev is $child
	$prev->{line} =~ /([ |]*)(.*) : (.*)/;
	my $parent_indent = length($1);
	my $parent_joint = $2;
	my $parent_segment = $3;
	if ($joints{$parent_joint}) {
		my $cenpj = $joints{$parent_joint};
		my @cenpj = split(/[ ,\t]+/, $cenpj);
		$cenpj = "$cenpj[0], $cenpj[2], $cenpj[1]";
		# print STDOUT " " x $prev->{indent}. '("'.$parent_joint.'", ('.$cenpj.'), (0, 0, 0)),'."\n";
		foreach my $jnt (@{$prev->{children}}) {   # go through child joints
			&printPython($jnt);
			#if ($jnt->{joint} =~ m/_tarsal_interphalangeal_1$/) { # we need to take this out
				# skip
				#} else {
				my $cencj = "0 0 0";
				if (!$joints{$jnt->{joint}}) {
					print STDERR "Using default value for child joint, $jnt->{joint},  center: $cencj\n";
				} else {
					$cencj = $joints{$jnt->{joint}};
				}
				$segments .= " " x $jnt->{indent}. '("'.$parent_joint.'", "'.$jnt->{joint}.'"),'."\n";
				# print STDERR $segments;
				# print STDERR $cencj."\n";
				my @cencj = split(/[ ,\t]+/, $cencj);
				$cencj = "$cencj[0], $cencj[2], $cencj[1]";
				print STDOUT " " x $jnt->{indent}. '("'.$jnt->{joint}.'", ('.$cencj.'), ('.$cenpj.')),'."\n";
				#}
		}
	}
}

sub readHierarchy {
	my $prev = {};
	$prev->{children} = ();
	$prev->{indent} = -1;
	foreach (<STDIN>) {
		my $line = $_;
		chomp $line;
		$line =~ /([ |]*)([^ \t]*)[ \t]*:[ \t]*([^ \t]*)/;
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
		if ($obj->{indent} > $prev->{indent}) {
			$obj->{parent} = $prev;
			# print "$obj->{joint} parent 1 is $prev->{joint}\n";
		} elsif ($obj->{indent} == $prev->{indent}) {

			$obj->{parent} = $prev->{parent};
			# print "$obj->{joint} parent 2 is $prev->{parent}->{joint}\n";
		} else {
			while ($obj->{indent} < $prev->{indent}) {
				$prev = $prev->{parent};
			}
			$obj->{parent} = $prev->{parent};
			# print "$obj->{joint} parent 3 is $prev->{joint}\n";
		}
		push @{$obj->{parent}->{children}}, $obj;
		$prev = $obj;
	}
	while (0 < $prev->{indent}) {
		$prev = $prev->{parent};
	}
	return $prev;
}

open(TABLE, "sh sed.sh|");

while(<TABLE>) {
	chomp;
	my $joint = $_;
	my $center = <TABLE>;
	chomp $center;
	$joints{$joint} = $center;
}

close(TABLE);

print STDOUT << "HUMANHEADER";
import bpy

# remove initial cube
objs = bpy.data.objects
objs.remove(objs["Cube"], do_unlink=True)

skeleton = bpy.data.objects.new("humanoid_root", bpy.data.armatures.new("Armature"))
bpy.context.collection.objects.link(skeleton)
bpy.context.view_layer.objects.active = skeleton
skeleton.select_set(True)
bpy.ops.object.mode_set(mode='EDIT')

# Create joints
joints = [
HUMANHEADER
my $prev = &readHierarchy();
$prev->{line} =~ /([ |]*)(.*) : (.*)/;
my $root_indent = length($1);
my $cenrj = $joints{$prev->{joint}};
if ($cenrj) {
	my @cenrj = split(/[ ,\t]+/, $cenrj);
	$cenrj = "$cenrj[0], $cenrj[2], $cenrj[1]";
	print STDOUT " " x $root_indent. '("'.$prev->{joint}.'", ('.$cenrj.'), (0, 0, 0)),'."\n";
}
&printPython($prev);
print STDOUT << "HUMANBODY";
]\n
for joint in joints:
    joint_name, joint_start, joint_end = joint
    bpy.ops.armature.bone_primitive_add(name=joint_name)
    new_segment = skeleton.data.edit_bones[joint_name]
    new_segment.head = joint_start
    new_segment.tail = joint_end

# Connect joints
segments = [
HUMANBODY
print STDOUT $segments;
print STDOUT << "HUMANFOOTER";
]

for segment in segments:
    parent_joint, child_joint = segment
    parent = skeleton.data.edit_bones[parent_joint]
    child = skeleton.data.edit_bones[child_joint]
    child.parent = parent

# Exit edit mode
bpy.ops.object.mode_set(mode='OBJECT')
bpy.ops.export_scene.x3dv(filepath="blenderSkeleton.json", export_format="JSON")
bpy.ops.export_scene.x3dv(filepath="blenderSkeleton.html", export_format="HTML")
bpy.ops.export_scene.x3dv(filepath="blenderSkeleton.x3d", export_format="X3D")
bpy.ops.export_scene.x3dv(filepath="blenderSkeleton.x3dv", export_format="X3DV")
HUMANFOOTER