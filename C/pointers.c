// #include<stdio.h>
// int main()
// {
//     int a=76;
//     int* ptra =&a;
//     printf("address of a pointer is =%x\n", &ptra);
//     printf("value of of a %d\n", *ptra);
//     printf("the value of a =%d\n",a);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a=76;
//     int* ptra = &a;
//     printf("%d\n",ptra);
//     printf("%d\n",ptra+1);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[5]={2,3,4,5,6};
//     printf("positioon %d\n",arr[0]);
//     printf("address of 1st %d\n",&arr[0]);
//     printf("address of 2nd %d\n",&arr[1]);
//     printf("address %d\n",arr + 1);
//     return 0;
// }

// #include<stdio.h>
// void changevalue(int* adress)
// {
//     *adress =345;
// }
// int main()
// {
//  int a =49,b=34;
//  printf("%d\n",a);
//  changevalue(&a);
//  printf("%d",a);
//  return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 5;
//     int c=35;
//     int* y;
//     y=&c;
//     int* x=&a;
//     int b = 5;
//     printf("%p\n",&a);
//     printf("%p\n",&b);
//     printf("%p\n",x);
//     printf("%d\n",*x);
//     printf("%p\n",&x);
//     printf("%p\n",&c);
//     printf("%p\n",y);
//     return 0;
// }

// #include<stdio.h>
// void swap(int* a ,int* b)
// {
//     int temp = *a;
//     *a=*b;
//     *b=temp;
//     return ;
// }
// int main()
// {
//     int a,b;
//     a=2;
//     b=4;
//     swap(&a,&b);
//     printf("the value of a = %d \n",a);
//     printf("the value of b = %d \n",b);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     int *x = &a;
//     int **y = &x;
//     printf("%p\n", &x);
//     printf("%p\n", y);
//     printf("%d\n", *x);
//     printf("%d\n", **y);
//     return 0;
// }

// #include <stdio.h>
// int min(int a, int b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }
// int gcd(int a, int b)
// {
//     int hcf;
//     for (int i = 1; i <= min(a, b); i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             hcf = i;
//         }
//     }
//     return hcf;
// }

// int main()
// {
//     int a, b;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     int hcf = gcd(a, b);
//     printf("the hcf of %d and %d is %d", a, b, hcf);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int *ptra = &a;
//     printf("%p\n", &a);  // for address of x
//     printf("%d", *ptra); // for value of nx
//     return 0;
// }

// #include <stdio.h>
// void address(int i)
// {
//     printf("address inside functio =%p\n", &i);
// }
// int main()
// {
//     int i = 10;
//     printf("address inside main =%p", &i);

//     address(i);

//     return 0;
// }

// #include <stdio.h>

// void multiplyBy10(int *x)
// {

//     *x = *x * 10;
// }

// int main()
// {
//     int num = 5;
//     printf("Original value: %d\n", num);

//     multiplyBy10(&num);

//     printf("New value: %d\n", num);

//     return 0;
// }

// #include <stdio.h>

// void calculateSumAndAverage(int a, int b, int *sum, float *average)
// {
//   *sum = a + b;
//   *average = (float)(*sum) / 2.0;
// }

// int main() {
//   int num1, num2, sum;
//   float average;

//   printf("Enter two numbers: ");
//   scanf("%d %d", &num1, &num2);

//   calculateSumAndAverage(num1, num2, &sum, &average);

//   printf("Sum: %d\n", sum);
//   printf("Average: %.2f\n", average);

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int i = 10;
//   int *p = &i;  // p is a pointer to int
//   int **pp = &p;  // pp is a pointer to pointer to int

//   printf("Value of i: %d\n", i);
//   printf("Value of i using p: %d\n", *p);
//   printf("Value of i using pp: %d\n", **pp);

//   return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 345;
//     float b = 8.3;
//     void *ptr;
//     ptr = &b;
//     printf("the value of b is %f\n",*((float *)ptr));
//     ptr = &a;
//     printf("the value of a is %d\n",*((int *)ptr));
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int a = 34;
//     int *ptr = &a;
//     if(ptr !=NULL){
//         printf("The address of a is %d\n",ptr);
//     }
//     else{
//         printf("The pointe is a null pointer and cannot be dereferenced");
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int *functionDangling()
// {
//     int a, b, sum;
//     a = 34;
//     b = 364;
//     sum = a + b;
//     return &sum;
// }
// int main()
// {
//     //  Case1 : deallocation of a memory block

//     int *ptr= (int *) malloc(7* sizeof(int));
//     ptr[0]=34;
//     ptr[1]=36;
//     ptr[2]=64;
//     ptr[3]=5;
//     free(ptr);  //ptr is now a dangling pointer

//     // Case2 : function returning local variable address
//     int *dangptr = functiondangling(); //ptr is now a dangling pointer

//     int * danglingptr3;

//     //Case3 : if a variable goes out of scope

//     {
//         int a =12;

//         danglingptr3 = &a;
//     }

//     //Here variable  a goes out of scope which means danglingptr3 is pointing to a location which is freed and hence danglingptr3 is now a dangling pointer

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int a = 334;
//     int *ptr;
//     *ptr = 34;
//     ptr = &a;
//     printf("The value of a is %d\n",*ptr);
//     return 0;
// }





// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     // printf("file name is %s\n",__FILE__);
//     // printf("today date is %s\n",__DATE__);
//     // printf("time now is %s\n",__TIME__);
//     printf("line no. is %d\n",__LINE__);
//     // printf("ANSI : %d\n",__STDC__);

//     return 0;
// }





// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("the value of argc  is %d \n", argc);
//     for (int i = 0; i < argc; i++)
//     {
//         printf("this argument at index number %d has a value of %s \n", i, argv[i]);
//     }
//     return 0;
// }





// #include <stdio.h>
// #include <stdlib.h>
// int sum(int a, int b)
// {
//     return a + b;
// }
// void greet()
// {
//     printf("Hello world my user good morning %d\n");
// }
// int main()
// {
//     printf("The sum of 1 and 2 is  %d\n", sum(1, 2));
//     int (*fptr) (int, int);
//     fptr = &sum;
//     int d = (*fptr) (4,6);
//     printf("the value of d  is %d\n",d);
//     return 0;
// }





// #include <stdio.h>
// #include <stdlib.h>

// int sum(int a, int b)
// {
//     return a + b;
// }

// void greethelloandexecute(int (*fptr)(int, int)){
//     printf("Hello user \n");
//     printf("The sum of 5 and 7 is %d\n",fptr(5,7));
// }

// void greetgmandexecute(int (*fptr)(int,int))
// {
//     printf("good morning user \n");
//     printf(" the sum of 5 and 7 is %d\n",fptr(5,7));
// }
// int main()
// {
//     int (*ptr)(int, int);
//     ptr = sum;
//     greetgmandexecute(ptr);
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main()
// {
// int chars, i=0;
// char *ptr;
// while (i<3)
// {
//     printf("employee %d: enter the no. of character in your employee id\n",i+1);
//     scanf("%d",&chars);
//     ptr = (char *) malloc((chars*1)*sizeof (char));
//     printf("enter your employee id \n");
//     scanf("%s",ptr);
//     printf("your employee id is %s\n",ptr);
//     free(ptr);
//     i=i+1;
// }
//     return 0;

// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// // Function to generate a random choice for the computer
// int getComputerChoice() {
//     return rand() % 3 + 1; // 1 for Rock, 2 for Paper, 3 for Scissor
// }

// // Function to determine the winner
// void determineWinner(int userChoice, int computerChoice) {
//     if (userChoice == computerChoice) {
//         printf("It's a tie!\n");
//     } else if ((userChoice == 1 && computerChoice == 3) ||
//                (userChoice == 2 && computerChoice == 1) ||
//                (userChoice == 3 && computerChoice == 2)) {
//         printf("You win!\n");
//     } else {
//         printf("Computer wins!\n");
//     }
// }

// int main() {
//     srand(time(NULL)); // Seed the random number generator

//     int userChoice;
//     while (1) {
//         printf("Enter your choice (1 for Rock, 2 for Paper, 3 for Scissor): ");
//         scanf("%d", &userChoice);

//         if (userChoice >= 1 && userChoice <= 3) {
//             break;
//         } else {
//             printf("Invalid choice. Please enter a number between 1 and 3.\n");
//         }
//     }

//     int computerChoice = getComputerChoice();
//     printf("Computer chose: %d\n", computerChoice);

//     determineWinner(userChoice, computerChoice);

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int rowsA = 2;
//     int colsA = 3;
//     int colsB = 2;

//     // Initialize matrices A and B
//     int matrixA[rowsA][colsA] = {
//         {1, 2, 3},
//         {4, 5, 6}
//     };

//     int matrixB[colsA][colsB] = {
//         {7, 8},
//         {9, 10},
//         {11, 12}
//     };

//     // Initialize matrix C
//     int matrixC[rowsA][colsB];

//     // Multiply matrices A and B
//     for (int i = 0; i < rowsA; i++) {
//         for (int j = 0; j < colsB; j++) {
//             matrixC[i][j] = 0;
//             for (int k = 0; k < colsA; k++) {
//                 matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
//             }
//         }
//     }

//     // Print matrices A, B, and C
//     printf("Matrix A:\n");
//     for (int i = 0; i < rowsA; i++) {
//         for (int j = 0; j < colsA; j++) {
//             printf("%d ", matrixA[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Matrix B:\n");
//     for (int i = 0; i < colsA; i++) {
//         for (int j = 0; j < colsB; j++) {
//             printf("%d ", matrixB[i][j]);
//         }
//         printf("\n");
//     }

//     printf("Matrix C (A x B):\n");
//     for (int i = 0; i < rowsA; i++) {
//         for (int j = 0; j < colsB; j++) {
//             printf("%d ", matrixC[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int num, reversedNum = 0, originalNum;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNum = num;

//     while (num != 0) {
//         int digit = num % 10;
//         reversedNum = reversedNum * 10 + digit;
//         num /= 10;
//     }

//     if (originalNum == reversedNum) {
//         printf("%d is a palindrome number.\n", originalNum);
//     } else {
//         printf("%d is not a palindrome number.\n", originalNum);
//     }

//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// // Function to calculate the area of a circle
// float calculate_area(float radius) {
//     return M_PI * radius * radius;
// }

// int main() {
//     // Declare a function pointer
//     float (*area_func)(float);

//     // Assign the address of the calculate_area function to the function pointer
//     area_func = calculate_area;

//     float radius;
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);

//     // Call the function using the function pointer
//     float area = area_func(radius);

//     printf("The area of the circle is: %.2f\n", area);

//     return 0;
// }