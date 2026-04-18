#include "flecs.h"
#include "atlas77-flecs.h"

void flecs_ecs_vec_init(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count)
{
    ecs_vec_init(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count);
}

void flecs_ecs_vec_init_w_dbg_info(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count,
    const char *type_name)
{
    ecs_vec_init_w_dbg_info(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count, type_name);
}

void flecs_ecs_vec_init_if(
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size)
{
    ecs_vec_init_if((ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

void flecs_ecs_vec_fini(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size)
{
    ecs_vec_fini(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

flecs_ecs_vec_t *flecs_ecs_vec_reset(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size)
{
    return (flecs_ecs_vec_t *)(ecs_vec_reset(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd));
}

void flecs_ecs_vec_clear(
    flecs_ecs_vec_t *vec)
{
    ecs_vec_clear((ecs_vec_t *)vec);
}

void *flecs_ecs_vec_append(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size)
{
    return ecs_vec_append(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

void flecs_ecs_vec_remove(
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem)
{
    ecs_vec_remove((ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem);
}

void flecs_ecs_vec_remove_ordered(
    flecs_ecs_vec_t *v,
    flecs_ecs_size_t size,
    int32_t index)
{
    ecs_vec_remove_ordered((ecs_vec_t *)v, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, index);
}

void flecs_ecs_vec_remove_last(
    flecs_ecs_vec_t *vec)
{
    ecs_vec_remove_last((ecs_vec_t *)vec);
}

flecs_ecs_vec_t flecs_ecs_vec_copy(
    struct ecs_allocator_t *allocator,
    const flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size)
{
    return ((union { flecs_ecs_vec_t ns; ecs_vec_t vd; }){.vd = ecs_vec_copy(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd)}).ns;
}

flecs_ecs_vec_t flecs_ecs_vec_copy_shrink(
    struct ecs_allocator_t *allocator,
    const flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size)
{
    return ((union { flecs_ecs_vec_t ns; ecs_vec_t vd; }){.vd = ecs_vec_copy_shrink(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd)}).ns;
}

void flecs_ecs_vec_reclaim(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size)
{
    ecs_vec_reclaim(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

void flecs_ecs_vec_set_size(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count)
{
    ecs_vec_set_size(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count);
}

void flecs_ecs_vec_set_min_size(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count)
{
    ecs_vec_set_min_size(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count);
}

void flecs_ecs_vec_set_min_size_w_type_info(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count,
    const flecs_ecs_type_info_t *ti)
{
    ecs_vec_set_min_size_w_type_info(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count, (ecs_type_info_t *)ti);
}

void flecs_ecs_vec_set_min_count(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count)
{
    ecs_vec_set_min_count(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count);
}

void flecs_ecs_vec_set_min_count_zeromem(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count)
{
    ecs_vec_set_min_count_zeromem(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count);
}

void flecs_ecs_vec_set_count(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count)
{
    ecs_vec_set_count(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count);
}

void flecs_ecs_vec_set_count_w_type_info(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count,
    const flecs_ecs_type_info_t *ti)
{
    ecs_vec_set_count_w_type_info(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count, (ecs_type_info_t *)ti);
}

void flecs_ecs_vec_set_min_count_w_type_info(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count,
    const flecs_ecs_type_info_t *ti)
{
    ecs_vec_set_min_count_w_type_info(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count, (ecs_type_info_t *)ti);
}

void *flecs_ecs_vec_grow(
    struct ecs_allocator_t *allocator,
    flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t elem_count)
{
    return ecs_vec_grow(allocator, (ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, elem_count);
}

int32_t flecs_ecs_vec_count(
    const flecs_ecs_vec_t *vec)
{
    return ecs_vec_count((ecs_vec_t *)vec);
}

int32_t flecs_ecs_vec_size(
    const flecs_ecs_vec_t *vec)
{
    return ecs_vec_size((ecs_vec_t *)vec);
}

void *flecs_ecs_vec_get(
    const flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size,
    int32_t index)
{
    return ecs_vec_get((ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, index);
}

void *flecs_ecs_vec_first(
    const flecs_ecs_vec_t *vec)
{
    return ecs_vec_first((ecs_vec_t *)vec);
}

void *flecs_ecs_vec_last(
    const flecs_ecs_vec_t *vec,
    flecs_ecs_size_t size)
{
    return ecs_vec_last((ecs_vec_t *)vec, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

void flecs_sparse_init(
    flecs_ecs_sparse_t *result,
    struct ecs_allocator_t *allocator,
    struct ecs_block_allocator_t *page_allocator,
    flecs_ecs_size_t size)
{
    flecs_sparse_init((ecs_sparse_t *)result, allocator, page_allocator, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

void flecs_sparse_fini(
    flecs_ecs_sparse_t *sparse)
{
    flecs_sparse_fini((ecs_sparse_t *)sparse);
}

void flecs_sparse_clear(
    flecs_ecs_sparse_t *sparse)
{
    flecs_sparse_clear((ecs_sparse_t *)sparse);
}

void *flecs_sparse_add(
    flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size)
{
    return flecs_sparse_add((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd);
}

uint64_t flecs_sparse_last_id(
    const flecs_ecs_sparse_t *sparse)
{
    return flecs_sparse_last_id((ecs_sparse_t *)sparse);
}

uint64_t flecs_sparse_new_id(
    flecs_ecs_sparse_t *sparse)
{
    return flecs_sparse_new_id((ecs_sparse_t *)sparse);
}

_Bool flecs_sparse_remove(
    flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t size,
    uint64_t id)
{
    return flecs_sparse_remove((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, id);
}

_Bool flecs_sparse_remove_w_gen(
    flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t size,
    uint64_t id)
{
    return flecs_sparse_remove_w_gen((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, id);
}

_Bool flecs_sparse_is_alive(
    const flecs_ecs_sparse_t *sparse,
    uint64_t id)
{
    return flecs_sparse_is_alive((ecs_sparse_t *)sparse, id);
}

void *flecs_sparse_get_dense(
    const flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size,
    int32_t index)
{
    return flecs_sparse_get_dense((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, index);
}

int32_t flecs_sparse_count(
    const flecs_ecs_sparse_t *sparse)
{
    return flecs_sparse_count((ecs_sparse_t *)sparse);
}

_Bool flecs_sparse_has(
    const flecs_ecs_sparse_t *sparse,
    uint64_t id)
{
    return flecs_sparse_has((ecs_sparse_t *)sparse, id);
}

void *flecs_sparse_get(
    const flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size,
    uint64_t id)
{
    return flecs_sparse_get((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, id);
}

void *flecs_sparse_insert(
    flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size,
    uint64_t id)
{
    return flecs_sparse_insert((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, id);
}

void *flecs_sparse_ensure(
    flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size,
    uint64_t id,
    _Bool *is_new)
{
    return flecs_sparse_ensure((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, id, is_new);
}

void *flecs_sparse_ensure_fast(
    flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size,
    uint64_t id)
{
    return flecs_sparse_ensure_fast((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, id);
}

const uint64_t *flecs_sparse_ids(
    const flecs_ecs_sparse_t *sparse)
{
    return flecs_sparse_ids((ecs_sparse_t *)sparse);
}

void flecs_sparse_shrink(
    flecs_ecs_sparse_t *sparse)
{
    flecs_sparse_shrink((ecs_sparse_t *)sparse);
}

void flecs_ecs_sparse_init(
    flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size)
{
    ecs_sparse_init((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd);
}

void *flecs_ecs_sparse_add(
    flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size)
{
    return ecs_sparse_add((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd);
}

uint64_t flecs_ecs_sparse_last_id(
    const flecs_ecs_sparse_t *sparse)
{
    return ecs_sparse_last_id((ecs_sparse_t *)sparse);
}

int32_t flecs_ecs_sparse_count(
    const flecs_ecs_sparse_t *sparse)
{
    return ecs_sparse_count((ecs_sparse_t *)sparse);
}

void *flecs_ecs_sparse_get_dense(
    const flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size,
    int32_t index)
{
    return ecs_sparse_get_dense((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, index);
}

void *flecs_ecs_sparse_get(
    const flecs_ecs_sparse_t *sparse,
    flecs_ecs_size_t elem_size,
    uint64_t id)
{
    return ecs_sparse_get((ecs_sparse_t *)sparse, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, id);
}

void flecs_ballocator_init(
    flecs_ecs_block_allocator_t *ba,
    flecs_ecs_size_t size)
{
    flecs_ballocator_init((ecs_block_allocator_t *)ba, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

flecs_ecs_block_allocator_t *flecs_ballocator_new(
    flecs_ecs_size_t size)
{
    return (flecs_ecs_block_allocator_t *)(flecs_ballocator_new(((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd));
}

void flecs_ballocator_fini(
    flecs_ecs_block_allocator_t *ba)
{
    flecs_ballocator_fini((ecs_block_allocator_t *)ba);
}

void flecs_ballocator_free(
    flecs_ecs_block_allocator_t *ba)
{
    flecs_ballocator_free((ecs_block_allocator_t *)ba);
}

void *flecs_balloc(
    flecs_ecs_block_allocator_t *allocator)
{
    return flecs_balloc((ecs_block_allocator_t *)allocator);
}

void *flecs_balloc_w_dbg_info(
    flecs_ecs_block_allocator_t *allocator,
    const char *type_name)
{
    return flecs_balloc_w_dbg_info((ecs_block_allocator_t *)allocator, type_name);
}

void *flecs_bcalloc(
    flecs_ecs_block_allocator_t *allocator)
{
    return flecs_bcalloc((ecs_block_allocator_t *)allocator);
}

void *flecs_bcalloc_w_dbg_info(
    flecs_ecs_block_allocator_t *allocator,
    const char *type_name)
{
    return flecs_bcalloc_w_dbg_info((ecs_block_allocator_t *)allocator, type_name);
}

void flecs_bfree(
    flecs_ecs_block_allocator_t *allocator,
    void *memory)
{
    flecs_bfree((ecs_block_allocator_t *)allocator, memory);
}

void flecs_bfree_w_dbg_info(
    flecs_ecs_block_allocator_t *allocator,
    void *memory,
    const char *type_name)
{
    flecs_bfree_w_dbg_info((ecs_block_allocator_t *)allocator, memory, type_name);
}

void *flecs_brealloc(
    flecs_ecs_block_allocator_t *dst,
    flecs_ecs_block_allocator_t *src,
    void *memory)
{
    return flecs_brealloc((ecs_block_allocator_t *)dst, (ecs_block_allocator_t *)src, memory);
}

void *flecs_brealloc_w_dbg_info(
    flecs_ecs_block_allocator_t *dst,
    flecs_ecs_block_allocator_t *src,
    void *memory,
    const char *type_name)
{
    return flecs_brealloc_w_dbg_info((ecs_block_allocator_t *)dst, (ecs_block_allocator_t *)src, memory, type_name);
}

void *flecs_bdup(
    flecs_ecs_block_allocator_t *ba,
    void *memory)
{
    return flecs_bdup((ecs_block_allocator_t *)ba, memory);
}

void flecs_stack_init(
    flecs_ecs_stack_t *stack)
{
    flecs_stack_init((ecs_stack_t *)stack);
}

void flecs_stack_fini(
    flecs_ecs_stack_t *stack)
{
    flecs_stack_fini((ecs_stack_t *)stack);
}

void *flecs_stack_alloc(
    flecs_ecs_stack_t *stack,
    flecs_ecs_size_t size,
    flecs_ecs_size_t align)
{
    return flecs_stack_alloc((ecs_stack_t *)stack, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = align}).vd);
}

void *flecs_stack_calloc(
    flecs_ecs_stack_t *stack,
    flecs_ecs_size_t size,
    flecs_ecs_size_t align)
{
    return flecs_stack_calloc((ecs_stack_t *)stack, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = align}).vd);
}

void flecs_stack_free(
    void *ptr,
    flecs_ecs_size_t size)
{
    flecs_stack_free(ptr, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

void flecs_stack_reset(
    flecs_ecs_stack_t *stack)
{
    flecs_stack_reset((ecs_stack_t *)stack);
}

flecs_ecs_stack_cursor_t *flecs_stack_get_cursor(
    flecs_ecs_stack_t *stack)
{
    return (flecs_ecs_stack_cursor_t *)(flecs_stack_get_cursor((ecs_stack_t *)stack));
}

void flecs_stack_restore_cursor(
    flecs_ecs_stack_t *stack,
    flecs_ecs_stack_cursor_t *cursor)
{
    flecs_stack_restore_cursor((ecs_stack_t *)stack, (ecs_stack_cursor_t *)cursor);
}

void flecs_ecs_map_init(
    flecs_ecs_map_t *map,
    struct ecs_allocator_t *allocator)
{
    ecs_map_init((ecs_map_t *)map, allocator);
}

void flecs_ecs_map_init_if(
    flecs_ecs_map_t *map,
    struct ecs_allocator_t *allocator)
{
    ecs_map_init_if((ecs_map_t *)map, allocator);
}

void flecs_ecs_map_reclaim(
    flecs_ecs_map_t *map)
{
    ecs_map_reclaim((ecs_map_t *)map);
}

void flecs_ecs_map_fini(
    flecs_ecs_map_t *map)
{
    ecs_map_fini((ecs_map_t *)map);
}

flecs_ecs_map_val_t *flecs_ecs_map_get(
    const flecs_ecs_map_t *map,
    flecs_ecs_map_key_t key)
{
    return (flecs_ecs_map_val_t *)(ecs_map_get((ecs_map_t *)map, ((union { flecs_ecs_map_key_t ns; ecs_map_key_t vd; }){.ns = key}).vd));
}

void *flecs_ecs_map_get_deref_(
    const flecs_ecs_map_t *map,
    flecs_ecs_map_key_t key)
{
    return ecs_map_get_deref_((ecs_map_t *)map, ((union { flecs_ecs_map_key_t ns; ecs_map_key_t vd; }){.ns = key}).vd);
}

flecs_ecs_map_val_t *flecs_ecs_map_ensure(
    flecs_ecs_map_t *map,
    flecs_ecs_map_key_t key)
{
    return (flecs_ecs_map_val_t *)(ecs_map_ensure((ecs_map_t *)map, ((union { flecs_ecs_map_key_t ns; ecs_map_key_t vd; }){.ns = key}).vd));
}

void *flecs_ecs_map_ensure_alloc(
    flecs_ecs_map_t *map,
    flecs_ecs_size_t elem_size,
    flecs_ecs_map_key_t key)
{
    return ecs_map_ensure_alloc((ecs_map_t *)map, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, ((union { flecs_ecs_map_key_t ns; ecs_map_key_t vd; }){.ns = key}).vd);
}

void flecs_ecs_map_insert(
    flecs_ecs_map_t *map,
    flecs_ecs_map_key_t key,
    flecs_ecs_map_val_t value)
{
    ecs_map_insert((ecs_map_t *)map, ((union { flecs_ecs_map_key_t ns; ecs_map_key_t vd; }){.ns = key}).vd, ((union { flecs_ecs_map_val_t ns; ecs_map_val_t vd; }){.ns = value}).vd);
}

void *flecs_ecs_map_insert_alloc(
    flecs_ecs_map_t *map,
    flecs_ecs_size_t elem_size,
    flecs_ecs_map_key_t key)
{
    return ecs_map_insert_alloc((ecs_map_t *)map, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = elem_size}).vd, ((union { flecs_ecs_map_key_t ns; ecs_map_key_t vd; }){.ns = key}).vd);
}

flecs_ecs_map_val_t flecs_ecs_map_remove(
    flecs_ecs_map_t *map,
    flecs_ecs_map_key_t key)
{
    return ((union { flecs_ecs_map_val_t ns; ecs_map_val_t vd; }){.vd = ecs_map_remove((ecs_map_t *)map, ((union { flecs_ecs_map_key_t ns; ecs_map_key_t vd; }){.ns = key}).vd)}).ns;
}

void flecs_ecs_map_remove_free(
    flecs_ecs_map_t *map,
    flecs_ecs_map_key_t key)
{
    ecs_map_remove_free((ecs_map_t *)map, ((union { flecs_ecs_map_key_t ns; ecs_map_key_t vd; }){.ns = key}).vd);
}

void flecs_ecs_map_clear(
    flecs_ecs_map_t *map)
{
    ecs_map_clear((ecs_map_t *)map);
}

flecs_ecs_map_iter_t flecs_ecs_map_iter(
    const flecs_ecs_map_t *map)
{
    return ((union { flecs_ecs_map_iter_t ns; ecs_map_iter_t vd; }){.vd = ecs_map_iter((ecs_map_t *)map)}).ns;
}

_Bool flecs_ecs_map_iter_valid(
    flecs_ecs_map_iter_t *iter)
{
    return ecs_map_iter_valid((ecs_map_iter_t *)iter);
}

_Bool flecs_ecs_map_next(
    flecs_ecs_map_iter_t *iter)
{
    return ecs_map_next((ecs_map_iter_t *)iter);
}

void flecs_ecs_map_copy(
    flecs_ecs_map_t *dst,
    const flecs_ecs_map_t *src)
{
    ecs_map_copy((ecs_map_t *)dst, (ecs_map_t *)src);
}

void flecs_allocator_init(
    flecs_ecs_allocator_t *a)
{
    flecs_allocator_init((ecs_allocator_t *)a);
}

void flecs_allocator_fini(
    flecs_ecs_allocator_t *a)
{
    flecs_allocator_fini((ecs_allocator_t *)a);
}

flecs_ecs_block_allocator_t *flecs_allocator_get(
    flecs_ecs_allocator_t *a,
    flecs_ecs_size_t size)
{
    return (flecs_ecs_block_allocator_t *)(flecs_allocator_get((ecs_allocator_t *)a, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd));
}

char *flecs_strdup(
    flecs_ecs_allocator_t *a,
    const char *str)
{
    return flecs_strdup((ecs_allocator_t *)a, str);
}

void flecs_strfree(
    flecs_ecs_allocator_t *a,
    char *str)
{
    flecs_strfree((ecs_allocator_t *)a, str);
}

void *flecs_dup(
    flecs_ecs_allocator_t *a,
    flecs_ecs_size_t size,
    const void *src)
{
    return flecs_dup((ecs_allocator_t *)a, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, src);
}

void flecs_ecs_strbuf_vappend(
    flecs_ecs_strbuf_t *buffer,
    const char *fmt,
    va_list args)
{
    ecs_strbuf_vappend((ecs_strbuf_t *)buffer, fmt, args);
}

void flecs_ecs_strbuf_appendstr(
    flecs_ecs_strbuf_t *buffer,
    const char *str)
{
    ecs_strbuf_appendstr((ecs_strbuf_t *)buffer, str);
}

void flecs_ecs_strbuf_appendch(
    flecs_ecs_strbuf_t *buffer,
    char ch)
{
    ecs_strbuf_appendch((ecs_strbuf_t *)buffer, ch);
}

void flecs_ecs_strbuf_appendint(
    flecs_ecs_strbuf_t *buffer,
    int64_t v)
{
    ecs_strbuf_appendint((ecs_strbuf_t *)buffer, v);
}

void flecs_ecs_strbuf_appendflt(
    flecs_ecs_strbuf_t *buffer,
    double v,
    char nan_delim)
{
    ecs_strbuf_appendflt((ecs_strbuf_t *)buffer, v, nan_delim);
}

void flecs_ecs_strbuf_appendbool(
    flecs_ecs_strbuf_t *buffer,
    _Bool v)
{
    ecs_strbuf_appendbool((ecs_strbuf_t *)buffer, v);
}

void flecs_ecs_strbuf_mergebuff(
    flecs_ecs_strbuf_t *dst_buffer,
    flecs_ecs_strbuf_t *src_buffer)
{
    ecs_strbuf_mergebuff((ecs_strbuf_t *)dst_buffer, (ecs_strbuf_t *)src_buffer);
}

void flecs_ecs_strbuf_appendstrn(
    flecs_ecs_strbuf_t *buffer,
    const char *str,
    int32_t n)
{
    ecs_strbuf_appendstrn((ecs_strbuf_t *)buffer, str, n);
}

char *flecs_ecs_strbuf_get(
    flecs_ecs_strbuf_t *buffer)
{
    return ecs_strbuf_get((ecs_strbuf_t *)buffer);
}

char *flecs_ecs_strbuf_get_small(
    flecs_ecs_strbuf_t *buffer)
{
    return ecs_strbuf_get_small((ecs_strbuf_t *)buffer);
}

void flecs_ecs_strbuf_reset(
    flecs_ecs_strbuf_t *buffer)
{
    ecs_strbuf_reset((ecs_strbuf_t *)buffer);
}

void flecs_ecs_strbuf_list_push(
    flecs_ecs_strbuf_t *buffer,
    const char *list_open,
    const char *separator)
{
    ecs_strbuf_list_push((ecs_strbuf_t *)buffer, list_open, separator);
}

void flecs_ecs_strbuf_list_pop(
    flecs_ecs_strbuf_t *buffer,
    const char *list_close)
{
    ecs_strbuf_list_pop((ecs_strbuf_t *)buffer, list_close);
}

void flecs_ecs_strbuf_list_next(
    flecs_ecs_strbuf_t *buffer)
{
    ecs_strbuf_list_next((ecs_strbuf_t *)buffer);
}

void flecs_ecs_strbuf_list_appendch(
    flecs_ecs_strbuf_t *buffer,
    char ch)
{
    ecs_strbuf_list_appendch((ecs_strbuf_t *)buffer, ch);
}

void flecs_ecs_strbuf_list_appendstr(
    flecs_ecs_strbuf_t *buffer,
    const char *str)
{
    ecs_strbuf_list_appendstr((ecs_strbuf_t *)buffer, str);
}

void flecs_ecs_strbuf_list_appendstrn(
    flecs_ecs_strbuf_t *buffer,
    const char *str,
    int32_t n)
{
    ecs_strbuf_list_appendstrn((ecs_strbuf_t *)buffer, str, n);
}

int32_t flecs_ecs_strbuf_written(
    const flecs_ecs_strbuf_t *buffer)
{
    return ecs_strbuf_written((ecs_strbuf_t *)buffer);
}

void flecs_ecs_os_init(void)
{
    ecs_os_init();
}

void flecs_ecs_os_fini(void)
{
    ecs_os_fini();
}

void flecs_ecs_os_set_api(
    flecs_ecs_os_api_t *os_api)
{
    ecs_os_set_api((ecs_os_api_t *)os_api);
}

flecs_ecs_os_api_t flecs_ecs_os_get_api(void)
{
    return ((union { flecs_ecs_os_api_t ns; ecs_os_api_t vd; }){.vd = ecs_os_get_api()}).ns;
}

void flecs_ecs_os_set_api_defaults(void)
{
    ecs_os_set_api_defaults();
}

void flecs_ecs_os_dbg(
    const char *file,
    int32_t line,
    const char *msg)
{
    ecs_os_dbg(file, line, msg);
}

void flecs_ecs_os_trace(
    const char *file,
    int32_t line,
    const char *msg)
{
    ecs_os_trace(file, line, msg);
}

void flecs_ecs_os_warn(
    const char *file,
    int32_t line,
    const char *msg)
{
    ecs_os_warn(file, line, msg);
}

void flecs_ecs_os_err(
    const char *file,
    int32_t line,
    const char *msg)
{
    ecs_os_err(file, line, msg);
}

void flecs_ecs_os_fatal(
    const char *file,
    int32_t line,
    const char *msg)
{
    ecs_os_fatal(file, line, msg);
}

const char *flecs_ecs_os_strerror(
    int err)
{
    return ecs_os_strerror(err);
}

void flecs_ecs_os_strset(
    char **str,
    const char *value)
{
    ecs_os_strset(str, value);
}

void flecs_ecs_os_perf_trace_push_(
    const char *file,
    size_t line,
    const char *name)
{
    ecs_os_perf_trace_push_(file, line, name);
}

void flecs_ecs_os_perf_trace_pop_(
    const char *file,
    size_t line,
    const char *name)
{
    ecs_os_perf_trace_pop_(file, line, name);
}

void flecs_ecs_sleepf(
    double t)
{
    ecs_sleepf(t);
}

double flecs_ecs_time_measure(
    flecs_ecs_time_t *start)
{
    return ecs_time_measure((ecs_time_t *)start);
}

flecs_ecs_time_t flecs_ecs_time_sub(
    flecs_ecs_time_t t1,
    flecs_ecs_time_t t2)
{
    return ((union { flecs_ecs_time_t ns; ecs_time_t vd; }){.vd = ecs_time_sub(((union { flecs_ecs_time_t ns; ecs_time_t vd; }){.ns = t1}).vd, ((union { flecs_ecs_time_t ns; ecs_time_t vd; }){.ns = t2}).vd)}).ns;
}

double flecs_ecs_time_to_double(
    flecs_ecs_time_t t)
{
    return ecs_time_to_double(((union { flecs_ecs_time_t ns; ecs_time_t vd; }){.ns = t}).vd);
}

void *flecs_ecs_os_memdup(
    const void *src,
    flecs_ecs_size_t size)
{
    return ecs_os_memdup(src, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd);
}

_Bool flecs_ecs_os_has_heap(void)
{
    return ecs_os_has_heap();
}

_Bool flecs_ecs_os_has_threading(void)
{
    return ecs_os_has_threading();
}

_Bool flecs_ecs_os_has_task_support(void)
{
    return ecs_os_has_task_support();
}

_Bool flecs_ecs_os_has_time(void)
{
    return ecs_os_has_time();
}

_Bool flecs_ecs_os_has_logging(void)
{
    return ecs_os_has_logging();
}

_Bool flecs_ecs_os_has_dl(void)
{
    return ecs_os_has_dl();
}

_Bool flecs_ecs_os_has_modules(void)
{
    return ecs_os_has_modules();
}

char *flecs_module_path_from_c(
    const char *c_name)
{
    return flecs_module_path_from_c(c_name);
}

void flecs_default_ctor(
    void *ptr,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    flecs_default_ctor(ptr, count, (ecs_type_info_t *)type_info);
}

_Bool flecs_type_info_ctor(
    void *ptr,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    return flecs_type_info_ctor(ptr, count, (ecs_type_info_t *)type_info);
}

_Bool flecs_type_info_dtor(
    void *ptr,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    return flecs_type_info_dtor(ptr, count, (ecs_type_info_t *)type_info);
}

void flecs_type_info_copy(
    void *dst,
    const void *src,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    flecs_type_info_copy(dst, src, count, (ecs_type_info_t *)type_info);
}

void flecs_type_info_move(
    void *dst,
    void *src,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    flecs_type_info_move(dst, src, count, (ecs_type_info_t *)type_info);
}

void flecs_type_info_copy_ctor(
    void *dst,
    const void *src,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    flecs_type_info_copy_ctor(dst, src, count, (ecs_type_info_t *)type_info);
}

void flecs_type_info_move_ctor(
    void *dst,
    void *src,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    flecs_type_info_move_ctor(dst, src, count, (ecs_type_info_t *)type_info);
}

void flecs_type_info_ctor_move_dtor(
    void *dst,
    void *src,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    flecs_type_info_ctor_move_dtor(dst, src, count, (ecs_type_info_t *)type_info);
}

void flecs_type_info_move_dtor(
    void *dst,
    void *src,
    int32_t count,
    const flecs_ecs_type_info_t *type_info)
{
    flecs_type_info_move_dtor(dst, src, count, (ecs_type_info_t *)type_info);
}

int flecs_type_info_cmp(
    const void *a,
    const void *b,
    const flecs_ecs_type_info_t *type_info)
{
    return flecs_type_info_cmp(a, b, (ecs_type_info_t *)type_info);
}

_Bool flecs_type_info_equals(
    const void *a,
    const void *b,
    const flecs_ecs_type_info_t *type_info)
{
    return flecs_type_info_equals(a, b, (ecs_type_info_t *)type_info);
}

char *flecs_vasprintf(
    const char *fmt,
    va_list args)
{
    return flecs_vasprintf(fmt, args);
}

char *flecs_chresc(
    char *out,
    char in,
    char delimiter)
{
    return flecs_chresc(out, in, delimiter);
}

const char *flecs_chrparse(
    const char *in,
    char *out)
{
    return flecs_chrparse(in, out);
}

flecs_ecs_size_t flecs_stresc(
    char *out,
    flecs_ecs_size_t size,
    char delimiter,
    const char *in)
{
    return ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.vd = flecs_stresc(out, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = size}).vd, delimiter, in)}).ns;
}

char *flecs_astresc(
    char delimiter,
    const char *in)
{
    return flecs_astresc(delimiter, in);
}

const char *flecs_parse_ws_eol(
    const char *ptr)
{
    return flecs_parse_ws_eol(ptr);
}

const char *flecs_parse_digit(
    const char *ptr,
    char *token)
{
    return flecs_parse_digit(ptr, token);
}

char *flecs_to_snake_case(
    const char *str)
{
    return flecs_to_snake_case(str);
}

flecs_ecs_world_t *flecs_suspend_readonly(
    const flecs_ecs_world_t *world,
    flecs_ecs_suspend_readonly_state_t *state)
{
    return (flecs_ecs_world_t *)(flecs_suspend_readonly((ecs_world_t *)world, (ecs_suspend_readonly_state_t *)state));
}

void flecs_resume_readonly(
    flecs_ecs_world_t *world,
    flecs_ecs_suspend_readonly_state_t *state)
{
    flecs_resume_readonly((ecs_world_t *)world, (ecs_suspend_readonly_state_t *)state);
}

int32_t flecs_table_observed_count(
    const flecs_ecs_table_t *table)
{
    return flecs_table_observed_count((ecs_table_t *)table);
}

void flecs_dump_backtrace(
    void *stream)
{
    flecs_dump_backtrace(stream);
}

int32_t flecs_poly_claim_(
    flecs_ecs_poly_t *poly)
{
    return flecs_poly_claim_((ecs_poly_t *)poly);
}

int32_t flecs_poly_release_(
    flecs_ecs_poly_t *poly)
{
    return flecs_poly_release_((ecs_poly_t *)poly);
}

int32_t flecs_poly_refcount(
    flecs_ecs_poly_t *poly)
{
    return flecs_poly_refcount((ecs_poly_t *)poly);
}

int32_t flecs_component_ids_index_get(void)
{
    return flecs_component_ids_index_get();
}

flecs_ecs_entity_t flecs_component_ids_get(
    const flecs_ecs_world_t *world,
    int32_t index)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = flecs_component_ids_get((ecs_world_t *)world, index)}).ns;
}

flecs_ecs_entity_t flecs_component_ids_get_alive(
    const flecs_ecs_world_t *world,
    int32_t index)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = flecs_component_ids_get_alive((ecs_world_t *)world, index)}).ns;
}

void flecs_component_ids_set(
    flecs_ecs_world_t *world,
    int32_t index,
    flecs_ecs_entity_t id)
{
    flecs_component_ids_set((ecs_world_t *)world, index, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = id}).vd);
}

_Bool flecs_query_trivial_cached_next(
    flecs_ecs_iter_t *it)
{
    return flecs_query_trivial_cached_next((ecs_iter_t *)it);
}

void flecs_check_exclusive_world_access_write(
    const flecs_ecs_world_t *world)
{
    flecs_check_exclusive_world_access_write((ecs_world_t *)world);
}

void flecs_check_exclusive_world_access_read(
    const flecs_ecs_world_t *world)
{
    flecs_check_exclusive_world_access_read((ecs_world_t *)world);
}

_Bool flecs_defer_end(
    flecs_ecs_world_t *world,
    flecs_ecs_stage_t *stage)
{
    return flecs_defer_end((ecs_world_t *)world, (ecs_stage_t *)stage);
}

void flecs_hashmap_init_(
    flecs_ecs_hashmap_t *hm,
    flecs_ecs_size_t key_size,
    flecs_ecs_size_t value_size,
    flecs_ecs_hash_value_action_t hash,
    flecs_ecs_compare_action_t compare,
    flecs_ecs_allocator_t *allocator)
{
    flecs_hashmap_init_((ecs_hashmap_t *)hm, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = key_size}).vd, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = value_size}).vd, ((union { flecs_ecs_hash_value_action_t ns; ecs_hash_value_action_t vd; }){.ns = hash}).vd, ((union { flecs_ecs_compare_action_t ns; ecs_compare_action_t vd; }){.ns = compare}).vd, (ecs_allocator_t *)allocator);
}

void flecs_hashmap_fini(
    flecs_ecs_hashmap_t *map)
{
    flecs_hashmap_fini((ecs_hashmap_t *)map);
}

void *flecs_hashmap_get_(
    const flecs_ecs_hashmap_t *map,
    flecs_ecs_size_t key_size,
    const void *key,
    flecs_ecs_size_t value_size)
{
    return flecs_hashmap_get_((ecs_hashmap_t *)map, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = key_size}).vd, key, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = value_size}).vd);
}

flecs_hashmap_result_t flecs_hashmap_ensure_(
    flecs_ecs_hashmap_t *map,
    flecs_ecs_size_t key_size,
    const void *key,
    flecs_ecs_size_t value_size)
{
    return ((union { flecs_hashmap_result_t ns; flecs_hashmap_result_t vd; }){.vd = flecs_hashmap_ensure_((ecs_hashmap_t *)map, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = key_size}).vd, key, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = value_size}).vd)}).ns;
}

void flecs_hashmap_set_(
    flecs_ecs_hashmap_t *map,
    flecs_ecs_size_t key_size,
    void *key,
    flecs_ecs_size_t value_size,
    const void *value)
{
    flecs_hashmap_set_((ecs_hashmap_t *)map, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = key_size}).vd, key, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = value_size}).vd, value);
}

