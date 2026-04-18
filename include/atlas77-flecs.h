#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

    typedef uint8_t flecs_ecs_flags8_t;
    typedef uint16_t flecs_ecs_flags16_t;
    typedef uint32_t flecs_ecs_flags32_t;
    typedef uint64_t flecs_ecs_flags64_t;
    typedef int32_t flecs_ecs_size_t;
    typedef struct flecs_ecs_allocator_t flecs_ecs_allocator_t;
    typedef uint64_t flecs_ecs_id_t;
    typedef flecs_ecs_id_t flecs_ecs_entity_t;
    typedef struct
    {
        flecs_ecs_id_t *array;
        int32_t count;
    } flecs_ecs_type_t;
    typedef struct flecs_ecs_world_t flecs_ecs_world_t;
    typedef struct flecs_ecs_stage_t flecs_ecs_stage_t;
    typedef struct flecs_ecs_table_t flecs_ecs_table_t;
    typedef struct flecs_ecs_term_t flecs_ecs_term_t;
    typedef struct flecs_ecs_query_t flecs_ecs_query_t;
    typedef struct flecs_ecs_observer_t flecs_ecs_observer_t;
    typedef struct flecs_ecs_observable_t flecs_ecs_observable_t;
    typedef struct flecs_ecs_iter_t flecs_ecs_iter_t;
    typedef struct flecs_ecs_ref_t flecs_ecs_ref_t;
    typedef struct flecs_ecs_type_hooks_t flecs_ecs_type_hooks_t;
    typedef struct flecs_ecs_type_info_t flecs_ecs_type_info_t;
    typedef struct flecs_ecs_record_t flecs_ecs_record_t;
    typedef struct flecs_ecs_component_record_t flecs_ecs_component_record_t;
    typedef void flecs_ecs_poly_t;
    typedef struct flecs_ecs_mixins_t flecs_ecs_mixins_t;
    typedef struct flecs_ecs_header_t
    {
        int32_t type;
        int32_t refcount;
        flecs_ecs_mixins_t *mixins;
    } flecs_ecs_header_t;
    typedef struct flecs_ecs_table_record_t flecs_ecs_table_record_t;
    typedef struct flecs_ecs_vec_t
    {
        void *array;
        int32_t count;
        int32_t size;

    } flecs_ecs_vec_t;
    typedef struct flecs_ecs_sparse_page_t
    {
        int32_t *sparse;
        void *data;

    } flecs_ecs_sparse_page_t;
    typedef struct flecs_ecs_sparse_t
    {
        flecs_ecs_vec_t dense;

        flecs_ecs_vec_t pages;
        flecs_ecs_size_t size;
        int32_t count;
        uint64_t max_id;
        struct flecs_ecs_allocator_t *allocator;
        struct flecs_ecs_block_allocator_t *page_allocator;
    } flecs_ecs_sparse_t;
    typedef struct flecs_ecs_map_t flecs_ecs_map_t;
    typedef struct flecs_ecs_block_allocator_block_t
    {
        void *memory;
        struct flecs_ecs_block_allocator_block_t *next;
    } flecs_ecs_block_allocator_block_t;
    typedef struct flecs_ecs_block_allocator_chunk_header_t
    {
        struct flecs_ecs_block_allocator_chunk_header_t *next;
    } flecs_ecs_block_allocator_chunk_header_t;
    typedef struct flecs_ecs_block_allocator_t
    {
        int32_t data_size;

        int32_t chunk_size;
        int32_t chunks_per_block;
        int32_t block_size;
        flecs_ecs_block_allocator_chunk_header_t *head;
        flecs_ecs_block_allocator_block_t *block_head;

    } flecs_ecs_block_allocator_t;
    typedef struct flecs_ecs_stack_page_t
    {
        void *data;
        struct flecs_ecs_stack_page_t *next;
        int16_t sp;
        uint32_t id;
    } flecs_ecs_stack_page_t;
    typedef struct flecs_ecs_stack_cursor_t
    {
        struct flecs_ecs_stack_cursor_t *prev;
        struct flecs_ecs_stack_page_t *page;
        int16_t sp;
        _Bool is_free;

        struct flecs_ecs_stack_t *owner;

    } flecs_ecs_stack_cursor_t;
    typedef struct flecs_ecs_stack_t
    {
        flecs_ecs_stack_page_t *first;
        flecs_ecs_stack_page_t *tail_page;
        flecs_ecs_stack_cursor_t *tail_cursor;

        int32_t cursor_count;

    } flecs_ecs_stack_t;
    typedef uint64_t flecs_ecs_map_data_t;
    typedef flecs_ecs_map_data_t flecs_ecs_map_key_t;
    typedef flecs_ecs_map_data_t flecs_ecs_map_val_t;
    typedef struct flecs_ecs_bucket_entry_t
    {
        flecs_ecs_map_key_t key;
        flecs_ecs_map_val_t value;
        struct flecs_ecs_bucket_entry_t *next;
    } flecs_ecs_bucket_entry_t;
    typedef struct flecs_ecs_bucket_t
    {
        flecs_ecs_bucket_entry_t *first;
    } flecs_ecs_bucket_t;
    typedef struct flecs_ecs_map_iter_t
    {
        const flecs_ecs_map_t *map;
        flecs_ecs_bucket_t *bucket;
        flecs_ecs_bucket_entry_t *entry;
        flecs_ecs_map_data_t *res;

        int32_t change_count;

    } flecs_ecs_map_iter_t;
    typedef struct flecs_ecs_strbuf_list_elem
    {
        int32_t count;
        const char *separator;
    } flecs_ecs_strbuf_list_elem;
    typedef struct flecs_ecs_strbuf_t
    {
        char *content;
        flecs_ecs_size_t length;
        flecs_ecs_size_t size;

        flecs_ecs_strbuf_list_elem list_stack[(32)];
        int32_t list_sp;

        char small_string[(512)];
    } flecs_ecs_strbuf_t;
    typedef struct flecs_ecs_time_t
    {
        uint32_t sec;
        uint32_t nanosec;
    } flecs_ecs_time_t;
    typedef uintptr_t flecs_ecs_os_thread_t;
    typedef uintptr_t flecs_ecs_os_cond_t;
    typedef uintptr_t flecs_ecs_os_mutex_t;
    typedef uintptr_t flecs_ecs_os_dl_t;
    typedef uintptr_t flecs_ecs_os_sock_t;
    typedef uint64_t flecs_ecs_os_thread_id_t;
    typedef void (*flecs_ecs_os_proc_t)(void);
    typedef void (*flecs_ecs_os_api_init_t)(void);
    typedef void (*flecs_ecs_os_api_fini_t)(void);
    typedef void *(*flecs_ecs_os_api_malloc_t)(
        flecs_ecs_size_t size);
    typedef void (*flecs_ecs_os_api_free_t)(
        void *ptr);
    typedef void *(*flecs_ecs_os_api_realloc_t)(
        void *ptr,
        flecs_ecs_size_t size);
    typedef void *(*flecs_ecs_os_api_calloc_t)(
        flecs_ecs_size_t size);
    typedef char *(*flecs_ecs_os_api_strdup_t)(
        const char *str);
    typedef void *(*flecs_ecs_os_thread_callback_t)(
        void *);
    typedef flecs_ecs_os_thread_t (*flecs_ecs_os_api_thread_new_t)(
        flecs_ecs_os_thread_callback_t callback,
        void *param);
    typedef void *(*flecs_ecs_os_api_thread_join_t)(
        flecs_ecs_os_thread_t thread);
    typedef flecs_ecs_os_thread_id_t (*flecs_ecs_os_api_thread_self_t)(void);
    typedef flecs_ecs_os_thread_t (*flecs_ecs_os_api_task_new_t)(
        flecs_ecs_os_thread_callback_t callback,
        void *param);
    typedef void *(*flecs_ecs_os_api_task_join_t)(
        flecs_ecs_os_thread_t thread);
    typedef int32_t (*flecs_ecs_os_api_ainc_t)(
        int32_t *value);
    typedef int64_t (*flecs_ecs_os_api_lainc_t)(
        int64_t *value);
    typedef flecs_ecs_os_mutex_t (*flecs_ecs_os_api_mutex_new_t)(
        void);
    typedef void (*flecs_ecs_os_api_mutex_lock_t)(
        flecs_ecs_os_mutex_t mutex);
    typedef void (*flecs_ecs_os_api_mutex_unlock_t)(
        flecs_ecs_os_mutex_t mutex);
    typedef void (*flecs_ecs_os_api_mutex_free_t)(
        flecs_ecs_os_mutex_t mutex);
    typedef flecs_ecs_os_cond_t (*flecs_ecs_os_api_cond_new_t)(
        void);
    typedef void (*flecs_ecs_os_api_cond_free_t)(
        flecs_ecs_os_cond_t cond);
    typedef void (*flecs_ecs_os_api_cond_signal_t)(
        flecs_ecs_os_cond_t cond);
    typedef void (*flecs_ecs_os_api_cond_broadcast_t)(
        flecs_ecs_os_cond_t cond);
    typedef void (*flecs_ecs_os_api_cond_wait_t)(
        flecs_ecs_os_cond_t cond,
        flecs_ecs_os_mutex_t mutex);
    typedef void (*flecs_ecs_os_api_sleep_t)(
        int32_t sec,
        int32_t nanosec);
    typedef void (*flecs_ecs_os_api_enable_high_timer_resolution_t)(
        _Bool enable);
    typedef void (*flecs_ecs_os_api_get_time_t)(
        flecs_ecs_time_t *time_out);
    typedef uint64_t (*flecs_ecs_os_api_now_t)(void);
    typedef void (*flecs_ecs_os_api_log_t)(
        int32_t level,
        const char *file,
        int32_t line,
        const char *msg);
    typedef void (*flecs_ecs_os_api_abort_t)(
        void);
    typedef flecs_ecs_os_dl_t (*flecs_ecs_os_api_dlopen_t)(
        const char *libname);
    typedef flecs_ecs_os_proc_t (*flecs_ecs_os_api_dlproc_t)(
        flecs_ecs_os_dl_t lib,
        const char *procname);
    typedef void (*flecs_ecs_os_api_dlclose_t)(
        flecs_ecs_os_dl_t lib);
    typedef char *(*flecs_ecs_os_api_module_to_path_t)(
        const char *module_id);
    typedef void (*flecs_ecs_os_api_perf_trace_t)(
        const char *filename,
        size_t line,
        const char *name);
    typedef struct flecs_ecs_os_api_t
    {

        flecs_ecs_os_api_init_t init_;
        flecs_ecs_os_api_fini_t fini_;

        flecs_ecs_os_api_malloc_t malloc_;
        flecs_ecs_os_api_realloc_t realloc_;
        flecs_ecs_os_api_calloc_t calloc_;
        flecs_ecs_os_api_free_t free_;

        flecs_ecs_os_api_strdup_t strdup_;

        flecs_ecs_os_api_thread_new_t thread_new_;
        flecs_ecs_os_api_thread_join_t thread_join_;
        flecs_ecs_os_api_thread_self_t thread_self_;

        flecs_ecs_os_api_thread_new_t task_new_;
        flecs_ecs_os_api_thread_join_t task_join_;

        flecs_ecs_os_api_ainc_t ainc_;
        flecs_ecs_os_api_ainc_t adec_;
        flecs_ecs_os_api_lainc_t lainc_;
        flecs_ecs_os_api_lainc_t ladec_;

        flecs_ecs_os_api_mutex_new_t mutex_new_;
        flecs_ecs_os_api_mutex_free_t mutex_free_;
        flecs_ecs_os_api_mutex_lock_t mutex_lock_;
        flecs_ecs_os_api_mutex_lock_t mutex_unlock_;

        flecs_ecs_os_api_cond_new_t cond_new_;
        flecs_ecs_os_api_cond_free_t cond_free_;
        flecs_ecs_os_api_cond_signal_t cond_signal_;
        flecs_ecs_os_api_cond_broadcast_t cond_broadcast_;
        flecs_ecs_os_api_cond_wait_t cond_wait_;

        flecs_ecs_os_api_sleep_t sleep_;
        flecs_ecs_os_api_now_t now_;
        flecs_ecs_os_api_get_time_t get_time_;

        flecs_ecs_os_api_log_t log_;
# 3798 "C:\\Users\\JHGip\\Documents\\Project\\chimera-engine\\include\\flecs.h"
        flecs_ecs_os_api_abort_t abort_;

        flecs_ecs_os_api_dlopen_t dlopen_;
        flecs_ecs_os_api_dlproc_t dlproc_;
        flecs_ecs_os_api_dlclose_t dlclose_;

        flecs_ecs_os_api_module_to_path_t module_to_dl_;

        flecs_ecs_os_api_module_to_path_t module_to_etc_;

        flecs_ecs_os_api_perf_trace_t perf_trace_push_;
        flecs_ecs_os_api_perf_trace_t perf_trace_pop_;

        int32_t log_level_;
        int32_t log_indent_;
        int32_t log_last_error_;
        int64_t log_last_timestamp_;

        flecs_ecs_flags32_t flags_;

        void *log_out_;

    } flecs_ecs_os_api_t;
    typedef void (*flecs_ecs_run_action_t)(
        flecs_ecs_iter_t *it);
    typedef void (*flecs_ecs_iter_action_t)(
        flecs_ecs_iter_t *it);
    typedef _Bool (*flecs_ecs_iter_next_action_t)(
        flecs_ecs_iter_t *it);
    typedef void (*flecs_ecs_iter_fini_action_t)(
        flecs_ecs_iter_t *it);
    typedef int (*flecs_ecs_order_by_action_t)(
        flecs_ecs_entity_t e1,
        const void *ptr1,
        flecs_ecs_entity_t e2,
        const void *ptr2);
    typedef void (*flecs_ecs_sort_table_action_t)(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table,
        flecs_ecs_entity_t *entities,
        void *ptr,
        int32_t size,
        int32_t lo,
        int32_t hi,
        flecs_ecs_order_by_action_t order_by);
    typedef uint64_t (*flecs_ecs_group_by_action_t)(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table,
        flecs_ecs_id_t group_id,
        void *ctx);
    typedef void *(*flecs_ecs_group_create_action_t)(
        flecs_ecs_world_t *world,
        uint64_t group_id,
        void *group_by_ctx);
    typedef void (*flecs_ecs_group_delete_action_t)(
        flecs_ecs_world_t *world,
        uint64_t group_id,
        void *group_ctx,
        void *group_by_ctx);
    typedef void (*flecs_ecs_module_action_t)(
        flecs_ecs_world_t *world);
    typedef void (*flecs_ecs_fini_action_t)(
        flecs_ecs_world_t *world,
        void *ctx);
    typedef void (*flecs_ecs_ctx_free_t)(
        void *ctx);
    typedef int (*flecs_ecs_compare_action_t)(
        const void *ptr1,
        const void *ptr2);
    typedef uint64_t (*flecs_ecs_hash_value_action_t)(
        const void *ptr);
    typedef void (*flecs_ecs_xtor_t)(
        void *ptr,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    typedef void (*flecs_ecs_copy_t)(
        void *dst_ptr,
        const void *src_ptr,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    typedef void (*flecs_ecs_move_t)(
        void *dst_ptr,
        void *src_ptr,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    typedef int (*flecs_ecs_cmp_t)(
        const void *a_ptr,
        const void *b_ptr,
        const flecs_ecs_type_info_t *type_info);
    typedef _Bool (*flecs_ecs_equals_t)(
        const void *a_ptr,
        const void *b_ptr,
        const flecs_ecs_type_info_t *type_info);
    typedef void (*flecs_poly_dtor_t)(
        flecs_ecs_poly_t *poly);
    typedef enum flecs_ecs_inout_kind_t
    {
        flecs_EcsInOutDefault,
        flecs_EcsInOutNone,
        flecs_EcsInOutFilter,
        flecs_EcsInOut,
        flecs_EcsIn,
        flecs_EcsOut,
    } flecs_ecs_inout_kind_t;
    typedef enum flecs_ecs_oper_kind_t
    {
        flecs_EcsAnd,
        flecs_EcsOr,
        flecs_EcsNot,
        flecs_EcsOptional,
        flecs_EcsAndFrom,
        flecs_EcsOrFrom,
        flecs_EcsNotFrom,
    } flecs_ecs_oper_kind_t;
    typedef enum flecs_ecs_query_cache_kind_t
    {
        flecs_EcsQueryCacheDefault,
        flecs_EcsQueryCacheAuto,
        flecs_EcsQueryCacheAll,
        flecs_EcsQueryCacheNone,
    } flecs_ecs_query_cache_kind_t;
    typedef struct flecs_ecs_term_ref_t
    {
        flecs_ecs_entity_t id;

        const char *name;

    } flecs_ecs_term_ref_t;
    typedef struct flecs_ecs_data_t flecs_ecs_data_t;
    typedef struct flecs_ecs_query_cache_match_t flecs_ecs_query_cache_match_t;
    typedef struct flecs_ecs_query_cache_group_t flecs_ecs_query_cache_group_t;
    typedef struct flecs_ecs_event_record_t
    {
        struct flecs_ecs_event_id_record_t *any;
        struct flecs_ecs_event_id_record_t *wildcard;
        struct flecs_ecs_event_id_record_t *wildcard_pair;
        flecs_ecs_map_t event_ids;
        flecs_ecs_entity_t event;
    } flecs_ecs_event_record_t;
    typedef struct flecs_ecs_table_range_t
    {
        flecs_ecs_table_t *table;
        int32_t offset;
        int32_t count;
    } flecs_ecs_table_range_t;
    typedef struct flecs_ecs_var_t
    {
        flecs_ecs_table_range_t range;
        flecs_ecs_entity_t entity;

    } flecs_ecs_var_t;
    typedef struct flecs_ecs_page_iter_t
    {
        int32_t offset;
        int32_t limit;
        int32_t remaining;
    } flecs_ecs_page_iter_t;
    typedef struct flecs_ecs_worker_iter_t
    {
        int32_t index;
        int32_t count;
    } flecs_ecs_worker_iter_t;
    typedef struct flecs_ecs_table_cache_iter_t
    {
        const struct flecs_ecs_table_cache_hdr_t *cur, *next;
        _Bool iter_fill;
        _Bool iter_empty;
    } flecs_ecs_table_cache_iter_t;
    typedef struct flecs_ecs_each_iter_t
    {
        flecs_ecs_table_cache_iter_t it;

        flecs_ecs_id_t ids;
        flecs_ecs_entity_t sources;
        flecs_ecs_size_t sizes;
        int32_t columns;
        const flecs_ecs_table_record_t *trs;
    } flecs_ecs_each_iter_t;
    typedef struct flecs_ecs_query_op_profile_t
    {
        int32_t count[2];
    } flecs_ecs_query_op_profile_t;
    typedef struct flecs_ecs_query_iter_t
    {
        struct flecs_ecs_var_t *vars;
        const struct flecs_ecs_query_var_t *query_vars;
        const struct flecs_ecs_query_op_t *ops;
        struct flecs_ecs_query_op_ctx_t *op_ctx;
        uint64_t *written;

        flecs_ecs_query_cache_group_t *group;
        flecs_ecs_vec_t *tables;
        flecs_ecs_vec_t *all_tables;
        flecs_ecs_query_cache_match_t *elem;
        int32_t cur, all_cur;

        flecs_ecs_query_op_profile_t *profile;

        int16_t op;
        _Bool iter_single_group;
    } flecs_ecs_query_iter_t;
    typedef struct flecs_ecs_iter_private_t
    {
        union
        {
            flecs_ecs_query_iter_t query;
            flecs_ecs_page_iter_t page;
            flecs_ecs_worker_iter_t worker;
            flecs_ecs_each_iter_t each;
        } iter;

        void *entity_iter;
        flecs_ecs_stack_cursor_t *stack_cursor;
    } flecs_ecs_iter_private_t;
    typedef struct flecs_ecs_commands_t
    {
        flecs_ecs_vec_t queue;
        flecs_ecs_stack_t stack;
        flecs_ecs_sparse_t entries;
    } flecs_ecs_commands_t;
    typedef struct flecs_ecs_suspend_readonly_state_t
    {
        _Bool is_readonly;
        _Bool is_deferred;
        _Bool cmd_flushing;
        int32_t defer_count;
        flecs_ecs_entity_t scope;
        flecs_ecs_entity_t with;
        flecs_ecs_commands_t cmd_stack[2];
        flecs_ecs_commands_t *cmd;
        flecs_ecs_stage_t *stage;
    } flecs_ecs_suspend_readonly_state_t;
    typedef struct
    {
        flecs_ecs_vec_t keys;
        flecs_ecs_vec_t values;
    } flecs_ecs_hm_bucket_t;
    typedef struct
    {
        flecs_ecs_hash_value_action_t hash;
        flecs_ecs_compare_action_t compare;
        flecs_ecs_size_t key_size;
        flecs_ecs_size_t value_size;
        flecs_ecs_map_t impl;
    } flecs_ecs_hashmap_t;
    typedef struct
    {
        flecs_ecs_map_iter_t it;
        flecs_ecs_hm_bucket_t *bucket;
        int32_t index;
    } flecs_hashmap_iter_t;
    typedef struct
    {
        void *key;
        void *value;
        uint64_t hash;
    } flecs_hashmap_result_t;
    typedef struct flecs_ecs_table_cache_hdr_t
    {
        struct flecs_ecs_component_record_t *cr;
        flecs_ecs_table_t *table;
        struct flecs_ecs_table_cache_hdr_t *prev, *next;
    } flecs_ecs_table_cache_hdr_t;
    typedef struct flecs_ecs_table_diff_t
    {
        flecs_ecs_type_t added;
        flecs_ecs_type_t removed;
        flecs_ecs_flags32_t added_flags;
        flecs_ecs_flags32_t removed_flags;
    } flecs_ecs_table_diff_t;
    typedef struct flecs_ecs_parent_record_t
    {
        uint32_t entity;
        int32_t count;
    } flecs_ecs_parent_record_t;
    typedef struct flecs_ecs_table_records_t
    {
        const flecs_ecs_table_record_t *array;
        int32_t count;
    } flecs_ecs_table_records_t;
    typedef struct flecs_ecs_value_t
    {
        flecs_ecs_entity_t type;
        void *ptr;
    } flecs_ecs_value_t;
    typedef struct flecs_ecs_entity_desc_t
    {
        int32_t _canary;

        flecs_ecs_entity_t id;

        flecs_ecs_entity_t parent;

        const char *name;

        const char *sep;

        const char *root_sep;

        const char *symbol;
# 6058 "C:\\Users\\JHGip\\Documents\\Project\\chimera-engine\\include\\flecs.h"
        _Bool use_low_id;

        const flecs_ecs_id_t *add;

        const flecs_ecs_value_t *set;

        const char *add_expr;
    } flecs_ecs_entity_desc_t;
    typedef struct flecs_ecs_bulk_desc_t
    {
        int32_t _canary;

        flecs_ecs_entity_t *entities;

        int32_t count;

        flecs_ecs_id_t ids[32];

        void **data;

        flecs_ecs_table_t *table;

    } flecs_ecs_bulk_desc_t;
    typedef struct flecs_ecs_component_desc_t
    {
        int32_t _canary;

        flecs_ecs_entity_t entity;

        flecs_ecs_type_info_t type;
    } flecs_ecs_component_desc_t;
    typedef struct flecs_ecs_query_desc_t
    {

        int32_t _canary;

        flecs_ecs_term_t terms[32];

        const char *expr;

        flecs_ecs_query_cache_kind_t cache_kind;

        flecs_ecs_flags32_t flags;

        flecs_ecs_order_by_action_t order_by_callback;

        flecs_ecs_sort_table_action_t order_by_table_callback;

        flecs_ecs_entity_t order_by;

        flecs_ecs_id_t group_by;

        flecs_ecs_group_by_action_t group_by_callback;

        flecs_ecs_group_create_action_t on_group_create;

        flecs_ecs_group_delete_action_t on_group_delete;

        void *group_by_ctx;

        flecs_ecs_ctx_free_t group_by_ctx_free;

        void *ctx;

        void *binding_ctx;

        flecs_ecs_ctx_free_t ctx_free;

        flecs_ecs_ctx_free_t binding_ctx_free;

        flecs_ecs_entity_t entity;
    } flecs_ecs_query_desc_t;
    typedef struct flecs_ecs_observer_desc_t
    {

        int32_t _canary;

        flecs_ecs_entity_t entity;

        flecs_ecs_query_desc_t query;

        flecs_ecs_entity_t events[8];

        _Bool yield_existing;

        _Bool global_observer;

        flecs_ecs_iter_action_t callback;

        flecs_ecs_run_action_t run;

        void *ctx;

        flecs_ecs_ctx_free_t ctx_free;

        void *callback_ctx;

        flecs_ecs_ctx_free_t callback_ctx_free;

        void *run_ctx;

        flecs_ecs_ctx_free_t run_ctx_free;

        int32_t *last_event_id;
        int8_t term_index_;
        flecs_ecs_flags32_t flags_;
    } flecs_ecs_observer_desc_t;
    typedef struct flecs_ecs_event_desc_t
    {

        flecs_ecs_entity_t event;

        const flecs_ecs_type_t *ids;

        flecs_ecs_table_t *table;

        flecs_ecs_table_t *other_table;

        int32_t offset;

        int32_t count;

        flecs_ecs_entity_t entity;

        void *param;

        const void *const_param;

        flecs_ecs_poly_t *observable;

        flecs_ecs_flags32_t flags;
    } flecs_ecs_event_desc_t;
    typedef struct flecs_ecs_build_info_t
    {
        const char *compiler;
        const char **addons;
        const char **flags;
        const char *version;
        int16_t version_major;
        int16_t version_minor;
        int16_t version_patch;
        _Bool debug;
        _Bool sanitize;
        _Bool perf_trace;
    } flecs_ecs_build_info_t;
    typedef struct flecs_ecs_world_info_t
    {
        flecs_ecs_entity_t last_component_id;

        float delta_time_raw;
        float delta_time;
        float time_scale;
        float target_fps;
        float frame_time_total;
        float system_time_total;
        float emit_time_total;
        float merge_time_total;
        float rematch_time_total;
        double world_time_total;
        double world_time_total_raw;

        int64_t frame_count_total;
        int64_t merge_count_total;
        int64_t eval_comp_monitors_total;
        int64_t rematch_count_total;

        int64_t id_create_total;
        int64_t id_delete_total;
        int64_t table_create_total;
        int64_t table_delete_total;
        int64_t pipeline_build_count_total;
        int64_t systems_ran_total;
        int64_t observers_ran_total;
        int64_t queries_ran_total;

        int32_t tag_id_count;
        int32_t component_id_count;
        int32_t pair_id_count;

        int32_t table_count;

        uint32_t creation_time;

        struct
        {
            int64_t add_count;
            int64_t remove_count;
            int64_t delete_count;
            int64_t clear_count;
            int64_t set_count;
            int64_t ensure_count;
            int64_t modified_count;
            int64_t discard_count;
            int64_t event_count;
            int64_t other_count;
            int64_t batched_entity_count;
            int64_t batched_command_count;
        } cmd;

        const char *name_prefix;

    } flecs_ecs_world_info_t;
    typedef struct flecs_ecs_query_group_info_t
    {
        uint64_t id;
        int32_t match_count;
        int32_t table_count;
        void *ctx;
    } flecs_ecs_query_group_info_t;
    typedef struct flecs_ecs_entity_range_t
    {
        uint32_t min;
        uint32_t max;
        uint32_t cur;
        flecs_ecs_vec_t recycled;
    } flecs_ecs_entity_range_t;
    typedef struct flecs_EcsIdentifier
    {
        char *value;
        flecs_ecs_size_t length;
        uint64_t hash;
        uint64_t index_hash;
        flecs_ecs_hashmap_t *index;
    } flecs_EcsIdentifier;
    typedef struct flecs_EcsComponent
    {
        flecs_ecs_size_t size;
        flecs_ecs_size_t alignment;
    } flecs_EcsComponent;
    typedef struct flecs_EcsPoly
    {
        flecs_ecs_poly_t *poly;
    } flecs_EcsPoly;
    typedef struct flecs_EcsDefaultChildComponent
    {
        flecs_ecs_id_t component;
    } flecs_EcsDefaultChildComponent;
    typedef struct flecs_EcsParent
    {
        flecs_ecs_entity_t value;
    } flecs_EcsParent;
    typedef struct
    {
        const char *child_name;
        flecs_ecs_table_t *table;
        uint32_t child;
        int32_t parent_index;
    } flecs_ecs_tree_spawner_child_t;
    typedef struct
    {
        flecs_ecs_vec_t children;
    } flecs_ecs_tree_spawner_t;
    typedef struct flecs_EcsTreeSpawner
    {
        flecs_ecs_tree_spawner_t data[(6)];
    } flecs_EcsTreeSpawner;
    typedef struct flecs_ecs_entities_t
    {
        const flecs_ecs_entity_t *ids;
        int32_t count;
        int32_t alive_count;
    } flecs_ecs_entities_t;
    typedef struct flecs_ecs_delete_empty_tables_desc_t
    {

        uint16_t clear_generation;

        uint16_t delete_generation;

        double time_budget_seconds;

        int32_t offset;
    } flecs_ecs_delete_empty_tables_desc_t;
    typedef struct flecs_ecs_query_count_t
    {
        int32_t results;
        int32_t entities;
        int32_t tables;

    } flecs_ecs_query_count_t;
    typedef int (*flecs_ecs_app_init_action_t)(
        flecs_ecs_world_t *world);
    typedef struct flecs_ecs_app_desc_t
    {
        float target_fps;
        float delta_time;
        int32_t threads;
        int32_t frames;
        _Bool enable_rest;
        _Bool enable_stats;
        uint16_t port;

        flecs_ecs_app_init_action_t init;

        void *ctx;
    } flecs_ecs_app_desc_t;
    typedef int (*flecs_ecs_app_run_action_t)(
        flecs_ecs_world_t *world,
        flecs_ecs_app_desc_t *desc);
    typedef int (*flecs_ecs_app_frame_action_t)(
        flecs_ecs_world_t *world,
        const flecs_ecs_app_desc_t *desc);
    typedef struct flecs_ecs_http_server_t flecs_ecs_http_server_t;
    typedef struct
    {
        uint64_t id;
        flecs_ecs_http_server_t *server;

        char host[128];
        char port[16];
    } flecs_ecs_http_connection_t;
    typedef struct
    {
        const char *key;
        const char *value;
    } flecs_ecs_http_key_value_t;
    typedef enum
    {
        flecs_EcsHttpGet,
        flecs_EcsHttpPost,
        flecs_EcsHttpPut,
        flecs_EcsHttpDelete,
        flecs_EcsHttpOptions,
        flecs_EcsHttpMethodUnsupported
    } flecs_ecs_http_method_t;
    typedef struct
    {
        uint64_t id;

        flecs_ecs_http_method_t method;
        char *path;
        char *body;
        flecs_ecs_http_key_value_t headers[(32)];
        flecs_ecs_http_key_value_t params[(32)];
        int32_t header_count;
        int32_t param_count;

        flecs_ecs_http_connection_t *conn;
    } flecs_ecs_http_request_t;
    typedef struct
    {
        int code;
        flecs_ecs_strbuf_t body;
        const char *status;
        const char *content_type;
        flecs_ecs_strbuf_t headers;
    } flecs_ecs_http_reply_t;
    typedef _Bool (*flecs_ecs_http_reply_action_t)(
        const flecs_ecs_http_request_t *request,
        flecs_ecs_http_reply_t *reply,
        void *ctx);
    typedef struct
    {
        flecs_ecs_http_reply_action_t callback;
        void *ctx;
        uint16_t port;
        const char *ipaddr;
        int32_t send_queue_wait_ms;
        double cache_timeout;
        double cache_purge_timeout;
    } flecs_ecs_http_server_desc_t;
    typedef struct
    {
        flecs_ecs_world_t *world;
        flecs_ecs_http_server_t *srv;
        int32_t rc;
        flecs_ecs_map_t cmd_captures;
        double last_time;
    } flecs_ecs_rest_ctx_t;
    typedef struct
    {
        uint16_t port;
        char *ipaddr;
        flecs_ecs_rest_ctx_t *impl;
    } flecs_EcsRest;
    typedef struct flecs_EcsTimer
    {
        float timeout;
        float time;
        float overshoot;
        int32_t fired_count;
        _Bool active;
        _Bool single_shot;
    } flecs_EcsTimer;
    typedef struct flecs_EcsRateFilter
    {
        flecs_ecs_entity_t src;
        int32_t rate;
        int32_t tick_count;
        float time_elapsed;
    } flecs_EcsRateFilter;
    typedef struct flecs_ecs_pipeline_desc_t
    {

        flecs_ecs_entity_t entity;
# 14318 "C:\\Users\\JHGip\\Documents\\Project\\chimera-engine\\include\\flecs.h"
        flecs_ecs_query_desc_t query;
    } flecs_ecs_pipeline_desc_t;
    typedef struct flecs_EcsTickSource
    {
        _Bool tick;
        float time_elapsed;
    } flecs_EcsTickSource;
    typedef struct flecs_ecs_system_desc_t
    {
        int32_t _canary;

        flecs_ecs_entity_t entity;

        flecs_ecs_query_desc_t query;

        flecs_ecs_entity_t phase;

        flecs_ecs_iter_action_t callback;
# 14567 "C:\\Users\\JHGip\\Documents\\Project\\chimera-engine\\include\\flecs.h"
        flecs_ecs_run_action_t run;

        void *ctx;

        flecs_ecs_ctx_free_t ctx_free;

        void *callback_ctx;

        flecs_ecs_ctx_free_t callback_ctx_free;

        void *run_ctx;

        flecs_ecs_ctx_free_t run_ctx_free;

        float interval;

        int32_t rate;

        flecs_ecs_entity_t tick_source;

        _Bool multi_threaded;

        _Bool immediate;
    } flecs_ecs_system_desc_t;
    typedef struct flecs_ecs_system_t
    {
        flecs_ecs_header_t hdr;

        flecs_ecs_run_action_t run;

        flecs_ecs_iter_action_t action;

        flecs_ecs_query_t *query;

        uint64_t group_id;

        _Bool group_id_set;

        flecs_ecs_entity_t tick_source;

        _Bool multi_threaded;

        _Bool immediate;

        const char *name;

        void *ctx;

        void *callback_ctx;

        void *run_ctx;

        flecs_ecs_ctx_free_t ctx_free;

        flecs_ecs_ctx_free_t callback_ctx_free;

        flecs_ecs_ctx_free_t run_ctx_free;

        float time_spent;

        float time_passed;

        int64_t last_frame;

        flecs_poly_dtor_t dtor;
    } flecs_ecs_system_t;
    typedef struct flecs_ecs_gauge_t
    {
        float avg[(60)];
        float min[(60)];
        float max[(60)];
    } flecs_ecs_gauge_t;
    typedef struct flecs_ecs_counter_t
    {
        flecs_ecs_gauge_t rate;
        double value[(60)];
    } flecs_ecs_counter_t;
    typedef union flecs_ecs_metric_t
    {
        flecs_ecs_gauge_t gauge;
        flecs_ecs_counter_t counter;
    } flecs_ecs_metric_t;
    typedef struct flecs_ecs_world_stats_t
    {
        int64_t first_;

        struct
        {
            flecs_ecs_metric_t count;
            flecs_ecs_metric_t not_alive_count;
        } entities;

        struct
        {
            flecs_ecs_metric_t tag_count;
            flecs_ecs_metric_t component_count;
            flecs_ecs_metric_t pair_count;
            flecs_ecs_metric_t type_count;
            flecs_ecs_metric_t create_count;
            flecs_ecs_metric_t delete_count;
        } components;

        struct
        {
            flecs_ecs_metric_t count;
            flecs_ecs_metric_t empty_count;
            flecs_ecs_metric_t create_count;
            flecs_ecs_metric_t delete_count;
        } tables;

        struct
        {
            flecs_ecs_metric_t query_count;
            flecs_ecs_metric_t observer_count;
            flecs_ecs_metric_t system_count;
        } queries;

        struct
        {
            flecs_ecs_metric_t add_count;
            flecs_ecs_metric_t remove_count;
            flecs_ecs_metric_t delete_count;
            flecs_ecs_metric_t clear_count;
            flecs_ecs_metric_t set_count;
            flecs_ecs_metric_t ensure_count;
            flecs_ecs_metric_t modified_count;
            flecs_ecs_metric_t other_count;
            flecs_ecs_metric_t discard_count;
            flecs_ecs_metric_t batched_entity_count;
            flecs_ecs_metric_t batched_count;
        } commands;

        struct
        {
            flecs_ecs_metric_t frame_count;
            flecs_ecs_metric_t merge_count;
            flecs_ecs_metric_t rematch_count;
            flecs_ecs_metric_t pipeline_build_count;
            flecs_ecs_metric_t systems_ran;
            flecs_ecs_metric_t observers_ran;
            flecs_ecs_metric_t event_emit_count;
        } frame;

        struct
        {
            flecs_ecs_metric_t world_time_raw;
            flecs_ecs_metric_t world_time;
            flecs_ecs_metric_t frame_time;
            flecs_ecs_metric_t system_time;
            flecs_ecs_metric_t emit_time;
            flecs_ecs_metric_t merge_time;
            flecs_ecs_metric_t rematch_time;
            flecs_ecs_metric_t fps;
            flecs_ecs_metric_t delta_time;
        } performance;

        struct
        {

            flecs_ecs_metric_t alloc_count;
            flecs_ecs_metric_t realloc_count;
            flecs_ecs_metric_t free_count;
            flecs_ecs_metric_t outstanding_alloc_count;

            flecs_ecs_metric_t block_alloc_count;
            flecs_ecs_metric_t block_free_count;
            flecs_ecs_metric_t block_outstanding_alloc_count;
            flecs_ecs_metric_t stack_alloc_count;
            flecs_ecs_metric_t stack_free_count;
            flecs_ecs_metric_t stack_outstanding_alloc_count;
        } memory;

        struct
        {
            flecs_ecs_metric_t request_received_count;
            flecs_ecs_metric_t request_invalid_count;
            flecs_ecs_metric_t request_handled_ok_count;
            flecs_ecs_metric_t request_handled_error_count;
            flecs_ecs_metric_t request_not_handled_count;
            flecs_ecs_metric_t request_preflight_count;
            flecs_ecs_metric_t send_ok_count;
            flecs_ecs_metric_t send_error_count;
            flecs_ecs_metric_t busy_count;
        } http;

        int64_t last_;

        int32_t t;
    } flecs_ecs_world_stats_t;
    typedef struct flecs_ecs_query_stats_t
    {
        int64_t first_;
        flecs_ecs_metric_t result_count;
        flecs_ecs_metric_t matched_table_count;
        flecs_ecs_metric_t matched_entity_count;
        int64_t last_;

        int32_t t;
    } flecs_ecs_query_stats_t;
    typedef struct flecs_ecs_system_stats_t
    {
        int64_t first_;
        flecs_ecs_metric_t time_spent;
        int64_t last_;

        _Bool task;

        flecs_ecs_query_stats_t query;
    } flecs_ecs_system_stats_t;
    typedef struct flecs_ecs_sync_stats_t
    {
        int64_t first_;
        flecs_ecs_metric_t time_spent;
        flecs_ecs_metric_t commands_enqueued;
        int64_t last_;

        int32_t system_count;
        _Bool multi_threaded;
        _Bool immediate;
    } flecs_ecs_sync_stats_t;
    typedef struct flecs_ecs_pipeline_stats_t
    {
        int8_t canary_;

        flecs_ecs_vec_t systems;

        flecs_ecs_vec_t sync_points;

        int32_t t;

        int32_t system_count;
        int32_t active_system_count;
        int32_t rebuild_count;
    } flecs_ecs_pipeline_stats_t;
    typedef struct
    {
        float elapsed;
        int32_t reduce_count;
    } flecs_EcsStatsHeader;
    typedef struct
    {
        flecs_EcsStatsHeader hdr;
        flecs_ecs_world_stats_t *stats;
    } flecs_EcsWorldStats;
    typedef struct
    {
        flecs_EcsStatsHeader hdr;
        flecs_ecs_map_t stats;
    } flecs_EcsSystemStats;
    typedef struct
    {
        flecs_EcsStatsHeader hdr;
        flecs_ecs_map_t stats;
    } flecs_EcsPipelineStats;
    typedef struct
    {

        double target_fps;
        double time_scale;
        double fps;

        double frame_time_total;
        double system_time_total;
        double merge_time_total;

        int64_t entity_count;
        int64_t table_count;
        int64_t frame_count;
        int64_t command_count;
        int64_t merge_count;

        int64_t systems_ran_total;
        int64_t observers_ran_total;
        int64_t queries_ran_total;

        int32_t tag_count;
        int32_t component_count;
        int32_t pair_count;

        double frame_time_frame;
        double system_time_frame;
        double merge_time_frame;

        int64_t merge_count_frame;
        int64_t systems_ran_frame;
        int64_t observers_ran_frame;
        int64_t queries_ran_frame;
        int64_t command_count_frame;

        double simulation_time;
        uint32_t uptime;

        flecs_ecs_build_info_t build_info;
    } flecs_EcsWorldSummary;
    typedef struct
    {
        int32_t alive_count;
        int32_t not_alive_count;
        flecs_ecs_size_t bytes_entity_index;
        flecs_ecs_size_t bytes_names;
        flecs_ecs_size_t bytes_doc_strings;
    } flecs_ecs_entities_memory_t;
    typedef struct
    {
        int32_t instances;
        flecs_ecs_size_t bytes_table_components;
        flecs_ecs_size_t bytes_table_components_unused;
        flecs_ecs_size_t bytes_toggle_bitsets;
        flecs_ecs_size_t bytes_sparse_components;
    } flecs_ecs_component_memory_t;
    typedef struct
    {
        int32_t count;
        flecs_ecs_size_t bytes_component_record;
        flecs_ecs_size_t bytes_table_cache;
        flecs_ecs_size_t bytes_name_index;
        flecs_ecs_size_t bytes_ordered_children;
        flecs_ecs_size_t bytes_children_table_map;
        flecs_ecs_size_t bytes_reachable_cache;
    } flecs_ecs_component_index_memory_t;
    typedef struct
    {
        int32_t count;
        int32_t cached_count;
        flecs_ecs_size_t bytes_query;
        flecs_ecs_size_t bytes_cache;
        flecs_ecs_size_t bytes_group_by;
        flecs_ecs_size_t bytes_order_by;
        flecs_ecs_size_t bytes_plan;
        flecs_ecs_size_t bytes_terms;
        flecs_ecs_size_t bytes_misc;
    } flecs_ecs_query_memory_t;
    typedef struct
    {
        int32_t count;
        int32_t empty_count;
        int32_t column_count;
        flecs_ecs_size_t bytes_table;
        flecs_ecs_size_t bytes_type;
        flecs_ecs_size_t bytes_entities;
        flecs_ecs_size_t bytes_overrides;
        flecs_ecs_size_t bytes_column_map;
        flecs_ecs_size_t bytes_component_map;
        flecs_ecs_size_t bytes_dirty_state;
        flecs_ecs_size_t bytes_edges;
    } flecs_ecs_table_memory_t;
    typedef struct
    {
        int32_t entity_counts[14];
    } flecs_ecs_table_histogram_t;
    typedef struct
    {
        flecs_ecs_size_t bytes_world;
        flecs_ecs_size_t bytes_observers;
        flecs_ecs_size_t bytes_systems;
        flecs_ecs_size_t bytes_pipelines;
        flecs_ecs_size_t bytes_table_lookup;
        flecs_ecs_size_t bytes_component_record_lookup;
        flecs_ecs_size_t bytes_locked_components;
        flecs_ecs_size_t bytes_type_info;
        flecs_ecs_size_t bytes_commands;
        flecs_ecs_size_t bytes_rematch_monitor;
        flecs_ecs_size_t bytes_component_ids;
        flecs_ecs_size_t bytes_reflection;
        flecs_ecs_size_t bytes_tree_spawner;
        flecs_ecs_size_t bytes_prefab_child_indices;
        flecs_ecs_size_t bytes_stats;
        flecs_ecs_size_t bytes_rest;
    } flecs_ecs_misc_memory_t;
    typedef struct
    {
        flecs_ecs_size_t bytes_graph_edge;
        flecs_ecs_size_t bytes_component_record;
        flecs_ecs_size_t bytes_pair_record;
        flecs_ecs_size_t bytes_table_diff;
        flecs_ecs_size_t bytes_sparse_chunk;
        flecs_ecs_size_t bytes_allocator;
        flecs_ecs_size_t bytes_stack_allocator;
        flecs_ecs_size_t bytes_cmd_entry_chunk;
        flecs_ecs_size_t bytes_query_impl;
        flecs_ecs_size_t bytes_query_cache;
        flecs_ecs_size_t bytes_misc;
    } flecs_ecs_allocator_memory_t;
    typedef struct
    {
        flecs_ecs_entities_memory_t entities;
        flecs_ecs_component_memory_t components;
        flecs_ecs_component_index_memory_t component_index;
        flecs_ecs_query_memory_t queries;
        flecs_ecs_table_memory_t tables;
        flecs_ecs_table_histogram_t table_histogram;
        flecs_ecs_misc_memory_t misc;
        flecs_ecs_allocator_memory_t allocators;
        double collection_time;
    } flecs_EcsWorldMemory;
    typedef struct flecs_EcsMetricValue
    {
        double value;
    } flecs_EcsMetricValue;
    typedef struct flecs_EcsMetricSource
    {
        flecs_ecs_entity_t entity;
    } flecs_EcsMetricSource;
    typedef struct flecs_ecs_metric_desc_t
    {
        int32_t _canary;

        flecs_ecs_entity_t entity;

        flecs_ecs_entity_t member;

        const char *dotmember;

        flecs_ecs_id_t id;

        _Bool targets;

        flecs_ecs_entity_t kind;

        const char *brief;
    } flecs_ecs_metric_desc_t;
    typedef struct flecs_EcsAlertInstance
    {
        char *message;
    } flecs_EcsAlertInstance;
    typedef struct flecs_EcsAlertsActive
    {
        int32_t info_count;
        int32_t warning_count;
        int32_t error_count;
        flecs_ecs_map_t alerts;
    } flecs_EcsAlertsActive;
    typedef struct flecs_ecs_alert_severity_filter_t
    {
        flecs_ecs_entity_t severity;
        flecs_ecs_id_t with;
        const char *var;

        int32_t _var_index;
    } flecs_ecs_alert_severity_filter_t;
    typedef struct flecs_ecs_alert_desc_t
    {
        int32_t _canary;

        flecs_ecs_entity_t entity;

        flecs_ecs_query_desc_t query;
# 15910 "C:\\Users\\JHGip\\Documents\\Project\\chimera-engine\\include\\flecs.h"
        const char *message;

        const char *doc_name;

        const char *brief;

        flecs_ecs_entity_t severity;

        flecs_ecs_alert_severity_filter_t severity_filters[(4)];

        float retain_period;

        flecs_ecs_entity_t member;

        flecs_ecs_id_t id;

        const char *var;
    } flecs_ecs_alert_desc_t;
    typedef struct flecs_ecs_from_json_desc_t
    {
        const char *name;
        const char *expr;

        flecs_ecs_entity_t (*lookup_action)(
            flecs_ecs_world_t *,
            const char *value,
            void *ctx);
        void *lookup_ctx;

        _Bool strict;
    } flecs_ecs_from_json_desc_t;
    typedef struct flecs_ecs_entity_to_json_desc_t
    {
        _Bool serialize_entity_id;
        _Bool serialize_doc;
        _Bool serialize_full_paths;
        _Bool serialize_inherited;
        _Bool serialize_values;
        _Bool serialize_builtin;
        _Bool serialize_type_info;
        _Bool serialize_alerts;
        flecs_ecs_entity_t serialize_refs;
        _Bool serialize_matches;

        _Bool (*component_filter)(const flecs_ecs_world_t *, flecs_ecs_entity_t);
    } flecs_ecs_entity_to_json_desc_t;
    typedef struct flecs_ecs_iter_to_json_desc_t
    {
        _Bool serialize_entity_ids;
        _Bool serialize_values;
        _Bool serialize_builtin;
        _Bool serialize_doc;
        _Bool serialize_full_paths;
        _Bool serialize_fields;
        _Bool serialize_inherited;
        _Bool serialize_table;
        _Bool serialize_type_info;
        _Bool serialize_field_info;
        _Bool serialize_query_info;
        _Bool serialize_query_plan;
        _Bool serialize_query_profile;
        _Bool dont_serialize_results;
        _Bool serialize_alerts;
        flecs_ecs_entity_t serialize_refs;
        _Bool serialize_matches;
        _Bool serialize_parents_before_children;

        _Bool (*component_filter)(const flecs_ecs_world_t *, flecs_ecs_entity_t);
        flecs_ecs_poly_t *query;
    } flecs_ecs_iter_to_json_desc_t;
    typedef struct flecs_ecs_world_to_json_desc_t
    {
        _Bool serialize_builtin;
        _Bool serialize_modules;
    } flecs_ecs_world_to_json_desc_t;
    typedef struct flecs_ecs_script_template_t flecs_ecs_script_template_t;
    typedef struct flecs_ecs_script_var_t
    {
        const char *name;
        flecs_ecs_value_t value;
        const flecs_ecs_type_info_t *type_info;
        int32_t sp;
        _Bool is_const;
    } flecs_ecs_script_var_t;
    typedef struct flecs_ecs_script_vars_t
    {
        struct flecs_ecs_script_vars_t *parent;
        int32_t sp;

        flecs_ecs_hashmap_t var_index;
        flecs_ecs_vec_t vars;

        const flecs_ecs_world_t *world;
        struct flecs_ecs_stack_t *stack;
        flecs_ecs_stack_cursor_t *cursor;
        flecs_ecs_allocator_t *allocator;
    } flecs_ecs_script_vars_t;
    typedef struct flecs_ecs_script_t
    {
        flecs_ecs_world_t *world;
        const char *name;
        const char *code;
    } flecs_ecs_script_t;
    typedef struct flecs_ecs_script_runtime_t flecs_ecs_script_runtime_t;
    typedef struct flecs_EcsScript
    {
        char *filename;
        char *code;
        char *error;
        flecs_ecs_script_t *script;
        flecs_ecs_script_template_t *template_;
    } flecs_EcsScript;
    typedef struct flecs_ecs_function_ctx_t
    {
        flecs_ecs_world_t *world;
        flecs_ecs_entity_t function;
        void *ctx;
    } flecs_ecs_function_ctx_t;
    typedef void (*flecs_ecs_function_callback_t)(
        const flecs_ecs_function_ctx_t *ctx,
        int32_t argc,
        const flecs_ecs_value_t *argv,
        flecs_ecs_value_t *result);
    typedef void (*flecs_ecs_vector_function_callback_t)(
        const flecs_ecs_function_ctx_t *ctx,
        int32_t argc,
        const flecs_ecs_value_t *argv,
        flecs_ecs_value_t *result,
        int32_t elem_count);
    typedef struct flecs_ecs_script_parameter_t
    {
        const char *name;
        flecs_ecs_entity_t type;
    } flecs_ecs_script_parameter_t;
    typedef struct flecs_EcsScriptConstVar
    {
        flecs_ecs_value_t value;
        const flecs_ecs_type_info_t *type_info;
    } flecs_EcsScriptConstVar;
    typedef struct flecs_ecs_script_function_t flecs_EcsScriptFunction;
    typedef struct flecs_ecs_script_function_t flecs_EcsScriptMethod;
    typedef struct flecs_ecs_script_eval_desc_t
    {
        flecs_ecs_script_vars_t *vars;
        flecs_ecs_script_runtime_t *runtime;
    } flecs_ecs_script_eval_desc_t;
    typedef struct flecs_ecs_script_eval_result_t
    {
        char *error;
    } flecs_ecs_script_eval_result_t;
    typedef struct flecs_ecs_script_desc_t
    {
        flecs_ecs_entity_t entity;
        const char *filename;
        const char *code;
    } flecs_ecs_script_desc_t;
    typedef struct flecs_ecs_expr_eval_desc_t
    {
        const char *name;
        const char *expr;
        const flecs_ecs_script_vars_t *vars;
        flecs_ecs_entity_t type;
        flecs_ecs_entity_t (*lookup_action)(
            const flecs_ecs_world_t *,
            const char *value,
            void *ctx);
        void *lookup_ctx;

        _Bool disable_folding;

        _Bool disable_dynamic_variable_binding;

        _Bool allow_unresolved_identifiers;

        flecs_ecs_script_runtime_t *runtime;

        void *script_visitor;
    } flecs_ecs_expr_eval_desc_t;
    typedef struct flecs_ecs_const_var_desc_t
    {

        const char *name;

        flecs_ecs_entity_t parent;

        flecs_ecs_entity_t type;

        void *value;
    } flecs_ecs_const_var_desc_t;
    typedef struct flecs_ecs_vector_fn_callbacks_t
    {
        flecs_ecs_vector_function_callback_t i8;
        flecs_ecs_vector_function_callback_t i32;
    } flecs_ecs_vector_fn_callbacks_t;
    typedef struct flecs_ecs_function_desc_t
    {

        const char *name;

        flecs_ecs_entity_t parent;

        flecs_ecs_script_parameter_t params[(16)];

        flecs_ecs_entity_t return_type;

        flecs_ecs_function_callback_t callback;
# 17748 "C:\\Users\\JHGip\\Documents\\Project\\chimera-engine\\include\\flecs.h"
        flecs_ecs_vector_function_callback_t vector_callbacks[(18)];

        void *ctx;
    } flecs_ecs_function_desc_t;
    typedef struct flecs_ecs_expr_node_t flecs_ecs_expr_node_t;
    typedef struct flecs_EcsDocDescription
    {
        char *value;
    } flecs_EcsDocDescription;
    typedef _Bool flecs_ecs_bool_t;
    typedef char flecs_ecs_char_t;
    typedef unsigned char flecs_ecs_byte_t;
    typedef uint8_t flecs_ecs_u8_t;
    typedef uint16_t flecs_ecs_u16_t;
    typedef uint32_t flecs_ecs_u32_t;
    typedef uint64_t flecs_ecs_u64_t;
    typedef uintptr_t flecs_ecs_uptr_t;
    typedef int8_t flecs_ecs_i8_t;
    typedef int16_t flecs_ecs_i16_t;
    typedef int32_t flecs_ecs_i32_t;
    typedef int64_t flecs_ecs_i64_t;
    typedef intptr_t flecs_ecs_iptr_t;
    typedef float flecs_ecs_f32_t;
    typedef double flecs_ecs_f64_t;
    typedef char *flecs_ecs_string_t;
    typedef enum flecs_ecs_type_kind_t
    {
        flecs_EcsPrimitiveType,
        flecs_EcsBitmaskType,
        flecs_EcsEnumType,
        flecs_EcsStructType,
        flecs_EcsArrayType,
        flecs_EcsVectorType,
        flecs_EcsOpaqueType,
        flecs_EcsTypeKindLast = EcsOpaqueType
    } flecs_ecs_type_kind_t;
    typedef struct flecs_EcsType
    {
        flecs_ecs_type_kind_t kind;
        _Bool existing;
        _Bool partial;
    } flecs_EcsType;
    typedef enum flecs_ecs_primitive_kind_t
    {
        flecs_EcsBool = 1,
        flecs_EcsChar,
        flecs_EcsByte,
        flecs_EcsU8,
        flecs_EcsU16,
        flecs_EcsU32,
        flecs_EcsU64,
        flecs_EcsI8,
        flecs_EcsI16,
        flecs_EcsI32,
        flecs_EcsI64,
        flecs_EcsF32,
        flecs_EcsF64,
        flecs_EcsUPtr,
        flecs_EcsIPtr,
        flecs_EcsString,
        flecs_EcsEntity,
        flecs_EcsId,
        flecs_EcsPrimitiveKindLast = EcsId
    } flecs_ecs_primitive_kind_t;
    typedef struct flecs_EcsPrimitive
    {
        flecs_ecs_primitive_kind_t kind;
    } flecs_EcsPrimitive;
    typedef struct flecs_EcsMember
    {
        flecs_ecs_entity_t type;
        int32_t count;
        flecs_ecs_entity_t unit;
        int32_t offset;
        _Bool use_offset;
    } flecs_EcsMember;
    typedef struct flecs_ecs_member_value_range_t
    {
        double min;
        double max;
    } flecs_ecs_member_value_range_t;
    typedef struct flecs_EcsMemberRanges
    {
        flecs_ecs_member_value_range_t value;
        flecs_ecs_member_value_range_t warning;
        flecs_ecs_member_value_range_t error;
    } flecs_EcsMemberRanges;
    typedef struct flecs_ecs_member_t
    {

        const char *name;

        flecs_ecs_entity_t type;

        int32_t count;

        int32_t offset;

        flecs_ecs_entity_t unit;

        _Bool use_offset;

        flecs_ecs_member_value_range_t range;

        flecs_ecs_member_value_range_t error_range;

        flecs_ecs_member_value_range_t warning_range;

        flecs_ecs_size_t size;

        flecs_ecs_entity_t member;
    } flecs_ecs_member_t;
    typedef struct flecs_EcsStruct
    {

        flecs_ecs_vec_t members;
    } flecs_EcsStruct;
    typedef struct flecs_ecs_enum_constant_t
    {

        const char *name;

        int64_t value;

        uint64_t value_unsigned;

        flecs_ecs_entity_t constant;
    } flecs_ecs_enum_constant_t;
    typedef struct flecs_EcsEnum
    {
        flecs_ecs_entity_t underlying_type;
    } flecs_EcsEnum;
    typedef struct flecs_ecs_bitmask_constant_t
    {

        const char *name;

        flecs_ecs_flags64_t value;

        int64_t _unused;

        flecs_ecs_entity_t constant;
    } flecs_ecs_bitmask_constant_t;
    typedef struct flecs_EcsBitmask
    {
        int32_t dummy_;
    } flecs_EcsBitmask;
    typedef struct flecs_EcsConstants
    {

        flecs_ecs_map_t *constants;

        flecs_ecs_vec_t ordered_constants;
    } flecs_EcsConstants;
    typedef struct flecs_EcsArray
    {
        flecs_ecs_entity_t type;
        int32_t count;
    } flecs_EcsArray;
    typedef struct flecs_EcsVector
    {
        flecs_ecs_entity_t type;
    } flecs_EcsVector;
    typedef struct flecs_ecs_serializer_t
    {

        int (*value)(
            const struct flecs_ecs_serializer_t *ser,
            flecs_ecs_entity_t type,
            const void *value);

        int (*member)(
            const struct flecs_ecs_serializer_t *ser,
            const char *member);

        const flecs_ecs_world_t *world;
        void *ctx;
    } flecs_ecs_serializer_t;
    typedef int (*flecs_ecs_meta_serialize_t)(
        const flecs_ecs_serializer_t *ser,
        const void *src);
    typedef int (*flecs_ecs_meta_serialize_member_t)(
        const flecs_ecs_serializer_t *ser,
        const void *src,
        const char *name);
    typedef int (*flecs_ecs_meta_serialize_element_t)(
        const flecs_ecs_serializer_t *ser,
        const void *src,
        size_t elem);
    typedef struct flecs_EcsOpaque
    {
        flecs_ecs_entity_t as_type;
        flecs_ecs_meta_serialize_t serialize;
        flecs_ecs_meta_serialize_member_t serialize_member;
        flecs_ecs_meta_serialize_element_t serialize_element;
# 18607 "C:\\Users\\JHGip\\Documents\\Project\\chimera-engine\\include\\flecs.h"
        void (*assign_bool)(
            void *dst,
            _Bool value);

        void (*assign_char)(
            void *dst,
            char value);

        void (*assign_int)(
            void *dst,
            int64_t value);

        void (*assign_uint)(
            void *dst,
            uint64_t value);

        void (*assign_float)(
            void *dst,
            double value);

        void (*assign_string)(
            void *dst,
            const char *value);

        void (*assign_entity)(
            void *dst,
            flecs_ecs_world_t *world,
            flecs_ecs_entity_t entity);

        void (*assign_id)(
            void *dst,
            flecs_ecs_world_t *world,
            flecs_ecs_id_t id);

        void (*assign_null)(
            void *dst);

        void (*clear)(
            void *dst);

        void *(*ensure_element)(
            void *dst,
            size_t elem);

        void *(*ensure_member)(
            void *dst,
            const char *member);

        size_t (*count)(
            const void *dst);

        void (*resize)(
            void *dst,
            size_t count);
    } flecs_EcsOpaque;
    typedef struct flecs_ecs_unit_translation_t
    {
        int32_t factor;
        int32_t power;
    } flecs_ecs_unit_translation_t;
    typedef struct flecs_EcsUnit
    {
        char *symbol;
        flecs_ecs_entity_t prefix;
        flecs_ecs_entity_t base;
        flecs_ecs_entity_t over;
        flecs_ecs_unit_translation_t translation;
    } flecs_EcsUnit;
    typedef struct flecs_EcsUnitPrefix
    {
        char *symbol;
        flecs_ecs_unit_translation_t translation;
    } flecs_EcsUnitPrefix;
    typedef enum flecs_ecs_meta_op_kind_t
    {
        flecs_EcsOpPushStruct,
        flecs_EcsOpPushArray,
        flecs_EcsOpPushVector,
        flecs_EcsOpPop,

        flecs_EcsOpOpaqueStruct,
        flecs_EcsOpOpaqueArray,
        flecs_EcsOpOpaqueVector,
        flecs_EcsOpForward,

        flecs_EcsOpScope,

        flecs_EcsOpOpaqueValue,
        flecs_EcsOpEnum,
        flecs_EcsOpBitmask,

        flecs_EcsOpPrimitive,

        flecs_EcsOpBool,
        flecs_EcsOpChar,
        flecs_EcsOpByte,
        flecs_EcsOpU8,
        flecs_EcsOpU16,
        flecs_EcsOpU32,
        flecs_EcsOpU64,
        flecs_EcsOpI8,
        flecs_EcsOpI16,
        flecs_EcsOpI32,
        flecs_EcsOpI64,
        flecs_EcsOpF32,
        flecs_EcsOpF64,
        flecs_EcsOpUPtr,
        flecs_EcsOpIPtr,
        flecs_EcsOpString,
        flecs_EcsOpEntity,
        flecs_EcsOpId,
        flecs_EcsMetaTypeOpKindLast = EcsOpId
    } flecs_ecs_meta_op_kind_t;
    typedef struct flecs_ecs_meta_op_t
    {
        flecs_ecs_meta_op_kind_t kind;
        flecs_ecs_meta_op_kind_t underlying_kind;
        flecs_ecs_size_t offset;
        const char *name;
        flecs_ecs_size_t elem_size;
        int16_t op_count;
        int16_t member_index;
        flecs_ecs_entity_t type;
        const flecs_ecs_type_info_t *type_info;
        union
        {
            flecs_ecs_hashmap_t *members;
            flecs_ecs_map_t *constants;
            flecs_ecs_meta_serialize_t opaque;
        } is;
    } flecs_ecs_meta_op_t;
    typedef struct flecs_EcsTypeSerializer
    {
        flecs_ecs_type_kind_t kind;
        flecs_ecs_vec_t ops;
    } flecs_EcsTypeSerializer;
    typedef struct flecs_ecs_meta_scope_t
    {
        flecs_ecs_entity_t type;
        flecs_ecs_meta_op_t *ops;
        int16_t ops_count;
        int16_t ops_cur;
        int16_t prev_depth;
        void *ptr;
        const flecs_EcsOpaque *opaque;
        flecs_ecs_hashmap_t *members;
        _Bool is_collection;
        _Bool is_empty_scope;
        _Bool is_moved_scope;
        int32_t elem, elem_count;
    } flecs_ecs_meta_scope_t;
    typedef struct flecs_ecs_meta_cursor_t
    {
        const flecs_ecs_world_t *world;
        flecs_ecs_meta_scope_t scope[(32)];
        int16_t depth;
        _Bool valid;
        _Bool is_primitive_scope;

        flecs_ecs_entity_t (*lookup_action)(flecs_ecs_world_t *, const char *, void *);
        void *lookup_ctx;
    } flecs_ecs_meta_cursor_t;
    typedef struct flecs_ecs_primitive_desc_t
    {
        flecs_ecs_entity_t entity;
        flecs_ecs_primitive_kind_t kind;
    } flecs_ecs_primitive_desc_t;
    typedef struct flecs_ecs_enum_desc_t
    {
        flecs_ecs_entity_t entity;
        flecs_ecs_enum_constant_t constants[(32)];
        flecs_ecs_entity_t underlying_type;
    } flecs_ecs_enum_desc_t;
    typedef struct flecs_ecs_bitmask_desc_t
    {
        flecs_ecs_entity_t entity;
        flecs_ecs_bitmask_constant_t constants[(32)];
    } flecs_ecs_bitmask_desc_t;
    typedef struct flecs_ecs_array_desc_t
    {
        flecs_ecs_entity_t entity;
        flecs_ecs_entity_t type;
        int32_t count;
    } flecs_ecs_array_desc_t;
    typedef struct flecs_ecs_vector_desc_t
    {
        flecs_ecs_entity_t entity;
        flecs_ecs_entity_t type;
    } flecs_ecs_vector_desc_t;
    typedef struct flecs_ecs_struct_desc_t
    {
        flecs_ecs_entity_t entity;
        flecs_ecs_member_t members[(32)];
        _Bool create_member_entities;
    } flecs_ecs_struct_desc_t;
    typedef struct flecs_ecs_opaque_desc_t
    {
        flecs_ecs_entity_t entity;
        flecs_EcsOpaque type;
    } flecs_ecs_opaque_desc_t;
    typedef struct flecs_ecs_unit_desc_t
    {

        flecs_ecs_entity_t entity;

        const char *symbol;

        flecs_ecs_entity_t quantity;

        flecs_ecs_entity_t base;

        flecs_ecs_entity_t over;

        flecs_ecs_unit_translation_t translation;

        flecs_ecs_entity_t prefix;
    } flecs_ecs_unit_desc_t;
    typedef struct flecs_ecs_unit_prefix_desc_t
    {

        flecs_ecs_entity_t entity;

        const char *symbol;

        flecs_ecs_unit_translation_t translation;
    } flecs_ecs_unit_prefix_desc_t;
    typedef void (*flecs_ecs_cpp_type_action_t)(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t component);
    typedef struct flecs_ecs_cpp_component_desc_t
    {
        flecs_ecs_entity_t id;
        int32_t ids_index;
        const char *name;
        const char *cpp_name;
        const char *cpp_symbol;
        size_t size;
        size_t alignment;
        flecs_ecs_cpp_type_action_t lifecycle_action;
        flecs_ecs_cpp_type_action_t enum_action;
        _Bool is_component;
        _Bool explicit_registration;
    } flecs_ecs_cpp_component_desc_t;
    typedef struct flecs_ecs_cpp_get_mut_t
    {
        flecs_ecs_world_t *world;
        flecs_ecs_stage_t *stage;
        void *ptr;
        _Bool call_modified;
    } flecs_ecs_cpp_get_mut_t;

    void flecs_ecs_vec_init(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count);
    void flecs_ecs_vec_init_w_dbg_info(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count,
        const char *type_name);
    void flecs_ecs_vec_init_if(
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size);
    void flecs_ecs_vec_fini(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size);
    flecs_ecs_vec_t *flecs_ecs_vec_reset(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size);
    void flecs_ecs_vec_clear(
        flecs_ecs_vec_t *vec);
    void *flecs_ecs_vec_append(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size);
    void flecs_ecs_vec_remove(
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem);
    void flecs_ecs_vec_remove_ordered(
        flecs_ecs_vec_t *v,
        flecs_ecs_size_t size,
        int32_t index);
    void flecs_ecs_vec_remove_last(
        flecs_ecs_vec_t *vec);
    flecs_ecs_vec_t flecs_ecs_vec_copy(
        struct ecs_allocator_t *allocator,
        const flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size);
    flecs_ecs_vec_t flecs_ecs_vec_copy_shrink(
        struct ecs_allocator_t *allocator,
        const flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size);
    void flecs_ecs_vec_reclaim(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size);
    void flecs_ecs_vec_set_size(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count);
    void flecs_ecs_vec_set_min_size(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count);
    void flecs_ecs_vec_set_min_size_w_type_info(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count,
        const flecs_ecs_type_info_t *ti);
    void flecs_ecs_vec_set_min_count(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count);
    void flecs_ecs_vec_set_min_count_zeromem(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count);
    void flecs_ecs_vec_set_count(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count);
    void flecs_ecs_vec_set_count_w_type_info(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count,
        const flecs_ecs_type_info_t *ti);
    void flecs_ecs_vec_set_min_count_w_type_info(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count,
        const flecs_ecs_type_info_t *ti);
    void *flecs_ecs_vec_grow(
        struct ecs_allocator_t *allocator,
        flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t elem_count);
    int32_t flecs_ecs_vec_count(
        const flecs_ecs_vec_t *vec);
    int32_t flecs_ecs_vec_size(
        const flecs_ecs_vec_t *vec);
    void *flecs_ecs_vec_get(
        const flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size,
        int32_t index);
    void *flecs_ecs_vec_first(
        const flecs_ecs_vec_t *vec);
    void *flecs_ecs_vec_last(
        const flecs_ecs_vec_t *vec,
        flecs_ecs_size_t size);
    void flecs_sparse_init(
        flecs_ecs_sparse_t *result,
        struct ecs_allocator_t *allocator,
        struct ecs_block_allocator_t *page_allocator,
        flecs_ecs_size_t size);
    void flecs_sparse_fini(
        flecs_ecs_sparse_t *sparse);
    void flecs_sparse_clear(
        flecs_ecs_sparse_t *sparse);
    void *flecs_sparse_add(
        flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size);
    uint64_t flecs_sparse_last_id(
        const flecs_ecs_sparse_t *sparse);
    uint64_t flecs_sparse_new_id(
        flecs_ecs_sparse_t *sparse);
    _Bool flecs_sparse_remove(
        flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t size,
        uint64_t id);
    _Bool flecs_sparse_remove_w_gen(
        flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t size,
        uint64_t id);
    _Bool flecs_sparse_is_alive(
        const flecs_ecs_sparse_t *sparse,
        uint64_t id);
    void *flecs_sparse_get_dense(
        const flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size,
        int32_t index);
    int32_t flecs_sparse_count(
        const flecs_ecs_sparse_t *sparse);
    _Bool flecs_sparse_has(
        const flecs_ecs_sparse_t *sparse,
        uint64_t id);
    void *flecs_sparse_get(
        const flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size,
        uint64_t id);
    void *flecs_sparse_insert(
        flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size,
        uint64_t id);
    void *flecs_sparse_ensure(
        flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size,
        uint64_t id,
        _Bool *is_new);
    void *flecs_sparse_ensure_fast(
        flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size,
        uint64_t id);
    const uint64_t *flecs_sparse_ids(
        const flecs_ecs_sparse_t *sparse);
    void flecs_sparse_shrink(
        flecs_ecs_sparse_t *sparse);
    void flecs_ecs_sparse_init(
        flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size);
    void *flecs_ecs_sparse_add(
        flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size);
    uint64_t flecs_ecs_sparse_last_id(
        const flecs_ecs_sparse_t *sparse);
    int32_t flecs_ecs_sparse_count(
        const flecs_ecs_sparse_t *sparse);
    void *flecs_ecs_sparse_get_dense(
        const flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size,
        int32_t index);
    void *flecs_ecs_sparse_get(
        const flecs_ecs_sparse_t *sparse,
        flecs_ecs_size_t elem_size,
        uint64_t id);
    void flecs_ballocator_init(
        flecs_ecs_block_allocator_t *ba,
        flecs_ecs_size_t size);
    flecs_ecs_block_allocator_t *flecs_ballocator_new(
        flecs_ecs_size_t size);
    void flecs_ballocator_fini(
        flecs_ecs_block_allocator_t *ba);
    void flecs_ballocator_free(
        flecs_ecs_block_allocator_t *ba);
    void *flecs_balloc(
        flecs_ecs_block_allocator_t *allocator);
    void *flecs_balloc_w_dbg_info(
        flecs_ecs_block_allocator_t *allocator,
        const char *type_name);
    void *flecs_bcalloc(
        flecs_ecs_block_allocator_t *allocator);
    void *flecs_bcalloc_w_dbg_info(
        flecs_ecs_block_allocator_t *allocator,
        const char *type_name);
    void flecs_bfree(
        flecs_ecs_block_allocator_t *allocator,
        void *memory);
    void flecs_bfree_w_dbg_info(
        flecs_ecs_block_allocator_t *allocator,
        void *memory,
        const char *type_name);
    void *flecs_brealloc(
        flecs_ecs_block_allocator_t *dst,
        flecs_ecs_block_allocator_t *src,
        void *memory);
    void *flecs_brealloc_w_dbg_info(
        flecs_ecs_block_allocator_t *dst,
        flecs_ecs_block_allocator_t *src,
        void *memory,
        const char *type_name);
    void *flecs_bdup(
        flecs_ecs_block_allocator_t *ba,
        void *memory);
    void flecs_stack_init(
        flecs_ecs_stack_t *stack);
    void flecs_stack_fini(
        flecs_ecs_stack_t *stack);
    void *flecs_stack_alloc(
        flecs_ecs_stack_t *stack,
        flecs_ecs_size_t size,
        flecs_ecs_size_t align);
    void *flecs_stack_calloc(
        flecs_ecs_stack_t *stack,
        flecs_ecs_size_t size,
        flecs_ecs_size_t align);
    void flecs_stack_free(
        void *ptr,
        flecs_ecs_size_t size);
    void flecs_stack_reset(
        flecs_ecs_stack_t *stack);
    flecs_ecs_stack_cursor_t *flecs_stack_get_cursor(
        flecs_ecs_stack_t *stack);
    void flecs_stack_restore_cursor(
        flecs_ecs_stack_t *stack,
        flecs_ecs_stack_cursor_t *cursor);
    void flecs_ecs_map_init(
        flecs_ecs_map_t *map,
        struct ecs_allocator_t *allocator);
    void flecs_ecs_map_init_if(
        flecs_ecs_map_t *map,
        struct ecs_allocator_t *allocator);
    void flecs_ecs_map_reclaim(
        flecs_ecs_map_t *map);
    void flecs_ecs_map_fini(
        flecs_ecs_map_t *map);
    flecs_ecs_map_val_t *flecs_ecs_map_get(
        const flecs_ecs_map_t *map,
        flecs_ecs_map_key_t key);
    void *flecs_ecs_map_get_deref_(
        const flecs_ecs_map_t *map,
        flecs_ecs_map_key_t key);
    flecs_ecs_map_val_t *flecs_ecs_map_ensure(
        flecs_ecs_map_t *map,
        flecs_ecs_map_key_t key);
    void *flecs_ecs_map_ensure_alloc(
        flecs_ecs_map_t *map,
        flecs_ecs_size_t elem_size,
        flecs_ecs_map_key_t key);
    void flecs_ecs_map_insert(
        flecs_ecs_map_t *map,
        flecs_ecs_map_key_t key,
        flecs_ecs_map_val_t value);
    void *flecs_ecs_map_insert_alloc(
        flecs_ecs_map_t *map,
        flecs_ecs_size_t elem_size,
        flecs_ecs_map_key_t key);
    flecs_ecs_map_val_t flecs_ecs_map_remove(
        flecs_ecs_map_t *map,
        flecs_ecs_map_key_t key);
    void flecs_ecs_map_remove_free(
        flecs_ecs_map_t *map,
        flecs_ecs_map_key_t key);
    void flecs_ecs_map_clear(
        flecs_ecs_map_t *map);
    flecs_ecs_map_iter_t flecs_ecs_map_iter(
        const flecs_ecs_map_t *map);
    _Bool flecs_ecs_map_iter_valid(
        flecs_ecs_map_iter_t *iter);
    _Bool flecs_ecs_map_next(
        flecs_ecs_map_iter_t *iter);
    void flecs_ecs_map_copy(
        flecs_ecs_map_t *dst,
        const flecs_ecs_map_t *src);
    void flecs_allocator_init(
        flecs_ecs_allocator_t *a);
    void flecs_allocator_fini(
        flecs_ecs_allocator_t *a);
    flecs_ecs_block_allocator_t *flecs_allocator_get(
        flecs_ecs_allocator_t *a,
        flecs_ecs_size_t size);
    char *flecs_strdup(
        flecs_ecs_allocator_t *a,
        const char *str);
    void flecs_strfree(
        flecs_ecs_allocator_t *a,
        char *str);
    void *flecs_dup(
        flecs_ecs_allocator_t *a,
        flecs_ecs_size_t size,
        const void *src);
    void flecs_ecs_strbuf_vappend(
        flecs_ecs_strbuf_t *buffer,
        const char *fmt,
        va_list args);
    void flecs_ecs_strbuf_appendstr(
        flecs_ecs_strbuf_t *buffer,
        const char *str);
    void flecs_ecs_strbuf_appendch(
        flecs_ecs_strbuf_t *buffer,
        char ch);
    void flecs_ecs_strbuf_appendint(
        flecs_ecs_strbuf_t *buffer,
        int64_t v);
    void flecs_ecs_strbuf_appendflt(
        flecs_ecs_strbuf_t *buffer,
        double v,
        char nan_delim);
    void flecs_ecs_strbuf_appendbool(
        flecs_ecs_strbuf_t *buffer,
        _Bool v);
    void flecs_ecs_strbuf_mergebuff(
        flecs_ecs_strbuf_t *dst_buffer,
        flecs_ecs_strbuf_t *src_buffer);
    void flecs_ecs_strbuf_appendstrn(
        flecs_ecs_strbuf_t *buffer,
        const char *str,
        int32_t n);
    char *flecs_ecs_strbuf_get(
        flecs_ecs_strbuf_t *buffer);
    char *flecs_ecs_strbuf_get_small(
        flecs_ecs_strbuf_t *buffer);
    void flecs_ecs_strbuf_reset(
        flecs_ecs_strbuf_t *buffer);
    void flecs_ecs_strbuf_list_push(
        flecs_ecs_strbuf_t *buffer,
        const char *list_open,
        const char *separator);
    void flecs_ecs_strbuf_list_pop(
        flecs_ecs_strbuf_t *buffer,
        const char *list_close);
    void flecs_ecs_strbuf_list_next(
        flecs_ecs_strbuf_t *buffer);
    void flecs_ecs_strbuf_list_appendch(
        flecs_ecs_strbuf_t *buffer,
        char ch);
    void flecs_ecs_strbuf_list_appendstr(
        flecs_ecs_strbuf_t *buffer,
        const char *str);
    void flecs_ecs_strbuf_list_appendstrn(
        flecs_ecs_strbuf_t *buffer,
        const char *str,
        int32_t n);
    int32_t flecs_ecs_strbuf_written(
        const flecs_ecs_strbuf_t *buffer);
    void flecs_ecs_os_init(void);
    void flecs_ecs_os_fini(void);
    void flecs_ecs_os_set_api(
        flecs_ecs_os_api_t *os_api);
    flecs_ecs_os_api_t flecs_ecs_os_get_api(void);
    void flecs_ecs_os_set_api_defaults(void);
    void flecs_ecs_os_dbg(
        const char *file,
        int32_t line,
        const char *msg);
    void flecs_ecs_os_trace(
        const char *file,
        int32_t line,
        const char *msg);
    void flecs_ecs_os_warn(
        const char *file,
        int32_t line,
        const char *msg);
    void flecs_ecs_os_err(
        const char *file,
        int32_t line,
        const char *msg);
    void flecs_ecs_os_fatal(
        const char *file,
        int32_t line,
        const char *msg);
    const char *flecs_ecs_os_strerror(
        int err);
    void flecs_ecs_os_strset(
        char **str,
        const char *value);
    void flecs_ecs_os_perf_trace_push_(
        const char *file,
        size_t line,
        const char *name);
    void flecs_ecs_os_perf_trace_pop_(
        const char *file,
        size_t line,
        const char *name);
    void flecs_ecs_sleepf(
        double t);
    double flecs_ecs_time_measure(
        flecs_ecs_time_t *start);
    flecs_ecs_time_t flecs_ecs_time_sub(
        flecs_ecs_time_t t1,
        flecs_ecs_time_t t2);
    double flecs_ecs_time_to_double(
        flecs_ecs_time_t t);
    void *flecs_ecs_os_memdup(
        const void *src,
        flecs_ecs_size_t size);
    _Bool flecs_ecs_os_has_heap(void);
    _Bool flecs_ecs_os_has_threading(void);
    _Bool flecs_ecs_os_has_task_support(void);
    _Bool flecs_ecs_os_has_time(void);
    _Bool flecs_ecs_os_has_logging(void);
    _Bool flecs_ecs_os_has_dl(void);
    _Bool flecs_ecs_os_has_modules(void);
    char *flecs_module_path_from_c(
        const char *c_name);
    void flecs_default_ctor(
        void *ptr,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    _Bool flecs_type_info_ctor(
        void *ptr,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    _Bool flecs_type_info_dtor(
        void *ptr,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    void flecs_type_info_copy(
        void *dst,
        const void *src,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    void flecs_type_info_move(
        void *dst,
        void *src,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    void flecs_type_info_copy_ctor(
        void *dst,
        const void *src,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    void flecs_type_info_move_ctor(
        void *dst,
        void *src,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    void flecs_type_info_ctor_move_dtor(
        void *dst,
        void *src,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    void flecs_type_info_move_dtor(
        void *dst,
        void *src,
        int32_t count,
        const flecs_ecs_type_info_t *type_info);
    int flecs_type_info_cmp(
        const void *a,
        const void *b,
        const flecs_ecs_type_info_t *type_info);
    _Bool flecs_type_info_equals(
        const void *a,
        const void *b,
        const flecs_ecs_type_info_t *type_info);
    char *flecs_vasprintf(
        const char *fmt,
        va_list args);
    char *flecs_chresc(
        char *out,
        char in,
        char delimiter);
    const char *flecs_chrparse(
        const char *in,
        char *out);
    flecs_ecs_size_t flecs_stresc(
        char *out,
        flecs_ecs_size_t size,
        char delimiter,
        const char *in);
    char *flecs_astresc(
        char delimiter,
        const char *in);
    const char *flecs_parse_ws_eol(
        const char *ptr);
    const char *flecs_parse_digit(
        const char *ptr,
        char *token);
    char *flecs_to_snake_case(
        const char *str);
    flecs_ecs_world_t *flecs_suspend_readonly(
        const flecs_ecs_world_t *world,
        flecs_ecs_suspend_readonly_state_t *state);
    void flecs_resume_readonly(
        flecs_ecs_world_t *world,
        flecs_ecs_suspend_readonly_state_t *state);
    int32_t flecs_table_observed_count(
        const flecs_ecs_table_t *table);
    void flecs_dump_backtrace(
        void *stream);
    int32_t flecs_poly_claim_(
        flecs_ecs_poly_t *poly);
    int32_t flecs_poly_release_(
        flecs_ecs_poly_t *poly);
    int32_t flecs_poly_refcount(
        flecs_ecs_poly_t *poly);
    int32_t flecs_component_ids_index_get(void);
    flecs_ecs_entity_t flecs_component_ids_get(
        const flecs_ecs_world_t *world,
        int32_t index);
    flecs_ecs_entity_t flecs_component_ids_get_alive(
        const flecs_ecs_world_t *world,
        int32_t index);
    void flecs_component_ids_set(
        flecs_ecs_world_t *world,
        int32_t index,
        flecs_ecs_entity_t id);
    _Bool flecs_query_trivial_cached_next(
        flecs_ecs_iter_t *it);
    void flecs_check_exclusive_world_access_write(
        const flecs_ecs_world_t *world);
    void flecs_check_exclusive_world_access_read(
        const flecs_ecs_world_t *world);
    _Bool flecs_defer_end(
        flecs_ecs_world_t *world,
        flecs_ecs_stage_t *stage);
    void flecs_hashmap_init_(
        flecs_ecs_hashmap_t *hm,
        flecs_ecs_size_t key_size,
        flecs_ecs_size_t value_size,
        flecs_ecs_hash_value_action_t hash,
        flecs_ecs_compare_action_t compare,
        flecs_ecs_allocator_t *allocator);
    void flecs_hashmap_fini(
        flecs_ecs_hashmap_t *map);
    void *flecs_hashmap_get_(
        const flecs_ecs_hashmap_t *map,
        flecs_ecs_size_t key_size,
        const void *key,
        flecs_ecs_size_t value_size);
    flecs_hashmap_result_t flecs_hashmap_ensure_(
        flecs_ecs_hashmap_t *map,
        flecs_ecs_size_t key_size,
        const void *key,
        flecs_ecs_size_t value_size);
    void flecs_hashmap_set_(
        flecs_ecs_hashmap_t *map,
        flecs_ecs_size_t key_size,
        void *key,
        flecs_ecs_size_t value_size,
        const void *value);
    void flecs_hashmap_remove_(
        flecs_ecs_hashmap_t *map,
        flecs_ecs_size_t key_size,
        const void *key,
        flecs_ecs_size_t value_size);
    void flecs_hashmap_remove_w_hash_(
        flecs_ecs_hashmap_t *map,
        flecs_ecs_size_t key_size,
        const void *key,
        flecs_ecs_size_t value_size,
        uint64_t hash);
    flecs_ecs_hm_bucket_t *flecs_hashmap_get_bucket(
        const flecs_ecs_hashmap_t *map,
        uint64_t hash);
    void flecs_hm_bucket_remove(
        flecs_ecs_hashmap_t *map,
        flecs_ecs_hm_bucket_t *bucket,
        uint64_t hash,
        int32_t index);
    void flecs_hashmap_copy(
        flecs_ecs_hashmap_t *dst,
        const flecs_ecs_hashmap_t *src);
    flecs_hashmap_iter_t flecs_hashmap_iter(
        flecs_ecs_hashmap_t *map);
    void *flecs_hashmap_next_(
        flecs_hashmap_iter_t *it,
        flecs_ecs_size_t key_size,
        void *key_out,
        flecs_ecs_size_t value_size);
    flecs_ecs_record_t *flecs_ecs_record_find(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    flecs_ecs_entity_t flecs_ecs_record_get_entity(
        const flecs_ecs_record_t *record);
    flecs_ecs_record_t *flecs_ecs_write_begin(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    void flecs_ecs_write_end(
        flecs_ecs_record_t *record);
    const flecs_ecs_record_t *flecs_ecs_read_begin(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    void flecs_ecs_read_end(
        const flecs_ecs_record_t *record);
    const void *flecs_ecs_record_get_id(
        const flecs_ecs_world_t *world,
        const flecs_ecs_record_t *record,
        flecs_ecs_id_t id);
    void *flecs_ecs_record_ensure_id(
        flecs_ecs_world_t *world,
        flecs_ecs_record_t *record,
        flecs_ecs_id_t id);
    _Bool flecs_ecs_record_has_id(
        flecs_ecs_world_t *world,
        const flecs_ecs_record_t *record,
        flecs_ecs_id_t id);
    void *flecs_ecs_record_get_by_column(
        const flecs_ecs_record_t *record,
        int32_t column,
        size_t size);
    flecs_ecs_component_record_t *flecs_components_get(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t id);
    flecs_ecs_component_record_t *flecs_components_ensure(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t id);
    flecs_ecs_id_t flecs_component_get_id(
        const flecs_ecs_component_record_t *cr);
    flecs_ecs_flags32_t flecs_component_get_flags(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t id);
    const flecs_ecs_type_info_t *flecs_component_get_type_info(
        const flecs_ecs_component_record_t *cr);
    const flecs_ecs_table_record_t *flecs_component_get_table(
        const flecs_ecs_component_record_t *cr,
        const flecs_ecs_table_t *table);
    flecs_ecs_parent_record_t *flecs_component_get_parent_record(
        const flecs_ecs_component_record_t *cr,
        const flecs_ecs_table_t *table);
    int32_t flecs_component_get_childof_depth(
        const flecs_ecs_component_record_t *cr);
    _Bool flecs_component_iter(
        const flecs_ecs_component_record_t *cr,
        flecs_ecs_table_cache_iter_t *iter_out);
    const flecs_ecs_table_record_t *flecs_component_next(
        flecs_ecs_table_cache_iter_t *iter);
    flecs_ecs_table_records_t flecs_table_records(
        flecs_ecs_table_t *table);
    flecs_ecs_component_record_t *flecs_table_record_get_component(
        const flecs_ecs_table_record_t *tr);
    uint64_t flecs_table_id(
        flecs_ecs_table_t *table);
    flecs_ecs_table_t *flecs_table_traverse_add(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table,
        flecs_ecs_id_t *id_ptr,
        flecs_ecs_table_diff_t *diff);
    flecs_ecs_world_t *flecs_ecs_init(void);
    flecs_ecs_world_t *flecs_ecs_mini(void);
    flecs_ecs_world_t *flecs_ecs_init_w_args(
        int argc,
        char *argv[]);
    int flecs_ecs_fini(
        flecs_ecs_world_t *world);
    _Bool flecs_ecs_is_fini(
        const flecs_ecs_world_t *world);
    void flecs_ecs_atfini(
        flecs_ecs_world_t *world,
        flecs_ecs_fini_action_t action,
        void *ctx);
    flecs_ecs_entities_t flecs_ecs_get_entities(
        const flecs_ecs_world_t *world);
    flecs_ecs_flags32_t flecs_ecs_world_get_flags(
        const flecs_ecs_world_t *world);
    float flecs_ecs_frame_begin(
        flecs_ecs_world_t *world,
        float delta_time);
    void flecs_ecs_frame_end(
        flecs_ecs_world_t *world);
    void flecs_ecs_run_post_frame(
        flecs_ecs_world_t *world,
        flecs_ecs_fini_action_t action,
        void *ctx);
    void flecs_ecs_quit(
        flecs_ecs_world_t *world);
    _Bool flecs_ecs_should_quit(
        const flecs_ecs_world_t *world);
    void flecs_ecs_measure_frame_time(
        flecs_ecs_world_t *world,
        _Bool enable);
    void flecs_ecs_measure_system_time(
        flecs_ecs_world_t *world,
        _Bool enable);
    void flecs_ecs_set_target_fps(
        flecs_ecs_world_t *world,
        float fps);
    void flecs_ecs_set_default_query_flags(
        flecs_ecs_world_t *world,
        flecs_ecs_flags32_t flags);
    _Bool flecs_ecs_readonly_begin(
        flecs_ecs_world_t *world,
        _Bool multi_threaded);
    void flecs_ecs_readonly_end(
        flecs_ecs_world_t *world);
    void flecs_ecs_merge(
        flecs_ecs_world_t *stage);
    _Bool flecs_ecs_defer_begin(
        flecs_ecs_world_t *world);
    _Bool flecs_ecs_defer_end(
        flecs_ecs_world_t *world);
    void flecs_ecs_defer_suspend(
        flecs_ecs_world_t *world);
    void flecs_ecs_defer_resume(
        flecs_ecs_world_t *world);
    _Bool flecs_ecs_is_deferred(
        const flecs_ecs_world_t *world);
    _Bool flecs_ecs_is_defer_suspended(
        const flecs_ecs_world_t *world);
    void flecs_ecs_set_stage_count(
        flecs_ecs_world_t *world,
        int32_t stages);
    int32_t flecs_ecs_get_stage_count(
        const flecs_ecs_world_t *world);
    flecs_ecs_world_t *flecs_ecs_get_stage(
        const flecs_ecs_world_t *world,
        int32_t stage_id);
    _Bool flecs_ecs_stage_is_readonly(
        const flecs_ecs_world_t *world);
    flecs_ecs_world_t *flecs_ecs_stage_new(
        flecs_ecs_world_t *world);
    void flecs_ecs_stage_free(
        flecs_ecs_world_t *stage);
    int32_t flecs_ecs_stage_get_id(
        const flecs_ecs_world_t *world);
    void flecs_ecs_set_ctx(
        flecs_ecs_world_t *world,
        void *ctx,
        flecs_ecs_ctx_free_t ctx_free);
    void flecs_ecs_set_binding_ctx(
        flecs_ecs_world_t *world,
        void *ctx,
        flecs_ecs_ctx_free_t ctx_free);
    void *flecs_ecs_get_ctx(
        const flecs_ecs_world_t *world);
    void *flecs_ecs_get_binding_ctx(
        const flecs_ecs_world_t *world);
    const flecs_ecs_build_info_t *flecs_ecs_get_build_info(void);
    const flecs_ecs_world_info_t *flecs_ecs_get_world_info(
        const flecs_ecs_world_t *world);
    void flecs_ecs_dim(
        flecs_ecs_world_t *world,
        int32_t entity_count);
    void flecs_ecs_shrink(
        flecs_ecs_world_t *world);
    const flecs_ecs_entity_range_t *flecs_ecs_entity_range_new(
        flecs_ecs_world_t *world,
        uint32_t min,
        uint32_t max);
    void flecs_ecs_entity_range_set(
        flecs_ecs_world_t *world,
        const flecs_ecs_entity_range_t *range);
    const flecs_ecs_entity_range_t *flecs_ecs_entity_range_get(
        const flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_get_max_id(
        const flecs_ecs_world_t *world);
    void flecs_ecs_run_aperiodic(
        flecs_ecs_world_t *world,
        flecs_ecs_flags32_t flags);
    int32_t flecs_ecs_delete_empty_tables(
        flecs_ecs_world_t *world,
        const flecs_ecs_delete_empty_tables_desc_t *desc);
    const flecs_ecs_world_t *flecs_ecs_get_world(
        const flecs_ecs_poly_t *poly);
    flecs_ecs_entity_t flecs_ecs_get_entity(
        const flecs_ecs_poly_t *poly);
    _Bool flecs_poly_is_(
        const flecs_ecs_poly_t *object,
        int32_t type);
    flecs_ecs_id_t flecs_ecs_make_pair(
        flecs_ecs_entity_t first,
        flecs_ecs_entity_t second);
    void flecs_ecs_exclusive_access_begin(
        flecs_ecs_world_t *world,
        const char *thread_name);
    void flecs_ecs_exclusive_access_end(
        flecs_ecs_world_t *world,
        _Bool lock_world);
    flecs_ecs_entity_t flecs_ecs_new(
        flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_new_low_id(
        flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_new_w_id(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    flecs_ecs_entity_t flecs_ecs_new_w_table(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table);
    flecs_ecs_entity_t flecs_ecs_entity_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_entity_desc_t *desc);
    const flecs_ecs_entity_t *flecs_ecs_bulk_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_bulk_desc_t *desc);
    const flecs_ecs_entity_t *flecs_ecs_bulk_new_w_id(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t component,
        int32_t count);
    flecs_ecs_entity_t flecs_ecs_clone(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t dst,
        flecs_ecs_entity_t src,
        _Bool copy_value);
    void flecs_ecs_delete(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    void flecs_ecs_delete_with(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    void flecs_ecs_set_child_order(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        const flecs_ecs_entity_t *children,
        int32_t child_count);
    flecs_ecs_entities_t flecs_ecs_get_ordered_children(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent);
    void flecs_ecs_add_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    void flecs_ecs_remove_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    void flecs_ecs_auto_override_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    void flecs_ecs_clear(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    void flecs_ecs_remove_all(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    flecs_ecs_entity_t flecs_ecs_set_with(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    flecs_ecs_id_t flecs_ecs_get_with(
        const flecs_ecs_world_t *world);
    void flecs_ecs_enable(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        _Bool enabled);
    void flecs_ecs_enable_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component,
        _Bool enable);
    _Bool flecs_ecs_is_enabled_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    const void *flecs_ecs_get_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    void *flecs_ecs_get_mut_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    void *flecs_ecs_ensure_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component,
        size_t size);
    flecs_ecs_ref_t flecs_ecs_ref_init_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    void *flecs_ecs_ref_get_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_ref_t *ref,
        flecs_ecs_id_t component);
    void flecs_ecs_ref_update(
        const flecs_ecs_world_t *world,
        flecs_ecs_ref_t *ref);
    void *flecs_ecs_emplace_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component,
        size_t size,
        _Bool *is_new);
    void flecs_ecs_modified_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    void flecs_ecs_set_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component,
        size_t size,
        const void *ptr);
    _Bool flecs_ecs_is_valid(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t e);
    _Bool flecs_ecs_is_alive(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t e);
    flecs_ecs_id_t flecs_ecs_strip_generation(
        flecs_ecs_entity_t e);
    flecs_ecs_entity_t flecs_ecs_get_alive(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t e);
    void flecs_ecs_make_alive(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    void flecs_ecs_make_alive_id(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    _Bool flecs_ecs_exists(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    void flecs_ecs_set_version(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    uint32_t flecs_ecs_get_version(
        flecs_ecs_entity_t entity);
    const flecs_ecs_type_t *flecs_ecs_get_type(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    flecs_ecs_table_t *flecs_ecs_get_table(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    char *flecs_ecs_type_str(
        const flecs_ecs_world_t *world,
        const flecs_ecs_type_t *type);
    char *flecs_ecs_table_str(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table);
    char *flecs_ecs_entity_str(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    _Bool flecs_ecs_has_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    _Bool flecs_ecs_owns_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);
    flecs_ecs_entity_t flecs_ecs_get_target(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_entity_t rel,
        int32_t index);
    flecs_ecs_entity_t flecs_ecs_get_parent(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    flecs_ecs_entity_t flecs_ecs_new_w_parent(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        const char *name);
    flecs_ecs_entity_t flecs_ecs_get_target_for_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_entity_t rel,
        flecs_ecs_id_t component);
    int32_t flecs_ecs_get_depth(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_entity_t rel);
    int32_t flecs_ecs_count_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t entity);
    const char *flecs_ecs_get_name(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    const char *flecs_ecs_get_symbol(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    flecs_ecs_entity_t flecs_ecs_set_name(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *name);
    flecs_ecs_entity_t flecs_ecs_set_symbol(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *symbol);
    void flecs_ecs_set_alias(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *alias);
    flecs_ecs_entity_t flecs_ecs_lookup(
        const flecs_ecs_world_t *world,
        const char *path);
    flecs_ecs_entity_t flecs_ecs_lookup_child(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        const char *name);
    flecs_ecs_entity_t flecs_ecs_lookup_path_w_sep(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        const char *path,
        const char *sep,
        const char *prefix,
        _Bool recursive);
    flecs_ecs_entity_t flecs_ecs_lookup_symbol(
        const flecs_ecs_world_t *world,
        const char *symbol,
        _Bool lookup_as_path,
        _Bool recursive);
    char *flecs_ecs_get_path_w_sep(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        flecs_ecs_entity_t child,
        const char *sep,
        const char *prefix);
    void flecs_ecs_get_path_w_sep_buf(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        flecs_ecs_entity_t child,
        const char *sep,
        const char *prefix,
        flecs_ecs_strbuf_t *buf,
        _Bool escape);
    flecs_ecs_entity_t flecs_ecs_new_from_path_w_sep(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        const char *path,
        const char *sep,
        const char *prefix);
    flecs_ecs_entity_t flecs_ecs_add_path_w_sep(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_entity_t parent,
        const char *path,
        const char *sep,
        const char *prefix);
    flecs_ecs_entity_t flecs_ecs_set_scope(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t scope);
    flecs_ecs_entity_t flecs_ecs_get_scope(
        const flecs_ecs_world_t *world);
    const char *flecs_ecs_set_name_prefix(
        flecs_ecs_world_t *world,
        const char *prefix);
    flecs_ecs_entity_t *flecs_ecs_set_lookup_path(
        flecs_ecs_world_t *world,
        const flecs_ecs_entity_t *lookup_path);
    flecs_ecs_entity_t *flecs_ecs_get_lookup_path(
        const flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_component_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_component_desc_t *desc);
    const flecs_ecs_type_info_t *flecs_ecs_get_type_info(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    void flecs_ecs_set_hooks_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t component,
        const flecs_ecs_type_hooks_t *hooks);
    const flecs_ecs_type_hooks_t *flecs_ecs_get_hooks_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t component);
    _Bool flecs_ecs_id_is_tag(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    _Bool flecs_ecs_id_in_use(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    flecs_ecs_entity_t flecs_ecs_get_typeid(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    _Bool flecs_ecs_id_match(
        flecs_ecs_id_t component,
        flecs_ecs_id_t pattern);
    _Bool flecs_ecs_id_is_pair(
        flecs_ecs_id_t component);
    _Bool flecs_ecs_id_is_wildcard(
        flecs_ecs_id_t component);
    _Bool flecs_ecs_id_is_any(
        flecs_ecs_id_t component);
    _Bool flecs_ecs_id_is_valid(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    flecs_ecs_flags32_t flecs_ecs_id_get_flags(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    const char *flecs_ecs_id_flag_str(
        uint64_t component_flags);
    char *flecs_ecs_id_str(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    void flecs_ecs_id_str_buf(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component,
        flecs_ecs_strbuf_t *buf);
    flecs_ecs_id_t flecs_ecs_id_from_str(
        const flecs_ecs_world_t *world,
        const char *expr);
    _Bool flecs_ecs_term_ref_is_set(
        const flecs_ecs_term_ref_t *ref);
    _Bool flecs_ecs_term_is_initialized(
        const flecs_ecs_term_t *term);
    _Bool flecs_ecs_term_match_this(
        const flecs_ecs_term_t *term);
    _Bool flecs_ecs_term_match_0(
        const flecs_ecs_term_t *term);
    char *flecs_ecs_term_str(
        const flecs_ecs_world_t *world,
        const flecs_ecs_term_t *term);
    char *flecs_ecs_query_str(
        const flecs_ecs_query_t *query);
    flecs_ecs_iter_t flecs_ecs_each_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_id_t component);
    _Bool flecs_ecs_each_next(
        flecs_ecs_iter_t *it);
    flecs_ecs_iter_t flecs_ecs_children(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent);
    flecs_ecs_iter_t flecs_ecs_children_w_rel(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t relationship,
        flecs_ecs_entity_t parent);
    _Bool flecs_ecs_children_next(
        flecs_ecs_iter_t *it);
    flecs_ecs_query_t *flecs_ecs_query_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_query_desc_t *desc);
    void flecs_ecs_query_fini(
        flecs_ecs_query_t *query);
    int32_t flecs_ecs_query_find_var(
        const flecs_ecs_query_t *query,
        const char *name);
    const char *flecs_ecs_query_var_name(
        const flecs_ecs_query_t *query,
        int32_t var_id);
    _Bool flecs_ecs_query_var_is_entity(
        const flecs_ecs_query_t *query,
        int32_t var_id);
    flecs_ecs_iter_t flecs_ecs_query_iter(
        const flecs_ecs_world_t *world,
        const flecs_ecs_query_t *query);
    _Bool flecs_ecs_query_next(
        flecs_ecs_iter_t *it);
    _Bool flecs_ecs_query_has(
        const flecs_ecs_query_t *query,
        flecs_ecs_entity_t entity,
        flecs_ecs_iter_t *it);
    _Bool flecs_ecs_query_has_table(
        const flecs_ecs_query_t *query,
        flecs_ecs_table_t *table,
        flecs_ecs_iter_t *it);
    _Bool flecs_ecs_query_has_range(
        const flecs_ecs_query_t *query,
        flecs_ecs_table_range_t *range,
        flecs_ecs_iter_t *it);
    int32_t flecs_ecs_query_match_count(
        const flecs_ecs_query_t *query);
    char *flecs_ecs_query_plan(
        const flecs_ecs_query_t *query);
    char *flecs_ecs_query_plan_w_profile(
        const flecs_ecs_query_t *query,
        const flecs_ecs_iter_t *it);
    char *flecs_ecs_query_plans(
        const flecs_ecs_query_t *query);
    const char *flecs_ecs_query_args_parse(
        flecs_ecs_query_t *query,
        flecs_ecs_iter_t *it,
        const char *expr);
    _Bool flecs_ecs_query_changed(
        flecs_ecs_query_t *query);
    const flecs_ecs_query_t *flecs_ecs_query_get(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t query);
    void flecs_ecs_iter_skip(
        flecs_ecs_iter_t *it);
    void flecs_ecs_iter_set_group(
        flecs_ecs_iter_t *it,
        uint64_t group_id);
    const flecs_ecs_map_t *flecs_ecs_query_get_groups(
        const flecs_ecs_query_t *query);
    void *flecs_ecs_query_get_group_ctx(
        const flecs_ecs_query_t *query,
        uint64_t group_id);
    const flecs_ecs_query_group_info_t *flecs_ecs_query_get_group_info(
        const flecs_ecs_query_t *query,
        uint64_t group_id);
    flecs_ecs_query_count_t flecs_ecs_query_count(
        const flecs_ecs_query_t *query);
    _Bool flecs_ecs_query_is_true(
        const flecs_ecs_query_t *query);
    const flecs_ecs_query_t *flecs_ecs_query_get_cache_query(
        const flecs_ecs_query_t *query);
    void flecs_ecs_emit(
        flecs_ecs_world_t *world,
        flecs_ecs_event_desc_t *desc);
    void flecs_ecs_enqueue(
        flecs_ecs_world_t *world,
        flecs_ecs_event_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_observer_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_observer_desc_t *desc);
    const flecs_ecs_observer_t *flecs_ecs_observer_get(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t observer);
    _Bool flecs_ecs_iter_next(
        flecs_ecs_iter_t *it);
    void flecs_ecs_iter_fini(
        flecs_ecs_iter_t *it);
    int32_t flecs_ecs_iter_count(
        flecs_ecs_iter_t *it);
    _Bool flecs_ecs_iter_is_true(
        flecs_ecs_iter_t *it);
    flecs_ecs_entity_t flecs_ecs_iter_first(
        flecs_ecs_iter_t *it);
    void flecs_ecs_iter_set_var(
        flecs_ecs_iter_t *it,
        int32_t var_id,
        flecs_ecs_entity_t entity);
    void flecs_ecs_iter_set_var_as_table(
        flecs_ecs_iter_t *it,
        int32_t var_id,
        const flecs_ecs_table_t *table);
    void flecs_ecs_iter_set_var_as_range(
        flecs_ecs_iter_t *it,
        int32_t var_id,
        const flecs_ecs_table_range_t *range);
    flecs_ecs_entity_t flecs_ecs_iter_get_var(
        flecs_ecs_iter_t *it,
        int32_t var_id);
    const char *flecs_ecs_iter_get_var_name(
        const flecs_ecs_iter_t *it,
        int32_t var_id);
    int32_t flecs_ecs_iter_get_var_count(
        const flecs_ecs_iter_t *it);
    flecs_ecs_var_t *flecs_ecs_iter_get_vars(
        const flecs_ecs_iter_t *it);
    flecs_ecs_table_t *flecs_ecs_iter_get_var_as_table(
        flecs_ecs_iter_t *it,
        int32_t var_id);
    flecs_ecs_table_range_t flecs_ecs_iter_get_var_as_range(
        flecs_ecs_iter_t *it,
        int32_t var_id);
    _Bool flecs_ecs_iter_var_is_constrained(
        flecs_ecs_iter_t *it,
        int32_t var_id);
    uint64_t flecs_ecs_iter_get_group(
        const flecs_ecs_iter_t *it);
    _Bool flecs_ecs_iter_changed(
        flecs_ecs_iter_t *it);
    char *flecs_ecs_iter_str(
        const flecs_ecs_iter_t *it);
    flecs_ecs_iter_t flecs_ecs_page_iter(
        const flecs_ecs_iter_t *it,
        int32_t offset,
        int32_t limit);
    _Bool flecs_ecs_page_next(
        flecs_ecs_iter_t *it);
    flecs_ecs_iter_t flecs_ecs_worker_iter(
        const flecs_ecs_iter_t *it,
        int32_t index,
        int32_t count);
    _Bool flecs_ecs_worker_next(
        flecs_ecs_iter_t *it);
    void *flecs_ecs_field_w_size(
        const flecs_ecs_iter_t *it,
        size_t size,
        int8_t index);
    void *flecs_ecs_field_at_w_size(
        const flecs_ecs_iter_t *it,
        size_t size,
        int8_t index,
        int32_t row);
    _Bool flecs_ecs_field_is_readonly(
        const flecs_ecs_iter_t *it,
        int8_t index);
    _Bool flecs_ecs_field_is_writeonly(
        const flecs_ecs_iter_t *it,
        int8_t index);
    _Bool flecs_ecs_field_is_set(
        const flecs_ecs_iter_t *it,
        int8_t index);
    flecs_ecs_id_t flecs_ecs_field_id(
        const flecs_ecs_iter_t *it,
        int8_t index);
    int32_t flecs_ecs_field_column(
        const flecs_ecs_iter_t *it,
        int8_t index);
    flecs_ecs_entity_t flecs_ecs_field_src(
        const flecs_ecs_iter_t *it,
        int8_t index);
    size_t flecs_ecs_field_size(
        const flecs_ecs_iter_t *it,
        int8_t index);
    _Bool flecs_ecs_field_is_self(
        const flecs_ecs_iter_t *it,
        int8_t index);
    const flecs_ecs_type_t *flecs_ecs_table_get_type(
        const flecs_ecs_table_t *table);
    int32_t flecs_ecs_table_get_type_index(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        flecs_ecs_id_t component);
    int32_t flecs_ecs_table_get_column_index(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        flecs_ecs_id_t component);
    int32_t flecs_ecs_table_column_count(
        const flecs_ecs_table_t *table);
    int32_t flecs_ecs_table_type_to_column_index(
        const flecs_ecs_table_t *table,
        int32_t index);
    int32_t flecs_ecs_table_column_to_type_index(
        const flecs_ecs_table_t *table,
        int32_t index);
    void *flecs_ecs_table_get_column(
        const flecs_ecs_table_t *table,
        int32_t index,
        int32_t offset);
    void *flecs_ecs_table_get_id(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        flecs_ecs_id_t component,
        int32_t offset);
    size_t flecs_ecs_table_get_column_size(
        const flecs_ecs_table_t *table,
        int32_t index);
    int32_t flecs_ecs_table_count(
        const flecs_ecs_table_t *table);
    int32_t flecs_ecs_table_size(
        const flecs_ecs_table_t *table);
    const flecs_ecs_entity_t *flecs_ecs_table_entities(
        const flecs_ecs_table_t *table);
    _Bool flecs_ecs_table_has_id(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        flecs_ecs_id_t component);
    flecs_ecs_entity_t flecs_ecs_table_get_target(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        flecs_ecs_entity_t relationship,
        int32_t index);
    int32_t flecs_ecs_table_get_depth(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        flecs_ecs_entity_t rel);
    flecs_ecs_table_t *flecs_ecs_table_add_id(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table,
        flecs_ecs_id_t component);
    flecs_ecs_table_t *flecs_ecs_table_find(
        flecs_ecs_world_t *world,
        const flecs_ecs_id_t *ids,
        int32_t id_count);
    flecs_ecs_table_t *flecs_ecs_table_remove_id(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table,
        flecs_ecs_id_t component);
    void flecs_ecs_table_lock(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table);
    void flecs_ecs_table_unlock(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table);
    _Bool flecs_ecs_table_has_flags(
        flecs_ecs_table_t *table,
        flecs_ecs_flags32_t flags);
    _Bool flecs_ecs_table_has_traversable(
        const flecs_ecs_table_t *table);
    void flecs_ecs_table_swap_rows(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table,
        int32_t row_1,
        int32_t row_2);
    _Bool flecs_ecs_commit(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_record_t *record,
        flecs_ecs_table_t *table,
        const flecs_ecs_type_t *added,
        const flecs_ecs_type_t *removed);
    int32_t flecs_ecs_search(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        flecs_ecs_id_t component,
        flecs_ecs_id_t *component_out);
    int32_t flecs_ecs_search_offset(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        int32_t offset,
        flecs_ecs_id_t component,
        flecs_ecs_id_t *component_out);
    int32_t flecs_ecs_search_relation(
        const flecs_ecs_world_t *world,
        const flecs_ecs_table_t *table,
        int32_t offset,
        flecs_ecs_id_t component,
        flecs_ecs_entity_t rel,
        flecs_ecs_flags64_t flags,
        flecs_ecs_entity_t *tgt_out,
        flecs_ecs_id_t *component_out,
        struct ecs_table_record_t **tr_out);
    int32_t flecs_ecs_search_relation_for_entity(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t id,
        flecs_ecs_entity_t rel,
        _Bool self,
        flecs_ecs_component_record_t *cr,
        flecs_ecs_entity_t *tgt_out,
        flecs_ecs_id_t *id_out,
        struct ecs_table_record_t **tr_out);
    void flecs_ecs_table_clear_entities(
        flecs_ecs_world_t *world,
        flecs_ecs_table_t *table);
    int flecs_ecs_value_init(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        void *ptr);
    int flecs_ecs_value_init_w_type_info(
        const flecs_ecs_world_t *world,
        const flecs_ecs_type_info_t *ti,
        void *ptr);
    void *flecs_ecs_value_new(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t type);
    void *flecs_ecs_value_new_w_type_info(
        flecs_ecs_world_t *world,
        const flecs_ecs_type_info_t *ti);
    int flecs_ecs_value_fini_w_type_info(
        const flecs_ecs_world_t *world,
        const flecs_ecs_type_info_t *ti,
        void *ptr);
    int flecs_ecs_value_fini(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        void *ptr);
    int flecs_ecs_value_free(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        void *ptr);
    int flecs_ecs_value_copy_w_type_info(
        const flecs_ecs_world_t *world,
        const flecs_ecs_type_info_t *ti,
        void *dst,
        const void *src);
    int flecs_ecs_value_copy(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        void *dst,
        const void *src);
    int flecs_ecs_value_move_w_type_info(
        const flecs_ecs_world_t *world,
        const flecs_ecs_type_info_t *ti,
        void *dst,
        void *src);
    int flecs_ecs_value_move(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        void *dst,
        void *src);
    int flecs_ecs_value_move_ctor_w_type_info(
        const flecs_ecs_world_t *world,
        const flecs_ecs_type_info_t *ti,
        void *dst,
        void *src);
    int flecs_ecs_value_move_ctor(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        void *dst,
        void *src);
    void flecs_ecs_deprecated_(
        const char *file,
        int32_t line,
        const char *msg);
    void flecs_ecs_log_push_(int32_t level);
    void flecs_ecs_log_pop_(int32_t level);
    _Bool flecs_ecs_should_log(int32_t level);
    const char *flecs_ecs_strerror(
        int32_t error_code);
    void flecs_ecs_printv_(
        int level,
        const char *file,
        int32_t line,
        const char *fmt,
        va_list args);
    void flecs_ecs_logv_(
        int level,
        const char *file,
        int32_t line,
        const char *fmt,
        va_list args);
    void flecs_ecs_parser_errorv_(
        const char *name,
        const char *expr,
        int64_t column,
        const char *fmt,
        va_list args);
    void flecs_ecs_parser_warningv_(
        const char *name,
        const char *expr,
        int64_t column,
        const char *fmt,
        va_list args);
    int flecs_ecs_log_set_level(
        int level);
    int flecs_ecs_log_get_level(void);
    _Bool flecs_ecs_log_enable_colors(
        _Bool enabled);
    _Bool flecs_ecs_log_enable_timestamp(
        _Bool enabled);
    _Bool flecs_ecs_log_enable_timedelta(
        _Bool enabled);
    int flecs_ecs_log_last_error(void);
    void flecs_ecs_log_start_capture(_Bool capture_try);
    char *flecs_ecs_log_stop_capture(void);
    int flecs_ecs_app_run(
        flecs_ecs_world_t *world,
        flecs_ecs_app_desc_t *desc);
    int flecs_ecs_app_run_frame(
        flecs_ecs_world_t *world,
        const flecs_ecs_app_desc_t *desc);
    int flecs_ecs_app_set_run_action(
        flecs_ecs_app_run_action_t callback);
    int flecs_ecs_app_set_frame_action(
        flecs_ecs_app_frame_action_t callback);
    flecs_ecs_http_server_t *flecs_ecs_http_server_init(
        const flecs_ecs_http_server_desc_t *desc);
    void flecs_ecs_http_server_fini(
        flecs_ecs_http_server_t *server);
    int flecs_ecs_http_server_start(
        flecs_ecs_http_server_t *server);
    void flecs_ecs_http_server_dequeue(
        flecs_ecs_http_server_t *server,
        float delta_time);
    void flecs_ecs_http_server_stop(
        flecs_ecs_http_server_t *server);
    int flecs_ecs_http_server_http_request(
        flecs_ecs_http_server_t *srv,
        const char *req,
        flecs_ecs_size_t len,
        flecs_ecs_http_reply_t *reply_out);
    int flecs_ecs_http_server_request(
        flecs_ecs_http_server_t *srv,
        const char *method,
        const char *req,
        const char *body,
        flecs_ecs_http_reply_t *reply_out);
    void *flecs_ecs_http_server_ctx(
        flecs_ecs_http_server_t *srv);
    const char *flecs_ecs_http_get_header(
        const flecs_ecs_http_request_t *req,
        const char *name);
    const char *flecs_ecs_http_get_param(
        const flecs_ecs_http_request_t *req,
        const char *name);
    flecs_ecs_http_server_t *flecs_ecs_rest_server_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_http_server_desc_t *desc);
    void flecs_ecs_rest_server_fini(
        flecs_ecs_http_server_t *srv);
    void flecs_FlecsRestImport(
        flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_set_timeout(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t tick_source,
        float timeout);
    float flecs_ecs_get_timeout(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t tick_source);
    flecs_ecs_entity_t flecs_ecs_set_interval(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t tick_source,
        float interval);
    float flecs_ecs_get_interval(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t tick_source);
    void flecs_ecs_start_timer(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t tick_source);
    void flecs_ecs_stop_timer(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t tick_source);
    void flecs_ecs_reset_timer(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t tick_source);
    void flecs_ecs_randomize_timers(
        flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_set_rate(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t tick_source,
        int32_t rate,
        flecs_ecs_entity_t source);
    void flecs_ecs_set_tick_source(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t system,
        flecs_ecs_entity_t tick_source);
    void flecs_FlecsTimerImport(
        flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_pipeline_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_pipeline_desc_t *desc);
    void flecs_ecs_set_pipeline(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t pipeline);
    flecs_ecs_entity_t flecs_ecs_get_pipeline(
        const flecs_ecs_world_t *world);
    _Bool flecs_ecs_progress(
        flecs_ecs_world_t *world,
        float delta_time);
    void flecs_ecs_set_time_scale(
        flecs_ecs_world_t *world,
        float scale);
    void flecs_ecs_reset_clock(
        flecs_ecs_world_t *world);
    void flecs_ecs_run_pipeline(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t pipeline,
        float delta_time);
    void flecs_ecs_set_threads(
        flecs_ecs_world_t *world,
        int32_t threads);
    void flecs_ecs_set_task_threads(
        flecs_ecs_world_t *world,
        int32_t task_threads);
    _Bool flecs_ecs_using_task_threads(
        flecs_ecs_world_t *world);
    void flecs_FlecsPipelineImport(
        flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_system_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_system_desc_t *desc);
    const flecs_ecs_system_t *flecs_ecs_system_get(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t system);
    void flecs_ecs_system_set_group(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t system,
        uint64_t group_id);
    flecs_ecs_entity_t flecs_ecs_run(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t system,
        float delta_time,
        void *param);
    flecs_ecs_entity_t flecs_ecs_run_worker(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t system,
        int32_t stage_current,
        int32_t stage_count,
        float delta_time,
        void *param);
    void flecs_FlecsSystemImport(
        flecs_ecs_world_t *world);
    void flecs_ecs_world_stats_get(
        const flecs_ecs_world_t *world,
        flecs_ecs_world_stats_t *stats);
    void flecs_ecs_world_stats_reduce(
        flecs_ecs_world_stats_t *dst,
        const flecs_ecs_world_stats_t *src);
    void flecs_ecs_world_stats_reduce_last(
        flecs_ecs_world_stats_t *stats,
        const flecs_ecs_world_stats_t *old,
        int32_t count);
    void flecs_ecs_world_stats_repeat_last(
        flecs_ecs_world_stats_t *stats);
    void flecs_ecs_world_stats_copy_last(
        flecs_ecs_world_stats_t *dst,
        const flecs_ecs_world_stats_t *src);
    void flecs_ecs_world_stats_log(
        const flecs_ecs_world_t *world,
        const flecs_ecs_world_stats_t *stats);
    void flecs_ecs_query_stats_get(
        const flecs_ecs_world_t *world,
        const flecs_ecs_query_t *query,
        flecs_ecs_query_stats_t *stats);
    void flecs_ecs_query_cache_stats_reduce(
        flecs_ecs_query_stats_t *dst,
        const flecs_ecs_query_stats_t *src);
    void flecs_ecs_query_cache_stats_reduce_last(
        flecs_ecs_query_stats_t *stats,
        const flecs_ecs_query_stats_t *old,
        int32_t count);
    void flecs_ecs_query_cache_stats_repeat_last(
        flecs_ecs_query_stats_t *stats);
    void flecs_ecs_query_cache_stats_copy_last(
        flecs_ecs_query_stats_t *dst,
        const flecs_ecs_query_stats_t *src);
    _Bool flecs_ecs_system_stats_get(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t system,
        flecs_ecs_system_stats_t *stats);
    void flecs_ecs_system_stats_reduce(
        flecs_ecs_system_stats_t *dst,
        const flecs_ecs_system_stats_t *src);
    void flecs_ecs_system_stats_reduce_last(
        flecs_ecs_system_stats_t *stats,
        const flecs_ecs_system_stats_t *old,
        int32_t count);
    void flecs_ecs_system_stats_repeat_last(
        flecs_ecs_system_stats_t *stats);
    void flecs_ecs_system_stats_copy_last(
        flecs_ecs_system_stats_t *dst,
        const flecs_ecs_system_stats_t *src);
    _Bool flecs_ecs_pipeline_stats_get(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t pipeline,
        flecs_ecs_pipeline_stats_t *stats);
    void flecs_ecs_pipeline_stats_fini(
        flecs_ecs_pipeline_stats_t *stats);
    void flecs_ecs_pipeline_stats_reduce(
        flecs_ecs_pipeline_stats_t *dst,
        const flecs_ecs_pipeline_stats_t *src);
    void flecs_ecs_pipeline_stats_reduce_last(
        flecs_ecs_pipeline_stats_t *stats,
        const flecs_ecs_pipeline_stats_t *old,
        int32_t count);
    void flecs_ecs_pipeline_stats_repeat_last(
        flecs_ecs_pipeline_stats_t *stats);
    void flecs_ecs_pipeline_stats_copy_last(
        flecs_ecs_pipeline_stats_t *dst,
        const flecs_ecs_pipeline_stats_t *src);
    void flecs_ecs_metric_reduce(
        flecs_ecs_metric_t *dst,
        const flecs_ecs_metric_t *src,
        int32_t t_dst,
        int32_t t_src);
    void flecs_ecs_metric_reduce_last(
        flecs_ecs_metric_t *m,
        int32_t t,
        int32_t count);
    void flecs_ecs_metric_copy(
        flecs_ecs_metric_t *m,
        int32_t dst,
        int32_t src);
    flecs_ecs_entities_memory_t flecs_ecs_entity_memory_get(
        const flecs_ecs_world_t *world);
    void flecs_ecs_component_record_memory_get(
        const flecs_ecs_component_record_t *cr,
        flecs_ecs_component_index_memory_t *result);
    flecs_ecs_component_index_memory_t flecs_ecs_component_index_memory_get(
        const flecs_ecs_world_t *world);
    void flecs_ecs_query_memory_get(
        const flecs_ecs_query_t *query,
        flecs_ecs_query_memory_t *result);
    flecs_ecs_query_memory_t flecs_ecs_queries_memory_get(
        const flecs_ecs_world_t *world);
    void flecs_ecs_table_component_memory_get(
        const flecs_ecs_table_t *table,
        flecs_ecs_component_memory_t *result);
    flecs_ecs_component_memory_t flecs_ecs_component_memory_get(
        const flecs_ecs_world_t *world);
    void flecs_ecs_table_memory_get(
        const flecs_ecs_table_t *table,
        flecs_ecs_table_memory_t *result);
    flecs_ecs_table_memory_t flecs_ecs_tables_memory_get(
        const flecs_ecs_world_t *world);
    flecs_ecs_table_histogram_t flecs_ecs_table_histogram_get(
        const flecs_ecs_world_t *world);
    flecs_ecs_misc_memory_t flecs_ecs_misc_memory_get(
        const flecs_ecs_world_t *world);
    flecs_ecs_allocator_memory_t flecs_ecs_allocator_memory_get(
        const flecs_ecs_world_t *world);
    flecs_ecs_size_t flecs_ecs_memory_get(
        const flecs_ecs_world_t *world);
    void flecs_FlecsStatsImport(
        flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_metric_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_metric_desc_t *desc);
    void flecs_FlecsMetricsImport(
        flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_alert_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_alert_desc_t *desc);
    int32_t flecs_ecs_get_alert_count(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_entity_t alert);
    flecs_ecs_entity_t flecs_ecs_get_alert(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_entity_t alert);
    void flecs_FlecsAlertsImport(
        flecs_ecs_world_t *world);
    const char *flecs_ecs_ptr_from_json(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        void *ptr,
        const char *json,
        const flecs_ecs_from_json_desc_t *desc);
    const char *flecs_ecs_entity_from_json(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *json,
        const flecs_ecs_from_json_desc_t *desc);
    const char *flecs_ecs_world_from_json(
        flecs_ecs_world_t *world,
        const char *json,
        const flecs_ecs_from_json_desc_t *desc);
    const char *flecs_ecs_world_from_json_file(
        flecs_ecs_world_t *world,
        const char *filename,
        const flecs_ecs_from_json_desc_t *desc);
    char *flecs_ecs_array_to_json(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const void *data,
        int32_t count);
    int flecs_ecs_array_to_json_buf(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const void *data,
        int32_t count,
        flecs_ecs_strbuf_t *buf_out);
    char *flecs_ecs_ptr_to_json(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const void *data);
    int flecs_ecs_ptr_to_json_buf(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const void *data,
        flecs_ecs_strbuf_t *buf_out);
    char *flecs_ecs_type_info_to_json(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type);
    int flecs_ecs_type_info_to_json_buf(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        flecs_ecs_strbuf_t *buf_out);
    char *flecs_ecs_entity_to_json(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const flecs_ecs_entity_to_json_desc_t *desc);
    int flecs_ecs_entity_to_json_buf(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_strbuf_t *buf_out,
        const flecs_ecs_entity_to_json_desc_t *desc);
    char *flecs_ecs_iter_to_json(
        flecs_ecs_iter_t *iter,
        const flecs_ecs_iter_to_json_desc_t *desc);
    int flecs_ecs_iter_to_json_buf(
        flecs_ecs_iter_t *iter,
        flecs_ecs_strbuf_t *buf_out,
        const flecs_ecs_iter_to_json_desc_t *desc);
    char *flecs_ecs_world_to_json(
        flecs_ecs_world_t *world,
        const flecs_ecs_world_to_json_desc_t *desc);
    int flecs_ecs_world_to_json_buf(
        flecs_ecs_world_t *world,
        flecs_ecs_strbuf_t *buf_out,
        const flecs_ecs_world_to_json_desc_t *desc);
    void flecs_FlecsUnitsImport(
        flecs_ecs_world_t *world);
    flecs_ecs_script_t *flecs_ecs_script_parse(
        flecs_ecs_world_t *world,
        const char *name,
        const char *code,
        const flecs_ecs_script_eval_desc_t *desc,
        flecs_ecs_script_eval_result_t *result);
    int flecs_ecs_script_eval(
        const flecs_ecs_script_t *script,
        const flecs_ecs_script_eval_desc_t *desc,
        flecs_ecs_script_eval_result_t *result);
    void flecs_ecs_script_free(
        flecs_ecs_script_t *script);
    int flecs_ecs_script_run(
        flecs_ecs_world_t *world,
        const char *name,
        const char *code,
        flecs_ecs_script_eval_result_t *result);
    int flecs_ecs_script_run_file(
        flecs_ecs_world_t *world,
        const char *filename);
    flecs_ecs_script_runtime_t *flecs_ecs_script_runtime_new(void);
    void flecs_ecs_script_runtime_free(
        flecs_ecs_script_runtime_t *runtime);
    int flecs_ecs_script_ast_to_buf(
        flecs_ecs_script_t *script,
        flecs_ecs_strbuf_t *buf,
        _Bool colors);
    char *flecs_ecs_script_ast_to_str(
        flecs_ecs_script_t *script,
        _Bool colors);
    flecs_ecs_entity_t flecs_ecs_script_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_script_desc_t *desc);
    int flecs_ecs_script_update(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t script,
        flecs_ecs_entity_t instance,
        const char *code);
    void flecs_ecs_script_clear(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t script,
        flecs_ecs_entity_t instance);
    flecs_ecs_script_vars_t *flecs_ecs_script_vars_init(
        flecs_ecs_world_t *world);
    void flecs_ecs_script_vars_fini(
        flecs_ecs_script_vars_t *vars);
    flecs_ecs_script_vars_t *flecs_ecs_script_vars_push(
        flecs_ecs_script_vars_t *parent);
    flecs_ecs_script_vars_t *flecs_ecs_script_vars_pop(
        flecs_ecs_script_vars_t *vars);
    flecs_ecs_script_var_t *flecs_ecs_script_vars_declare(
        flecs_ecs_script_vars_t *vars,
        const char *name);
    flecs_ecs_script_var_t *flecs_ecs_script_vars_define_id(
        flecs_ecs_script_vars_t *vars,
        const char *name,
        flecs_ecs_entity_t type);
    flecs_ecs_script_var_t *flecs_ecs_script_vars_lookup(
        const flecs_ecs_script_vars_t *vars,
        const char *name);
    flecs_ecs_script_var_t *flecs_ecs_script_vars_from_sp(
        const flecs_ecs_script_vars_t *vars,
        int32_t sp);
    void flecs_ecs_script_vars_print(
        const flecs_ecs_script_vars_t *vars);
    void flecs_ecs_script_vars_set_size(
        flecs_ecs_script_vars_t *vars,
        int32_t count);
    void flecs_ecs_script_vars_from_iter(
        const flecs_ecs_iter_t *it,
        flecs_ecs_script_vars_t *vars,
        int offset);
    const char *flecs_ecs_expr_run(
        flecs_ecs_world_t *world,
        const char *ptr,
        flecs_ecs_value_t *value,
        const flecs_ecs_expr_eval_desc_t *desc);
    flecs_ecs_script_t *flecs_ecs_expr_parse(
        flecs_ecs_world_t *world,
        const char *expr,
        const flecs_ecs_expr_eval_desc_t *desc);
    int flecs_ecs_expr_eval(
        const flecs_ecs_script_t *script,
        flecs_ecs_value_t *value,
        const flecs_ecs_expr_eval_desc_t *desc);
    char *flecs_ecs_script_string_interpolate(
        flecs_ecs_world_t *world,
        const char *str,
        const flecs_ecs_script_vars_t *vars);
    flecs_ecs_entity_t flecs_ecs_const_var_init(
        flecs_ecs_world_t *world,
        flecs_ecs_const_var_desc_t *desc);
    flecs_ecs_value_t flecs_ecs_const_var_get(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t var);
    flecs_ecs_entity_t flecs_ecs_function_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_function_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_method_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_function_desc_t *desc);
    char *flecs_ecs_ptr_to_expr(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const void *data);
    int flecs_ecs_ptr_to_expr_buf(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const void *data,
        flecs_ecs_strbuf_t *buf);
    char *flecs_ecs_ptr_to_str(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const void *data);
    int flecs_ecs_ptr_to_str_buf(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const void *data,
        flecs_ecs_strbuf_t *buf);
    void flecs_FlecsScriptImport(
        flecs_ecs_world_t *world);
    void flecs_ecs_doc_set_uuid(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *uuid);
    void flecs_ecs_doc_set_name(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *name);
    void flecs_ecs_doc_set_brief(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *description);
    void flecs_ecs_doc_set_detail(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *description);
    void flecs_ecs_doc_set_link(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *link);
    void flecs_ecs_doc_set_color(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        const char *color);
    const char *flecs_ecs_doc_get_uuid(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    const char *flecs_ecs_doc_get_name(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    const char *flecs_ecs_doc_get_brief(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    const char *flecs_ecs_doc_get_detail(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    const char *flecs_ecs_doc_get_link(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    const char *flecs_ecs_doc_get_color(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity);
    void flecs_FlecsDocImport(
        flecs_ecs_world_t *world);
    char *flecs_ecs_meta_serializer_to_str(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t type);
    flecs_ecs_meta_cursor_t flecs_ecs_meta_cursor(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        void *ptr);
    void *flecs_ecs_meta_get_ptr(
        flecs_ecs_meta_cursor_t *cursor);
    int flecs_ecs_meta_next(
        flecs_ecs_meta_cursor_t *cursor);
    int flecs_ecs_meta_elem(
        flecs_ecs_meta_cursor_t *cursor,
        int32_t elem);
    int flecs_ecs_meta_member(
        flecs_ecs_meta_cursor_t *cursor,
        const char *name);
    int flecs_ecs_meta_try_member(
        flecs_ecs_meta_cursor_t *cursor,
        const char *name);
    int flecs_ecs_meta_dotmember(
        flecs_ecs_meta_cursor_t *cursor,
        const char *name);
    int flecs_ecs_meta_try_dotmember(
        flecs_ecs_meta_cursor_t *cursor,
        const char *name);
    int flecs_ecs_meta_push(
        flecs_ecs_meta_cursor_t *cursor);
    int flecs_ecs_meta_pop(
        flecs_ecs_meta_cursor_t *cursor);
    _Bool flecs_ecs_meta_is_collection(
        const flecs_ecs_meta_cursor_t *cursor);
    flecs_ecs_entity_t flecs_ecs_meta_get_type(
        const flecs_ecs_meta_cursor_t *cursor);
    flecs_ecs_entity_t flecs_ecs_meta_get_unit(
        const flecs_ecs_meta_cursor_t *cursor);
    const char *flecs_ecs_meta_get_member(
        const flecs_ecs_meta_cursor_t *cursor);
    flecs_ecs_entity_t flecs_ecs_meta_get_member_id(
        const flecs_ecs_meta_cursor_t *cursor);
    int flecs_ecs_meta_set_bool(
        flecs_ecs_meta_cursor_t *cursor,
        _Bool value);
    int flecs_ecs_meta_set_char(
        flecs_ecs_meta_cursor_t *cursor,
        char value);
    int flecs_ecs_meta_set_int(
        flecs_ecs_meta_cursor_t *cursor,
        int64_t value);
    int flecs_ecs_meta_set_uint(
        flecs_ecs_meta_cursor_t *cursor,
        uint64_t value);
    int flecs_ecs_meta_set_float(
        flecs_ecs_meta_cursor_t *cursor,
        double value);
    int flecs_ecs_meta_set_string(
        flecs_ecs_meta_cursor_t *cursor,
        const char *value);
    int flecs_ecs_meta_set_string_literal(
        flecs_ecs_meta_cursor_t *cursor,
        const char *value);
    int flecs_ecs_meta_set_entity(
        flecs_ecs_meta_cursor_t *cursor,
        flecs_ecs_entity_t value);
    int flecs_ecs_meta_set_id(
        flecs_ecs_meta_cursor_t *cursor,
        flecs_ecs_id_t value);
    int flecs_ecs_meta_set_null(
        flecs_ecs_meta_cursor_t *cursor);
    int flecs_ecs_meta_set_value(
        flecs_ecs_meta_cursor_t *cursor,
        const flecs_ecs_value_t *value);
    _Bool flecs_ecs_meta_get_bool(
        const flecs_ecs_meta_cursor_t *cursor);
    char flecs_ecs_meta_get_char(
        const flecs_ecs_meta_cursor_t *cursor);
    int64_t flecs_ecs_meta_get_int(
        const flecs_ecs_meta_cursor_t *cursor);
    uint64_t flecs_ecs_meta_get_uint(
        const flecs_ecs_meta_cursor_t *cursor);
    double flecs_ecs_meta_get_float(
        const flecs_ecs_meta_cursor_t *cursor);
    const char *flecs_ecs_meta_get_string(
        const flecs_ecs_meta_cursor_t *cursor);
    flecs_ecs_entity_t flecs_ecs_meta_get_entity(
        const flecs_ecs_meta_cursor_t *cursor);
    flecs_ecs_id_t flecs_ecs_meta_get_id(
        const flecs_ecs_meta_cursor_t *cursor);
    double flecs_ecs_meta_ptr_to_float(
        flecs_ecs_primitive_kind_t type_kind,
        const void *ptr);
    flecs_ecs_size_t flecs_ecs_meta_op_get_elem_count(
        const flecs_ecs_meta_op_t *op,
        const void *ptr);
    flecs_ecs_entity_t flecs_ecs_primitive_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_primitive_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_enum_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_enum_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_bitmask_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_bitmask_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_array_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_array_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_vector_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_vector_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_struct_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_struct_desc_t *desc);
    int flecs_ecs_struct_add_member(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const flecs_ecs_member_t *member);
    flecs_ecs_member_t *flecs_ecs_struct_get_member(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        const char *name);
    flecs_ecs_member_t *flecs_ecs_struct_get_nth_member(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t type,
        int32_t i);
    flecs_ecs_entity_t flecs_ecs_opaque_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_opaque_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_unit_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_unit_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_unit_prefix_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_unit_prefix_desc_t *desc);
    flecs_ecs_entity_t flecs_ecs_quantity_init(
        flecs_ecs_world_t *world,
        const flecs_ecs_entity_desc_t *desc);
    void flecs_FlecsMetaImport(
        flecs_ecs_world_t *world);
    int flecs_ecs_meta_from_desc(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t component,
        flecs_ecs_type_kind_t kind,
        const char *desc);
    void flecs_ecs_set_os_api_impl(void);
    flecs_ecs_entity_t flecs_ecs_import(
        flecs_ecs_world_t *world,
        flecs_ecs_module_action_t module,
        const char *module_name);
    flecs_ecs_entity_t flecs_ecs_import_c(
        flecs_ecs_world_t *world,
        flecs_ecs_module_action_t module,
        const char *module_name_c);
    flecs_ecs_entity_t flecs_ecs_import_from_library(
        flecs_ecs_world_t *world,
        const char *library_name,
        const char *module_name);
    flecs_ecs_entity_t flecs_ecs_module_init(
        flecs_ecs_world_t *world,
        const char *c_name,
        const flecs_ecs_component_desc_t *desc);
    char *flecs_ecs_cpp_get_type_name(
        char *type_name,
        const char *func_name,
        size_t len,
        size_t front_len);
    char *flecs_ecs_cpp_get_symbol_name(

        char *symbol_name,
        const char *type_name,

        size_t len);
    char *flecs_ecs_cpp_get_constant_name(
        char *constant_name,
        const char *func_name,
        size_t len,
        size_t back_len);
    const char *flecs_ecs_cpp_trim_module(
        flecs_ecs_world_t *world,
        const char *type_name);
    flecs_ecs_entity_t flecs_ecs_cpp_component_register(
        flecs_ecs_world_t *world,
        const flecs_ecs_cpp_component_desc_t *desc);
    void flecs_ecs_cpp_enum_init(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t id,
        flecs_ecs_entity_t underlying_type);
    flecs_ecs_entity_t flecs_ecs_cpp_enum_constant_register(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        flecs_ecs_entity_t id,
        const char *name,
        void *value,
        flecs_ecs_entity_t value_type,
        size_t value_size);
    flecs_ecs_cpp_get_mut_t flecs_ecs_cpp_set(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component,
        const void *new_ptr,
        size_t size);
    flecs_ecs_cpp_get_mut_t flecs_ecs_cpp_assign(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component,
        const void *new_ptr,
        size_t size);
    flecs_ecs_entity_t flecs_ecs_cpp_new(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t parent,
        const char *name,
        const char *sep,
        const char *root_sep);
    flecs_ecs_member_t *flecs_ecs_cpp_last_member(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t type);

#ifdef __cplusplus
}
#endif
