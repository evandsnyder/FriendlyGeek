#ifndef FRIENDLY_GEEK_ENTITY_HANDLE
#define FRIENDLY_GEEK_ENTITY_HANDLE

namespace FriendlyGeek {
	class EntityHandle {
	public:
		void Destroy();

		template<typename ComponentType>
		void AddComponent(ComponentType component);

		template<typename ComponentType>
		void RemoveComponent();
	private:
		Entity entity;
		Game* game;
	};
}

#endif // FRIENDLY_GEEK_ENTITY_HANDLE