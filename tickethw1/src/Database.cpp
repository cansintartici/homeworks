#include "Database.h"

Database::Database()
{
    //ctor
}

Database::~Database()
{
    //dtor
}

void Database::addPlace(Place place){

        int a = places.size();
        int i = 0;
        string currentPlaceName = place.getPlaceName();
        string checkname = places[i].getPlaceName();
        try{
            for(i = 0; i <= a; i++){
                if(currentPlaceName == checkname){
                    throw (SystemError) 0;
                }else{
                    if(currentPlaceName == (Type) i){
                        throw (SystemError) 1;
                    }
                    places.push_back(place);
                }
            }

        }catch( SystemError e ){
            if((SystemError) e == 0)
                cout<<"ERR_PLACE_EXISTS";
            else ((SystemError) e == 1)
                cout<<"ERR_PLACE_NOT_EXISTS";
        }


}
void addEvent(Event event){

        int a = events.size();
        int i = 0;
        string currentEventName = event.getEventId();
        string checkname = event[i].getEventId();
        try{
            for(i = 0; i <= a; i++){
                if currentEventName = event.getEventId(){
                    throw (SystemError) 2;
                }else
                   events.push_back(event);

            }catch( SystemError e){
                cout<<"ERR_EVENT_EXISTS";
            }
        }

}
