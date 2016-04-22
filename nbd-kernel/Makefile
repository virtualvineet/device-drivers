ifndef TOP_DIR
TOP_DIR=$(shell cd /root/Downloads/linux-3.18.1; pwd)
endif

LINUX_KERNEL_BUILD_DIR=$(TOP_DIR)

all: modules

clean modules modules_install:
	make INSTALL_PATH=$(TOP_DIR) INSTALL_MOD_PATH=$(TOP_DIR) -C $(LINUX_KERNEL_BUILD_DIR) M=`pwd` $@
