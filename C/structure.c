// #include <stdio.h>
// struct student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[53];
// };
// int main()
// {
//     struct student harry, ravi, shubham;
//     harry.id = 1;
//     ravi.id = 2;
//     shubham.id = 12;
//     ravi.marks = 234;
//     harry.marks = 2345;
//     shubham.marks = 123;
//     harry.fav_char = 'P';
//     ravi.fav_char = 'H';
//     shubham.fav_char = 'L';
//     printf("harry got %d  marks \n ", harry.marks);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     typedef unsigned long ul;
//     typedef int integer;
//     ul l1, l2, l3;
//     integer a = 4;
//     printf("value of a = %d", a);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// struct student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };
// int main()
// {
//     struct student s1;
//     s1.id = 1;
//     s1.marks = 45;
//     s1.fav_char = 'c';
//     strcpy(s1.name, "harry");
//     printf("the id is %d\n",s1.id);
//     printf("the marks is %d\n",s1.marks);
//     printf("the fav_char is %c\n",s1.fav_char);
//     printf("the name is %s\n",s1.name);

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>
// union student
// {
//     int id;
//     int marks;
//     char fav_char;
//     char name[34];
// };
// int main()
// {
//     union student s1;
//     s1.id = 1;
//     s1.marks = 45;
//     s1.fav_char = 'c';
//     strcpy(s1.name, "harry");
//     printf("the id is %d\n",s1.id);
//     printf("the marks is %d\n",s1.marks);
//     printf("the fav_char is %c\n",s1.fav_char);
//     printf("the name is %s\n",s1.name);

//     return 0;
// }


#include<stdio.h>

int b=34;
int func1(int b1)
{
    static int myvar;
    printf("the value of myvar is %d\n",myvar);
    myvar++;
    // printf("the address of b inside func1 is %d\n",&b);
    // printf("the value of b inside func1 is %d\n",b);
    return b1 + myvar;
    // return b1 * 10;
}
int main()
{
    int b = 344;
    printf("the address of b inside main is %d\n",&b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    printf("the value of func1 is %d",val);
    return 0;
}


