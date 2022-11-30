#include<iostream>
using namespace std;

class Point
{
    private:
        int x;
        int y;

    public:
    Point()
    {
        cout<<"Default constractor";
    };

    Point(int xvalue, int yvalue)
    {
        x = xvalue;
        y = yvalue;
    };

    Point(const Point &noman)
    {
        x = noman.x;
        y = noman.y;
    }
    void Print()
    {
        cout<<x<<" ,  "<<y;

    }
};


int main()
{
    Point p1;
    Point p2(10, 20);
    Point p3(p2);
    cout<<endl;
    p2.Print();
    cout<<endl;
    p3.Print();

}
