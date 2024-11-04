// #include <iostream>
// using namespace std;
// class student
// {
//     // public:
//     string name;
//     int age, roll_no;
//     string grade;
//     int pin;

// public:
// //getter and setter function
//     void setname(string s)
//     {
//         // if (s.size() == 0)
//         // {
//         //     cout << "invalid";
//         //     return;
//         // }
//         name = s;
//     }
//     void setage(int a)
//     {
//         // if (age < 0 || age > 100)
//         // {
//         //     cout << "invalid age";
//         //     return;
//         // }
//         age = a;
//     }
//     void setroll_no(int r)
//     {
//         roll_no = r;
//     }
//     void setgrade(string g)
//     {
//         grade = g;
//     }
//     void getname()
//     {
//         cout << name << endl;
//     }
//     void getage()
//     {
//         cout << age << endl;
//     }
//     int getroll_no()
//     {
//         return roll_no;
//     }
//     void getgrade()
//     {
//         cout << grade;
//     }
// };
// int main()
// {
//     student s1;
//     // s1.name="rohit";
//     // s1.age=24;
//     // s1.roll_no=23;
//     // cout<<s1.name<<endl;
//     // cout<<s1.age;

//     s1.setname("harshita");
//     s1.setage(54);
//     s1.setroll_no(12);
//     s1.setgrade("A+");
//     s1.getname();
//     s1.getage();
//     cout << s1.getroll_no()<<endl;
//     s1.getgrade();
//     return 0;
// }

// // #include <iostream>
// // using namespace std;
// // class a
// // {
// //     char c;
// //      int b;
// //     char g;

// //     double j;
// // };
// // int main()
// // {
// //     a obj;
// //     cout<<sizeof(obj)<<" ";
// //     return 0;
// // }

// // dynamic memory allocation

// // #include <iostream>
// // using namespace std;
// // class student
// // {
// // public:
// //     string name;
// //     int age;
// //     string grade;
// // };
// // int main()
// // {
// //     student *s1 = new student;
// //     (*s1).name = "rohit";
// //     (*s1).age = 24;
// //     (*s1).grade = "A+";
// //     cout << s1->name << " ";
// //     cout << s1->age << " ";
// //     cout << s1->grade << " ";

// //     return 0;
// // }

// // constructor
// // #include <iostream>
// // using namespace std;
// // class custumer
// // {
// //     string name;
// //     int account_no;
// //     int balance;

// // public:
// //     // default constructor
// //     custumer()
// //     {

// //         name = "paras";
// //         account_no = 230;
// //         balance = 10000;
// //     }
// //     // parameterized constructor
// //     custumer(string a, int b, int c)
// //     {
// //         name = a;
// //         account_no = b;
// //         balance = c;
// //     }
// //     // constructor overloading
// //     custumer(string a, int b)
// //     {
// //         name = a;
// //         account_no = b;
// //     }
// //     // inline constructor
// //     // inline custumer(
// //     //     string a, int b, int c) : name(a), account_no(b), balance(c)
// //     // {
// //     // }
// //     void display()
// //     {
// //         cout << name << " " << account_no << " " << balance << endl;
// //     }
// //     //copy constructor
// //     custumer(custumer &b){
// //         name=b.name;
// //         account_no=b.account_no;
// //     }
// // };
// // int main()
// // {
// //     custumer a1("harshita", 23, 200000);
// //     a1.display();
// //     custumer a2;
// //     a2.display();
// //     custumer a3("harsha", 13, 2000);
// //     a3.display();
// //     custumer a4(a3);
// //     a4.display();
// //     return 0;
// // }

// // destructor

// // #include <iostream>
// // using namespace std;
// // class customer
// // {
// //     string name;
// //     int *data;

// // public:
// //     customer()
// //     {
// //         name="4";
// //         cout<<name<<endl;
// //     }
// //     // customer(){
// //     //     name = "harshita";
// //     //     data = new int;
// //     //     *data = 10;
// //     //     cout<<"constructor is called"<<endl;
// //     // }
// //     customer(string name)
// //     {
// //         this->name = name;
// //         cout << name << endl;
// //     }
// //     // destructor
// //     ~customer()
// //     {
// //         // delete data;
// //         // cout<<"destructor is called"<<endl;
// //         cout << name << endl;
// //     }
// // };
// // int main()
// // {
// //     customer a1("1"), a2("2"), a3("3");
// //     customer *a4 = new customer;
// //     delete a4;
// //     return 0;
// // }

