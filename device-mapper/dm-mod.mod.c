#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0x531bf32a, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xffb9a1b2, __VMLINUX_SYMBOL_STR(blk_queue_merge_bvec) },
	{ 0x964b601a, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xd856350d, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x336909f6, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xfac74bc8, __VMLINUX_SYMBOL_STR(part_round_stats) },
	{ 0x1b15b2c1, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1b7d445e, __VMLINUX_SYMBOL_STR(blk_queue_bio) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xefdeab26, __VMLINUX_SYMBOL_STR(blk_delay_queue) },
	{ 0x637e2ee7, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x1d1c3c54, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x579eabae, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4cb99946, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xd0e0dea7, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x86f6b99d, __VMLINUX_SYMBOL_STR(synchronize_rcu_expedited) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x1948e65a, __VMLINUX_SYMBOL_STR(blk_integrity_is_initialized) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xe1aeb366, __VMLINUX_SYMBOL_STR(bdev_stack_limits) },
	{ 0xd75f42b2, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x86369dd9, __VMLINUX_SYMBOL_STR(bd_link_disk_holder) },
	{ 0x5cf8a882, __VMLINUX_SYMBOL_STR(__tracepoint_block_rq_remap) },
	{ 0x32bded08, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_remap) },
	{ 0xacb6f6df, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x7c309fa6, __VMLINUX_SYMBOL_STR(__srcu_read_unlock) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x3465fce6, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_complete) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x8b0e7032, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x95dd0e9c, __VMLINUX_SYMBOL_STR(bio_advance) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x48b6a6a6, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x9c898dc7, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x118a5e56, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x9d50d8fb, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x2e48ef00, __VMLINUX_SYMBOL_STR(lookup_bdev) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3608f183, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3c52e8fd, __VMLINUX_SYMBOL_STR(blk_insert_cloned_request) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x70881ea8, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x7f40d5b5, __VMLINUX_SYMBOL_STR(__blkdev_driver_ioctl) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa1272f18, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0xb341c77c, __VMLINUX_SYMBOL_STR(bd_unlink_disk_holder) },
	{ 0x7615e23c, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x614dabe, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x8304733a, __VMLINUX_SYMBOL_STR(blk_set_stacking_limits) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x36586807, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x6b50e47d, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x49d1b5, __VMLINUX_SYMBOL_STR(blk_lld_busy) },
	{ 0xab6a3a82, __VMLINUX_SYMBOL_STR(cleanup_srcu_struct) },
	{ 0x58bc984a, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x534fac7e, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x97856a99, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x7763a22b, __VMLINUX_SYMBOL_STR(blk_stack_limits) },
	{ 0xd4b08e54, __VMLINUX_SYMBOL_STR(wait_for_completion_io) },
	{ 0x26900276, __VMLINUX_SYMBOL_STR(blk_peek_request) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8ca04c3, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x93a6e0b2, __VMLINUX_SYMBOL_STR(io_schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec911f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x42513036, __VMLINUX_SYMBOL_STR(bio_get_nr_vecs) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0xd4150ae0, __VMLINUX_SYMBOL_STR(elv_register_queue) },
	{ 0x2a2f9d73, __VMLINUX_SYMBOL_STR(blk_integrity_compare) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x7e8ead85, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x9e22b815, __VMLINUX_SYMBOL_STR(thaw_bdev) },
	{ 0xd96a2de6, __VMLINUX_SYMBOL_STR(__srcu_read_lock) },
	{ 0x32a11b73, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0xfbfc3bc4, __VMLINUX_SYMBOL_STR(blkdev_get_by_dev) },
	{ 0xb74787a0, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x269aefd8, __VMLINUX_SYMBOL_STR(blk_update_request) },
	{ 0x680135f9, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x2dbfffd6, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2735ef9d, __VMLINUX_SYMBOL_STR(init_srcu_struct) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x872d8699, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x45e81512, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x5bb11e3f, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xfb73fb98, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x24e06417, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x7b1a0d05, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xdd1a84b0, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x639a2f17, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xed97890f, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x2f2f7bc0, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xb61a6596, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x8ce09fc2, __VMLINUX_SYMBOL_STR(bio_integrity_clone) },
	{ 0x88b5e634, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x27faaeff, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xa9009819, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0xdb5336a7, __VMLINUX_SYMBOL_STR(blk_queue_softirq_done) },
	{ 0xb9249d16, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x27c5dbfb, __VMLINUX_SYMBOL_STR(scsi_verify_blk_ioctl) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x84d74394, __VMLINUX_SYMBOL_STR(bio_integrity_trim) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xcb48e5f8, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x42e6e6bf, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1764977, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xaef2258, __VMLINUX_SYMBOL_STR(blk_integrity_unregister) },
	{ 0x381a8a2b, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xaed98884, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xbf82e6af, __VMLINUX_SYMBOL_STR(synchronize_srcu) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbe15d63e, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x30326f59, __VMLINUX_SYMBOL_STR(blk_rq_unprep_clone) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa0c69216, __VMLINUX_SYMBOL_STR(blk_run_queue_async) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x58f110d8, __VMLINUX_SYMBOL_STR(freeze_bdev) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x38af23d7, __VMLINUX_SYMBOL_STR(blk_limits_max_hw_sectors) },
	{ 0xc523cf47, __VMLINUX_SYMBOL_STR(blk_init_allocated_queue) },
	{ 0xd0a91bab, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xaecce4dd, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xd6f51163, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x6fd02b17, __VMLINUX_SYMBOL_STR(blk_rq_prep_clone) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x32611711, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x916419c7, __VMLINUX_SYMBOL_STR(blk_complete_request) },
	{ 0xb089d49, __VMLINUX_SYMBOL_STR(dm_kobject_release) },
	{ 0x53b04210, __VMLINUX_SYMBOL_STR(__bio_clone_fast) },
	{ 0x97661b, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x6603b148, __VMLINUX_SYMBOL_STR(blk_queue_lld_busy) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9e0c711d, __VMLINUX_SYMBOL_STR(vzalloc_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb238bd8e, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x5a3f5497, __VMLINUX_SYMBOL_STR(bioset_create_nobvec) },
	{ 0xdc62307e, __VMLINUX_SYMBOL_STR(zero_fill_bio) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb2c8749b, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x31e46cd8, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x6b02ac47, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x2f68b1d, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xf0ef5251, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x152e8a33, __VMLINUX_SYMBOL_STR(blk_start_request) },
	{ 0x7aec9089, __VMLINUX_SYMBOL_STR(clear_user) },
	{ 0x4d5b1c34, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x21c9f3d6, __VMLINUX_SYMBOL_STR(blk_integrity_register) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x5d1ab996, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "121D372E81103EF856A3788");
