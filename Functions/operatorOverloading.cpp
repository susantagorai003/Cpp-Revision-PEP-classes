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
    Point& operator++()
    {
        this->x++;
        this->y++;
        return *this;
    }
    Point operator++(int)
    {
        Point temp(this->x,this->y);
        this->x++;
        this->y++;
        return temp;
    }

    Point operator==(Point &otherPoint)
    {
        return Point(this->x == otherPoint.x, this->y == otherPoint.y);
    }

    Point operator!=(Point &otherPoint)
    {
        return Point(this->x != otherPoint.x, this->y != otherPoint.y);
    }


    int getX() {
        return x;
    }
    int getY()  {
        return y;
    }
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }

};

ostream& operator<<(ostream &out, Point &p)
{
    out << "Point(" << p.getX() << "," << p.getY() << ")";
    return out;
}

istream& operator>>(istream &in, Point &p)
{
    int x, y;
    in >> x >> y;
    p.setX(x);
    p.setY(y);
    return in;
}


int main() {
    // Point p(10,20);
    // p.print();
    // Point q(5,15);
    // q.print();

    // Point r = p + q; // This will invoke the overloaded + operator
    // r.print();

    // Point s = p - q; // This will invoke the overloaded - operator
    // s.print();
    
    // Point t = ++p; 
    // t.print();
    // Point p1(2,3);
    // cin >> p1;
    // cout << p1 << endl;


    Point p2(1,20);
    Point p3(10,20);
    Point res = p2 == p3;
    res.print();
    



    return 0;
    
    
}