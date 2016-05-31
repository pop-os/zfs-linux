#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x51198477, "module_layout" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0x25ec1b28, "strlen" },
	{ 0xab140103, "spl_kmem_alloc" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xbc32eee7, "spl_panic" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0xee8843fa, "nvpair_value_uint64" },
	{ 0x11089ac7, "_ctype" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0x9ca95a0e, "sort" },
	{ 0xd42a96fa, "nvpair_name" },
	{ 0x1bfac311, "nvlist_lookup_nvlist" },
	{ 0x5d6e0bba, "nvlist_lookup_uint64" },
	{ 0xd0920999, "nvpair_value_uint32" },
	{ 0x29c88b11, "nvlist_next_nvpair" },
	{ 0x82027a4c, "cmn_err" },
	{ 0x50720c5f, "snprintf" },
	{ 0xec1cce40, "nvlist_lookup_nvlist_array" },
	{ 0xa3a5be95, "memmove" },
	{ 0x80c3f220, "spl_kmem_free" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0xa66a6969, "nvpair_value_nvlist" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spl,znvpair";


MODULE_INFO(srcversion, "D94B05FC2B3769899B59647");
