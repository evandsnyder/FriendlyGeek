#ifndef FRIENDLY_GEEK_COMPONENT_MANAGER
#define FRIENDLY_GEEK_COMPONENT_MANAGER

#include "../Entity/EntityMap.hpp"
#include "../Component/ComponentHandle.hpp"

#include <map>

#define MAX_NUMBER_OF_COMPONENTS = 1024

namespace FriendlyGeek {
	template<typename ComponentType>
	struct ComponentData {
		unsigned int size = 1;
		std::array<ComponentType, MAX_NUMBER_OF_COMPONENTS>* data;
	};

	class BaseComponentManager {
	public:
		BaseComponentManager() = default;
		virtual ~BaseComponentManager() = default;
		BaseComponentManager(const BaseComponentManager&) = default;
		BaseComponentManager& operator=(const BaseComponentManager&) = default;
		BaseComponentManager(BaseComponentManager&&) = default;
		BaseComponentManager& operator=(BaseComponentManager&&) = default;
	};

	template<typename ComponentType>
	class ComponentManager : public BaseComponentManager {
	public:
		ComponentManager();

		void AddComponent(Entity entity, ComponentType& component);
		void DestroyComponent(Entity entity);

		ComponentHandle<ComponentType> Lookup(Entity entity);
	private:
		EntityMap entityMap;
	};
}

#endif // FRIENDLY_GEEK_COMPONENT_MANAGER