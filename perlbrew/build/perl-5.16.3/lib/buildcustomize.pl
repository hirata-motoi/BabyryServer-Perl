#!perl

# We are miniperl, building extensions
# Reset @INC completely, adding the directories we need, and removing the
# installed directories (which we don't need to read, and may confuse us)
@INC = (q /home/babyry/perl5/perlbrew/build/perl-5.16.3/cpan/AutoLoader/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/dist/Carp/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/dist/Cwd ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/dist/Cwd/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/dist/ExtUtils-Command/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/dist/ExtUtils-Install/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/cpan/ExtUtils-MakeMaker/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/dist/ExtUtils-Manifest/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/cpan/File-Path/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/ext/re ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/dist/Term-ReadLine/lib ,
        q /home/babyry/perl5/perlbrew/build/perl-5.16.3/lib ,
        q . );