// static data member
// encapsulation

// #include<iostream>
// using namespace std;
// class customer
// {
//     string name;
//     int account_no,balance;
//     static int total_customer;

//     public:
//     customer(string name, int account_no, int balance)
//     {
//         this->name = name;
//         this->account_no = account_no;
//         this->balance = balance;
//         total_customer++;
//     }

//     void display()
//     {
//         cout<<name<<" "<<account_no<<" "<<balance<<" "<<total_customer;
//     }
//     void display_total()
//     {
//         cout<<total_customer<<endl;
//     }
// };
// int customer :: total_customer=0;

//     int main()
//     {
//         customer a1("rohit",1,1000);
//         customer a2("paras",2, 1800);
//         a1.display();
//         a2.display();
//     }

// user defined data type

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int rno;
//     float cgpa;
// };
// // passing object to function
// void print(student s)
// {
//     cout << s.name << " " << s.rno << " " << s.cgpa << endl;
// }
// // void change(int x)
// // {
// //     x=10;
// // }
// void change(student &s) // pass by reference by putting end
// {
//     s.name = "paras";
//     s.rno = 7;
//     s.cgpa = 10.0;
// }
// int main()
// {
//     // int x=4;
//     // cout<<x<<endl;
//     // change(x);
//     // cout<<x<<endl;
//     student s1;
//     s1.name = "harshita";
//     s1.rno = 76;
//     s1.cgpa = 8.2;
//     student s2;
//     s2.name = "Parshita";
//     s2.rno = 46;
//     s2.cgpa = 9.2;
//     print(s1);
//     change(s1); // pass by value by default
//     print(s1);
//     print(s2);
// }

// constructor

//  #include <iostream>
//  using namespace std;
//  class student
//  {
//  public:
//      string name;
//      int rno;
//      float cgpa;

//     // parameterised constructor
//     student(string s, int r,float g){
//         name=s;
//         rno=r;
//         cgpa=g;
//     }
//     //default constructor
//     student(){

//     }
// };
// void print(student s)
// {
//     cout<<s.name<<" "<<s.rno<<" "<<s.cgpa<<" "<<endl;
// }
// int main()
// {
//     student s1("paras" ,75 ,9.9 );
//     student s2("parshita" ,94 ,9.9 );
//     student s3=s2;
//     s3.name="harshita"; //deep copy
//     student s4(s1); //copy constructor
//     print(s1);
//     print(s2);
//     print(s3);
//     print(s4);
// }

// class function and passing objects to function

// #include <iostream>
// using namespace std;
// class student
// {
// public:
//     string name;
//     int rno;
//     float cgpa;

//     // parameterised constructor
//     student(string name, int rno, float cgpa)
//     {
//         this->name = name;
//         this->rno = rno;
//         this->cgpa = cgpa;
//     }
//     // default constructor
//     student()
//     {
//     }
//     void print()
// {
//     cout << name << " " << rno << " " << cgpa << " " << endl;
// }
// };

// int main()
// {
//     student s1("paras", 75, 9.9);
//     student s2("parshita", 94, 9.9);
//     student s3 = s2;
//     s3.name = "harshita"; // deep copy
//     student s4(s1);       // copy constructor
//     s1.print();
//     s2.print();
//     s3.print();
//     s4.print();
// }

// object pointer

//  #include<iostream>
//  using namespace std;
//  class cricketer{
//      public:
//      string name;
//      int matches;
//      int runs;
//      cricketer(string n,int m,int r)
//      {
//          name=n;
//          matches=m;
//          runs=r;
//      }
//      void print()
//      {
//          cout<< name <<" "<< matches <<" "<< runs <<" "<< endl ;
//      }
//  };
//  int main()
//  {
//      cricketer c1("virat",400,12345);
//      cricketer*p1=&c1;
//      cout<<(*p1).runs<<endl;
//      p1->matches=200;
//      cout<<c1.matches<<endl;

//     // int x=4;
//     // cout<<&x<<endl;
//     // int *p=&x;
//     // cout<<p<<endl;
//     // cout<<*p<<endl;
// }

// user defined data structure

