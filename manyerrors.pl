#!/usr/bin/perl


$code = "";

while (<STDIN>) {
	$code .= $_;
	chomp;
	if ($_ =~ /^1 error/) {
		$code = "";
	} elsif ($_ =~ /^2 errors/) {
		$code = "";
	} elsif ($_ =~ /[0-9]+ errors/) {
		print STDOUT $code;
		$code = "";
	}
}