void flecs_hashmap_remove_(
    flecs_ecs_hashmap_t *map,
    flecs_ecs_size_t key_size,
    const void *key,
    flecs_ecs_size_t value_size)
{
    flecs_hashmap_remove_((ecs_hashmap_t *)map, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = key_size}).vd, key, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = value_size}).vd);
}

void flecs_hashmap_remove_w_hash_(
    flecs_ecs_hashmap_t *map,
    flecs_ecs_size_t key_size,
    const void *key,
    flecs_ecs_size_t value_size,
    uint64_t hash)
{
    flecs_hashmap_remove_w_hash_((ecs_hashmap_t *)map, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = key_size}).vd, key, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = value_size}).vd, hash);
}

flecs_ecs_hm_bucket_t *flecs_hashmap_get_bucket(
    const flecs_ecs_hashmap_t *map,
    uint64_t hash)
{
    return (flecs_ecs_hm_bucket_t *)(flecs_hashmap_get_bucket((ecs_hashmap_t *)map, hash));
}

void flecs_hm_bucket_remove(
    flecs_ecs_hashmap_t *map,
    flecs_ecs_hm_bucket_t *bucket,
    uint64_t hash,
    int32_t index)
{
    flecs_hm_bucket_remove((ecs_hashmap_t *)map, (ecs_hm_bucket_t *)bucket, hash, index);
}

