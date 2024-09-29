#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int age,roll_no;
};
int main()
{
    student s1;
    s1.name="rohit";
    s1.age=24;
    s1.roll_no=23;
    cout<<s1.name<<endl;
    cout<<s1.age;
    return 0;
}