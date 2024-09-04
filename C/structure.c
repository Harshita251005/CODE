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

// #include<stdio.h>

// int b=34;
// int func1(int b1)
// {
//     static int myvar;
//     printf("the value of myvar is %d\n",myvar);
//     myvar++;
//     // printf("the address of b inside func1 is %d\n",&b);
//     // printf("the value of b inside func1 is %d\n",b);
//     return b1 + myvar;
//     // return b1 * 10;
// }
// int main()
// {
//     int b = 344;
//     printf("the address of b inside main is %d\n",&b);
//     int val = func1(b);
//     val = func1(b);
//     val = func1(b);
//     val = func1(b);
//     val = func1(b);
//     val = func1(b);
//     int *ptr = &val;
//     printf("the value of func1 is %d",val);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     struct pokemon{
//         int hp;
//         int speed;
//         int attack;
//         char tier;
//     };
//     struct pokemon pikachu;
//     pikachu.hp=20;
//     pikachu.speed=89;
//     pikachu.attack=34;
//     pikachu.tier='A';
//     printf("%d\n",pikachu.hp);
//     printf("%d\n",pikachu.speed);
//     printf("%d\n",pikachu.attack);
//     printf("%c\n",pikachu.tier);

//     struct pokemon bheem;
//     bheem.hp=30;
//     bheem.speed=29;
//     bheem.attack=44;
//     bheem.tier='S';
//     printf("%d\n",bheem.hp);
//     printf("%d\n",bheem.speed);
//     printf("%d\n",bheem.attack);
//     printf("%c\n",bheem.tier);

//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     struct name{
//         char name[50];
//         float price;
//         int no_of_pages;
//     }a,b,c;

//     a.price=34.5;
//     a.no_of_pages=34;
//     strcpy(a.name,"Harshita");
//     printf("%f\n",a.price);
//     printf("%d\n",a.no_of_pages);
//     printf("%s\n",a.name);

//     b.price=30.5;
//     b.no_of_pages=340;
//     printf("%f\n",b.price);
//     printf("%d\n",b.no_of_pages);

//     c.price=340.5;
//     c.no_of_pages=3423;
//     printf("%f\n",c.price);
//     printf("%d\n",c.no_of_pages);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     struct person
//     {
//         char name[50];
//         int salary;
//         int age;
//     };
//     struct person a;
//     strcpy(a.name, "Harshita");
//     a.salary = 230;
//     a.age = 23;
//     printf("%s\n", a.name);

//     struct person b;

//     strcpy(b.name, "Parav");
//     b.salary = 2300;
//     b.age = 25;
//     printf("%d\n", b.age);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     typedef struct pokemon{
//         int hp;
//         int speed;
//         int attack;
//         char tier;
//     }pokemon;
//      pokemon arr[3];
//      arr[0].attack=58;
//      arr[0].hp=100;
//      arr[0].speed=34;
//      arr[0].tier='A';

//      arr[1].attack=23;
//      arr[1].hp=100;
//      arr[1].speed=34;
//      arr[1].tier='A';

//      arr[2].attack=45;
//      arr[2].hp=100;
//      arr[2].speed=34;
//      arr[2].tier='A';

//      for(int i=0;i<3;i++){
//         printf("%d\n",arr[i].attack);
//      }
//     return 0;

// }

// #include <stdio.h>
// int main()
// {
//     typedef struct cricketer
//     {
//         char name[30];
//         int age;
//         int no_of_test_matches;
//         float avg_runs;
//     } cricketer;

//     cricketer arr[20];
//     for (int i = 0; i < 20; i++)
//     {
//         scanf("%s", &arr[i].name);
//         scanf("%d", &arr[i].age);
//         scanf("%d", &arr[i].no_of_test_matches);
//         scanf("%f", &arr[i].avg_runs);
//     }
//     for (int i = 0; i < 20; i++)
//     {
//         printf("Name : %s\n", arr[i].name);
//         printf("Age : %d\n", arr[i].age);
//         printf("No_of_test_matches : %d\n", arr[i].no_of_test_matches);
//         printf("Avg_runs : %f\n", arr[i].avg_runs);
//     }

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     typedef struct date
//     {
//         int day;
//         int month;
//         int year;
//     } date;

//     date a, b;
//     a.day = 25;
//     a.month = 10;
//     a.year = 2005;

//     b.day = 25;
//     b.month = 10;
//     b.year = 2005;

//     bool flag = true;
//     if (a.day != b.day)
//         flag = false;
//     if (a.month != b.month)
//         flag = false;
//     if (a.year != b.year)
//         flag = false;