void flecs_hashmap_copy(
    flecs_ecs_hashmap_t *dst,
    const flecs_ecs_hashmap_t *src)
{
    flecs_hashmap_copy((ecs_hashmap_t *)dst, (ecs_hashmap_t *)src);
}

flecs_hashmap_iter_t flecs_hashmap_iter(
    flecs_ecs_hashmap_t *map)
{
    return ((union { flecs_hashmap_iter_t ns; flecs_hashmap_iter_t vd; }){.vd = flecs_hashmap_iter((ecs_hashmap_t *)map)}).ns;
}

void *flecs_hashmap_next_(
    flecs_hashmap_iter_t *it,
    flecs_ecs_size_t key_size,
    void *key_out,
    flecs_ecs_size_t value_size)
{
    return flecs_hashmap_next_((flecs_hashmap_iter_t *)it, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = key_size}).vd, key_out, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = value_size}).vd);
}

flecs_ecs_record_t *flecs_ecs_record_find(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return (flecs_ecs_record_t *)(ecs_record_find((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd));
}

flecs_ecs_entity_t flecs_ecs_record_get_entity(
    const flecs_ecs_record_t *record)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_record_get_entity((ecs_record_t *)record)}).ns;
}

flecs_ecs_record_t *flecs_ecs_write_begin(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return (flecs_ecs_record_t *)(ecs_write_begin((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd));
}

void flecs_ecs_write_end(
    flecs_ecs_record_t *record)
{
    ecs_write_end((ecs_record_t *)record);
}

const flecs_ecs_record_t *flecs_ecs_read_begin(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return (flecs_ecs_record_t *)(ecs_read_begin((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd));
}

void flecs_ecs_read_end(
    const flecs_ecs_record_t *record)
{
    ecs_read_end((ecs_record_t *)record);
}

const void *flecs_ecs_record_get_id(
    const flecs_ecs_world_t *world,
    const flecs_ecs_record_t *record,
    flecs_ecs_id_t id)
{
    return ecs_record_get_id((ecs_world_t *)world, (ecs_record_t *)record, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = id}).vd);
}

void *flecs_ecs_record_ensure_id(
    flecs_ecs_world_t *world,
    flecs_ecs_record_t *record,
    flecs_ecs_id_t id)
{
    return ecs_record_ensure_id((ecs_world_t *)world, (ecs_record_t *)record, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = id}).vd);
}

_Bool flecs_ecs_record_has_id(
    flecs_ecs_world_t *world,
    const flecs_ecs_record_t *record,
    flecs_ecs_id_t id)
{
    return ecs_record_has_id((ecs_world_t *)world, (ecs_record_t *)record, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = id}).vd);
}

void *flecs_ecs_record_get_by_column(
    const flecs_ecs_record_t *record,
    int32_t column,
    size_t size)
{
    return ecs_record_get_by_column((ecs_record_t *)record, column, size);
}

flecs_ecs_component_record_t *flecs_components_get(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t id)
{
    return (flecs_ecs_component_record_t *)(flecs_components_get((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = id}).vd));
}

flecs_ecs_component_record_t *flecs_components_ensure(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t id)
{
    return (flecs_ecs_component_record_t *)(flecs_components_ensure((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = id}).vd));
}

flecs_ecs_id_t flecs_component_get_id(
    const flecs_ecs_component_record_t *cr)
{
    return ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.vd = flecs_component_get_id((ecs_component_record_t *)cr)}).ns;
}

flecs_ecs_flags32_t flecs_component_get_flags(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t id)
{
    return ((union { flecs_ecs_flags32_t ns; ecs_flags32_t vd; }){.vd = flecs_component_get_flags((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = id}).vd)}).ns;
}

const flecs_ecs_type_info_t *flecs_component_get_type_info(
    const flecs_ecs_component_record_t *cr)
{
    return (flecs_ecs_type_info_t *)(flecs_component_get_type_info((ecs_component_record_t *)cr));
}

const flecs_ecs_table_record_t *flecs_component_get_table(
    const flecs_ecs_component_record_t *cr,
    const flecs_ecs_table_t *table)
{
    return (flecs_ecs_table_record_t *)(flecs_component_get_table((ecs_component_record_t *)cr, (ecs_table_t *)table));
}

flecs_ecs_parent_record_t *flecs_component_get_parent_record(
    const flecs_ecs_component_record_t *cr,
    const flecs_ecs_table_t *table)
{
    return (flecs_ecs_parent_record_t *)(flecs_component_get_parent_record((ecs_component_record_t *)cr, (ecs_table_t *)table));
}

int32_t flecs_component_get_childof_depth(
    const flecs_ecs_component_record_t *cr)
{
    return flecs_component_get_childof_depth((ecs_component_record_t *)cr);
}

_Bool flecs_component_iter(
    const flecs_ecs_component_record_t *cr,
    flecs_ecs_table_cache_iter_t *iter_out)
{
    return flecs_component_iter((ecs_component_record_t *)cr, (ecs_table_cache_iter_t *)iter_out);
}

const flecs_ecs_table_record_t *flecs_component_next(
    flecs_ecs_table_cache_iter_t *iter)
{
    return (flecs_ecs_table_record_t *)(flecs_component_next((ecs_table_cache_iter_t *)iter));
}

flecs_ecs_table_records_t flecs_table_records(
    flecs_ecs_table_t *table)
{
    return ((union { flecs_ecs_table_records_t ns; ecs_table_records_t vd; }){.vd = flecs_table_records((ecs_table_t *)table)}).ns;
}

flecs_ecs_component_record_t *flecs_table_record_get_component(
    const flecs_ecs_table_record_t *tr)
{
    return (flecs_ecs_component_record_t *)(flecs_table_record_get_component((ecs_table_record_t *)tr));
}

uint64_t flecs_table_id(
    flecs_ecs_table_t *table)
{
    return flecs_table_id((ecs_table_t *)table);
}

flecs_ecs_table_t *flecs_table_traverse_add(
    flecs_ecs_world_t *world,
    flecs_ecs_table_t *table,
    flecs_ecs_id_t *id_ptr,
    flecs_ecs_table_diff_t *diff)
{
    return (flecs_ecs_table_t *)(flecs_table_traverse_add((ecs_world_t *)world, (ecs_table_t *)table, (ecs_id_t *)id_ptr, (ecs_table_diff_t *)diff));
}

flecs_ecs_world_t *flecs_ecs_init(void)
{
    return (flecs_ecs_world_t *)(ecs_init());
}

flecs_ecs_world_t *flecs_ecs_mini(void)
{
    return (flecs_ecs_world_t *)(ecs_mini());
}

flecs_ecs_world_t *flecs_ecs_init_w_args(
    int argc,
    char *argv[])
{
    return (flecs_ecs_world_t *)(ecs_init_w_args(argc, argv));
}

int flecs_ecs_fini(
    flecs_ecs_world_t *world)
{
    return ecs_fini((ecs_world_t *)world);
}

_Bool flecs_ecs_is_fini(
    const flecs_ecs_world_t *world)
{
    return ecs_is_fini((ecs_world_t *)world);
}

void flecs_ecs_atfini(
    flecs_ecs_world_t *world,
    flecs_ecs_fini_action_t action,
    void *ctx)
{
    ecs_atfini((ecs_world_t *)world, ((union { flecs_ecs_fini_action_t ns; ecs_fini_action_t vd; }){.ns = action}).vd, ctx);
}

flecs_ecs_entities_t flecs_ecs_get_entities(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_entities_t ns; ecs_entities_t vd; }){.vd = ecs_get_entities((ecs_world_t *)world)}).ns;
}

flecs_ecs_flags32_t flecs_ecs_world_get_flags(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_flags32_t ns; ecs_flags32_t vd; }){.vd = ecs_world_get_flags((ecs_world_t *)world)}).ns;
}

float flecs_ecs_frame_begin(
    flecs_ecs_world_t *world,
    float delta_time)
{
    return ecs_frame_begin((ecs_world_t *)world, delta_time);
}

void flecs_ecs_frame_end(
    flecs_ecs_world_t *world)
{
    ecs_frame_end((ecs_world_t *)world);
}

void flecs_ecs_run_post_frame(
    flecs_ecs_world_t *world,
    flecs_ecs_fini_action_t action,
    void *ctx)
{
    ecs_run_post_frame((ecs_world_t *)world, ((union { flecs_ecs_fini_action_t ns; ecs_fini_action_t vd; }){.ns = action}).vd, ctx);
}

void flecs_ecs_quit(
    flecs_ecs_world_t *world)
{
    ecs_quit((ecs_world_t *)world);
}

_Bool flecs_ecs_should_quit(
    const flecs_ecs_world_t *world)
{
    return ecs_should_quit((ecs_world_t *)world);
}

void flecs_ecs_measure_frame_time(
    flecs_ecs_world_t *world,
    _Bool enable)
{
    ecs_measure_frame_time((ecs_world_t *)world, enable);
}

void flecs_ecs_measure_system_time(
    flecs_ecs_world_t *world,
    _Bool enable)
{
    ecs_measure_system_time((ecs_world_t *)world, enable);
}

void flecs_ecs_set_target_fps(
    flecs_ecs_world_t *world,
    float fps)
{
    ecs_set_target_fps((ecs_world_t *)world, fps);
}

void flecs_ecs_set_default_query_flags(
    flecs_ecs_world_t *world,
    flecs_ecs_flags32_t flags)
{
    ecs_set_default_query_flags((ecs_world_t *)world, ((union { flecs_ecs_flags32_t ns; ecs_flags32_t vd; }){.ns = flags}).vd);
}

_Bool flecs_ecs_readonly_begin(
    flecs_ecs_world_t *world,
    _Bool multi_threaded)
{
    return ecs_readonly_begin((ecs_world_t *)world, multi_threaded);
}

void flecs_ecs_readonly_end(
    flecs_ecs_world_t *world)
{
    ecs_readonly_end((ecs_world_t *)world);
}

void flecs_ecs_merge(
    flecs_ecs_world_t *stage)
{
    ecs_merge((ecs_world_t *)stage);
}

_Bool flecs_ecs_defer_begin(
    flecs_ecs_world_t *world)
{
    return ecs_defer_begin((ecs_world_t *)world);
}

_Bool flecs_ecs_defer_end(
    flecs_ecs_world_t *world)
{
    return ecs_defer_end((ecs_world_t *)world);
}

void flecs_ecs_defer_suspend(
    flecs_ecs_world_t *world)
{
    ecs_defer_suspend((ecs_world_t *)world);
}

void flecs_ecs_defer_resume(
    flecs_ecs_world_t *world)
{
    ecs_defer_resume((ecs_world_t *)world);
}

_Bool flecs_ecs_is_deferred(
    const flecs_ecs_world_t *world)
{
    return ecs_is_deferred((ecs_world_t *)world);
}

_Bool flecs_ecs_is_defer_suspended(
    const flecs_ecs_world_t *world)
{
    return ecs_is_defer_suspended((ecs_world_t *)world);
}

void flecs_ecs_set_stage_count(
    flecs_ecs_world_t *world,
    int32_t stages)
{
    ecs_set_stage_count((ecs_world_t *)world, stages);
}

int32_t flecs_ecs_get_stage_count(
    const flecs_ecs_world_t *world)
{
    return ecs_get_stage_count((ecs_world_t *)world);
}

flecs_ecs_world_t *flecs_ecs_get_stage(
    const flecs_ecs_world_t *world,
    int32_t stage_id)
{
    return (flecs_ecs_world_t *)(ecs_get_stage((ecs_world_t *)world, stage_id));
}

_Bool flecs_ecs_stage_is_readonly(
    const flecs_ecs_world_t *world)
{
    return ecs_stage_is_readonly((ecs_world_t *)world);
}

flecs_ecs_world_t *flecs_ecs_stage_new(
    flecs_ecs_world_t *world)
{
    return (flecs_ecs_world_t *)(ecs_stage_new((ecs_world_t *)world));
}

void flecs_ecs_stage_free(
    flecs_ecs_world_t *stage)
{
    ecs_stage_free((ecs_world_t *)stage);
}

int32_t flecs_ecs_stage_get_id(
    const flecs_ecs_world_t *world)
{
    return ecs_stage_get_id((ecs_world_t *)world);
}

void flecs_ecs_set_ctx(
    flecs_ecs_world_t *world,
    void *ctx,
    flecs_ecs_ctx_free_t ctx_free)
{
    ecs_set_ctx((ecs_world_t *)world, ctx, ((union { flecs_ecs_ctx_free_t ns; ecs_ctx_free_t vd; }){.ns = ctx_free}).vd);
}

void flecs_ecs_set_binding_ctx(
    flecs_ecs_world_t *world,
    void *ctx,
    flecs_ecs_ctx_free_t ctx_free)
{
    ecs_set_binding_ctx((ecs_world_t *)world, ctx, ((union { flecs_ecs_ctx_free_t ns; ecs_ctx_free_t vd; }){.ns = ctx_free}).vd);
}

void *flecs_ecs_get_ctx(
    const flecs_ecs_world_t *world)
{
    return ecs_get_ctx((ecs_world_t *)world);
}

void *flecs_ecs_get_binding_ctx(
    const flecs_ecs_world_t *world)
{
    return ecs_get_binding_ctx((ecs_world_t *)world);
}

const flecs_ecs_build_info_t *flecs_ecs_get_build_info(void)
{
    return (flecs_ecs_build_info_t *)(ecs_get_build_info());
}

const flecs_ecs_world_info_t *flecs_ecs_get_world_info(
    const flecs_ecs_world_t *world)
{
    return (flecs_ecs_world_info_t *)(ecs_get_world_info((ecs_world_t *)world));
}

void flecs_ecs_dim(
    flecs_ecs_world_t *world,
    int32_t entity_count)
{
    ecs_dim((ecs_world_t *)world, entity_count);
}

void flecs_ecs_shrink(
    flecs_ecs_world_t *world)
{
    ecs_shrink((ecs_world_t *)world);
}

const flecs_ecs_entity_range_t *flecs_ecs_entity_range_new(
    flecs_ecs_world_t *world,
    uint32_t min,
    uint32_t max)
{
    return (flecs_ecs_entity_range_t *)(ecs_entity_range_new((ecs_world_t *)world, min, max));
}

void flecs_ecs_entity_range_set(
    flecs_ecs_world_t *world,
    const flecs_ecs_entity_range_t *range)
{
    ecs_entity_range_set((ecs_world_t *)world, (ecs_entity_range_t *)range);
}

const flecs_ecs_entity_range_t *flecs_ecs_entity_range_get(
    const flecs_ecs_world_t *world)
{
    return (flecs_ecs_entity_range_t *)(ecs_entity_range_get((ecs_world_t *)world));
}

flecs_ecs_entity_t flecs_ecs_get_max_id(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_max_id((ecs_world_t *)world)}).ns;
}

void flecs_ecs_run_aperiodic(
    flecs_ecs_world_t *world,
    flecs_ecs_flags32_t flags)
{
    ecs_run_aperiodic((ecs_world_t *)world, ((union { flecs_ecs_flags32_t ns; ecs_flags32_t vd; }){.ns = flags}).vd);
}

int32_t flecs_ecs_delete_empty_tables(
    flecs_ecs_world_t *world,
    const flecs_ecs_delete_empty_tables_desc_t *desc)
{
    return ecs_delete_empty_tables((ecs_world_t *)world, (ecs_delete_empty_tables_desc_t *)desc);
}

const flecs_ecs_world_t *flecs_ecs_get_world(
    const flecs_ecs_poly_t *poly)
{
    return (flecs_ecs_world_t *)(ecs_get_world((ecs_poly_t *)poly));
}

flecs_ecs_entity_t flecs_ecs_get_entity(
    const flecs_ecs_poly_t *poly)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_entity((ecs_poly_t *)poly)}).ns;
}

_Bool flecs_poly_is_(
    const flecs_ecs_poly_t *object,
    int32_t type)
{
    return flecs_poly_is_((ecs_poly_t *)object, type);
}

