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
	{ 0x349cba85, "strchr" },
	{ 0x25ec1b28, "strlen" },
	{ 0xab140103, "spl_kmem_alloc" },
	{ 0xbc32eee7, "spl_panic" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xde0bdcff, "memset" },
	{ 0xb4390f9a, "mcount" },
	{ 0x85abc85f, "strncmp" },
	{ 0xdae80439, "spl_vmem_alloc" },
	{ 0x82fe53e1, "ddi_strtol" },
	{ 0xddd4a3d3, "xdrmem_create" },
	{ 0xa3a5be95, "memmove" },
	{ 0x80c3f220, "spl_kmem_free" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=spl";


MODULE_INFO(srcversion, "3BD67F56FE7BC46673DD6A6");