//     if (flag == true)
//     {
//         printf("dates are equal");
//     }
//     else
//     {
//         printf("dates are not equal");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include<string.h>
// int main()
// {
//     typedef struct pokemon
//     {
//         int hp;
//         int speed;
//         int attack;
//         char tier;
//     } pokemon;

//     typedef struct legendarypokemon{
//         pokemon normal;
//         char ability[10];
//     }legendarypokemon;

//     typedef struct godpokemon{
//         legendarypokemon legend;
//         int specialattack;
//     }godpokemon;

//     legendarypokemon newtwo;
//     strcpy(newtwo.ability,"pressure");
//     newtwo.normal.hp=89;
//     printf("%s\n",newtwo.ability);
//     printf("%d\n",newtwo.normal.hp);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// typedef struct pokemon
// {
//     int hp;
//     int speed;
//     int attack;
//     char tier;
//     char name[50];
// } pokemon;
// void fun(pokemon p)
// {
//     printf("%d", p.hp);
//     return;
// }
// void change(pokemon p)
// {
//     p.hp = 67;
//     p.attack = 89;
//     p.speed = 90;
//     return;
// }
// int main()
// {
//     pokemon pikachu;
//     pikachu.hp = 50;
//     pikachu.speed = 56;
//     pikachu.attack = 76;
//     pikachu.tier = 'h';
//     change(pikachu);
//     printf("%d\n", pikachu.hp);
//     printf("%d\n", pikachu.attack);
//     printf("%d\n", pikachu.speed);
//     fun(pikachu);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// typedef struct student
// {
//     int rollnumber;
//     char name[40];
//     char department[20];
//     char course[20];
//     int year;
// } student;

// void check(student a, student b)
// {
//     if (strcmp(a.department, b.department) == 0)
//     {
//         printf("yes");
//     }
//     else
//     {
//         printf("no");
//     }
//     return ;
// }

// int main()

// {
//     student a, b;
//     a.rollnumber = 23;
//     strcpy(a.name, "Harshita");
//     strcpy(a.department, "CSE");
//     strcpy(a.course, "BE_CSE");
//     a.year = 2023;

//     b.rollnumber = 24;
//     strcpy(b.name, "Parshita");
//     strcpy(b.department, "ASDCSE");
//     strcpy(b.course, "PCSE");
//     b.year = 2022;
//     check(a,b);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// typedef struct pokemon
// {
//     int hp;
//     int speed;
//     int attack;
//     char tier;
//     char name[50];
// } pokemon;

// int main()
// {
//     pokemon pikachu;
//     pikachu.hp = 60;
//     pikachu.attack = 70;
//     pikachu.speed = 100;
//     pikachu.tier = 'A';
//     strcpy(pikachu.name, "pikachu");

//     pokemon* x = &pikachu;
//     printf("%p\n", &pikachu.hp);
//     printf("%p\n", &pikachu.attack);
//     printf("%p\n", &pikachu.speed);
//     printf("%p\n",&pikachu.tier);
//     printf("%p\n",pikachu.name);

//     printf("%p", x);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     typedef struct person
//     {
//         int age;
//         float weight;
//     } person;
//     person p1;
//     p1.age = 23;
//     p1.weight = 68.78;
//     printf("%d", p1.age);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// typedef struct pokemon
// {
//     int hp;
//     int speed;
//     int attack;
//     char tier;
//     char name[50];
// } pokemon;

// // void fun(pokemon p)
// // {
// //     printf("%d", p.hp);
// //     return;
// // }

// void change(pokemon *p)
// {
//     (*p).hp = 70;
//     (*p).attack = 60;
//     (*p).speed = 110;
//     return;
// }
// int main()
// {
//     pokemon pikachu;
//     pikachu.hp = 60;
//     pikachu.speed = 100;
//     pikachu.attack = 70;
//     pikachu.tier = 'h';
//     strcpy(pikachu.name, "pikachu");

//     printf("%d\n", pikachu.hp);
//     printf("%d\n", pikachu.attack);
//     printf("%d\n", pikachu.speed);
//     printf("%c\n", pikachu.tier);
//     printf("%s\n", pikachu.name);

//     // fun(pikachu);

//     change(&pikachu);
//     printf("%d\n", pikachu.hp);
//     printf("%d\n", pikachu.attack);
//     printf("%d\n", pikachu.speed);
//     printf("%c\n", pikachu.tier);
//     printf("%s\n", pikachu.name);

//     // printf("%p", x);
//     // pikachu.hp = 40;