flecs_ecs_id_t flecs_ecs_make_pair(
    flecs_ecs_entity_t first,
    flecs_ecs_entity_t second)
{
    return ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.vd = ecs_make_pair(((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = first}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = second}).vd)}).ns;
}

void flecs_ecs_exclusive_access_begin(
    flecs_ecs_world_t *world,
    const char *thread_name)
{
    ecs_exclusive_access_begin((ecs_world_t *)world, thread_name);
}

void flecs_ecs_exclusive_access_end(
    flecs_ecs_world_t *world,
    _Bool lock_world)
{
    ecs_exclusive_access_end((ecs_world_t *)world, lock_world);
}

flecs_ecs_entity_t flecs_ecs_new(
    flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_new((ecs_world_t *)world)}).ns;
}

flecs_ecs_entity_t flecs_ecs_new_low_id(
    flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_new_low_id((ecs_world_t *)world)}).ns;
}

flecs_ecs_entity_t flecs_ecs_new_w_id(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_new_w_id((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd)}).ns;
}

flecs_ecs_entity_t flecs_ecs_new_w_table(
    flecs_ecs_world_t *world,
    flecs_ecs_table_t *table)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_new_w_table((ecs_world_t *)world, (ecs_table_t *)table)}).ns;
}

flecs_ecs_entity_t flecs_ecs_entity_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_entity_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_entity_init((ecs_world_t *)world, (ecs_entity_desc_t *)desc)}).ns;
}

const flecs_ecs_entity_t *flecs_ecs_bulk_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_bulk_desc_t *desc)
{
    return (flecs_ecs_entity_t *)(ecs_bulk_init((ecs_world_t *)world, (ecs_bulk_desc_t *)desc));
}

const flecs_ecs_entity_t *flecs_ecs_bulk_new_w_id(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t component,
    int32_t count)
{
    return (flecs_ecs_entity_t *)(ecs_bulk_new_w_id((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, count));
}

flecs_ecs_entity_t flecs_ecs_clone(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t dst,
    flecs_ecs_entity_t src,
    _Bool copy_value)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_clone((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = dst}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = src}).vd, copy_value)}).ns;
}

void flecs_ecs_delete(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    ecs_delete((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

void flecs_ecs_delete_with(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    ecs_delete_with((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void flecs_ecs_set_child_order(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    const flecs_ecs_entity_t *children,
    int32_t child_count)
{
    ecs_set_child_order((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, (ecs_entity_t *)children, child_count);
}

flecs_ecs_entities_t flecs_ecs_get_ordered_children(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent)
{
    return ((union { flecs_ecs_entities_t ns; ecs_entities_t vd; }){.vd = ecs_get_ordered_children((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd)}).ns;
}

void flecs_ecs_add_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    ecs_add_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void flecs_ecs_remove_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    ecs_remove_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void flecs_ecs_auto_override_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    ecs_auto_override_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void flecs_ecs_clear(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    ecs_clear((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

void flecs_ecs_remove_all(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    ecs_remove_all((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

flecs_ecs_entity_t flecs_ecs_set_with(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_set_with((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd)}).ns;
}

flecs_ecs_id_t flecs_ecs_get_with(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.vd = ecs_get_with((ecs_world_t *)world)}).ns;
}

void flecs_ecs_enable(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    _Bool enabled)
{
    ecs_enable((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, enabled);
}

void flecs_ecs_enable_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component,
    _Bool enable)
{
    ecs_enable_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, enable);
}

_Bool flecs_ecs_is_enabled_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    return ecs_is_enabled_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

const void *flecs_ecs_get_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    return ecs_get_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void *flecs_ecs_get_mut_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    return ecs_get_mut_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void *flecs_ecs_ensure_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component,
    size_t size)
{
    return ecs_ensure_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, size);
}

flecs_ecs_ref_t flecs_ecs_ref_init_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    return ((union { flecs_ecs_ref_t ns; ecs_ref_t vd; }){.vd = ecs_ref_init_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd)}).ns;
}

void *flecs_ecs_ref_get_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_ref_t *ref,
    flecs_ecs_id_t component)
{
    return ecs_ref_get_id((ecs_world_t *)world, (ecs_ref_t *)ref, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void flecs_ecs_ref_update(
    const flecs_ecs_world_t *world,
    flecs_ecs_ref_t *ref)
{
    ecs_ref_update((ecs_world_t *)world, (ecs_ref_t *)ref);
}

void *flecs_ecs_emplace_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component,
    size_t size,
    _Bool *is_new)
{
    return ecs_emplace_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, size, is_new);
}

void flecs_ecs_modified_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    ecs_modified_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void flecs_ecs_set_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component,
    size_t size,
    const void *ptr)
{
    ecs_set_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, size, ptr);
}

_Bool flecs_ecs_is_valid(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t e)
{
    return ecs_is_valid((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = e}).vd);
}

_Bool flecs_ecs_is_alive(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t e)
{
    return ecs_is_alive((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = e}).vd);
}

flecs_ecs_id_t flecs_ecs_strip_generation(
    flecs_ecs_entity_t e)
{
    return ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.vd = ecs_strip_generation(((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = e}).vd)}).ns;
}

flecs_ecs_entity_t flecs_ecs_get_alive(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t e)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_alive((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = e}).vd)}).ns;
}

void flecs_ecs_make_alive(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    ecs_make_alive((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

void flecs_ecs_make_alive_id(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    ecs_make_alive_id((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

_Bool flecs_ecs_exists(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_exists((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

void flecs_ecs_set_version(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    ecs_set_version((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

uint32_t flecs_ecs_get_version(
    flecs_ecs_entity_t entity)
{
    return ecs_get_version(((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

const flecs_ecs_type_t *flecs_ecs_get_type(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return (flecs_ecs_type_t *)(ecs_get_type((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd));
}

flecs_ecs_table_t *flecs_ecs_get_table(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return (flecs_ecs_table_t *)(ecs_get_table((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd));
}

char *flecs_ecs_type_str(
    const flecs_ecs_world_t *world,
    const flecs_ecs_type_t *type)
{
    return ecs_type_str((ecs_world_t *)world, (ecs_type_t *)type);
}

char *flecs_ecs_table_str(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table)
{
    return ecs_table_str((ecs_world_t *)world, (ecs_table_t *)table);
}

char *flecs_ecs_entity_str(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_entity_str((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

_Bool flecs_ecs_has_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    return ecs_has_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

_Bool flecs_ecs_owns_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    return ecs_owns_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

flecs_ecs_entity_t flecs_ecs_get_target(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_entity_t rel,
    int32_t index)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_target((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = rel}).vd, index)}).ns;
}

flecs_ecs_entity_t flecs_ecs_get_parent(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_parent((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd)}).ns;
}

flecs_ecs_entity_t flecs_ecs_new_w_parent(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    const char *name)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_new_w_parent((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, name)}).ns;
}

flecs_ecs_entity_t flecs_ecs_get_target_for_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_entity_t rel,
    flecs_ecs_id_t component)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_target_for_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = rel}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd)}).ns;
}

int32_t flecs_ecs_get_depth(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_entity_t rel)
{
    return ecs_get_depth((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = rel}).vd);
}

int32_t flecs_ecs_count_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t entity)
{
    return ecs_count_id((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = entity}).vd);
}

const char *flecs_ecs_get_name(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_get_name((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

const char *flecs_ecs_get_symbol(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_get_symbol((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

flecs_ecs_entity_t flecs_ecs_set_name(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *name)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_set_name((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, name)}).ns;
}

flecs_ecs_entity_t flecs_ecs_set_symbol(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *symbol)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_set_symbol((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, symbol)}).ns;
}

void flecs_ecs_set_alias(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *alias)
{
    ecs_set_alias((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, alias);
}

flecs_ecs_entity_t flecs_ecs_lookup(
    const flecs_ecs_world_t *world,
    const char *path)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_lookup((ecs_world_t *)world, path)}).ns;
}

flecs_ecs_entity_t flecs_ecs_lookup_child(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    const char *name)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_lookup_child((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, name)}).ns;
}

flecs_ecs_entity_t flecs_ecs_lookup_path_w_sep(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    const char *path,
    const char *sep,
    const char *prefix,
    _Bool recursive)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_lookup_path_w_sep((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, path, sep, prefix, recursive)}).ns;
}

flecs_ecs_entity_t flecs_ecs_lookup_symbol(
    const flecs_ecs_world_t *world,
    const char *symbol,
    _Bool lookup_as_path,
    _Bool recursive)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_lookup_symbol((ecs_world_t *)world, symbol, lookup_as_path, recursive)}).ns;
}

char *flecs_ecs_get_path_w_sep(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    flecs_ecs_entity_t child,
    const char *sep,
    const char *prefix)
{
    return ecs_get_path_w_sep((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = child}).vd, sep, prefix);
}

void flecs_ecs_get_path_w_sep_buf(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    flecs_ecs_entity_t child,
    const char *sep,
    const char *prefix,
    flecs_ecs_strbuf_t *buf,
    _Bool escape)
{
    ecs_get_path_w_sep_buf((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = child}).vd, sep, prefix, (ecs_strbuf_t *)buf, escape);
}

flecs_ecs_entity_t flecs_ecs_new_from_path_w_sep(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    const char *path,
    const char *sep,
    const char *prefix)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_new_from_path_w_sep((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, path, sep, prefix)}).ns;
}

flecs_ecs_entity_t flecs_ecs_add_path_w_sep(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_entity_t parent,
    const char *path,
    const char *sep,
    const char *prefix)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_add_path_w_sep((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, path, sep, prefix)}).ns;
}

flecs_ecs_entity_t flecs_ecs_set_scope(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t scope)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_set_scope((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = scope}).vd)}).ns;
}

flecs_ecs_entity_t flecs_ecs_get_scope(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_scope((ecs_world_t *)world)}).ns;
}

const char *flecs_ecs_set_name_prefix(
    flecs_ecs_world_t *world,
    const char *prefix)
{
    return ecs_set_name_prefix((ecs_world_t *)world, prefix);
}

flecs_ecs_entity_t *flecs_ecs_set_lookup_path(
    flecs_ecs_world_t *world,
    const flecs_ecs_entity_t *lookup_path)
{
    return (flecs_ecs_entity_t *)(ecs_set_lookup_path((ecs_world_t *)world, (ecs_entity_t *)lookup_path));
}

flecs_ecs_entity_t *flecs_ecs_get_lookup_path(
    const flecs_ecs_world_t *world)
{
    return (flecs_ecs_entity_t *)(ecs_get_lookup_path((ecs_world_t *)world));
}

flecs_ecs_entity_t flecs_ecs_component_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_component_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_component_init((ecs_world_t *)world, (ecs_component_desc_t *)desc)}).ns;
}

const flecs_ecs_type_info_t *flecs_ecs_get_type_info(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return (flecs_ecs_type_info_t *)(ecs_get_type_info((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd));
}

void flecs_ecs_set_hooks_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t component,
    const flecs_ecs_type_hooks_t *hooks)
{
    ecs_set_hooks_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = component}).vd, (ecs_type_hooks_t *)hooks);
}

const flecs_ecs_type_hooks_t *flecs_ecs_get_hooks_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t component)
{
    return (flecs_ecs_type_hooks_t *)(ecs_get_hooks_id((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = component}).vd));
}

