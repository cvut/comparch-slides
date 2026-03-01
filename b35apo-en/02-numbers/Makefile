DOC_LANG?=cz
DOC = apo-lecture02-numbers-$(DOC_LANG)
DOC_LANG=en
NUM = 02

ifndef TOPDIR
TOPDIR := $(shell ( old_pwd="" ;  while [ ! -e _latex/Makefile.rules ] ; do if [ "$$old_pwd" = `pwd` ] ; then exit 1 ; else old_pwd=`pwd` ; cd -L .. 2>/dev/null ; fi ; done ; pwd ) )
endif

include $(TOPDIR)/_latex/Makefile.rules
