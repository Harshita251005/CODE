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


#include<stdio.h>
void changevalue(int* adress)
{
    *adress =345;
}
int main()
{
 int a =49,b=34;
 printf("%d\n",a);
 changevalue(&a); 
 printf("%d",a);
 return 0;
}


