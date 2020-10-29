#include <iostream>
#include <conio.h>
using namespace std;

class Point {
public:
    int x, y; 
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
};

int main()
{
    {
        Point p;
        Point p2(10, 20);
        Point p3(p2);
    }
    _getch();

}

