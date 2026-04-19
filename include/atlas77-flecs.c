#include "atlas77-flecs.h"

#include <stddef.h>

#include "flecs.h"

flecs_ecs_world_t *flecs_ecs_init(void)
{
    return (flecs_ecs_world_t *)ecs_init();
}

int32_t flecs_ecs_fini(flecs_ecs_world_t *world)
{
    return ecs_fini((ecs_world_t *)world);
}

flecs_ecs_entity_t flecs_ecs_entity_new(flecs_ecs_world_t *world)
{
    return (flecs_ecs_entity_t)ecs_new((ecs_world_t *)world);
}

flecs_ecs_entity_t flecs_ecs_entity_new_named(flecs_ecs_world_t *world, const char *name)
{
    ecs_entity_desc_t desc = {0};
    desc.name = name;
    return (flecs_ecs_entity_t)ecs_entity_init((ecs_world_t *)world, &desc);
}

void flecs_ecs_delete(flecs_ecs_world_t *world, flecs_ecs_entity_t entity)
{
    ecs_delete((ecs_world_t *)world, (ecs_entity_t)entity);
}

bool flecs_ecs_is_alive(const flecs_ecs_world_t *world, flecs_ecs_entity_t entity)
{
    return ecs_is_alive((const ecs_world_t *)world, (ecs_entity_t)entity);
}

bool flecs_ecs_is_valid(const flecs_ecs_world_t *world, flecs_ecs_entity_t entity)
{
    return ecs_is_valid((const ecs_world_t *)world, (ecs_entity_t)entity);
}

flecs_ecs_entity_t flecs_ecs_lookup(const flecs_ecs_world_t *world, const char *name)
{
    return (flecs_ecs_entity_t)ecs_lookup((const ecs_world_t *)world, name);
}

const char *flecs_ecs_get_name(const flecs_ecs_world_t *world, flecs_ecs_entity_t entity)
{
    return ecs_get_name((const ecs_world_t *)world, (ecs_entity_t)entity);
}

flecs_ecs_entity_t flecs_ecs_component_register(
    flecs_ecs_world_t *world,
    const char *name,
    int32_t size,
    int32_t alignment)
{
    ecs_entity_desc_t entity_desc = {0};
    entity_desc.name = name;

    ecs_entity_t entity = ecs_entity_init((ecs_world_t *)world, &entity_desc);

    ecs_component_desc_t component_desc = {0};
    component_desc.entity = entity;
    component_desc.type.size = (size_t)size;
    component_desc.type.alignment = (size_t)alignment;

    return (flecs_ecs_entity_t)ecs_component_init((ecs_world_t *)world, &component_desc);
}

void flecs_ecs_add_id(flecs_ecs_world_t *world, flecs_ecs_entity_t entity, flecs_ecs_id_t component)
{
    ecs_add_id((ecs_world_t *)world, (ecs_entity_t)entity, (ecs_id_t)component);
}

void flecs_ecs_remove_id(flecs_ecs_world_t *world, flecs_ecs_entity_t entity, flecs_ecs_id_t component)
{
    ecs_remove_id((ecs_world_t *)world, (ecs_entity_t)entity, (ecs_id_t)component);
}

bool flecs_ecs_has_id(const flecs_ecs_world_t *world, flecs_ecs_entity_t entity, flecs_ecs_id_t component)
{
    return ecs_has_id((const ecs_world_t *)world, (ecs_entity_t)entity, (ecs_id_t)component);
}

void flecs_ecs_set_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component,
    uint64_t size,
    const void *ptr)
{
    ecs_set_id((ecs_world_t *)world, (ecs_entity_t)entity, (ecs_id_t)component, (size_t)size, ptr);
}

const void *flecs_ecs_get_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    return ecs_get_id((const ecs_world_t *)world, (ecs_entity_t)entity, (ecs_id_t)component);
}

void *flecs_ecs_get_mut_id(
    const flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    return ecs_get_mut_id((const ecs_world_t *)world, (ecs_entity_t)entity, (ecs_id_t)component);
}

void flecs_ecs_modified_id(
    flecs_ecs_world_t *world,
    flecs_ecs_entity_t entity,
    flecs_ecs_id_t component)
{
    ecs_modified_id((ecs_world_t *)world, (ecs_entity_t)entity, (ecs_id_t)component);
}

flecs_ecs_query_t *flecs_ecs_query_new_1(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t component)
{
    ecs_query_desc_t desc = {0};
    desc.terms[0].id = (ecs_id_t)component;
    return (flecs_ecs_query_t *)ecs_query_init((ecs_world_t *)world, &desc);
}

flecs_ecs_query_t *flecs_ecs_query_new_2(
    flecs_ecs_world_t *world,
    flecs_ecs_id_t component_a,
    flecs_ecs_id_t component_b)
{
    ecs_query_desc_t desc = {0};
    desc.terms[0].id = (ecs_id_t)component_a;
    desc.terms[1].id = (ecs_id_t)component_b;
    return (flecs_ecs_query_t *)ecs_query_init((ecs_world_t *)world, &desc);
}

void flecs_ecs_query_free(
    flecs_ecs_query_t *query)
{
    if (!query)
    {
        return;
    }

    ecs_query_fini((ecs_query_t *)query);
}

void flecs_ecs_query_each_1(
    flecs_ecs_world_t *world,
    flecs_ecs_query_t *query,
    uint64_t component_size,
    flecs_ecs_system1_fn update,
    float dt)
{
    if (!world || !query || !update)
    {
        return;
    }

    ecs_iter_t it = ecs_query_iter((ecs_world_t *)world, (ecs_query_t *)query);
    while (ecs_query_next(&it))
    {
        void *component_data = ecs_field_w_size(&it, (size_t)component_size, 0);
        for (int32_t row = 0; row < it.count; row++)
        {
            void *component = NULL;
            if (component_data && component_size > 0)
            {
                component = (void *)((char *)component_data + ((size_t)row * (size_t)component_size));
            }

            update((flecs_ecs_entity_t)it.entities[row], component, dt);
        }
    }
}

void flecs_ecs_query_each_2(
    flecs_ecs_world_t *world,
    flecs_ecs_query_t *query,
    uint64_t component_a_size,
    uint64_t component_b_size,
    flecs_ecs_system2_fn update,
    float dt)
{
    if (!world || !query || !update)
    {
        return;
    }

    ecs_iter_t it = ecs_query_iter((ecs_world_t *)world, (ecs_query_t *)query);
    while (ecs_query_next(&it))
    {
        void *component_a_data = ecs_field_w_size(&it, (size_t)component_a_size, 0);
        void *component_b_data = ecs_field_w_size(&it, (size_t)component_b_size, 1);

        for (int32_t row = 0; row < it.count; row++)
        {
            void *component_a = NULL;
            void *component_b = NULL;

            if (component_a_data && component_a_size > 0)
            {
                component_a = (void *)((char *)component_a_data + ((size_t)row * (size_t)component_a_size));
            }

            if (component_b_data && component_b_size > 0)
            {
                component_b = (void *)((char *)component_b_data + ((size_t)row * (size_t)component_b_size));
            }

            update((flecs_ecs_entity_t)it.entities[row], component_a, component_b, dt);
        }
    }
}
