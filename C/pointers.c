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