_Bool flecs_ecs_id_is_tag(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ecs_id_is_tag((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

_Bool flecs_ecs_id_in_use(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ecs_id_in_use((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

flecs_ecs_entity_t flecs_ecs_get_typeid(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_typeid((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd)}).ns;
}

_Bool flecs_ecs_id_match(
    flecs_ecs_id_t component,
    flecs_ecs_id_t pattern)
{
    return ecs_id_match(((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = pattern}).vd);
}

_Bool flecs_ecs_id_is_pair(
    flecs_ecs_id_t component)
{
    return ecs_id_is_pair(((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

_Bool flecs_ecs_id_is_wildcard(
    flecs_ecs_id_t component)
{
    return ecs_id_is_wildcard(((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

_Bool flecs_ecs_id_is_any(
    flecs_ecs_id_t component)
{
    return ecs_id_is_any(((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

_Bool flecs_ecs_id_is_valid(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ecs_id_is_valid((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

flecs_ecs_flags32_t flecs_ecs_id_get_flags(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ((union { flecs_ecs_flags32_t ns; ecs_flags32_t vd; }){.vd = ecs_id_get_flags((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd)}).ns;
}

const char *flecs_ecs_id_flag_str(
    uint64_t component_flags)
{
    return ecs_id_flag_str(component_flags);
}

char *flecs_ecs_id_str(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ecs_id_str((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

void flecs_ecs_id_str_buf(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component,
    flecs_ecs_strbuf_t *buf)
{
    ecs_id_str_buf((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, (ecs_strbuf_t *)buf);
}

flecs_ecs_id_t flecs_ecs_id_from_str(
    const flecs_ecs_world_t *world,
    const char *expr)
{
    return ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.vd = ecs_id_from_str((ecs_world_t *)world, expr)}).ns;
}

_Bool flecs_ecs_term_ref_is_set(
    const flecs_ecs_term_ref_t *ref)
{
    return ecs_term_ref_is_set((ecs_term_ref_t *)ref);
}

_Bool flecs_ecs_term_is_initialized(
    const flecs_ecs_term_t *term)
{
    return ecs_term_is_initialized((ecs_term_t *)term);
}

_Bool flecs_ecs_term_match_this(
    const flecs_ecs_term_t *term)
{
    return ecs_term_match_this((ecs_term_t *)term);
}

_Bool flecs_ecs_term_match_0(
    const flecs_ecs_term_t *term)
{
    return ecs_term_match_0((ecs_term_t *)term);
}

char *flecs_ecs_term_str(
    const flecs_ecs_world_t *world,
    const flecs_ecs_term_t *term)
{
    return ecs_term_str((ecs_world_t *)world, (ecs_term_t *)term);
}

char *flecs_ecs_query_str(
    const flecs_ecs_query_t *query)
{
    return ecs_query_str((ecs_query_t *)query);
}

flecs_ecs_iter_t flecs_ecs_each_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    return ((union { flecs_ecs_iter_t ns; ecs_iter_t vd; }){.vd = ecs_each_id((ecs_world_t *)world, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd)}).ns;
}

_Bool flecs_ecs_each_next(
    flecs_ecs_iter_t *it)
{
    return ecs_each_next((ecs_iter_t *)it);
}

flecs_ecs_iter_t flecs_ecs_children(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent)
{
    return ((union { flecs_ecs_iter_t ns; ecs_iter_t vd; }){.vd = ecs_children((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd)}).ns;
}

flecs_ecs_iter_t flecs_ecs_children_w_rel(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t relationship,
    flecs_ecs_entity_t parent)
{
    return ((union { flecs_ecs_iter_t ns; ecs_iter_t vd; }){.vd = ecs_children_w_rel((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = relationship}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd)}).ns;
}

_Bool flecs_ecs_children_next(
    flecs_ecs_iter_t *it)
{
    return ecs_children_next((ecs_iter_t *)it);
}

flecs_ecs_query_t *flecs_ecs_query_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_query_desc_t *desc)
{
    return (flecs_ecs_query_t *)(ecs_query_init((ecs_world_t *)world, (ecs_query_desc_t *)desc));
}

void flecs_ecs_query_fini(
    flecs_ecs_query_t *query)
{
    ecs_query_fini((ecs_query_t *)query);
}

int32_t flecs_ecs_query_find_var(
    const flecs_ecs_query_t *query,
    const char *name)
{
    return ecs_query_find_var((ecs_query_t *)query, name);
}

const char *flecs_ecs_query_var_name(
    const flecs_ecs_query_t *query,
    int32_t var_id)
{
    return ecs_query_var_name((ecs_query_t *)query, var_id);
}

_Bool flecs_ecs_query_var_is_entity(
    const flecs_ecs_query_t *query,
    int32_t var_id)
{
    return ecs_query_var_is_entity((ecs_query_t *)query, var_id);
}

flecs_ecs_iter_t flecs_ecs_query_iter(
    const flecs_ecs_world_t *world,
    const flecs_ecs_query_t *query)
{
    return ((union { flecs_ecs_iter_t ns; ecs_iter_t vd; }){.vd = ecs_query_iter((ecs_world_t *)world, (ecs_query_t *)query)}).ns;
}

_Bool flecs_ecs_query_next(
    flecs_ecs_iter_t *it)
{
    return ecs_query_next((ecs_iter_t *)it);
}

_Bool flecs_ecs_query_has(
    const flecs_ecs_query_t *query,
    flecs_ecs_entity_t entity,
    flecs_ecs_iter_t *it)
{
    return ecs_query_has((ecs_query_t *)query, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, (ecs_iter_t *)it);
}

_Bool flecs_ecs_query_has_table(
    const flecs_ecs_query_t *query,
    flecs_ecs_table_t *table,
    flecs_ecs_iter_t *it)
{
    return ecs_query_has_table((ecs_query_t *)query, (ecs_table_t *)table, (ecs_iter_t *)it);
}

_Bool flecs_ecs_query_has_range(
    const flecs_ecs_query_t *query,
    flecs_ecs_table_range_t *range,
    flecs_ecs_iter_t *it)
{
    return ecs_query_has_range((ecs_query_t *)query, (ecs_table_range_t *)range, (ecs_iter_t *)it);
}

int32_t flecs_ecs_query_match_count(
    const flecs_ecs_query_t *query)
{
    return ecs_query_match_count((ecs_query_t *)query);
}

char *flecs_ecs_query_plan(
    const flecs_ecs_query_t *query)
{
    return ecs_query_plan((ecs_query_t *)query);
}

char *flecs_ecs_query_plan_w_profile(
    const flecs_ecs_query_t *query,
    const flecs_ecs_iter_t *it)
{
    return ecs_query_plan_w_profile((ecs_query_t *)query, (ecs_iter_t *)it);
}

char *flecs_ecs_query_plans(
    const flecs_ecs_query_t *query)
{
    return ecs_query_plans((ecs_query_t *)query);
}

const char *flecs_ecs_query_args_parse(
    flecs_ecs_query_t *query,
    flecs_ecs_iter_t *it,
    const char *expr)
{
    return ecs_query_args_parse((ecs_query_t *)query, (ecs_iter_t *)it, expr);
}

_Bool flecs_ecs_query_changed(
    flecs_ecs_query_t *query)
{
    return ecs_query_changed((ecs_query_t *)query);
}

const flecs_ecs_query_t *flecs_ecs_query_get(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t query)
{
    return (flecs_ecs_query_t *)(ecs_query_get((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = query}).vd));
}

void flecs_ecs_iter_skip(
    flecs_ecs_iter_t *it)
{
    ecs_iter_skip((ecs_iter_t *)it);
}

void flecs_ecs_iter_set_group(
    flecs_ecs_iter_t *it,
    uint64_t group_id)
{
    ecs_iter_set_group((ecs_iter_t *)it, group_id);
}

const flecs_ecs_map_t *flecs_ecs_query_get_groups(
    const flecs_ecs_query_t *query)
{
    return (flecs_ecs_map_t *)(ecs_query_get_groups((ecs_query_t *)query));
}

void *flecs_ecs_query_get_group_ctx(
    const flecs_ecs_query_t *query,
    uint64_t group_id)
{
    return ecs_query_get_group_ctx((ecs_query_t *)query, group_id);
}

const flecs_ecs_query_group_info_t *flecs_ecs_query_get_group_info(
    const flecs_ecs_query_t *query,
    uint64_t group_id)
{
    return (flecs_ecs_query_group_info_t *)(ecs_query_get_group_info((ecs_query_t *)query, group_id));
}

flecs_ecs_query_count_t flecs_ecs_query_count(
    const flecs_ecs_query_t *query)
{
    return ((union { flecs_ecs_query_count_t ns; ecs_query_count_t vd; }){.vd = ecs_query_count((ecs_query_t *)query)}).ns;
}

_Bool flecs_ecs_query_is_true(
    const flecs_ecs_query_t *query)
{
    return ecs_query_is_true((ecs_query_t *)query);
}

const flecs_ecs_query_t *flecs_ecs_query_get_cache_query(
    const flecs_ecs_query_t *query)
{
    return (flecs_ecs_query_t *)(ecs_query_get_cache_query((ecs_query_t *)query));
}

void flecs_ecs_emit(
    flecs_ecs_world_t *world,
    flecs_ecs_event_desc_t *desc)
{
    ecs_emit((ecs_world_t *)world, (ecs_event_desc_t *)desc);
}

void flecs_ecs_enqueue(
    flecs_ecs_world_t *world,
    flecs_ecs_event_desc_t *desc)
{
    ecs_enqueue((ecs_world_t *)world, (ecs_event_desc_t *)desc);
}

flecs_ecs_entity_t flecs_ecs_observer_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_observer_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_observer_init((ecs_world_t *)world, (ecs_observer_desc_t *)desc)}).ns;
}

const flecs_ecs_observer_t *flecs_ecs_observer_get(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t observer)
{
    return (flecs_ecs_observer_t *)(ecs_observer_get((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = observer}).vd));
}

_Bool flecs_ecs_iter_next(
    flecs_ecs_iter_t *it)
{
    return ecs_iter_next((ecs_iter_t *)it);
}

void flecs_ecs_iter_fini(
    flecs_ecs_iter_t *it)
{
    ecs_iter_fini((ecs_iter_t *)it);
}

int32_t flecs_ecs_iter_count(
    flecs_ecs_iter_t *it)
{
    return ecs_iter_count((ecs_iter_t *)it);
}

_Bool flecs_ecs_iter_is_true(
    flecs_ecs_iter_t *it)
{
    return ecs_iter_is_true((ecs_iter_t *)it);
}

flecs_ecs_entity_t flecs_ecs_iter_first(
    flecs_ecs_iter_t *it)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_iter_first((ecs_iter_t *)it)}).ns;
}

void flecs_ecs_iter_set_var(
    flecs_ecs_iter_t *it,
    int32_t var_id,
    flecs_ecs_entity_t entity)
{
    ecs_iter_set_var((ecs_iter_t *)it, var_id, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

void flecs_ecs_iter_set_var_as_table(
    flecs_ecs_iter_t *it,
    int32_t var_id,
    const flecs_ecs_table_t *table)
{
    ecs_iter_set_var_as_table((ecs_iter_t *)it, var_id, (ecs_table_t *)table);
}

void flecs_ecs_iter_set_var_as_range(
    flecs_ecs_iter_t *it,
    int32_t var_id,
    const flecs_ecs_table_range_t *range)
{
    ecs_iter_set_var_as_range((ecs_iter_t *)it, var_id, (ecs_table_range_t *)range);
}

flecs_ecs_entity_t flecs_ecs_iter_get_var(
    flecs_ecs_iter_t *it,
    int32_t var_id)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_iter_get_var((ecs_iter_t *)it, var_id)}).ns;
}

const char *flecs_ecs_iter_get_var_name(
    const flecs_ecs_iter_t *it,
    int32_t var_id)
{
    return ecs_iter_get_var_name((ecs_iter_t *)it, var_id);
}

int32_t flecs_ecs_iter_get_var_count(
    const flecs_ecs_iter_t *it)
{
    return ecs_iter_get_var_count((ecs_iter_t *)it);
}

flecs_ecs_var_t *flecs_ecs_iter_get_vars(
    const flecs_ecs_iter_t *it)
{
    return (flecs_ecs_var_t *)(ecs_iter_get_vars((ecs_iter_t *)it));
}

flecs_ecs_table_t *flecs_ecs_iter_get_var_as_table(
    flecs_ecs_iter_t *it,
    int32_t var_id)
{
    return (flecs_ecs_table_t *)(ecs_iter_get_var_as_table((ecs_iter_t *)it, var_id));
}

flecs_ecs_table_range_t flecs_ecs_iter_get_var_as_range(
    flecs_ecs_iter_t *it,
    int32_t var_id)
{
    return ((union { flecs_ecs_table_range_t ns; ecs_table_range_t vd; }){.vd = ecs_iter_get_var_as_range((ecs_iter_t *)it, var_id)}).ns;
}

_Bool flecs_ecs_iter_var_is_constrained(
    flecs_ecs_iter_t *it,
    int32_t var_id)
{
    return ecs_iter_var_is_constrained((ecs_iter_t *)it, var_id);
}

uint64_t flecs_ecs_iter_get_group(
    const flecs_ecs_iter_t *it)
{
    return ecs_iter_get_group((ecs_iter_t *)it);
}

_Bool flecs_ecs_iter_changed(
    flecs_ecs_iter_t *it)
{
    return ecs_iter_changed((ecs_iter_t *)it);
}

char *flecs_ecs_iter_str(
    const flecs_ecs_iter_t *it)
{
    return ecs_iter_str((ecs_iter_t *)it);
}

flecs_ecs_iter_t flecs_ecs_page_iter(
    const flecs_ecs_iter_t *it,
    int32_t offset,
    int32_t limit)
{
    return ((union { flecs_ecs_iter_t ns; ecs_iter_t vd; }){.vd = ecs_page_iter((ecs_iter_t *)it, offset, limit)}).ns;
}

_Bool flecs_ecs_page_next(
    flecs_ecs_iter_t *it)
{
    return ecs_page_next((ecs_iter_t *)it);
}

flecs_ecs_iter_t flecs_ecs_worker_iter(
    const flecs_ecs_iter_t *it,
    int32_t index,
    int32_t count)
{
    return ((union { flecs_ecs_iter_t ns; ecs_iter_t vd; }){.vd = ecs_worker_iter((ecs_iter_t *)it, index, count)}).ns;
}

_Bool flecs_ecs_worker_next(
    flecs_ecs_iter_t *it)
{
    return ecs_worker_next((ecs_iter_t *)it);
}

void *flecs_ecs_field_w_size(
    const flecs_ecs_iter_t *it,
    size_t size,
    int8_t index)
{
    return ecs_field_w_size((ecs_iter_t *)it, size, index);
}

void *flecs_ecs_field_at_w_size(
    const flecs_ecs_iter_t *it,
    size_t size,
    int8_t index,
    int32_t row)
{
    return ecs_field_at_w_size((ecs_iter_t *)it, size, index, row);
}

_Bool flecs_ecs_field_is_readonly(
    const flecs_ecs_iter_t *it,
    int8_t index)
{
    return ecs_field_is_readonly((ecs_iter_t *)it, index);
}

_Bool flecs_ecs_field_is_writeonly(
    const flecs_ecs_iter_t *it,
    int8_t index)
{
    return ecs_field_is_writeonly((ecs_iter_t *)it, index);
}

_Bool flecs_ecs_field_is_set(
    const flecs_ecs_iter_t *it,
    int8_t index)
{
    return ecs_field_is_set((ecs_iter_t *)it, index);
}

flecs_ecs_id_t flecs_ecs_field_id(
    const flecs_ecs_iter_t *it,
    int8_t index)
{
    return ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.vd = ecs_field_id((ecs_iter_t *)it, index)}).ns;
}

int32_t flecs_ecs_field_column(
    const flecs_ecs_iter_t *it,
    int8_t index)
{
    return ecs_field_column((ecs_iter_t *)it, index);
}

flecs_ecs_entity_t flecs_ecs_field_src(
    const flecs_ecs_iter_t *it,
    int8_t index)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_field_src((ecs_iter_t *)it, index)}).ns;
}

size_t flecs_ecs_field_size(
    const flecs_ecs_iter_t *it,
    int8_t index)
{
    return ecs_field_size((ecs_iter_t *)it, index);
}

_Bool flecs_ecs_field_is_self(
    const flecs_ecs_iter_t *it,
    int8_t index)
{
    return ecs_field_is_self((ecs_iter_t *)it, index);
}

const flecs_ecs_type_t *flecs_ecs_table_get_type(
    const flecs_ecs_table_t *table)
{
    return (flecs_ecs_type_t *)(ecs_table_get_type((ecs_table_t *)table));
}

int32_t flecs_ecs_table_get_type_index(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    flecs_ecs_id_t component)
{
    return ecs_table_get_type_index((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

int32_t flecs_ecs_table_get_column_index(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    flecs_ecs_id_t component)
{
    return ecs_table_get_column_index((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

int32_t flecs_ecs_table_column_count(
    const flecs_ecs_table_t *table)
{
    return ecs_table_column_count((ecs_table_t *)table);
}

int32_t flecs_ecs_table_type_to_column_index(
    const flecs_ecs_table_t *table,
    int32_t index)
{
    return ecs_table_type_to_column_index((ecs_table_t *)table, index);
}

int32_t flecs_ecs_table_column_to_type_index(
    const flecs_ecs_table_t *table,
    int32_t index)
{
    return ecs_table_column_to_type_index((ecs_table_t *)table, index);
}

void *flecs_ecs_table_get_column(
    const flecs_ecs_table_t *table,
    int32_t index,
    int32_t offset)
{
    return ecs_table_get_column((ecs_table_t *)table, index, offset);
}

void *flecs_ecs_table_get_id(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    flecs_ecs_id_t component,
    int32_t offset)
{
    return ecs_table_get_id((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, offset);
}

size_t flecs_ecs_table_get_column_size(
    const flecs_ecs_table_t *table,
    int32_t index)
{
    return ecs_table_get_column_size((ecs_table_t *)table, index);
}

int32_t flecs_ecs_table_count(
    const flecs_ecs_table_t *table)
{
    return ecs_table_count((ecs_table_t *)table);
}

int32_t flecs_ecs_table_size(
    const flecs_ecs_table_t *table)
{
    return ecs_table_size((ecs_table_t *)table);
}

const flecs_ecs_entity_t *flecs_ecs_table_entities(
    const flecs_ecs_table_t *table)
{
    return (flecs_ecs_entity_t *)(ecs_table_entities((ecs_table_t *)table));
}

_Bool flecs_ecs_table_has_id(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    flecs_ecs_id_t component)
{
    return ecs_table_has_id((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd);
}

flecs_ecs_entity_t flecs_ecs_table_get_target(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    flecs_ecs_entity_t relationship,
    int32_t index)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_table_get_target((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = relationship}).vd, index)}).ns;
}

int32_t flecs_ecs_table_get_depth(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    flecs_ecs_entity_t rel)
{
    return ecs_table_get_depth((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = rel}).vd);
}

flecs_ecs_table_t *flecs_ecs_table_add_id(
    flecs_ecs_world_t *world,
    flecs_ecs_table_t *table,
    flecs_ecs_id_t component)
{
    return (flecs_ecs_table_t *)(ecs_table_add_id((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd));
}

flecs_ecs_table_t *flecs_ecs_table_find(
    flecs_ecs_world_t *world,
    const flecs_ecs_id_t *ids,
    int32_t id_count)
{
    return (flecs_ecs_table_t *)(ecs_table_find((ecs_world_t *)world, (ecs_id_t *)ids, id_count));
}

flecs_ecs_table_t *flecs_ecs_table_remove_id(
    flecs_ecs_world_t *world,
    flecs_ecs_table_t *table,
    flecs_ecs_id_t component)
{
    return (flecs_ecs_table_t *)(ecs_table_remove_id((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd));
}

void flecs_ecs_table_lock(
    flecs_ecs_world_t *world,
    flecs_ecs_table_t *table)
{
    ecs_table_lock((ecs_world_t *)world, (ecs_table_t *)table);
}

void flecs_ecs_table_unlock(
    flecs_ecs_world_t *world,
    flecs_ecs_table_t *table)
{
    ecs_table_unlock((ecs_world_t *)world, (ecs_table_t *)table);
}

_Bool flecs_ecs_table_has_flags(
    flecs_ecs_table_t *table,
    flecs_ecs_flags32_t flags)
{
    return ecs_table_has_flags((ecs_table_t *)table, ((union { flecs_ecs_flags32_t ns; ecs_flags32_t vd; }){.ns = flags}).vd);
}

_Bool flecs_ecs_table_has_traversable(
    const flecs_ecs_table_t *table)
{
    return ecs_table_has_traversable((ecs_table_t *)table);
}

void flecs_ecs_table_swap_rows(
    flecs_ecs_world_t *world,
    flecs_ecs_table_t *table,
    int32_t row_1,
    int32_t row_2)
{
    ecs_table_swap_rows((ecs_world_t *)world, (ecs_table_t *)table, row_1, row_2);
}

_Bool flecs_ecs_commit(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_record_t *record,
    flecs_ecs_table_t *table,
    const flecs_ecs_type_t *added,
    const flecs_ecs_type_t *removed)
{
    return ecs_commit((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, (ecs_record_t *)record, (ecs_table_t *)table, (ecs_type_t *)added, (ecs_type_t *)removed);
}

int32_t flecs_ecs_search(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    flecs_ecs_id_t component,
    flecs_ecs_id_t *component_out)
{
    return ecs_search((ecs_world_t *)world, (ecs_table_t *)table, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, (ecs_id_t *)component_out);
}

int32_t flecs_ecs_search_offset(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    int32_t offset,
    flecs_ecs_id_t component,
    flecs_ecs_id_t *component_out)
{
    return ecs_search_offset((ecs_world_t *)world, (ecs_table_t *)table, offset, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, (ecs_id_t *)component_out);
}

int32_t flecs_ecs_search_relation(
    const flecs_ecs_world_t *world,
    const flecs_ecs_table_t *table,
    int32_t offset,
    flecs_ecs_id_t component,
    flecs_ecs_entity_t rel,
    flecs_ecs_flags64_t flags,
    flecs_ecs_entity_t *tgt_out,
    flecs_ecs_id_t *component_out,
    struct ecs_table_record_t **tr_out)
{
    return ecs_search_relation((ecs_world_t *)world, (ecs_table_t *)table, offset, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = rel}).vd, ((union { flecs_ecs_flags64_t ns; ecs_flags64_t vd; }){.ns = flags}).vd, (ecs_entity_t *)tgt_out, (ecs_id_t *)component_out, tr_out);
}

int32_t flecs_ecs_search_relation_for_entity(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t id,
    flecs_ecs_entity_t rel,
    _Bool self,
    flecs_ecs_component_record_t *cr,
    flecs_ecs_entity_t *tgt_out,
    flecs_ecs_id_t *id_out,
    struct ecs_table_record_t **tr_out)
{
    return ecs_search_relation_for_entity((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = id}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = rel}).vd, self, (ecs_component_record_t *)cr, (ecs_entity_t *)tgt_out, (ecs_id_t *)id_out, tr_out);
}

void flecs_ecs_table_clear_entities(
    flecs_ecs_world_t *world,
    flecs_ecs_table_t *table)
{
    ecs_table_clear_entities((ecs_world_t *)world, (ecs_table_t *)table);
}

int flecs_ecs_value_init(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    void *ptr)
{
    return ecs_value_init((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, ptr);
}

int flecs_ecs_value_init_w_type_info(
    const flecs_ecs_world_t *world,
    const flecs_ecs_type_info_t *ti,
    void *ptr)
{
    return ecs_value_init_w_type_info((ecs_world_t *)world, (ecs_type_info_t *)ti, ptr);
}

void *flecs_ecs_value_new(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t type)
{
    return ecs_value_new((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd);
}

void *flecs_ecs_value_new_w_type_info(
    flecs_ecs_world_t *world,
    const flecs_ecs_type_info_t *ti)
{
    return ecs_value_new_w_type_info((ecs_world_t *)world, (ecs_type_info_t *)ti);
}

int flecs_ecs_value_fini_w_type_info(
    const flecs_ecs_world_t *world,
    const flecs_ecs_type_info_t *ti,
    void *ptr)
{
    return ecs_value_fini_w_type_info((ecs_world_t *)world, (ecs_type_info_t *)ti, ptr);
}

int flecs_ecs_value_fini(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    void *ptr)
{
    return ecs_value_fini((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, ptr);
}

int flecs_ecs_value_free(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    void *ptr)
{
    return ecs_value_free((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, ptr);
}

int flecs_ecs_value_copy_w_type_info(
    const flecs_ecs_world_t *world,
    const flecs_ecs_type_info_t *ti,
    void *dst,
    const void *src)
{
    return ecs_value_copy_w_type_info((ecs_world_t *)world, (ecs_type_info_t *)ti, dst, src);
}

int flecs_ecs_value_copy(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    void *dst,
    const void *src)
{
    return ecs_value_copy((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, dst, src);
}

int flecs_ecs_value_move_w_type_info(
    const flecs_ecs_world_t *world,
    const flecs_ecs_type_info_t *ti,
    void *dst,
    void *src)
{
    return ecs_value_move_w_type_info((ecs_world_t *)world, (ecs_type_info_t *)ti, dst, src);
}

int flecs_ecs_value_move(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    void *dst,
    void *src)
{
    return ecs_value_move((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, dst, src);
}

int flecs_ecs_value_move_ctor_w_type_info(
    const flecs_ecs_world_t *world,
    const flecs_ecs_type_info_t *ti,
    void *dst,
    void *src)
{
    return ecs_value_move_ctor_w_type_info((ecs_world_t *)world, (ecs_type_info_t *)ti, dst, src);
}

int flecs_ecs_value_move_ctor(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    void *dst,
    void *src)
{
    return ecs_value_move_ctor((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, dst, src);
}

void flecs_ecs_deprecated_(
    const char *file,
    int32_t line,
    const char *msg)
{
    ecs_deprecated_(file, line, msg);
}

void flecs_ecs_log_push_(int32_t level)
{
    ecs_log_push_(level);
}

void flecs_ecs_log_pop_(int32_t level)
{
    ecs_log_pop_(level);
}

_Bool flecs_ecs_should_log(int32_t level)
{
    return ecs_should_log(level);
}

const char *flecs_ecs_strerror(
    int32_t error_code)
{
    return ecs_strerror(error_code);
}

void flecs_ecs_printv_(
    int level,
    const char *file,
    int32_t line,
    const char *fmt,
    va_list args)
{
    ecs_printv_(level, file, line, fmt, args);
}

void flecs_ecs_logv_(
    int level,
    const char *file,
    int32_t line,
    const char *fmt,
    va_list args)
{
    ecs_logv_(level, file, line, fmt, args);
}

void flecs_ecs_parser_errorv_(
    const char *name,
    const char *expr,
    int64_t column,
    const char *fmt,
    va_list args)
{
    ecs_parser_errorv_(name, expr, column, fmt, args);
}

void flecs_ecs_parser_warningv_(
    const char *name,
    const char *expr,
    int64_t column,
    const char *fmt,
    va_list args)
{
    ecs_parser_warningv_(name, expr, column, fmt, args);
}

int flecs_ecs_log_set_level(
    int level)
{
    return ecs_log_set_level(level);
}

int flecs_ecs_log_get_level(void)
{
    return ecs_log_get_level();
}

_Bool flecs_ecs_log_enable_colors(
    _Bool enabled)
{
    return ecs_log_enable_colors(enabled);
}

_Bool flecs_ecs_log_enable_timestamp(
    _Bool enabled)
{
    return ecs_log_enable_timestamp(enabled);
}

_Bool flecs_ecs_log_enable_timedelta(
    _Bool enabled)
{
    return ecs_log_enable_timedelta(enabled);
}

int flecs_ecs_log_last_error(void)
{
    return ecs_log_last_error();
}

void flecs_ecs_log_start_capture(_Bool capture_try)
{
    ecs_log_start_capture(capture_try);
}

char *flecs_ecs_log_stop_capture(void)
{
    return ecs_log_stop_capture();
}

int flecs_ecs_app_run(
    flecs_ecs_world_t *world,
    flecs_ecs_app_desc_t *desc)
{
    return ecs_app_run((ecs_world_t *)world, (ecs_app_desc_t *)desc);
}

int flecs_ecs_app_run_frame(
    flecs_ecs_world_t *world,
    const flecs_ecs_app_desc_t *desc)
{
    return ecs_app_run_frame((ecs_world_t *)world, (ecs_app_desc_t *)desc);
}

int flecs_ecs_app_set_run_action(
    flecs_ecs_app_run_action_t callback)
{
    return ecs_app_set_run_action(((union { flecs_ecs_app_run_action_t ns; ecs_app_run_action_t vd; }){.ns = callback}).vd);
}

int flecs_ecs_app_set_frame_action(
    flecs_ecs_app_frame_action_t callback)
{
    return ecs_app_set_frame_action(((union { flecs_ecs_app_frame_action_t ns; ecs_app_frame_action_t vd; }){.ns = callback}).vd);
}

flecs_ecs_http_server_t *flecs_ecs_http_server_init(
    const flecs_ecs_http_server_desc_t *desc)
{
    return (flecs_ecs_http_server_t *)(ecs_http_server_init((ecs_http_server_desc_t *)desc));
}

void flecs_ecs_http_server_fini(
    flecs_ecs_http_server_t *server)
{
    ecs_http_server_fini((ecs_http_server_t *)server);
}

int flecs_ecs_http_server_start(
    flecs_ecs_http_server_t *server)
{
    return ecs_http_server_start((ecs_http_server_t *)server);
}

void flecs_ecs_http_server_dequeue(
    flecs_ecs_http_server_t *server,
    float delta_time)
{
    ecs_http_server_dequeue((ecs_http_server_t *)server, delta_time);
}

void flecs_ecs_http_server_stop(
    flecs_ecs_http_server_t *server)
{
    ecs_http_server_stop((ecs_http_server_t *)server);
}

int flecs_ecs_http_server_http_request(
    flecs_ecs_http_server_t *srv,
    const char *req,
    flecs_ecs_size_t len,
    flecs_ecs_http_reply_t *reply_out)
{
    return ecs_http_server_http_request((ecs_http_server_t *)srv, req, ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.ns = len}).vd, (ecs_http_reply_t *)reply_out);
}

int flecs_ecs_http_server_request(
    flecs_ecs_http_server_t *srv,
    const char *method,
    const char *req,
    const char *body,
    flecs_ecs_http_reply_t *reply_out)
{
    return ecs_http_server_request((ecs_http_server_t *)srv, method, req, body, (ecs_http_reply_t *)reply_out);
}

void *flecs_ecs_http_server_ctx(
    flecs_ecs_http_server_t *srv)
{
    return ecs_http_server_ctx((ecs_http_server_t *)srv);
}

const char *flecs_ecs_http_get_header(
    const flecs_ecs_http_request_t *req,
    const char *name)
{
    return ecs_http_get_header((ecs_http_request_t *)req, name);
}

const char *flecs_ecs_http_get_param(
    const flecs_ecs_http_request_t *req,
    const char *name)
{
    return ecs_http_get_param((ecs_http_request_t *)req, name);
}

flecs_ecs_http_server_t *flecs_ecs_rest_server_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_http_server_desc_t *desc)
{
    return (flecs_ecs_http_server_t *)(ecs_rest_server_init((ecs_world_t *)world, (ecs_http_server_desc_t *)desc));
}

void flecs_ecs_rest_server_fini(
    flecs_ecs_http_server_t *srv)
{
    ecs_rest_server_fini((ecs_http_server_t *)srv);
}

void flecs_FlecsRestImport(
    flecs_ecs_world_t *world)
{
    FlecsRestImport((ecs_world_t *)world);
}

flecs_ecs_entity_t flecs_ecs_set_timeout(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t tick_source,
    float timeout)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_set_timeout((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd, timeout)}).ns;
}

float flecs_ecs_get_timeout(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t tick_source)
{
    return ecs_get_timeout((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd);
}

flecs_ecs_entity_t flecs_ecs_set_interval(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t tick_source,
    float interval)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_set_interval((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd, interval)}).ns;
}

float flecs_ecs_get_interval(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t tick_source)
{
    return ecs_get_interval((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd);
}

void flecs_ecs_start_timer(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t tick_source)
{
    ecs_start_timer((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd);
}

void flecs_ecs_stop_timer(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t tick_source)
{
    ecs_stop_timer((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd);
}

void flecs_ecs_reset_timer(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t tick_source)
{
    ecs_reset_timer((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd);
}

void flecs_ecs_randomize_timers(
    flecs_ecs_world_t *world)
{
    ecs_randomize_timers((ecs_world_t *)world);
}

flecs_ecs_entity_t flecs_ecs_set_rate(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t tick_source,
    int32_t rate,
    flecs_ecs_entity_t source)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_set_rate((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd, rate, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = source}).vd)}).ns;
}

void flecs_ecs_set_tick_source(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t system,
    flecs_ecs_entity_t tick_source)
{
    ecs_set_tick_source((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = system}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = tick_source}).vd);
}

void flecs_FlecsTimerImport(
    flecs_ecs_world_t *world)
{
    FlecsTimerImport((ecs_world_t *)world);
}

flecs_ecs_entity_t flecs_ecs_pipeline_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_pipeline_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_pipeline_init((ecs_world_t *)world, (ecs_pipeline_desc_t *)desc)}).ns;
}

void flecs_ecs_set_pipeline(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t pipeline)
{
    ecs_set_pipeline((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = pipeline}).vd);
}

flecs_ecs_entity_t flecs_ecs_get_pipeline(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_pipeline((ecs_world_t *)world)}).ns;
}

_Bool flecs_ecs_progress(
    flecs_ecs_world_t *world,
    float delta_time)
{
    return ecs_progress((ecs_world_t *)world, delta_time);
}

void flecs_ecs_set_time_scale(
    flecs_ecs_world_t *world,
    float scale)
{
    ecs_set_time_scale((ecs_world_t *)world, scale);
}

void flecs_ecs_reset_clock(
    flecs_ecs_world_t *world)
{
    ecs_reset_clock((ecs_world_t *)world);
}

void flecs_ecs_run_pipeline(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t pipeline,
    float delta_time)
{
    ecs_run_pipeline((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = pipeline}).vd, delta_time);
}

void flecs_ecs_set_threads(
    flecs_ecs_world_t *world,
    int32_t threads)
{
    ecs_set_threads((ecs_world_t *)world, threads);
}

void flecs_ecs_set_task_threads(
    flecs_ecs_world_t *world,
    int32_t task_threads)
{
    ecs_set_task_threads((ecs_world_t *)world, task_threads);
}

_Bool flecs_ecs_using_task_threads(
    flecs_ecs_world_t *world)
{
    return ecs_using_task_threads((ecs_world_t *)world);
}

void flecs_FlecsPipelineImport(
    flecs_ecs_world_t *world)
{
    FlecsPipelineImport((ecs_world_t *)world);
}

flecs_ecs_entity_t flecs_ecs_system_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_system_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_system_init((ecs_world_t *)world, (ecs_system_desc_t *)desc)}).ns;
}

