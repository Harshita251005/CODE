// // #include <iostream>
// // using namespace std;
// // class student
// // {
// //     // public:
// //     string name;
// //     int age, roll_no;
// //     string grade;
// //     int pin;

// // public:
// //     void setname(string s)
// //     {
// //         // if (s.size() == 0)
// //         // {
// //         //     cout << "invalid";
// //         //     return;
// //         // }
// //         name = s;
// //     }
// //     void setage(int a)
// //     {
// //         // if (age < 0 || age > 100)
// //         // {
// //         //     cout << "invalid age";
// //         //     return;
// //         // }
// //         age = a;
// //     }
// //     void setroll_no(int r)
// //     {
// //         roll_no = r;
// //     }
// //     void setgrade(string g)
// //     {
// //         grade = g;
// //     }
// //     void getname()
// //     {
// //         cout << name << endl;
// //     }
// //     void getage()
// //     {
// //         cout << age << endl;
// //     }
// //     int getroll_no()
// //     {
// //         return roll_no;
// //     }
// //     void getgrade()
// //     {
// //         cout << grade;
// //     }
// // };
// // int main()
// // {
// //     student s1;
// //     // s1.name="rohit";
// //     // s1.age=24;
// //     // s1.roll_no=23;
// //     // cout<<s1.name<<endl;
// //     // cout<<s1.age;

// //     s1.setname("harshita");
// //     s1.setage(54);
// //     s1.setroll_no(12);
// //     s1.setgrade("A+");
// //     s1.getname();
// //     s1.getage();
// //     cout << s1.getroll_no()<<endl;
// //     s1.getgrade();
// //     return 0;
// // }

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


// #include<iostream>
// using namespace std;
// class customer
// {
//     string name;
//     int account_no,balance;
//     int total_customer;

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
