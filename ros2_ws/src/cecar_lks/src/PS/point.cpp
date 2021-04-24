#include"point.h"




//Constructor acts as a mutator
//to get values

Point::Point(double new_x, double new_y)
{
    xCOORD = new_x;
    yCOORD = new_y;
}

//ACCESSOR FUNCTIONS
//This is how it is done
//In order to return a Private variable's value.
//In order to access a private variable's value.

void Point::SetX(double x){

         xCOORD = x;

}

void Point::SetX(double y){

         yCOORD = y;

}



double Point::GetX(){

        return xCOORD;

}

double Point::GetY(){

        return yCOORD;

}

