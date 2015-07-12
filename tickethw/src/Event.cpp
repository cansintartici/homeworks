#include "hw1.h"



Event::Event(string id, string placeName, string eventName, string date, int price)
:eventId(id),placeName(placeName),eventName(eventName),date(date),price(price){


}
Event::~Event(){


}
void Event::addPerformer(string performer){


}
string Event::getEventId(){
    return EventID;

}
string Event::getPlaceName(){
    return PlaceName;

}
string Event::getDate(){
    return Date;

}