const flecs_ecs_system_t *flecs_ecs_system_get(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t system)
{
    return (flecs_ecs_system_t *)(ecs_system_get((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = system}).vd));
}

void flecs_ecs_system_set_group(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t system,
    uint64_t group_id)
{
    ecs_system_set_group((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = system}).vd, group_id);
}

flecs_ecs_entity_t flecs_ecs_run(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t system,
    float delta_time,
    void *param)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_run((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = system}).vd, delta_time, param)}).ns;
}

flecs_ecs_entity_t flecs_ecs_run_worker(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t system,
    int32_t stage_current,
    int32_t stage_count,
    float delta_time,
    void *param)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_run_worker((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = system}).vd, stage_current, stage_count, delta_time, param)}).ns;
}

void flecs_FlecsSystemImport(
    flecs_ecs_world_t *world)
{
    FlecsSystemImport((ecs_world_t *)world);
}

void flecs_ecs_world_stats_get(
    const flecs_ecs_world_t *world,
    flecs_ecs_world_stats_t *stats)
{
    ecs_world_stats_get((ecs_world_t *)world, (ecs_world_stats_t *)stats);
}

void flecs_ecs_world_stats_reduce(
    flecs_ecs_world_stats_t *dst,
    const flecs_ecs_world_stats_t *src)
{
    ecs_world_stats_reduce((ecs_world_stats_t *)dst, (ecs_world_stats_t *)src);
}

void flecs_ecs_world_stats_reduce_last(
    flecs_ecs_world_stats_t *stats,
    const flecs_ecs_world_stats_t *old,
    int32_t count)
{
    ecs_world_stats_reduce_last((ecs_world_stats_t *)stats, (ecs_world_stats_t *)old, count);
}

void flecs_ecs_world_stats_repeat_last(
    flecs_ecs_world_stats_t *stats)
{
    ecs_world_stats_repeat_last((ecs_world_stats_t *)stats);
}

void flecs_ecs_world_stats_copy_last(
    flecs_ecs_world_stats_t *dst,
    const flecs_ecs_world_stats_t *src)
{
    ecs_world_stats_copy_last((ecs_world_stats_t *)dst, (ecs_world_stats_t *)src);
}

void flecs_ecs_world_stats_log(
    const flecs_ecs_world_t *world,
    const flecs_ecs_world_stats_t *stats)
{
    ecs_world_stats_log((ecs_world_t *)world, (ecs_world_stats_t *)stats);
}

void flecs_ecs_query_stats_get(
    const flecs_ecs_world_t *world,
    const flecs_ecs_query_t *query,
    flecs_ecs_query_stats_t *stats)
{
    ecs_query_stats_get((ecs_world_t *)world, (ecs_query_t *)query, (ecs_query_stats_t *)stats);
}

void flecs_ecs_query_cache_stats_reduce(
    flecs_ecs_query_stats_t *dst,
    const flecs_ecs_query_stats_t *src)
{
    ecs_query_cache_stats_reduce((ecs_query_stats_t *)dst, (ecs_query_stats_t *)src);
}

void flecs_ecs_query_cache_stats_reduce_last(
    flecs_ecs_query_stats_t *stats,
    const flecs_ecs_query_stats_t *old,
    int32_t count)
{
    ecs_query_cache_stats_reduce_last((ecs_query_stats_t *)stats, (ecs_query_stats_t *)old, count);
}

void flecs_ecs_query_cache_stats_repeat_last(
    flecs_ecs_query_stats_t *stats)
{
    ecs_query_cache_stats_repeat_last((ecs_query_stats_t *)stats);
}

void flecs_ecs_query_cache_stats_copy_last(
    flecs_ecs_query_stats_t *dst,
    const flecs_ecs_query_stats_t *src)
{
    ecs_query_cache_stats_copy_last((ecs_query_stats_t *)dst, (ecs_query_stats_t *)src);
}

_Bool flecs_ecs_system_stats_get(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t system,
    flecs_ecs_system_stats_t *stats)
{
    return ecs_system_stats_get((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = system}).vd, (ecs_system_stats_t *)stats);
}

void flecs_ecs_system_stats_reduce(
    flecs_ecs_system_stats_t *dst,
    const flecs_ecs_system_stats_t *src)
{
    ecs_system_stats_reduce((ecs_system_stats_t *)dst, (ecs_system_stats_t *)src);
}