// my vector

// #include <iostream>
// using namespace std;
// class Vector
// {
// public:
//     int size;
//     int capacity;
//     int *arr;
//     Vector()
//     {
//         size = 0;
//         capacity = 1;
//         arr = new int[1];
//     }
//     void add(int ele)
//     {
//         if (size == capacity)
//         {
//             capacity *= 2;
//             int *arr2 = new int[capacity];
//             for (int i = 0; i < size; i++)
//             {
//                 arr2[i] = arr[i];
//             }
//             arr = arr2;
//         }
//         arr[size] = ele;
//         size++;
//     }
//     void print()
//     {
//         for (int i = 0; i < size; i++)
//         {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
//     int get(int idx)
//     {
//         if (size == 0)
//         {
//             cout << "array is empty" << endl;
//             return -1;
//         }
//         if (idx >= size || idx < 0)
//         {
//             cout << "Invalid Index" << endl;
//             return -1;
//         }
//         return arr[idx];
//     }
//     void remove()
//     {
//         if (size == 0)
//         {
//             cout << "array is empty" << endl;
//         }
//         size--;
//     }
// };
// int main()
// {
//     //     int* arr = new int[5]; //dynamic array
//     //     arr[0] = 5;
//     //     arr[3] = 4;
//     //     cout<<arr[0];
//     Vector v1;
//     cout << v1.size << " " << v1.capacity << endl;
//     v1.add(10);
//     v1.print();
//     cout << v1.size << " " << v1.capacity << endl;
//     v1.add(4);
//     v1.print();
//     cout << v1.size << " " << v1.capacity << endl;
//     v1.add(7);
//     v1.print();
//     cout << v1.size << " " << v1.capacity << endl;
//     v1.add(5);
//     v1.print();
//     cout << v1.size << " " << v1.capacity << endl;
//     v1.add(1);
//     v1.print();
//     cout << v1.size << " " << v1.capacity << endl;
//     cout << v1.get(10) << endl;
// }

// inheritance

// single level

// #include <iostream>
// using namespace std;
// class scoty
// { // parent class
// public:
//     int speed;
//     float avg;

// private:
//     int bootspace;
// };
// class bike : public scoty
// { // child class or derived class
// public:
//     int gears;
// };
// int main()
// {
//     bike b1;
//     b1.speed = 180;
//     b1.avg = 24.3;
//     b1.gears = 6;
// }

// multiple inheritance

// #include <iostream>
// using namespace std;
// class cricketer
// {
// public:
//     int runs;
//     int wickets;
//     int avg;
// };
// class engineer
// {
// public:
//     int experience;
//     string domain;
// };
// class phodu : public engineer, cricketer
// {
// public:
//     string name;
// };
// int main()
// {
// }

// polymorphism

// function overloading

// #include <iostream>
// using namespace std;
// class loading
// {
// public:
//     void sum(int a, int b)
//     {
//         cout << a + b << endl;
//     }
//     void sum(int a, int b, int c)
//     {
//         cout << a + b + c << endl;
//     }
// };
// int main()
// {
//     loading a;
//     a.sum(5, 8);
//     a.sum(2,3,4);
// }

// operator overloading

// #include <iostream>
// using namespace std;
// class fraction
// {
// public:
//     int num, den;
//     fraction(int num, int den)
//     {
//         this->num = num;
//         this->den = den;
//     }
//     void display()
//     {
//         cout << num << "/" << den << endl;
//     }
//     fraction add(fraction f)
//     {
//         int newNum = this->num * f.den + f.num * this->den;
//         int newDen = this->den * f.den;
//         fraction ans(newNum, newDen);
//         return ans;
//     }
// };
// int main()
// {
//     fraction f1(1, 2);
//     fraction f2(1, 3);
//     f1.display();
//     f2.display();
//     fraction f3 = f1.add(f2);
//     f3.display();
// }

// virtual functiom and overriding

// #include <iostream>
// using namespace std;
// class scoty
// { // parent class
// public:
//     int speed;
//     float avg;
//     virtual void sound()
//     {
//         cout << "Vroom Vroom" << endl;
//     }
// };
// class bike : public scoty
// { // child class or derived class
// public:
//     int gears;
//     void sound()
//     {
//         cout << "Dhroom Dhroom" << endl;
//     }
// };
// int main()
// {
//     // scoty *b = new bike();  //object pointer
//     // b->sound();
//     // scoty *b;
//     // vector<scoty*>vehicle;
//     // vehicle.push_back(new bike());
// }

