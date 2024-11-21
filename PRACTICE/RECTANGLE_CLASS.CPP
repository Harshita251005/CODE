// #include<iostream>
// using namespace std;
// class Rectangle{
//     int width;
//     int height;
// public:
//     Rectangle(){
//         width=1;
//         height=1;
//     }
//     Rectangle(int w,int h){
//         width=w;
//         height=h;
//     }
//     void display()
//     {
//         cout<<"Height: "<<height<<endl;
//         cout<<"Width: "<<width<<endl;
//         cout<<"Perimeter: "<<2*(height+width)<<endl;
//         cout<<"Area: "<<(height*width)<<endl;
//     }
// };

// int main()
// {
//     int w,h;
//     cin>>w>>h;
//     Rectangle r(w,h);
//     r.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Rectangle{
//     int width;
//     int height;
// public:
//     Rectangle(){
//         width=1;
//         height=1;
//     }
//     Rectangle(int w, int h)
//     {
//         width=w;
//         height=h;
//     }
//     void display()
//     {
//         cout<<"Width: "<<width<<endl;
//         cout<<"Height: "<<height<<endl;
//         cout<<"Perimeter: "<<2*(width+height)<<endl;
//         cout<<"Area: "<<width*height<<endl;
//     }
// };

// int main()
// {
//     int h,w;
//     cin>>h>>w;
//     Rectangle r(h,w);
//     r.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     int width;
//     int height;

// public:
//     Rectangle()
//     {
//         width = 1;
//         height = 1;
//     }
//     Rectangle(int w, int h)
//     {
//         width = w;
//         height = h;
//     }
//     void display()
//     {
//         cout << "Height: " << height << endl;
//         cout << "Width: " << width << endl;
//         cout << "Perimeter: " << 2 * (height + width) << endl;
//         cout << "Area: " << height * width << endl;
//     }
// };
// int main()
// {
//     int w, h;
//     cin >> w >> h;
//     Rectangle r(w, h);
//     r.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     int height;
//     int width;
// public:
//     Rectangle()
//     {
//         height = 1;
//         width = 1;
//     }
//     Rectangle(int h, int w)
//     {
//         height = h;
//         width = w;
//     }
//     void display()
//     {
//         cout << "Height: " << height << endl;
//         cout << "WIdth: " << width << endl;
//         cout << "Perimeter: " << 2 * (height + width) << endl;
//         cout << "Area: " << height * width << endl;
//     }
// };

// int main()
// {
//     int h, w;
//     cin >> h >> w;
//     Rectangle r(h, w);
//     r.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     int width;
//     int height;

// public:
//     Rectangle()
//     {
//         width = 1;
//         height = 1;
//     }
//     Rectangle(int w, int h)
//     {
//         width = w;
//         height = h;
//     }
//     void display()
//     {
//         cout << "Width: " << width << endl;
//         cout << "Height: " << height << endl;
//         cout << "Perimeter: " << 2 * (width + height) << endl;
//         cout << "Area: " << width * height << endl;
//     }
// };

// int main()
// {
//     int w, h;
//     cin >> w >> h;
//     Rectangle r(w, h);
//     r.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Rectangle
// {
//     int width;
//     int height;

// public:
//     Rectangle()
//     {
//         width = 1;
//         height = 1;
//     }
//     Rectangle(int w, int h)
//     {
//         width = w;
//         height = h;
//     }
//     void display()
//     {
//         cout << "Width: " << width << endl;
//         cout << "Height: " << height << endl;
//         cout << "Perimeter: " << 2 * (width + height) << endl;
//         cout << "Area: " << width * height << endl;
//     }
// };

// int main()
// {
//     int w, h;
//     cin >> w >> h;
//     Rectangle r(w, h);
//     r.display();
//     return 0;
// }




#include <iostream>
using namespace std;
class Rectangle
{
    int width;
    int height;

public:
    Rectangle()
    {
        width = 1;
        height = 1;
    }
    Rectangle(int w, int h)
    {
        width = w;
        height = h;
    }
    void display()
    {
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Perimeter: " << 2 * (width + height) << endl;
        cout << "Area: " << width * height << endl;
    }
};
int main()
{
    int w, h;
    cin >> w >> h;
    Rectangle r(w, h);
    r.display();
    return 0;
}