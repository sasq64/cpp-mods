ifeq ($(NETLINK_INCLUDED),)
NETLINK_INCLUDED = 1

THIS_DIR := $(dir $(lastword $(MAKEFILE_LIST)))
MODULES += $(THIS_DIR)
CFLAGS += -I$(THIS_DIR)

endif