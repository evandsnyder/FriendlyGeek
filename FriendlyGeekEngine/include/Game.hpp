#ifndef FRIENDLY_GEEK_GAME
#define FRIENDLY_GEEK_GAME

namespace FriendlyGeek {
	class Game {
	public:
		template<typename ComponentType>
		void addComponent(Entity entity, ComponentType component);

		template<typename ComponentType>
		void removeComponent(Entity entity);

	private:
		template<typename ComponentType>
		ComponentManager<ComponentType> getComponentManager<ComponentType>();
	};
}

#endif // FRIENDLY_GEEK_GAME