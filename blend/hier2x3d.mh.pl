#!/bin/perl
use strict;
use warnings;

# Genrerate HAnim humanoid from hierarchy
# STDIN -- hierarchy file
# STDOUT -- python output

my %joints = ();
my $segments = "";

sub printSegment {
	my($jnt, $parent_joint, $parent_segment) = @_;
	my $cenpj = $joints{$parent_joint};
	my @cenpj = split(/[ ,\t]+/, $cenpj);
	my $cencj = "0 0 0";
	if (!$joints{$jnt->{joint}}) {
		print STDERR "Using default value for child joint, $jnt->{joint},  center: $cencj\n";
	} else {
		$cencj = $joints{$jnt->{joint}};
	}
	my @cencj = split(/[ ,\t]+/, $cencj);
	$segments .= " " x $jnt->{indent}. '"'.$jnt->{segment}.'": {'."\n";
	$segments .= '"head": {'."\n";
	$segments .= 	'"cube_name": "'.$parent_joint.'",'."\n";
	$segments .= 	'"default_position": ['."\n";
	$segments .= 		$cenpj[0].",\n";
	$segments .= 		$cenpj[2].",\n";
	$segments .= 		$cenpj[1]."\n";
	$segments .= 	'],'."\n";
	$segments .= 	'"strategy": "CUBE" '."\n";
	$segments .= '},'."\n";
	$segments .= '"parent": "'.$parent_segment.'",'."\n";
	$segments .= '"tail": {'."\n";
	$segments .= 	'"cube_name": "'.$jnt->{joint}.'",'."\n";
	$segments .= 	'"default_position": ['."\n";
	$segments .= 		$cencj[0].",\n";
	$segments .= 		$cencj[2].",\n";
	$segments .= 		$cencj[1]."\n";
	$segments .= 	'],'."\n";
	$segments .= '"strategy": "CUBE" '."\n";
	$segments .= '}'."\n";
	$segments .= '},'."\n";
}

sub printPython {
	my($prev) = @_;  # $prev is $child
	$prev->{line} =~ /([ |]*)(.*)[ \t]+:[ \t]+(.*)/;
	my $parent_indent = length($1);
	my $parent_joint = $2;
	my $parent_segment = $3;
	$parent_joint =~ s/\r//;
	$parent_segment =~ s/\r//;
	if ($joints{$parent_joint}) {
		foreach my $jnt (@{$prev->{children}}) {   # go through child joints
			#if ($jnt->{joint} =~ m/_tarsal_interphalangeal_1$/) { # we need to take this out
				# skip
			&printSegment($jnt, $parent_joint, $parent_segment);
			&printPython($jnt);
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
		$segment =~ s/\r//;
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

open(TABLE, "sh ./sed.sh|");

while(<TABLE>) {
	chomp;
	my $joint = $_;
	my $center = <TABLE>;
	chomp $center;
	$joints{$joint} = $center;
}

close(TABLE);

my $prev = &readHierarchy();

$prev->{line} =~ /([ |]*)(.*) : (.*)/;
my $root_indent = length($1);
my $parent_joint = $2;
my $parent_segment = $3;
$parent_joint =~ s/\r//;
$parent_segment =~ s/\r//;
# &printSegment($prev, $parent_joint, $parent_segment);
&printPython($prev);
print STDOUT "{\n$segments\n}\n";
