#!/usr/bin/perl
use warnings;
use strict;
die "program x y density empty obstacle full" unless (scalar(@ARGV) == 6);
my ($x, $y, $density, $empty, $obstacle, $full) = @ARGV;
print "$y$empty$obstacle$full\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print $obstacle;
		} else {
			print $empty;
		}
	}
	print "\n";
}
