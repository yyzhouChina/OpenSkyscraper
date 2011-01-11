#ifndef OSS_BASE_RESPONDER_H
#define OSS_BASE_RESPONDER_H

#include "object.h"

#include "event.h"


namespace OSS {
	namespace Base {
		class Responder : public Object {
			
			/**
			 * Event Sending
			 */
		public:
			bool sendEvent(Event * event);
			virtual bool sendEventToNextResponders(Event * event) { return false; }
			
			
			/**
			 * Event Handling
			 */
		public:
			virtual bool handleEvent(Event * event) { return false; }
		};
	}
}


#endif