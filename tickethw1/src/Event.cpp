#include "hw1.h"
//Construction of Event
Event::Event(string id, string placeName, string eventName, string date, int price)
:eventId(id),placeName(placeName),eventName(eventName),date(date),price(price)
{
}
void Event::addPerformer(string performer)
{
performers.push_back(performer);
}
string Event::getEventId()
{
return eventId;
}
string Event::getPlaceName()
{
return placeName;
}
string Event::getDate()
{
return date;
}
Event::~Event()
{
}
