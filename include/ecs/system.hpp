#ifndef ECS_SYSTEM_H
#define ECS_SYSTEM_H
#include <ecs/entity.hpp>
#include <set>

class System
{
    public:
        std::set<Entity> mEntities;
};

#endif