//     //  (*x).hp = 70;
//     //  printf("%d",pikachu.hp);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){

//     typedef struct driver{
//         char name[40];
//         char license_no[50];
//         char root[69];
//         float km;
//     }driver;

//     // int n;
//     // printf("enter the no. of drivers");
//     // scanf("%d",&n);
//     driver arr[3];

//     for (int i=0;i<3;i++){
//         scanf("%s",&arr[i].name);
//         scanf("%s",&arr[i].license_no);
//         scanf("%s",&arr[i].root);
//         scanf("%f",&arr[i].km);
//     }
//     for(int i=0;i<3;i++){
//         printf("Name : %s\n",arr[i].name);
//         printf("No. : %s\n",arr[i].license_no);
//         printf("Root : %s\n",arr[i].root);
//         printf("Km : %f\n",arr[i].km);
//     }

//     return 0;
// }

// #include <stdio.h>

// // Define a struct to represent a 2D vector
// typedef struct {
//     double x;
//     double y;
// } Vector2D;

// int main() {
//     // Create a new 2D vector
//     Vector2D vector;
//     vector.x = 3.0;
//     vector.y = 4.0;

//     // Print the vector
//     printf("(%f, %f)\n", vector.x, vector.y);

//     return 0;
// }

// #include <stdio.h>

// typedef struct
// {
//     double x;
//     double y;
// } Vector2D;

// void sum()
// {
//     float sum =0;
//     Vector2D vector;
//     vector.x = 3.0;
//     vector.y = 4.0;
//     sum = vector.x + vector.y;

//     // Print the vector
//     printf("(%f, %f, %.2f)\n", vector.x, vector.y, sum);
//     return ;
// }

// int main()
// {
//     sum();
//     return 0;
// }

// #include <stdio.h>

// // Define a struct to represent a 2D vector
// typedef struct {
//     double x;
//     double y;
// } Vector2D;

// // Function to sum two 2D vectors
// Vector2D sumVector(Vector2D v1, Vector2D v2) {
//     Vector2D result;
//     result.x = v1.x + v2.x;
//     result.y = v1.y + v2.y;
//     return result;
// }

// int main() {
//     // Create two 2D vectors
//     Vector2D vector1;
//     vector1.x = 1.0;
//     vector1.y = 2.0;

//     Vector2D vector2;
//     vector2.x = 3.0;
//     vector2.y = 4.0;

//     // Sum the two vectors
//     Vector2D sum = sumVector(vector1, vector2);

//     // Print the result
//     printf("(%f, %f) + (%f, %f) = (%f, %f)\n",
//            vector1.x, vector1.y, vector2.x, vector2.y, sum.x, sum.y);

//     return 0;
// }

// #include <stdio.h>

// // Define a struct to represent a 2D vector
// typedef struct {
//     double x;
//     double y;
// } Vector2D;

// int main() {
//     // Create a Vector2D struct
//     Vector2D vector;

//     // Create a pointer to the struct
//     Vector2D* vectorPtr = &vector;

//     // Assign values to the struct members using the arrow operator
//     vectorPtr->x = 3.0;
//     vectorPtr->y = 4.0;

//     // Print the values using the arrow operator
//     printf("Vector: (%f, %f)\n", vectorPtr->x, vectorPtr->y);

//     return 0;
// }

// #include <stdio.h>

// // Define a struct to represent a complex number
// typedef struct {
//     double real;
//     double imag;
// } Complex;

// int main() {
//     // Create a Complex struct
//     Complex c;

//     // Assign values to the complex number
//     c.real = 3.0;
//     c.imag = 4.0;

//     // Print the complex number
//     printf("Complex number: %f + %fi\n", c.real, c.imag);

//     return 0;
// }

// #include <stdio.h>

// typedef struct {
//     double real;
//     double imag;
// } Complex;

// int main() {
//     Complex complexNumbers[5];

//     for (int i = 0; i < 5; i++) {
//         printf("Enter complex number %d (real and imaginary parts separated by space): ", i + 1);
//         scanf("%lf %lf", &complexNumbers[i].real, &complexNumbers[i].imag);
//     }

//     for (int i = 0; i < 5; i++) {
//         printf("Complex number %d: %f + %fi\n", i + 1, complexNumbers[i].real, complexNumbers[i].imag);
//     }

//     return 0;
// }

// #include <stdio.h>

// // Define a struct to represent a complex number
// typedef struct {
//     double real;
//     double imag;
// } Complex;

// // Function to display a complex number
// void displayComplex(Complex c) {
//     printf("%f + %fi\n", c.real, c.imag);
// }

