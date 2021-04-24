#include <iostream>
#include <geometry_msgs/msg/point_stamped.hpp>
#include <stdio.h>

using namespace std;

class pos_cal
{
public:       
   // Attributes (member Variables)
   Line line_r;
   Line line_l;

   //Default constructor
   pos_cal();
   pos_cal(Line line_r,Line line_l);
   
   /*******Member Fucntions*******/
   Point getIntersection();
   bool isParallelTo();
   double getDistance();
   Line getCenterLine();
   Point getDisiredPostion();
   Point getRealPostion();
   
};

class Point
{
public:
    //Default constructor
    Point();
    Point(double new_x, double new_y);
    /*******Member Fucntions*******/
    //Accessors
    double GetX();
    double GetY();
    //Mutators
    void SetX(double x);
    void SetY(double Y);
private:
    double xCOORD, yCOORD;
};

class Line
{
public:
    //Default constructor
    Line();
    Line(vector<double> equation);
    /*******Member Fucntions*******/
    //Accessors    
    double GetA();
    double GetB();
    double GetC();

private:
  // y = a*x^2 + b*x + c
  vector<double> equation;
   
};
