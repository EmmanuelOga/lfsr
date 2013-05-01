require 'mkmf'

$CFLAGS += ' -O3'

dir_config('lfsr')
create_makefile('lfsr')
