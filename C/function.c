// #include <stdio.h>

// int sum(int a, int b)

// // with arguments and with return value
// {
//     return a + b;
// }

// int main()
// {
//     int a, b,c;
//     a=9;
//     b=27;
//     c= sum(a,b);
//     printf("The sum is %d",c);
//     return 0;
// }

// #include <stdio.h>

// void printstar(int n)

// // with arguments and without return value
// {
//     for(int i=0;i<n;i++)

//     {
//         printf("%c",'*');

//     }
// }

// int main()

// {

//  printstar(7);

//     return 0;
// }

// #include <stdio.h>

// int takenumber()

// // without arguments and with return value
// {
//     int i;
//     printf("Enter a number");
//     scanf("%d",&i);
//     return i;
// }

// int main()
// {
//     int c;

//     c = takenumber();

//     printf("The number is %d",c);

//     return 0;

// }

// without arguments and without return value

// #include<stdio.h>

// void add()
// {
//     int a,b,c;
//     printf("\nEnter The Value of A & B :");
//     scanf("%d%d",&a,&b);
//     c=a+b;
//     printf("\nTotal : %d",c);
// }

// int main()
// {
//     add();
//     return 0;
// }

// #include<stdio.h>

// int avg( int a, int b, int c)

// {
//     return (a+b+c)/3;
// }

//     int main()
//     {
//         int a=10;
//         int b=20;
//         int c=30;
//         int d;
//         d = avg(a,b,c);
//         printf("%d",d);
//         return 0;
//     }

// #include<stdio.h>

// void avg()
// {
//     int a=10;
//     int b=20;
//     int c=30;
//     int d;
//     d=(a+b+c)/3;
//     printf("%d",d);
// }

// int main(){
//      avg();
//      return 0;
// }


// #include <stdio.h>

// int sum()

// // without arguments and with return value
// {
//     int a,b,c;
//     printf("Enter a number");
//     scanf("%d %d",&a ,&b);
//     c=a+b;
//     printf("The number is %d",c);
//     return a,b;
// }

// int main()
// {
//     sum();
//     return 0;
// }

// #include<stdio.h>

// void num()
// {
//     int i,n;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     {
//         printf("%d",i);
//     }
// }

// int main(){
//     num();
//     return 0;
// }


// #include <stdio.h>

// int fact(int n)

// {
//     if (n == 1 || n == 0)
//     {
//         return 1;
//     }
//     else{
//         return (n * fact(n-1));
//     }
// }

// int main(){
//     int num;
//     printf("enter the no.");
//     scanf("%d",&num);
//     printf("the factorial of %d is %d",num,fact(num));
//     return 0;
// }

// #include <stdio.h>
// int fibon_r(int n)

// {
//     if (n == 1 || n == 2)
//     {
//         return n-1;
//     }
//     else
//     {
//         return (fibon_r(n - 1) + fibon_r(n - 2));
//     }
// }
// int fibon_i(int n)

// {
//     int a =0;
//     int b =1;
//     for(int i =0; i<n-1;i++){
//         b= a+b;
//         a=b-a;
//     }
//     return a;
// }


// int main()
// {
//     int num;
//     printf("enter the no.");
//     scanf("%d", &num);
//     printf("the fiban of %d is %d\n", num, fibon_r(num));
//     printf("the fiban of %d is %d", num, fibon_i(num));

//     return 0;
// }

// #include<stdio.h>
// void greet()
//    {
//     printf("good morning\n");
//     printf("good afternoon\n");
//     printf("good night\n");
//       return;
//    }

//     int main()
//     {
//         greet();
//         greet();
//         return 0;
//     }



// #include<stdio.h>
// #include<math.h>

// int main(){
//     int a;
//     scanf("%d",&a);
//     printf("%f",pow(a,2));
//     return 0;
// }


// #include<stdio.h>
// void abc()
// {
//     int cel;
//     float fah;
//     scanf("%d",&cel);
//     fah=(cel* 9.0 / 5.0) + 32.0;
//     printf("%f",fah);
//        return ;
// }

// int main()
// {
//     abc();
//     return 0;
// }

// #include<stdio.h>
// void force()
// {
//     int  F,G,M,m,r;
//     printf("enter the value of G=");
//     scanf("%d",&G);
//     printf("enter the value of M=");
//     scanf("%d",&M);
//     printf("enter the value of m=");
//     scanf("%d",&m);
//     printf("enter the value of r=");
//     scanf("%d",&r);
//     F=G*m*M/(r*r);
//     printf("%d",F);
//     return;
// }
// int main()
// {
//     force();
//     return 0;
// }


// #include<stdio.h>
// void pattren()
// {
//     int i,j,row,column;
//     scanf("%d",&row);
//     for(i=1;i<=row;i++)
//     {
//         for(j=1;j<=2*i-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }    
//     return;
// }

// int main()
// {
//     pattren();
//     pattren();
//     return 0;
// }


// #include <stdio.h>

// int sum(int n) {
//     if (n == 1) {
//         return 1;
//     } 
//     else {
//         return n + sum(n - 1);
//     }
// }

// int main() {
//     int n;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     printf("The sum of the first %d natural numbers is: %d\n", n, sum(n));
//     return 0;
// }


// #include <stdio.h>
// int fibon_r(int n)

// {
//     if (n == 1 || n == 2)
//     {
//         return n-1;
//     }
//     else
//     {
//         return (fibon_r(n - 1) + fibon_r(n - 2));
//     }
// }
// int main()
// {
//     int num;
//     printf("enter the no.");
//     scanf("%d", &num);
//     printf("the fiban of %d is %d\n", num, fibon_r(num));
//     return 0;
// }


