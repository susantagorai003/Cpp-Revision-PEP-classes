#include <iostream>
using namespace std;
class Point{
    public:
    int x;
    int y;
    Point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    //Point(int x,int y) : x(x), y(y) {} this is another way of initializing member variables
    void print()
    {
        cout<<"Point("<<x<<","<<y<<")"<<endl;
    }

    Point operator+(Point &otherPoint)
    {
        return Point(this->x + otherPoint.x, this->y + otherPoint.y);
    }
    Point operator-(Point &otherPoint)
    {
        return Point(this->x - otherPoint.x, this->y - otherPoint.y);
    }

};

int main() {
    Point p(10,20);
    p.print();
    Point q(5,15);
    q.print();

    Point r = p + q; // This will invoke the overloaded + operator
    r.print();

    Point s = p - q; // This will invoke the overloaded - operator
    s.print();
    
    return 0;
    
    
}