// int main() {
//     // Create an array of 5 Complex structs
//     Complex complexNumbers[5];

//     // Prompt the user to input the complex numbers
//     for (int i = 0; i < 5; i++) {
//         printf("Enter complex number %d (real and imaginary parts separated by space): ", i + 1);
//         scanf("%lf %lf", &complexNumbers[i].real, &complexNumbers[i].imag);
//     }

//     // Display the complex numbers using the display function
//     for (int i = 0; i < 5; i++) {
//         printf("Complex number %d: ", i + 1);
//         displayComplex(complexNumbers[i]);
//     }

//     return 0;
// }




// #include <stdio.h>
// int main()
// {
//     typedef struct
//     {
//         int accountNumber;     // unique identifier for the account
//         char customerName[50]; // name of the account holder
//         char accountType[10];  // type of account (e.g. "Checking", "Savings", etc.)
//         double balance;        // current balance of the account
//         char address[100];     // address of the account holder
//         char phoneNumber[20];  // phone number of the account holder
//     } BankAccount;
//     return 0;
// }




// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     typedef struct date{
//         int day;
//         int month;
//         int year;
//     }date;

//     date a,b;
//     a.day=20;
//     a.month=4;
//     a.year=2023;
//     b.day=23;
//     b.month=4;
//     b.year=2022;

//     bool flag = true;
//     if (a.day != b.day)
//         flag = false;
//     if (a.month != b.month)
//         flag = false;
//     if (a.year != b.year)
//         flag = false;

//     if (flag == true)
//     {
//         printf("dates are equal");
//     }
//     else
//     {
//         printf("dates are not equal");
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     typedef struct time{
//         int hour;
//         int minutes;
//         int sec;
//     }time;

//     time a,b;
//     a.hour=20;
//     a.minutes=4;
//     a.sec=20;
//     b.hour=23;
//     b.minutes=4;
//     b.sec=20;

//     bool flag = true;
//     if (a.hour != b.hour)
//         flag = false;
//     if (a.minutes != b.minutes)
//         flag = false;
//     if (a.sec != b.sec)
//         flag = false;

//     if (flag == true)
//     {
//         printf("time is  equal");
//     }
//     else
//     {
//         printf("time is not equal");
//     }
//     return 0;
// }



// #include <stdio.h>

// struct Item {
//     char name[20];
//     int quantity;
//     float price;
// };

// int main() {
//     int n;
//     printf("Enter the number of items: ");
//     scanf("%d", &n);

//     struct Item items[n];

//     float total = 0.0;

//     printf("Enter the details of each item:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Item %d:\n", i + 1);
//         printf("Name: ");
//         scanf("%s", items[i].name);
//         printf("Quantity: ");
//         scanf("%d", &items[i].quantity);
//         printf("Price: ");
//         scanf("%f", &items[i].price);

//         total += items[i].quantity * items[i].price;
//     }

//     printf("\nBill:\n");
//     printf("Item\tQuantity\tPrice\tTotal\n");
//     for (int i = 0; i < n; i++) {
//         printf("%s\t%d\t%.2f\t%.2f\n", items[i].name, items[i].quantity, items[i].price, items[i].quantity * items[i].price);
//     }

//     printf("\nTotal: %.2f\n", total);

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int choice;
//     float num1, num2, result;

//     printf("Simple Calculator\n");
//     printf("1. Add\n");
//     printf("2. Subtract\n");
//     printf("3. Multiply\n");
//     printf("4. Divide\n");
//     printf("Enter your choice (1/2/3/4): ");
//     scanf("%d", &choice);

//     printf("Enter two numbers: ");
//     scanf("%f %f", &num1, &num2);

//     switch (choice) {
//         case 1:
//             result = num1 + num2;
//             printf("%.2f + %.2f = %.2f\n", num1, num2, result);
//             break;
//         case 2:
//             result = num1 - num2;
//             printf("%.2f - %.2f = %.2f\n", num1, num2, result);
//             break;
//         case 3:
//             result = num1 * num2;
//             printf("%.2f * %.2f = %.2f\n", num1, num2, result);
//             break;
//         case 4:
//             if (num2 != 0) {
//                 result = num1 / num2;
//                 printf("%.2f / %.2f = %.2f\n", num1, num2, result);
//             } else {
//                 printf("Error: Division by zero is not allowed.\n");
//             }
//             break;
//         default:
//             printf("Invalid choice. Please enter a number between 1 and 4.\n");
//     }

//     return 0;
// }