// single inheritance

// #include<iostream>
// using namespace std;
//  class human{
//     protected:
//     string name;
//     int age;

//     public:
//     human(string name, int age)
//     {
//         this-> name = name;
//         this-> age = age;
//     }
//     void display()
//     {
//         cout<<name<<" "<<age<<" \n";
//     }
//     void work()
//     {
//         cout<<" i am working \n";
//     }
//  };
//  class student: public human{
//     int rno,fees;
//     public:
//     student(string name, int age, int rno,int fees):human(name,age)
//     {
//         this->rno=rno;
//         this->fees=fees;
//     }
//     void display()
//     {
//         cout<<name<< " " <<age<< " " <<rno<<" "<<fees<<endl;
//     }

//  };
//  int main()
//  {
//     student a1("rohit",12,10,99);
//     a1.display();
//  }

// operator overloading

// #include<iostream>
// using namespace std;
// class complex{
//     int real,img;
//     public:
//     complex()
//     {

//     };
//     complex(int real, int img){
//         this->real=real;
//         this->img=img;
//     };
//     void display()
//     {
//         cout<<real<<" +i"<<img<<endl;
//     }
//     complex operator +(complex &c)
//     {
//         complex ans;
//         ans.real = real+c.real;
//         ans.img = img+c.img;
//         return ans;
//     }
// };
// int main()
// {
//     complex c1(3,4);
//     complex c2(2,3);
//     complex c3=c1+c2;
//     c3.display();
// }

// exception handling

// #include<iostream>
// using namespace std;

// class customer
// {
//     string name;
//     int balance, account_no;

//     public:
//     customer(string name, int balance, int account_no)
//     {
//         this->name=name;
//         this->balance =balance;
//         this->account_no=account_no;
//     };

