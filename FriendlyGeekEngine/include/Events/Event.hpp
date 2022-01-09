#ifndef FRIENDLY_GEEK_EVENT
#define FRIENDLY_GEEK_EVENT

namespace FriendlyGeek {
	class Event {
		Event() = default;
		virtual ~Event() = default;
		Event(const Event&) = default;
		Event& operator=(const Event&) = default;
		Event(Event&&) = default;
		Event& operator=(Event&&) = default;
	};
}

#endif // FRIENDLY_GEEK_EVENT