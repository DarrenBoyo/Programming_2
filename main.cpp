#include <iostream>

using namespace std;

class Rectangle
{
public:
    double width;
    double height;

        Rectangle() {
        width = 1.0;
        height = 1.0;
    }
    Rectangle(double newWidth, double newHeight){
        height = newHeight;
        width = newWidth;
    }
    double getArea(){
        return height*width;
    }
    double getPerimeter(){
        return 2*height+2*width;
    }
};


int main()
{
    Rectangle rectangle1(4,40);
    Rectangle rectangle2(3.5,35.9);

    cout<<"The Area of Rectangle of height,"<<rectangle1.height<<" and width,"<<rectangle1.width<<" is:"<<
           rectangle1.getArea()<<" and Perimeter is:"<< rectangle1.getPerimeter()<<endl;
    cout<<"The Area of Rectangle of height,"<<rectangle2.height<<" and width,"<<rectangle2.width<<" is:"<<
           rectangle2.getArea()<<" and Perimeter is:"<< rectangle2.getPerimeter()<<endl;
    cout << "Hello world!" << endl;
    return 0;
}
