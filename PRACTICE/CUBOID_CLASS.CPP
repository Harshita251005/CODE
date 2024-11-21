// #include <iostream>
// using namespace std;
// class Cuboid
// {
//     double lenght;
//     double width;
//     double height;

// public:
//     Cuboid()
//     {
//         lenght = 1;
//         width = 1;
//         height = 1;
//     }

//     Cuboid(int l, int w, int h)
//     {
//         lenght = l;
//         width = w;
//         height = h;
//     }

//     void display()
//     {
//         cout << "Length: " << lenght << endl;
//         cout << "Width: " << width << endl;
//         cout << "Height: " << height << endl;
//         cout << "Volume: " << lenght * width * height << endl;
//     }
// };

// int main()
// {
//     int l, w, h;
//     cin >> l >> w >> h;
//     Cuboid newcube(l, w, h);
//     newcube.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Cuboid{
//      double length;
//      double width;
//      double height;
// public:
//     Cuboid(){
//         length=1;
//         width=1;
//         height=1;
//     }
//     Cuboid(double l,double w, double h)
//     {
//         length=l;
//         width=w;
//         height=h;
//     }
//     void display(){
//         cout<<"Length: "<<length<<endl;
//         cout<<"Width: "<<width<<endl;
//         cout<<"Height: "<<height<<endl;
//         cout<<"Volume: "<<length*width*height<<endl;

//     }
// };

// int main()
// {
//     double l,w,h;
//     cin>>l>>w>>h;
//     Cuboid newcube(l,w,h);
//     newcube.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Cuboid
// {
//     int length;
//     int width;
//     int height;

// public:
//     Cuboid()
//     {
//         length = 1;
//         width = 1;
//         height = 1;
//     }
//     Cuboid(int l, int w, int h)
//     {
//         length = l;
//         width = w;
//         height = h;
//     }
//     void display()
//     {
//         cout << "Length: " << length << endl;
//         cout << "Width: " << width << endl;
//         cout << "Height: " << height << endl;
//         cout << "Volume: " << length * width * height << endl;
//     }
// };

// int main()
// {
//     int l, w, h;
//     cin >> l >> w >> h;
//     Cuboid newcube(l, w, h);
//     newcube.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Cuboid
// {
//     double length;
//     double width;
//     double height;

// public:
//     Cuboid()
//     {
//         length = 1;
//         width = 1;
//         height = 1;
//     }
//     Cuboid(double l, double w, double h)
//     {
//         length = l;
//         width = w;
//         height = h;
//     }
//     void display()
//     {
//         cout << "Length: " << length << endl;
//         cout << "Width: " << width << endl;
//         cout << "Height: " << height << endl;
//         cout << "Volume: " << length * width * height << endl;
//     }
// };

// int main()
// {
//     double l, w, h;
//     cin >> l >> w >> h;
//     Cuboid newCube(l, w, h);
//     newCube.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Cuboid
// {
//     double length;
//     double width;
//     double height;

// public:
//     Cuboid()
//     {
//         length = 1;
//         width = 1;
//         height = 1;
//     }
//     Cuboid(double l, double w, double h)
//     {
//         length = l;
//         width = w;
//         height = h;
//     }
//     void display()
//     {
//         cout << "Length: " << length << endl;
//         cout << "Width: " << width << endl;
//         cout << "Height: " << height << endl;
//         cout << "Volume: " << length * width * height << endl;
//     }
// };

// int main()
// {
//     double l, w, h;
//     cin >> l >> w >> h;
//     Cuboid newcube(l, w, h);
//     newcube.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Cuboid
// {
//     double length;
//     double width;
//     double height;

// public:
//     Cuboid()
//     {
//         length = 1;
//         width = 1;
//         height = 1;
//     }
//     Cuboid(double l, double w, double h)
//     {
//         length = l;
//         width = w;
//         height = h;
//     }
//     void display()
//     {
//         cout << "Length: " << length << endl;
//         cout << "Width: " << width << endl;
//         cout << "Height: " << height << endl;
//         cout << "Volume: " << length * width * height << endl;
//     }
// };

// int main()
// {
//     double l, w, h;
//     cin >> l >> w >> h;
//     Cuboid newcube(l, w, h);
//     newcube.display();
//     return 0;
// }



#include <iostream>
using namespace std;
class Cuboid
{
    double length;
    double width;
    double height;

public:
    Cuboid()
    {
        length = 1;
        width = 1;
        height = 1;
    }
    Cuboid(double l, double w, double h)
    {
        length = l;
        width = w;
        height = h;
    }
    void display()
    {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Height: " << height << endl;
        cout << "Volume: " << length * width * height << endl;
    }
};
int main()
{
    double l, w, h;
    cin >> l >> w >> h;
    Cuboid newCube(l, w, h);
    newCube.display();
    return 0;
}