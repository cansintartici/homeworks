#include "hw1.h"
//Construction of Place
Place::Place(string name, Place::Type type, int seats, string address)
: placeName(name), type(type), maxSeats(seats), address(address)
{
}
//
void Place::setAddress(string newAddress)
{
address.erase(); //deallocating old address
address=newAddress; //getting new address
}
int Place::getMaxSeats()
{
return maxSeats;
}
string Place::getPlaceName()
{
return placeName;
}
