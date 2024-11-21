// #include <iostream>
// #include <cmath>
// using namespace std;
// class Shape
// {
// public:
//     virtual void calculateArea() const
//     {
//         cout << "Area of the Shape: ";
//     }
//     virtual ~Shape() {}
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r)
//     {
//         radius = r;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of Circle: " << 3.14 * radius * radius << endl;
//     }
// };
// class Rectangle : public Shape
// {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w)
//     {
//         length = l;
//         width = w;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of Rectangle: " << length * width << endl;
//     }
// };

// int main()
// {
//     double r;
//     double l, w;
//     cin >> r;
//     cin >> l >> w;
//     Shape *Shape1 = new Circle(r);
//     Shape *Shape2 = new Rectangle(l, w);
//     Shape1->calculateArea();
//     Shape2->calculateArea();
//     delete Shape1;
//     delete Shape2;
//     return 0;
// }

// #include<iostream>
// #include<cmath>
// using namespace std;
// class Shape{
//     public:
//         virtual void calculateArea() const{
//             cout<<"Area of the Shape: ";
//         }
//     virtual ~Shape(){}
// };

// class Circle:public Shape{
//     private:
//     double radius;
//     public:
//     Circle(double r)
//     {
//         radius=r;
//     }
//     void calculateArea() const override{
//         cout<<"Area of Circle: "<<3.14*radius*radius<<endl;
//     }
// };

// class Rectangle: public Shape{
// private:
//     double length;
//     double width;
//     public:
//     Rectangle(double l,double w)
//     {
//         length=l;
//         width=w;
//     }
//     void calculateArea() const override{
//         cout<<"Area of Rectangle: "<<length*width<<endl;
//     }
// };
// int main()
// {
//     double r;
//     double l,w;
//     cin>>r;
//     cin>>l>>w;
//     Shape* Shape1=new Circle(r);
//     Shape* Shape2=new Rectangle(l,w);
//     Shape1->calculateArea();
//     Shape2->calculateArea();
//     delete Shape1;
//     delete Shape2;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// class Shape
// {
// public:
//     virtual void calculateArea() const
//     {
//         cout << "Area of the shape: ";
//     }
//     virtual ~Shape() {}
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r)
//     {
//         radius = r;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the circle: " << 3.14 * radius * radius << endl;
//     }
// };

// class Rectangle : public Shape
// {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w)
//     {
//         length = l;
//         width = w;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Rectangle: " << length * width << endl;
//     }
// };

// int main()
// {
//     double r;
//     double l, b;
//     cin >> r;
//     cin >> l >> b;
//     Shape *Shape1 = new Circle(r);
//     Shape *Shape2 = new Rectangle(l, b);
//     Shape1->calculateArea();
//     Shape2->calculateArea();
//     delete Shape1;
//     delete Shape2;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// class Shape
// {
// public:
//     virtual void calculateArea() const
//     {
//         cout << "Area of the Shape: ";
//     }
//     virtual ~Shape() {}
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r)
//     {
//         radius = r;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Circle: " << 3.14 * radius * radius << endl;
//     }
// };
// class Rectangle : public Shape
// {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w)
//     {
//         length = l;
//         width = w;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Rectangle: " << length * width << endl;
//     }
// };
// int main()
// {
//     double r;
//     double l, w;
//     cin >> r;
//     cin >> l >> w;
//     Shape *Shape1 = new Circle(r);
//     Shape *Shape2 = new Rectangle(l, w);
//     Shape1->calculateArea();
//     Shape2->calculateArea();
//     delete Shape1;
//     delete Shape2;
//     return 0;
// }

// #include <iostream>
// #include<cmath>
// using namespace std;
// class Shape
// {
// public:
//     virtual void calculateArea() const
//     {
//         cout << "Area of the Shape: ";
//     }
//     virtual ~Shape() {};
// };
// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r)
//     {
//         radius = r;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Circle: " << 3.14 * radius * radius << endl;
//     }
// };
// class Rectangle : public Shape
// {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w)
//     {
//         length = l;
//         width = w;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Rectangle: " << length * width << endl;
//     }
// };
// int main()
// {
//     double r;
//     double l, w;
//     cin >> r;
//     cin >> l >> w;
//     Shape *Shape1 = new Circle(r);
//     Shape *Shape2 = new Rectangle(l, w);
//     Shape1->calculateArea();
//     Shape2->calculateArea();
//     delete Shape1;
//     delete Shape2;
//     return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// class Shape
// {
// public:
//     virtual void calculateArea() const
//     {
//         cout << "Area of the Shape: ";
//     }
//     virtual ~Shape() {}
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r)
//     {
//         radius = r;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Circle: " << 3.14 * radius * radius << endl;
//     }
// };

// class Rectangle : public Shape
// {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w)
//     {
//         length = l;
//         width = w;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Rectangle: " << length * width << endl;
//     }
// };

// int main()
// {
//     double r;
//     double l, w;
//     cin >> r;
//     cin >> l >> w;
//     Shape *Shape1 = new Circle(r);
//     Shape *Shape2 = new Rectangle(l, w);
//     Shape1->calculateArea();
//     Shape2->calculateArea();
//     delete Shape1;
//     delete Shape2;
//     return 0;
// }




// #include <iostream>
// using namespace std;
// class Shape
// {
// public:
//     virtual void calculateArea() const
//     {
//         cout << "Area of the Shape: ";
//     }
//     virtual ~Shape() {}
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double r)
//     {
//         radius = r;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Circle: " << 3.14 * radius * radius << endl;
//     }
// };
// class Rectangle : public Shape
// {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double l, double w)
//     {
//         length = l;
//         width = w;
//     }
//     void calculateArea() const override
//     {
//         cout << "Area of the Rectangle: " << length * width << endl;
//     }
// };

// int main()
// {
//     double r;
//     double l, w;
//     cin >> r;
//     cin >> l >> w;
//     Shape *Shape1 = new Circle(r);
//     Shape *Shape2 = new Rectangle(l, w);
//     Shape1->calculateArea();
//     Shape2->calculateArea();
//     delete Shape1;
//     delete Shape2;
//     return 0;
// }