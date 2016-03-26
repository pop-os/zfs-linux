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
	{ 0x3a8fb147, "dmu_tx_hold_free" },
	{ 0x6b85513b, "dmu_objset_create" },
	{ 0x4d73bbca, "dmu_object_set_blocksize" },
	{ 0x26b64321, "call_usermodehelper_setfns" },
	{ 0xdb347c7a, "call_usermodehelper_exec" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0xbf479b07, "dmu_tx_abort" },
	{ 0x4ff1c9bc, "populate_rootfs_wait" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x67053080, "current_kernel_time" },
	{ 0x71642c98, "dmu_tx_wait" },
	{ 0xab140103, "spl_kmem_alloc" },
	{ 0xba2adaf, "mutex_unlock" },
	{ 0xd3b65d9d, "kthread_create_on_node" },
	{ 0xbc32eee7, "spl_panic" },
	{ 0x4040455, "dmu_tx_commit" },
	{ 0x6395be94, "__init_waitqueue_head" },
	{ 0x4f8b5ddb, "_copy_to_user" },
	{ 0x114258fb, "misc_register" },
	{ 0xde0bdcff, "memset" },
	{ 0x69371301, "current_task" },
	{ 0x87ebeb76, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x4ebec927, "kthread_stop" },
	{ 0x81034537, "dmu_objset_disown" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7ec9bfbc, "strncpy" },
	{ 0xb4390f9a, "mcount" },
	{ 0xafe1db9d, "mutex_lock" },
	{ 0x5bb6ad4b, "spl_vmem_zalloc" },
	{ 0x6357a5a8, "dmu_write" },
	{ 0x952664c5, "do_exit" },
	{ 0x7da403ec, "dsl_destroy_head" },
	{ 0x699a8466, "dmu_objset_own" },
	{ 0x8c51c50b, "dmu_object_free" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x252f790a, "dmu_object_alloc" },
	{ 0xdae80439, "spl_vmem_alloc" },
	{ 0xcfa37f55, "wake_up_process" },
	{ 0xcd992a36, "dmu_tx_create" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0xcf21d241, "__wake_up" },
	{ 0x659a64d0, "call_usermodehelper_setup" },
	{ 0x236c8c64, "memcpy" },
	{ 0x5c8b5ce8, "prepare_to_wait" },
	{ 0xfa66f77c, "finish_wait" },
	{ 0xf005a1c7, "dmu_tx_assign" },
	{ 0x50720c5f, "snprintf" },
	{ 0x80c3f220, "spl_kmem_free" },
	{ 0xe55595ee, "dmu_read" },
	{ 0x778a305, "spl_vmem_free" },
	{ 0x4f6b400b, "_copy_from_user" },
	{ 0x2482e688, "vsprintf" },
	{ 0xdfb0b5e5, "misc_deregister" },
	{ 0xa296a969, "dmu_tx_hold_write" },
	{ 0x9dcb88fc, "spl_kmem_zalloc" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=zfs,spl";


MODULE_INFO(srcversion, "6224A8554C1154556C8A26B");