void flecs_ecs_system_stats_reduce_last(
    flecs_ecs_system_stats_t *stats,
    const flecs_ecs_system_stats_t *old,
    int32_t count)
{
    ecs_system_stats_reduce_last((ecs_system_stats_t *)stats, (ecs_system_stats_t *)old, count);
}

void flecs_ecs_system_stats_repeat_last(
    flecs_ecs_system_stats_t *stats)
{
    ecs_system_stats_repeat_last((ecs_system_stats_t *)stats);
}

void flecs_ecs_system_stats_copy_last(
    flecs_ecs_system_stats_t *dst,
    const flecs_ecs_system_stats_t *src)
{
    ecs_system_stats_copy_last((ecs_system_stats_t *)dst, (ecs_system_stats_t *)src);
}

_Bool flecs_ecs_pipeline_stats_get(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t pipeline,
    flecs_ecs_pipeline_stats_t *stats)
{
    return ecs_pipeline_stats_get((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = pipeline}).vd, (ecs_pipeline_stats_t *)stats);
}

void flecs_ecs_pipeline_stats_fini(
    flecs_ecs_pipeline_stats_t *stats)
{
    ecs_pipeline_stats_fini((ecs_pipeline_stats_t *)stats);
}

void flecs_ecs_pipeline_stats_reduce(
    flecs_ecs_pipeline_stats_t *dst,
    const flecs_ecs_pipeline_stats_t *src)
{
    ecs_pipeline_stats_reduce((ecs_pipeline_stats_t *)dst, (ecs_pipeline_stats_t *)src);
}

void flecs_ecs_pipeline_stats_reduce_last(
    flecs_ecs_pipeline_stats_t *stats,
    const flecs_ecs_pipeline_stats_t *old,
    int32_t count)
{
    ecs_pipeline_stats_reduce_last((ecs_pipeline_stats_t *)stats, (ecs_pipeline_stats_t *)old, count);
}

void flecs_ecs_pipeline_stats_repeat_last(
    flecs_ecs_pipeline_stats_t *stats)
{
    ecs_pipeline_stats_repeat_last((ecs_pipeline_stats_t *)stats);
}

void flecs_ecs_pipeline_stats_copy_last(
    flecs_ecs_pipeline_stats_t *dst,
    const flecs_ecs_pipeline_stats_t *src)
{
    ecs_pipeline_stats_copy_last((ecs_pipeline_stats_t *)dst, (ecs_pipeline_stats_t *)src);
}

void flecs_ecs_metric_reduce(
    flecs_ecs_metric_t *dst,
    const flecs_ecs_metric_t *src,
    int32_t t_dst,
    int32_t t_src)
{
    ecs_metric_reduce((ecs_metric_t *)dst, (ecs_metric_t *)src, t_dst, t_src);
}

void flecs_ecs_metric_reduce_last(
    flecs_ecs_metric_t *m,
    int32_t t,
    int32_t count)
{
    ecs_metric_reduce_last((ecs_metric_t *)m, t, count);
}

void flecs_ecs_metric_copy(
    flecs_ecs_metric_t *m,
    int32_t dst,
    int32_t src)
{
    ecs_metric_copy((ecs_metric_t *)m, dst, src);
}

flecs_ecs_entities_memory_t flecs_ecs_entity_memory_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_entities_memory_t ns; ecs_entities_memory_t vd; }){.vd = ecs_entity_memory_get((ecs_world_t *)world)}).ns;
}

void flecs_ecs_component_record_memory_get(
    const flecs_ecs_component_record_t *cr,
    flecs_ecs_component_index_memory_t *result)
{
    ecs_component_record_memory_get((ecs_component_record_t *)cr, (ecs_component_index_memory_t *)result);
}

flecs_ecs_component_index_memory_t flecs_ecs_component_index_memory_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_component_index_memory_t ns; ecs_component_index_memory_t vd; }){.vd = ecs_component_index_memory_get((ecs_world_t *)world)}).ns;
}

void flecs_ecs_query_memory_get(
    const flecs_ecs_query_t *query,
    flecs_ecs_query_memory_t *result)
{
    ecs_query_memory_get((ecs_query_t *)query, (ecs_query_memory_t *)result);
}

flecs_ecs_query_memory_t flecs_ecs_queries_memory_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_query_memory_t ns; ecs_query_memory_t vd; }){.vd = ecs_queries_memory_get((ecs_world_t *)world)}).ns;
}

void flecs_ecs_table_component_memory_get(
    const flecs_ecs_table_t *table,
    flecs_ecs_component_memory_t *result)
{
    ecs_table_component_memory_get((ecs_table_t *)table, (ecs_component_memory_t *)result);
}

flecs_ecs_component_memory_t flecs_ecs_component_memory_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_component_memory_t ns; ecs_component_memory_t vd; }){.vd = ecs_component_memory_get((ecs_world_t *)world)}).ns;
}

void flecs_ecs_table_memory_get(
    const flecs_ecs_table_t *table,
    flecs_ecs_table_memory_t *result)
{
    ecs_table_memory_get((ecs_table_t *)table, (ecs_table_memory_t *)result);
}

flecs_ecs_table_memory_t flecs_ecs_tables_memory_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_table_memory_t ns; ecs_table_memory_t vd; }){.vd = ecs_tables_memory_get((ecs_world_t *)world)}).ns;
}

flecs_ecs_table_histogram_t flecs_ecs_table_histogram_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_table_histogram_t ns; ecs_table_histogram_t vd; }){.vd = ecs_table_histogram_get((ecs_world_t *)world)}).ns;
}

flecs_ecs_misc_memory_t flecs_ecs_misc_memory_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_misc_memory_t ns; ecs_misc_memory_t vd; }){.vd = ecs_misc_memory_get((ecs_world_t *)world)}).ns;
}

flecs_ecs_allocator_memory_t flecs_ecs_allocator_memory_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_allocator_memory_t ns; ecs_allocator_memory_t vd; }){.vd = ecs_allocator_memory_get((ecs_world_t *)world)}).ns;
}

flecs_ecs_size_t flecs_ecs_memory_get(
    const flecs_ecs_world_t *world)
{
    return ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.vd = ecs_memory_get((ecs_world_t *)world)}).ns;
}

void flecs_FlecsStatsImport(
    flecs_ecs_world_t *world)
{
    FlecsStatsImport((ecs_world_t *)world);
}

flecs_ecs_entity_t flecs_ecs_metric_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_metric_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_metric_init((ecs_world_t *)world, (ecs_metric_desc_t *)desc)}).ns;
}

void flecs_FlecsMetricsImport(
    flecs_ecs_world_t *world)
{
    FlecsMetricsImport((ecs_world_t *)world);
}

flecs_ecs_entity_t flecs_ecs_alert_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_alert_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_alert_init((ecs_world_t *)world, (ecs_alert_desc_t *)desc)}).ns;
}

int32_t flecs_ecs_get_alert_count(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_entity_t alert)
{
    return ecs_get_alert_count((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = alert}).vd);
}

flecs_ecs_entity_t flecs_ecs_get_alert(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_entity_t alert)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_get_alert((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = alert}).vd)}).ns;
}

void flecs_FlecsAlertsImport(
    flecs_ecs_world_t *world)
{
    FlecsAlertsImport((ecs_world_t *)world);
}

const char *flecs_ecs_ptr_from_json(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    void *ptr,
    const char *json,
    const flecs_ecs_from_json_desc_t *desc)
{
    return ecs_ptr_from_json((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, ptr, json, (ecs_from_json_desc_t *)desc);
}

const char *flecs_ecs_entity_from_json(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *json,
    const flecs_ecs_from_json_desc_t *desc)
{
    return ecs_entity_from_json((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, json, (ecs_from_json_desc_t *)desc);
}

const char *flecs_ecs_world_from_json(
    flecs_ecs_world_t *world,
    const char *json,
    const flecs_ecs_from_json_desc_t *desc)
{
    return ecs_world_from_json((ecs_world_t *)world, json, (ecs_from_json_desc_t *)desc);
}

const char *flecs_ecs_world_from_json_file(
    flecs_ecs_world_t *world,
    const char *filename,
    const flecs_ecs_from_json_desc_t *desc)
{
    return ecs_world_from_json_file((ecs_world_t *)world, filename, (ecs_from_json_desc_t *)desc);
}

char *flecs_ecs_array_to_json(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const void *data,
    int32_t count)
{
    return ecs_array_to_json((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, data, count);
}

int flecs_ecs_array_to_json_buf(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const void *data,
    int32_t count,
    flecs_ecs_strbuf_t *buf_out)
{
    return ecs_array_to_json_buf((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, data, count, (ecs_strbuf_t *)buf_out);
}

char *flecs_ecs_ptr_to_json(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const void *data)
{
    return ecs_ptr_to_json((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, data);
}

int flecs_ecs_ptr_to_json_buf(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const void *data,
    flecs_ecs_strbuf_t *buf_out)
{
    return ecs_ptr_to_json_buf((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, data, (ecs_strbuf_t *)buf_out);
}

char *flecs_ecs_type_info_to_json(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type)
{
    return ecs_type_info_to_json((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd);
}

int flecs_ecs_type_info_to_json_buf(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    flecs_ecs_strbuf_t *buf_out)
{
    return ecs_type_info_to_json_buf((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, (ecs_strbuf_t *)buf_out);
}

char *flecs_ecs_entity_to_json(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const flecs_ecs_entity_to_json_desc_t *desc)
{
    return ecs_entity_to_json((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, (ecs_entity_to_json_desc_t *)desc);
}

int flecs_ecs_entity_to_json_buf(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_strbuf_t *buf_out,
    const flecs_ecs_entity_to_json_desc_t *desc)
{
    return ecs_entity_to_json_buf((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, (ecs_strbuf_t *)buf_out, (ecs_entity_to_json_desc_t *)desc);
}

char *flecs_ecs_iter_to_json(
    flecs_ecs_iter_t *iter,
    const flecs_ecs_iter_to_json_desc_t *desc)
{
    return ecs_iter_to_json((ecs_iter_t *)iter, (ecs_iter_to_json_desc_t *)desc);
}

int flecs_ecs_iter_to_json_buf(
    flecs_ecs_iter_t *iter,
    flecs_ecs_strbuf_t *buf_out,
    const flecs_ecs_iter_to_json_desc_t *desc)
{
    return ecs_iter_to_json_buf((ecs_iter_t *)iter, (ecs_strbuf_t *)buf_out, (ecs_iter_to_json_desc_t *)desc);
}

char *flecs_ecs_world_to_json(
    flecs_ecs_world_t *world,
    const flecs_ecs_world_to_json_desc_t *desc)
{
    return ecs_world_to_json((ecs_world_t *)world, (ecs_world_to_json_desc_t *)desc);
}

int flecs_ecs_world_to_json_buf(
    flecs_ecs_world_t *world,
    flecs_ecs_strbuf_t *buf_out,
    const flecs_ecs_world_to_json_desc_t *desc)
{
    return ecs_world_to_json_buf((ecs_world_t *)world, (ecs_strbuf_t *)buf_out, (ecs_world_to_json_desc_t *)desc);
}

void flecs_FlecsUnitsImport(
    flecs_ecs_world_t *world)
{
    FlecsUnitsImport((ecs_world_t *)world);
}

flecs_ecs_script_t *flecs_ecs_script_parse(
    flecs_ecs_world_t *world,
    const char *name,
    const char *code,
    const flecs_ecs_script_eval_desc_t *desc,
    flecs_ecs_script_eval_result_t *result)
{
    return (flecs_ecs_script_t *)(ecs_script_parse((ecs_world_t *)world, name, code, (ecs_script_eval_desc_t *)desc, (ecs_script_eval_result_t *)result));
}

int flecs_ecs_script_eval(
    const flecs_ecs_script_t *script,
    const flecs_ecs_script_eval_desc_t *desc,
    flecs_ecs_script_eval_result_t *result)
{
    return ecs_script_eval((ecs_script_t *)script, (ecs_script_eval_desc_t *)desc, (ecs_script_eval_result_t *)result);
}

void flecs_ecs_script_free(
    flecs_ecs_script_t *script)
{
    ecs_script_free((ecs_script_t *)script);
}

int flecs_ecs_script_run(
    flecs_ecs_world_t *world,
    const char *name,
    const char *code,
    flecs_ecs_script_eval_result_t *result)
{
    return ecs_script_run((ecs_world_t *)world, name, code, (ecs_script_eval_result_t *)result);
}

int flecs_ecs_script_run_file(
    flecs_ecs_world_t *world,
    const char *filename)
{
    return ecs_script_run_file((ecs_world_t *)world, filename);
}

flecs_ecs_script_runtime_t *flecs_ecs_script_runtime_new(void)
{
    return (flecs_ecs_script_runtime_t *)(ecs_script_runtime_new());
}

void flecs_ecs_script_runtime_free(
    flecs_ecs_script_runtime_t *runtime)
{
    ecs_script_runtime_free((ecs_script_runtime_t *)runtime);
}

int flecs_ecs_script_ast_to_buf(
    flecs_ecs_script_t *script,
    flecs_ecs_strbuf_t *buf,
    _Bool colors)
{
    return ecs_script_ast_to_buf((ecs_script_t *)script, (ecs_strbuf_t *)buf, colors);
}

char *flecs_ecs_script_ast_to_str(
    flecs_ecs_script_t *script,
    _Bool colors)
{
    return ecs_script_ast_to_str((ecs_script_t *)script, colors);
}

flecs_ecs_entity_t flecs_ecs_script_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_script_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_script_init((ecs_world_t *)world, (ecs_script_desc_t *)desc)}).ns;
}

int flecs_ecs_script_update(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t script,
    flecs_ecs_entity_t instance,
    const char *code)
{
    return ecs_script_update((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = script}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = instance}).vd, code);
}

void flecs_ecs_script_clear(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t script,
    flecs_ecs_entity_t instance)
{
    ecs_script_clear((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = script}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = instance}).vd);
}

flecs_ecs_script_vars_t *flecs_ecs_script_vars_init(
    flecs_ecs_world_t *world)
{
    return (flecs_ecs_script_vars_t *)(ecs_script_vars_init((ecs_world_t *)world));
}

void flecs_ecs_script_vars_fini(
    flecs_ecs_script_vars_t *vars)
{
    ecs_script_vars_fini((ecs_script_vars_t *)vars);
}

flecs_ecs_script_vars_t *flecs_ecs_script_vars_push(
    flecs_ecs_script_vars_t *parent)
{
    return (flecs_ecs_script_vars_t *)(ecs_script_vars_push((ecs_script_vars_t *)parent));
}

flecs_ecs_script_vars_t *flecs_ecs_script_vars_pop(
    flecs_ecs_script_vars_t *vars)
{
    return (flecs_ecs_script_vars_t *)(ecs_script_vars_pop((ecs_script_vars_t *)vars));
}

flecs_ecs_script_var_t *flecs_ecs_script_vars_declare(
    flecs_ecs_script_vars_t *vars,
    const char *name)
{
    return (flecs_ecs_script_var_t *)(ecs_script_vars_declare((ecs_script_vars_t *)vars, name));
}

flecs_ecs_script_var_t *flecs_ecs_script_vars_define_id(
    flecs_ecs_script_vars_t *vars,
    const char *name,
    flecs_ecs_entity_t type)
{
    return (flecs_ecs_script_var_t *)(ecs_script_vars_define_id((ecs_script_vars_t *)vars, name, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd));
}

flecs_ecs_script_var_t *flecs_ecs_script_vars_lookup(
    const flecs_ecs_script_vars_t *vars,
    const char *name)
{
    return (flecs_ecs_script_var_t *)(ecs_script_vars_lookup((ecs_script_vars_t *)vars, name));
}

flecs_ecs_script_var_t *flecs_ecs_script_vars_from_sp(
    const flecs_ecs_script_vars_t *vars,
    int32_t sp)
{
    return (flecs_ecs_script_var_t *)(ecs_script_vars_from_sp((ecs_script_vars_t *)vars, sp));
}

void flecs_ecs_script_vars_print(
    const flecs_ecs_script_vars_t *vars)
{
    ecs_script_vars_print((ecs_script_vars_t *)vars);
}

void flecs_ecs_script_vars_set_size(
    flecs_ecs_script_vars_t *vars,
    int32_t count)
{
    ecs_script_vars_set_size((ecs_script_vars_t *)vars, count);
}

void flecs_ecs_script_vars_from_iter(
    const flecs_ecs_iter_t *it,
    flecs_ecs_script_vars_t *vars,
    int offset)
{
    ecs_script_vars_from_iter((ecs_iter_t *)it, (ecs_script_vars_t *)vars, offset);
}

const char *flecs_ecs_expr_run(
    flecs_ecs_world_t *world,
    const char *ptr,
    flecs_ecs_value_t *value,
    const flecs_ecs_expr_eval_desc_t *desc)
{
    return ecs_expr_run((ecs_world_t *)world, ptr, (ecs_value_t *)value, (ecs_expr_eval_desc_t *)desc);
}

flecs_ecs_script_t *flecs_ecs_expr_parse(
    flecs_ecs_world_t *world,
    const char *expr,
    const flecs_ecs_expr_eval_desc_t *desc)
{
    return (flecs_ecs_script_t *)(ecs_expr_parse((ecs_world_t *)world, expr, (ecs_expr_eval_desc_t *)desc));
}

int flecs_ecs_expr_eval(
    const flecs_ecs_script_t *script,
    flecs_ecs_value_t *value,
    const flecs_ecs_expr_eval_desc_t *desc)
{
    return ecs_expr_eval((ecs_script_t *)script, (ecs_value_t *)value, (ecs_expr_eval_desc_t *)desc);
}

char *flecs_ecs_script_string_interpolate(
    flecs_ecs_world_t *world,
    const char *str,
    const flecs_ecs_script_vars_t *vars)
{
    return ecs_script_string_interpolate((ecs_world_t *)world, str, (ecs_script_vars_t *)vars);
}

flecs_ecs_entity_t flecs_ecs_const_var_init(
    flecs_ecs_world_t *world,
    flecs_ecs_const_var_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_const_var_init((ecs_world_t *)world, (ecs_const_var_desc_t *)desc)}).ns;
}

flecs_ecs_value_t flecs_ecs_const_var_get(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t var)
{
    return ((union { flecs_ecs_value_t ns; ecs_value_t vd; }){.vd = ecs_const_var_get((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = var}).vd)}).ns;
}

