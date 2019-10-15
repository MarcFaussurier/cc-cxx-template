# C-CPP-starter

A basic repo I made so that I will spend less time in creating my next projects.

# Get started

git clone .... or download ad a .zip
then run ./install.sh to install deps

# Comands 
`
make:             Compile

make test:        Compile tests

watch-compile:    Will re-compile at each source code change

make watch-test:  Will re-compile and run your tests at each source code change

make clean:       remove .o and .d

make fclean       remove standalone compiled output (.out .a or .so)
`

# Fun makefile

`
# default variables
include deps/ezbuild/header.mk

# here you can overide default values set inside header.mk
# mimal example:
NAME		:= libft.a
TYPE		:= static
DEBUG		:= 0

# default build rules
include deps/ezbuild/footer.mk
`

