#ifndef FRIENDLY_GEEK_SYSTEM
#define FRIENDLY_GEEK_SYSTEM

#include "../Game.hpp"
#include "Entity/Entity.hpp"

#include <vector>

namespace FriendlyGeek {
	class System {
	public:
		virtual void Init();
		
		virtual void Update(int dt);
		
		void RegisterGame(Game* game);
		void RegisterEntity(Entity entity);
		void DeRegisterEntity(Entity entity);

	private:
		// Systems should subscribe to events..
		int id;
		std::vector<Entity> registeredEntities;
		Game* game;

	};
}

#endif FRIENDLY_GEEK_SYSTEM