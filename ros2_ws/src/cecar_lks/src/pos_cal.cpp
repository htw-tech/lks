#include <iostream>
#include "pos_cal.h"

pos_cal::pos_cal(){

}

pos_cal::pos_cal(Line line_r,Line line_l){
        
}

bool pos_cal::isParallelTo()
{

}

Point pos_cal::getIntersection()
{
/*
  // Lines must not be parallel
  if (isParallel(this->line_r,this->line_l))
    return ? ? ? ;

  // If either is vertical the slope becomes useless, so we need special cases
  if (isVertical())
    return Point(1 / line2.getSlope() * (a.y_coord - line2.y_coord) + line2.x_coord,
                 line2.getSlope() * (a.x_coord - line2.x_coord) + line2.y_coord);

  if (line2.isVertical())
    return line2.getIntersection(*this);

  // A little algebra gives us the x coordinate of our intersection:
  double x1 = a.x_coord;
  double y1 = a.y_coord;
  double m1 = getSlope();

  double x2 = line2.a.x_coord;
  double y2 = line2.a.y_coord;
  double m2 = line2.getSlope();

  double x = (y2 - m2 * x2 - y1 + m1 * x1) / (m1 - m2);

  // Now we can substitute x in to get y:
  double y = m1 * (x - x1) + y1;

  return Point(x, y);
  */
}

double pos_cal::getDistance()
{
/*
  if (getSlope() - line2.getSlope() < DDIFF && getSlope() - line2.getSlope() > -DDIFF)
  {
    if (isVertical())
    {
      double distance = a.x_coord - b.x_coord;
      return distance;
    }
    else if (isHorizontal())
    {
      double distance = a.y_coord - b.y_coord;
      return distance;
    }
  }
  else if (isVertical() && line2.isVertical())
  {
    if (isVertical())
    {
      double distance = a.x_coord - b.x_coord;
      return distance;
    }
    else if (isHorizontal())
    {
      double distance = a.y_coord - b.y_coord;
      return distance;
    }
  }
  else
  {
    return 0.0;
  }
  */
}

//Default constructor
Line::Line()
{
    //left blank intentionally
}
//Point1_Object & Point2_Object were suppose to get
//Passed into here
Line::Line(vector<double> equation)
{
  
}

Point::Point():xCOORD(0), yCOORD(0)
{
   //default constructor
   //does nothing
}

//Constructor acts as a mutator
//to get values

Point::Point(double new_x, double new_y)
{
    xCOORD = new_x;
    yCOORD = new_y;
}

//MUTATOR FUNCTIONS
void Point::SetX(double x)
{
    xCOORD = x;
}
void Point::SetY(double y)
{
    yCOORD = y;
}


//ACCESSOR FUNCTIONS
//This is how it is done
//In order to return a Private variable's value.
//In order to access a private variable's value.
double Point::GetX()
{
    return xCOORD;
}
double Point::GetY()
{
    return yCOORD;
}