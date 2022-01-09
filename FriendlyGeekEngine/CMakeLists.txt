# CMakeList.txt : CMake project for FriendlyGeekEngine, include source and define
# project specific logic here.
cmake_minimum_required (VERSION 3.12)

# Add source to this project's executable
set(FRIENDLY_GEEK_SOURCES 
	"include/Components/Component.hpp" "src/Components/Component.cpp"
	"include/Components/ComponentHandle.hpp" "src/Components/ComponentHandle.cpp"
	"include/Entities/Entity.hpp" "src/Entities/Entity.cpp"
	"include/Entities/EntityHandle.hpp" "src/Entities/EntityHandle.cpp"
	"include/Entities/EntityMap.hpp" "src/Entities/EntityMap.cpp"
	"include/Events/Event.hpp" "src/Events/Event.cpp"
	"include/Events/EventBus.hpp" "src/Events/EventBus.cpp"
	"include/Managers/ComponentManager.hpp" "src/Managers/ComponentManager.cpp"
	"include/Managers/EntityManager.hpp" "src/Managers/EntityManager.cpp"
	"include/Systems/System.hpp" "src/Systems/System.cpp"
	"include/Game.hpp" "src/Game.cpp"
	)

add_library (FriendlyGeekEngine ${FRIENDLY_GEEK_SOURCES})
target_include_directories(FriendlyGeekEngine PUBLIC "include")
