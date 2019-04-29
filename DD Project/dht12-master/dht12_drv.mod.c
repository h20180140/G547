#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5634976f, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1ff6764e, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xbb81a6e5, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x21e48426, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x68700946, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xf8d06ff0, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcef500df, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:DHT12");

MODULE_INFO(srcversion, "E82C51DA7BC0152F77D7907");