flecs_ecs_entity_t flecs_ecs_function_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_function_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_function_init((ecs_world_t *)world, (ecs_function_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_method_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_function_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_method_init((ecs_world_t *)world, (ecs_function_desc_t *)desc)}).ns;
}

char *flecs_ecs_ptr_to_expr(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const void *data)
{
    return ecs_ptr_to_expr((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, data);
}

int flecs_ecs_ptr_to_expr_buf(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const void *data,
    flecs_ecs_strbuf_t *buf)
{
    return ecs_ptr_to_expr_buf((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, data, (ecs_strbuf_t *)buf);
}

char *flecs_ecs_ptr_to_str(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const void *data)
{
    return ecs_ptr_to_str((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, data);
}

int flecs_ecs_ptr_to_str_buf(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const void *data,
    flecs_ecs_strbuf_t *buf)
{
    return ecs_ptr_to_str_buf((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, data, (ecs_strbuf_t *)buf);
}

void flecs_FlecsScriptImport(
    flecs_ecs_world_t *world)
{
    FlecsScriptImport((ecs_world_t *)world);
}

void flecs_ecs_doc_set_uuid(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *uuid)
{
    ecs_doc_set_uuid((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, uuid);
}

void flecs_ecs_doc_set_name(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *name)
{
    ecs_doc_set_name((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, name);
}

void flecs_ecs_doc_set_brief(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *description)
{
    ecs_doc_set_brief((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, description);
}

void flecs_ecs_doc_set_detail(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *description)
{
    ecs_doc_set_detail((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, description);
}

void flecs_ecs_doc_set_link(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *link)
{
    ecs_doc_set_link((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, link);
}

void flecs_ecs_doc_set_color(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    const char *color)
{
    ecs_doc_set_color((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, color);
}

const char *flecs_ecs_doc_get_uuid(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_doc_get_uuid((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

const char *flecs_ecs_doc_get_name(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_doc_get_name((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

const char *flecs_ecs_doc_get_brief(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_doc_get_brief((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

const char *flecs_ecs_doc_get_detail(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_doc_get_detail((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

const char *flecs_ecs_doc_get_link(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_doc_get_link((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

const char *flecs_ecs_doc_get_color(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity)
{
    return ecs_doc_get_color((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd);
}

void flecs_FlecsDocImport(
    flecs_ecs_world_t *world)
{
    FlecsDocImport((ecs_world_t *)world);
}

char *flecs_ecs_meta_serializer_to_str(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t type)
{
    return ecs_meta_serializer_to_str((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd);
}

flecs_ecs_meta_cursor_t flecs_ecs_meta_cursor(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    void *ptr)
{
    return ((union { flecs_ecs_meta_cursor_t ns; ecs_meta_cursor_t vd; }){.vd = ecs_meta_cursor((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, ptr)}).ns;
}

void *flecs_ecs_meta_get_ptr(
    flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_get_ptr((ecs_meta_cursor_t *)cursor);
}

int flecs_ecs_meta_next(
    flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_next((ecs_meta_cursor_t *)cursor);
}

int flecs_ecs_meta_elem(
    flecs_ecs_meta_cursor_t *cursor,
    int32_t elem)
{
    return ecs_meta_elem((ecs_meta_cursor_t *)cursor, elem);
}

int flecs_ecs_meta_member(
    flecs_ecs_meta_cursor_t *cursor,
    const char *name)
{
    return ecs_meta_member((ecs_meta_cursor_t *)cursor, name);
}

int flecs_ecs_meta_try_member(
    flecs_ecs_meta_cursor_t *cursor,
    const char *name)
{
    return ecs_meta_try_member((ecs_meta_cursor_t *)cursor, name);
}

int flecs_ecs_meta_dotmember(
    flecs_ecs_meta_cursor_t *cursor,
    const char *name)
{
    return ecs_meta_dotmember((ecs_meta_cursor_t *)cursor, name);
}

int flecs_ecs_meta_try_dotmember(
    flecs_ecs_meta_cursor_t *cursor,
    const char *name)
{
    return ecs_meta_try_dotmember((ecs_meta_cursor_t *)cursor, name);
}

int flecs_ecs_meta_push(
    flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_push((ecs_meta_cursor_t *)cursor);
}

int flecs_ecs_meta_pop(
    flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_pop((ecs_meta_cursor_t *)cursor);
}

_Bool flecs_ecs_meta_is_collection(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_is_collection((ecs_meta_cursor_t *)cursor);
}

flecs_ecs_entity_t flecs_ecs_meta_get_type(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_meta_get_type((ecs_meta_cursor_t *)cursor)}).ns;
}

flecs_ecs_entity_t flecs_ecs_meta_get_unit(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_meta_get_unit((ecs_meta_cursor_t *)cursor)}).ns;
}

const char *flecs_ecs_meta_get_member(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_get_member((ecs_meta_cursor_t *)cursor);
}

flecs_ecs_entity_t flecs_ecs_meta_get_member_id(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_meta_get_member_id((ecs_meta_cursor_t *)cursor)}).ns;
}

int flecs_ecs_meta_set_bool(
    flecs_ecs_meta_cursor_t *cursor,
    _Bool value)
{
    return ecs_meta_set_bool((ecs_meta_cursor_t *)cursor, value);
}

int flecs_ecs_meta_set_char(
    flecs_ecs_meta_cursor_t *cursor,
    char value)
{
    return ecs_meta_set_char((ecs_meta_cursor_t *)cursor, value);
}

int flecs_ecs_meta_set_int(
    flecs_ecs_meta_cursor_t *cursor,
    int64_t value)
{
    return ecs_meta_set_int((ecs_meta_cursor_t *)cursor, value);
}

int flecs_ecs_meta_set_uint(
    flecs_ecs_meta_cursor_t *cursor,
    uint64_t value)
{
    return ecs_meta_set_uint((ecs_meta_cursor_t *)cursor, value);
}

int flecs_ecs_meta_set_float(
    flecs_ecs_meta_cursor_t *cursor,
    double value)
{
    return ecs_meta_set_float((ecs_meta_cursor_t *)cursor, value);
}

int flecs_ecs_meta_set_string(
    flecs_ecs_meta_cursor_t *cursor,
    const char *value)
{
    return ecs_meta_set_string((ecs_meta_cursor_t *)cursor, value);
}

int flecs_ecs_meta_set_string_literal(
    flecs_ecs_meta_cursor_t *cursor,
    const char *value)
{
    return ecs_meta_set_string_literal((ecs_meta_cursor_t *)cursor, value);
}

int flecs_ecs_meta_set_entity(
    flecs_ecs_meta_cursor_t *cursor,
    flecs_ecs_entity_t value)
{
    return ecs_meta_set_entity((ecs_meta_cursor_t *)cursor, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = value}).vd);
}

int flecs_ecs_meta_set_id(
    flecs_ecs_meta_cursor_t *cursor,
    flecs_ecs_id_t value)
{
    return ecs_meta_set_id((ecs_meta_cursor_t *)cursor, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = value}).vd);
}

int flecs_ecs_meta_set_null(
    flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_set_null((ecs_meta_cursor_t *)cursor);
}

int flecs_ecs_meta_set_value(
    flecs_ecs_meta_cursor_t *cursor,
    const flecs_ecs_value_t *value)
{
    return ecs_meta_set_value((ecs_meta_cursor_t *)cursor, (ecs_value_t *)value);
}

_Bool flecs_ecs_meta_get_bool(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_get_bool((ecs_meta_cursor_t *)cursor);
}

char flecs_ecs_meta_get_char(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_get_char((ecs_meta_cursor_t *)cursor);
}

int64_t flecs_ecs_meta_get_int(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_get_int((ecs_meta_cursor_t *)cursor);
}

uint64_t flecs_ecs_meta_get_uint(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_get_uint((ecs_meta_cursor_t *)cursor);
}

double flecs_ecs_meta_get_float(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_get_float((ecs_meta_cursor_t *)cursor);
}

const char *flecs_ecs_meta_get_string(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ecs_meta_get_string((ecs_meta_cursor_t *)cursor);
}

flecs_ecs_entity_t flecs_ecs_meta_get_entity(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_meta_get_entity((ecs_meta_cursor_t *)cursor)}).ns;
}

flecs_ecs_id_t flecs_ecs_meta_get_id(
    const flecs_ecs_meta_cursor_t *cursor)
{
    return ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.vd = ecs_meta_get_id((ecs_meta_cursor_t *)cursor)}).ns;
}

double flecs_ecs_meta_ptr_to_float(
    flecs_ecs_primitive_kind_t type_kind,
    const void *ptr)
{
    return ecs_meta_ptr_to_float(((union { flecs_ecs_primitive_kind_t ns; ecs_primitive_kind_t vd; }){.ns = type_kind}).vd, ptr);
}

flecs_ecs_size_t flecs_ecs_meta_op_get_elem_count(
    const flecs_ecs_meta_op_t *op,
    const void *ptr)
{
    return ((union { flecs_ecs_size_t ns; ecs_size_t vd; }){.vd = ecs_meta_op_get_elem_count((ecs_meta_op_t *)op, ptr)}).ns;
}

flecs_ecs_entity_t flecs_ecs_primitive_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_primitive_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_primitive_init((ecs_world_t *)world, (ecs_primitive_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_enum_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_enum_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_enum_init((ecs_world_t *)world, (ecs_enum_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_bitmask_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_bitmask_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_bitmask_init((ecs_world_t *)world, (ecs_bitmask_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_array_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_array_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_array_init((ecs_world_t *)world, (ecs_array_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_vector_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_vector_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_vector_init((ecs_world_t *)world, (ecs_vector_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_struct_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_struct_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_struct_init((ecs_world_t *)world, (ecs_struct_desc_t *)desc)}).ns;
}

int flecs_ecs_struct_add_member(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const flecs_ecs_member_t *member)
{
    return ecs_struct_add_member((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, (ecs_member_t *)member);
}

flecs_ecs_member_t *flecs_ecs_struct_get_member(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    const char *name)
{
    return (flecs_ecs_member_t *)(ecs_struct_get_member((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, name));
}

flecs_ecs_member_t *flecs_ecs_struct_get_nth_member(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t type,
    int32_t i)
{
    return (flecs_ecs_member_t *)(ecs_struct_get_nth_member((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd, i));
}

flecs_ecs_entity_t flecs_ecs_opaque_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_opaque_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_opaque_init((ecs_world_t *)world, (ecs_opaque_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_unit_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_unit_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_unit_init((ecs_world_t *)world, (ecs_unit_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_unit_prefix_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_unit_prefix_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_unit_prefix_init((ecs_world_t *)world, (ecs_unit_prefix_desc_t *)desc)}).ns;
}

flecs_ecs_entity_t flecs_ecs_quantity_init(
    flecs_ecs_world_t *world,
    const flecs_ecs_entity_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_quantity_init((ecs_world_t *)world, (ecs_entity_desc_t *)desc)}).ns;
}

void flecs_FlecsMetaImport(
    flecs_ecs_world_t *world)
{
    FlecsMetaImport((ecs_world_t *)world);
}

int flecs_ecs_meta_from_desc(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t component,
    flecs_ecs_type_kind_t kind,
    const char *desc)
{
    return ecs_meta_from_desc((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = component}).vd, ((union { flecs_ecs_type_kind_t ns; ecs_type_kind_t vd; }){.ns = kind}).vd, desc);
}

void flecs_ecs_set_os_api_impl(void)
{
    ecs_set_os_api_impl();
}

flecs_ecs_entity_t flecs_ecs_import(
    flecs_ecs_world_t *world,
    flecs_ecs_module_action_t module,
    const char *module_name)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_import((ecs_world_t *)world, ((union { flecs_ecs_module_action_t ns; ecs_module_action_t vd; }){.ns = module}).vd, module_name)}).ns;
}

flecs_ecs_entity_t flecs_ecs_import_c(
    flecs_ecs_world_t *world,
    flecs_ecs_module_action_t module,
    const char *module_name_c)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_import_c((ecs_world_t *)world, ((union { flecs_ecs_module_action_t ns; ecs_module_action_t vd; }){.ns = module}).vd, module_name_c)}).ns;
}

flecs_ecs_entity_t flecs_ecs_import_from_library(
    flecs_ecs_world_t *world,
    const char *library_name,
    const char *module_name)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_import_from_library((ecs_world_t *)world, library_name, module_name)}).ns;
}

flecs_ecs_entity_t flecs_ecs_module_init(
    flecs_ecs_world_t *world,
    const char *c_name,
    const flecs_ecs_component_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_module_init((ecs_world_t *)world, c_name, (ecs_component_desc_t *)desc)}).ns;
}

char *flecs_ecs_cpp_get_type_name(
    char *type_name,
    const char *func_name,
    size_t len,
    size_t front_len)
{
    return ecs_cpp_get_type_name(type_name, func_name, len, front_len);
}

char *flecs_ecs_cpp_get_symbol_name(

    char *symbol_name,
    const char *type_name,

    size_t len)
{
    return ecs_cpp_get_symbol_name(symbol_name, type_name, len);
}

char *flecs_ecs_cpp_get_constant_name(
    char *constant_name,
    const char *func_name,
    size_t len,
    size_t back_len)
{
    return ecs_cpp_get_constant_name(constant_name, func_name, len, back_len);
}

const char *flecs_ecs_cpp_trim_module(
    flecs_ecs_world_t *world,
    const char *type_name)
{
    return ecs_cpp_trim_module((ecs_world_t *)world, type_name);
}

flecs_ecs_entity_t flecs_ecs_cpp_component_register(
    flecs_ecs_world_t *world,
    const flecs_ecs_cpp_component_desc_t *desc)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_cpp_component_register((ecs_world_t *)world, (ecs_cpp_component_desc_t *)desc)}).ns;
}

void flecs_ecs_cpp_enum_init(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t id,
    flecs_ecs_entity_t underlying_type)
{
    ecs_cpp_enum_init((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = id}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = underlying_type}).vd);
}

flecs_ecs_entity_t flecs_ecs_cpp_enum_constant_register(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    flecs_ecs_entity_t id,
    const char *name,
    void *value,
    flecs_ecs_entity_t value_type,
    size_t value_size)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_cpp_enum_constant_register((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = id}).vd, name, value, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = value_type}).vd, value_size)}).ns;
}

flecs_ecs_cpp_get_mut_t flecs_ecs_cpp_set(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component,
    const void *new_ptr,
    size_t size)
{
    return ((union { flecs_ecs_cpp_get_mut_t ns; ecs_cpp_get_mut_t vd; }){.vd = ecs_cpp_set((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, new_ptr, size)}).ns;
}

flecs_ecs_cpp_get_mut_t flecs_ecs_cpp_assign(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component,
    const void *new_ptr,
    size_t size)
{
    return ((union { flecs_ecs_cpp_get_mut_t ns; ecs_cpp_get_mut_t vd; }){.vd = ecs_cpp_assign((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = entity}).vd, ((union { flecs_ecs_id_t ns; ecs_id_t vd; }){.ns = component}).vd, new_ptr, size)}).ns;
}

flecs_ecs_entity_t flecs_ecs_cpp_new(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t parent,
    const char *name,
    const char *sep,
    const char *root_sep)
{
    return ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.vd = ecs_cpp_new((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = parent}).vd, name, sep, root_sep)}).ns;
}

flecs_ecs_member_t *flecs_ecs_cpp_last_member(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t type)
{
    return (flecs_ecs_member_t *)(ecs_cpp_last_member((ecs_world_t *)world, ((union { flecs_ecs_entity_t ns; ecs_entity_t vd; }){.ns = type}).vd));
}
