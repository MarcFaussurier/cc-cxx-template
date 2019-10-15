# default variables
include deps/ezbuild/ezbuild/header.mk

# here you can overide default values set inside header.mk
# mimal example:
NAME		:= libft.a
TYPE		:= static
DEBUG		:= 0

# default build rules
include deps/ezbuild/ezbuild/footer.mk
