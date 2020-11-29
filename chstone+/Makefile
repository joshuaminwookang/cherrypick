#DIRS = adpcm aes blowfish dfadd dfdiv dfmul dfsin gsm jpeg mips motion sha
DIRS = adpcm aes dfadd dfdiv dfmul dfsin jpeg mips motion sha dhrystone qsort matrixmultiply

#include ../Makefile.config

all:
	for dir in $(DIRS); do make all -C $$dir; done

$(TARGETS):
	for dir in $(DIRS); do make $@ -C $$dir; done

backup:
	mkdir -p backup
	for dir in $(DIRS); do cp $$dir/*.v backup; done

.PHONY : backup
