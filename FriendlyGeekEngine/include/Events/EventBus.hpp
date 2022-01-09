#ifndef FRIENDLY_GEEK_EVENT_BUS
#define FRIENDLY_GEEK_EVENT_BUS

namespace FriendlYGeek {
	class EventBus {
		EventBus() = default;
		virtual ~EventBus() = default;
		EventBus(const EventBus&) = default;
		EventBus& operator=(const EventBus&) = default;
		EventBus(EventBus&&) = default;
		EventBus& operator=(EventBus&&) = default;
	};
}

#endif // FRIENDLY_GEEK_EVENT_BUS