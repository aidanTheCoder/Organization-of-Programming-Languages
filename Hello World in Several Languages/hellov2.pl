#!/usr/bin/perl

use strict;
use warnings;

sub hello {
    print("Hello " . $_[0] . "\n");
}

print("Hello Perl!\n");

while (<>) {
    my @words = split(/\s+/);
    foreach my $name (@words) {
        hello("$name");
    }
}
