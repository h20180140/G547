#!/bin/bash

obj-m += dht12_drv.o

KDIR := /lib/modules/4.14.34-v7+/build

PWD ?= $(shell pwd)

driver:
	make -C $(KDIR) M=$(PWD) modules

clean:
	rm -rf *.o *.ko *.order *.mod.c *.symvers
