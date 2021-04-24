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