//     //deposit
//     void deposit(int amount)
//     {
//         if(amount>0){
//             balance+=amount;
//             cout<<amount<<" is credited successfully\n";
//         }
//         else{
//             throw "amount should be greater than 0";
//         }
//     }
//     //widhraw
//     void withdraw(int amount)
//     {
//         if(amount>0 && amount<=balance)
//         {
//             balance-=amount;
//             cout<<amount<<" is debited successfully";
//         }
//         else if(amount<0){
//             throw "amount should be greater than 0";
//         }
//         else{
//             throw "your balance is not much";
//         }
//     }
// };
// int main(){
//     customer c1("rohit",2000,10);
//     try{
//     c1.deposit(100);
//     c1.withdraw(9000);
//     }
//     catch(const char *e)
//     {
//         cout<<"exception occured: "<<e<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     try{
//     if(b==0)
//     throw "divide by 0 is not possibley";
//     int c=a/b;
//     cout<<c<<endl;
//     }
//     catch(const char *e)
//     {
//         cout<<"exception occured: "<<e<<endl;
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     try{
//     int *p = new int[100000000000];
//     cout<<"memory allocation is successful\n";
//     delete []p;
//     }
//     catch(const exception &e)
//     {
//         cout<<"exception occured: "<<e.what()<<endl;
//     }
// }

// #include<iostream>
// #include<exception>
// using namespace std;
// class exception{
//     protected:
//     string msg;
//     public:
//     exception(string msg)
//     {
//         this->msg=msg;
//     }
//     string what(){
//         return msg;
//     }
// };
// int main()
// {
//       try{
//     int *p = new int[100000000000];
//     cout<<"memory allocation is successful\n";
//     delete []p;
//     }
//     catch(const exception &e)
//     {
//         cout<<"exception occured: "<<e.what()<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// class customer
// {
//     string name;
//     int balance, account_no;

// public:
//     customer(string name, int balance, int account_no)
//     {
//         this->name = name;
//         this->balance = balance;
//         this->account_no = account_no;
//     };

//     // deposit
//     void deposit(int amount)
//     {
//         if (amount > 0)
//         {
//             balance += amount;
//             cout << amount << " is credited successfully\n";
//         }
//         else
//         {
//             throw runtime_error("amount should be greater than 0");
//         }
//     }
//     // widhraw
//     void withdraw(int amount)
//     {
//         if (amount > 0 && amount <= balance)
//         {
//             balance -= amount;
//             cout << amount << " is debited successfully";
//         }
//         else if (amount < 0)
//         {
//             throw runtime_error("amount should be greater than 0");
//         }
//         else
//         {
//             throw "your balance is not much";
//         }
//     }
// };
// int main()
// {
//     customer c1("rohit", 2000, 10);
//     try
//     {
//         c1.deposit(100);
//         c1.withdraw(9000);
//     }
//     catch (const runtime_error &e)
//     {
//         cout << "exception occured: " << e.what() << endl;
//     }
//     catch (const bad_alloc &e)
//     {
//         cout << "exception occured: " << e.what() << endl;
//     }
//     catch (...)
//     {
//         cout << "exception occured: " << endl;
//     }
// }

// customised error

// class invalidamounterror : public runtime_error
// {
//     public:
//     invalidamounterror(const string &msg): runtime_error(msg)
//{};
// }

// file handling

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// read file
//     ifstream fin;
//     //open file
//     // ofstream fout;
//     fin.open("zoom.txt");  //agar nahi create then pehle create karega phir open
//     //write kar sakte hae
//     // fout<<"hello india";
// //fr read karo
// char c;
// fin>>c;
// while(!fin.eof())
// {
//     cout<<c;
//     fin>>c;
// }
//     fin.close();  //resource release kar payu

// vector<int>arr(5);
// cout << "enter the input";
// for (int i = 0; i < 5; i++)
//     cin >> arr[i];
// // file ko open karo
// ofstream fout;
// fout.open("zero.txt");
// for(int i=0;i<5;i++){
//     fout<<arr[i];
// };
// fout.close();
// }

// ambiguous error //multiple inheritence

// #include<iostream>
// using namespace std;
// class school{
//     public:
//    void display(){
//         cout<<"YS"<<endl;
//     }
// };
// class university{
//     public:
//     void display(){
//         cout<<"Chitkara"<<endl;
//     }
// };
// class student:public school,public university{
//     public:
//     void show(){
//         school::display();
//         university::display();
//     }
// };
// int main()
// {
//     student s1;
//     s1.show();
//     return 0;
// }

// diamond problem
//  #include<iostream>
//  #include<vector>
//  using namespace std;
//  class school{
//      public:
//    void display(){
//          cout<<"YS"<<endl;
//      }
//  };
//  class student: virtual public school{

// };
// class professor: virtual public school{

// };
// class university:public student,public professor{

// };
// int main()
// {
//     university u1;
//     u1.display();
//     return 0;
// }

// this
//  #include <iostream>
//  using namespace std;
//  class rectangle
//  {
//      int length;
//      int breadth;

// public:
//     rectangle(int length, int breadth)
//     {
//         this->length = length;
//         this->breadth = breadth;
//     }
//     void display()
//     {
//         cout << "area : " << breadth * length;
//     }
// };

// int main()
// {
//     rectangle r1(4,6);
//     r1.display();
//     return 0;
// }

// overiding use in inhertance

// #include <iostream>
// using namespace std;
// class parent
// {
//     public:
//     void display()
//     {
//         cout << " i am parent";
//     }
// };
// class child : public parent
// {
//     public:
//     void display()
//     {
//         cout<<"i am child";
//     }
// };
// int main()
// {
//     child c1;
//     c1.display();
// }

// #include <iostream>
// using namespace std;
// class school
// {
// public:
//     virtual void display()
//     {
//         cout<<"hello";
//     }
// };
// class child : public school
// {
// public:
//     void display()
//     {
//         cout << "print";
//     }
// };

// int main()
// {
//     school s1;
//     school *ptr;
//     child c1;
//     ptr=&c1;
//     ptr->display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class shape{
//     public:
//     virtual double area()=0;
// };
// class circle: public shape{
//     public:
//     double radius;
//     double Area(){
//         double result = 2*3.14*radius;
//     }
// };
// class rectangle: public shape{
//     private:
//     double length;
//     double breadth;
//    public:
//     rectangle(double l, double b){
//         length=l;
//         breadth=b;
//     }
//     double area()
//     {
//         return length*breadth;
//     }
// };
// int main()
// {
//     return 0;
// }






