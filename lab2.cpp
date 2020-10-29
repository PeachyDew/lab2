#include <iostream>
#include <conio.h>
using namespace std;

class Point {
protected:
    int x, y; 
public:
    Point() {
        cout << "Point()\n";
        x = 0;
        y = 0;
    }
    Point(int x, int y) {
        cout << "Point(int x, int y)\n";
       this -> x = x;
       this -> y = y;
    }
    Point(const Point &p) {
        cout << "Point(const Point &p)\n";
        x = p.x;
        y = p.y;
    }
    ~Point() {
        cout << "~Point()\n";
        cout << x << ", " << y << endl;
   }
    void move(int dx, int dy) {
        x = x + dx;
        y = y + dy;
    }
    void reset();
};

class ColoredPoint: Point {
protected:
    int color;
public:
    ColoredPoint():Point() {
        cout << "ColoredPoint()\n";
        color = 0;
    }
    ColoredPoint(int x, int y, int color):Point(x,y) {
        cout << "ColoredPoint(int x, int y)\n";
        this->color = color;
    }
    ColoredPoint(const ColoredPoint& p) {
        cout << "ColoredPoint(const Point &p)\n";
        color = p.color;
        x = p.x;
        y = p.y;
    }
    ~ColoredPoint() {
        cout << "~ColoredPoint()\n";
        cout << x << ", " << y << endl;
    }
    void change_color(int new_color) {
        color = new_color;
    }
   
};



int main()
{
    {
       // Point p;
        //Point p2(10, 20);
        //Point p3(p2);
    }
    
    //Point* p4 = new Point;
    Point* p5 = new Point(10, 20);
    //Point* p6 = new Point(*p5);

    p5->reset();
    p5->move(10, 10);
   
   // delete p4;
    delete p5;
   // delete p6;
    
    ColoredPoint* cp = new ColoredPoint(1, 2, 42);
    delete cp;

    _getch();

}

