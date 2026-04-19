#pragma once

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

    typedef struct ecs_world_t flecs_ecs_world_t;
    typedef struct ecs_query_t flecs_ecs_query_t;
    typedef uint64_t flecs_ecs_id_t;
    typedef flecs_ecs_id_t flecs_ecs_entity_t;

    typedef void (*flecs_ecs_system1_fn)(
        flecs_ecs_entity_t entity,
        void *component,
        float dt);

    typedef void (*flecs_ecs_system2_fn)(
        flecs_ecs_entity_t entity,
        void *component_a,
        void *component_b,
        float dt);

    flecs_ecs_world_t *flecs_ecs_init(void);
    int32_t flecs_ecs_fini(flecs_ecs_world_t *world);

    flecs_ecs_entity_t flecs_ecs_entity_new(flecs_ecs_world_t *world);
    flecs_ecs_entity_t flecs_ecs_entity_new_named(flecs_ecs_world_t *world, const char *name);

    void flecs_ecs_delete(flecs_ecs_world_t *world, flecs_ecs_entity_t entity);
    bool flecs_ecs_is_alive(const flecs_ecs_world_t *world, flecs_ecs_entity_t entity);
    bool flecs_ecs_is_valid(const flecs_ecs_world_t *world, flecs_ecs_entity_t entity);

    flecs_ecs_entity_t flecs_ecs_lookup(const flecs_ecs_world_t *world, const char *name);
    const char *flecs_ecs_get_name(const flecs_ecs_world_t *world, flecs_ecs_entity_t entity);

    flecs_ecs_entity_t flecs_ecs_component_register(
        flecs_ecs_world_t *world,
        const char *name,
        int32_t size,
        int32_t alignment);

    void flecs_ecs_add_id(flecs_ecs_world_t *world, flecs_ecs_entity_t entity, flecs_ecs_id_t component);
    void flecs_ecs_remove_id(flecs_ecs_world_t *world, flecs_ecs_entity_t entity, flecs_ecs_id_t component);
    bool flecs_ecs_has_id(const flecs_ecs_world_t *world, flecs_ecs_entity_t entity, flecs_ecs_id_t component);

    void flecs_ecs_set_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component,
        uint64_t size,
        const void *ptr);

    const void *flecs_ecs_get_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);

    void *flecs_ecs_get_mut_id(
        const flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);

    void flecs_ecs_modified_id(
        flecs_ecs_world_t *world,
        flecs_ecs_entity_t entity,
        flecs_ecs_id_t component);

    flecs_ecs_query_t *flecs_ecs_query_new_1(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t component);

    flecs_ecs_query_t *flecs_ecs_query_new_2(
        flecs_ecs_world_t *world,
        flecs_ecs_id_t component_a,
        flecs_ecs_id_t component_b);

    void flecs_ecs_query_free(
        flecs_ecs_query_t *query);

    void flecs_ecs_query_each_1(
        flecs_ecs_world_t *world,
        flecs_ecs_query_t *query,
        uint64_t component_size,
        flecs_ecs_system1_fn update,
        float dt);

    void flecs_ecs_query_each_2(
        flecs_ecs_world_t *world,
        flecs_ecs_query_t *query,
        uint64_t component_a_size,
        uint64_t component_b_size,
        flecs_ecs_system2_fn update,
        float dt);

#ifdef __cplusplus
}
#endif
