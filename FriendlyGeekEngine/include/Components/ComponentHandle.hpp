#ifndef FRIENDLY_GEEK_COMPONENT_HANDLE
#define FRIENDLY_GEEK_COMPONENT_HANDLE

#include "Component.hpp"
#include "../Entity/Entity.hpp"
#include "../Manager/ComponentManager.hpp"

namespace FriendlyGeek {
	template<typename ComponentType>
	class ComponentHandle {
		Entity owner;
		ComponentType* component;
		ComponentManager<ComponentType>* manager;

		ComponentHandle(ComponentManager<ComponentType>* manager, Entity entity);

		void Destroy();
	};
}

#endif // FRIENDLY_GEEK_COMPONENT_HANDLE