// #include<stdio.h>
// int main()
// {
//     int marks[4];
//     marks[0]=45;
//     marks[1]=89;
//     marks[2]=456;
//     marks[3]=345;
//     printf("display the values\n%d\n%d\n%d\n%d\n",marks[0],marks[1],marks[2],marks[3]);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int arr[5] = {2,4,6,8,10};
//     arr[4]=100;
//     printf("%d",arr[4]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     float arr[5] = {2.2,4.5,6.65,8.45,10.2345};
//     arr[4]=100.234;
//     printf("%f",arr[4]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char arr[5] = {'a','d','E','&','h'};
//     arr[4]='%';
//     printf("%c",arr[4]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5];
//     printf("enter first element");
//     scanf("%d",&arr[0]);
//     printf("enter second element");
//     scanf("%d",&arr[1]);
//     printf("enter third element");
//     scanf("%d",&arr[2]);
//     printf("enter fourth element");
//     scanf("%d",&arr[3]);
//     printf("enter fifth element");
//     scanf("%d",&arr[4]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5]={2,4,5,6,7};
//     for(int i=0;i<=5;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5];
// for(int i=0;i<=4;i++){
// printf("enter no .%d =",i+1);
// scanf("%d",&arr[i]);
// }

// for(int i=4;i>=0;i--){
//     printf("enter no. reverse %d = ",i+1);
//     scanf("%d",&arr[i]);
// }
//     printf("%d",arr[1]);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int marks[10]={65,34,32,12,22,65,3,24,78,98};
//     for(int i=0;i<10;i++){

//     if(marks[i]<=35){
//         printf("%d\n",i);

//     }
// }
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5] = { 1,2,3,4,5};
//     int sum=0;
//     for(int i=0;i<=4;i++){
//         sum=sum+arr[i];
//     }
//             printf("%d",sum);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the size of an array=");
//     scanf("%d",&n);
//     int arr[n];
//     for( int i =0;i<=n-1;i++){
//         scanf("%d",&arr[i]);
//     }
//     for( int i =0;i<=n-1;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int mul=1;
//     for (int i=0;i<=4;i++){
//         mul=mul*arr[i];
//     }
//     printf("%d",mul);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//      int arr[5];
//     for(int i=0;i<=4;i++){
//     printf("enter no .%d =",i+1);
//     scanf("%d",&arr[i]);
//     }
//     int mul=1;
//     for (int i=0;i<=4;i++){
//         mul=mul*arr[i];
//     }
//     printf("%d",mul);
//     return 0;
// }

//   #include<stdio.h>
//   int main(){
//     int i;
//     int arr[5]={-2,-5,-6,-7,-89};
//     int max=arr[0];
//     for( i=0;i<=4;i++)
//     {
//     if(max<arr[i])
//     {
//         max=arr[i];
//     }
//     }
//     printf("%d",max);
//      return 0;
//   }

// #include<stdio.h>
//   int main(){
//     int i;
//     int arr[5]={-2,-5,-6,-7,-89};
//     int min=arr[0];
//     for( i=0;i<=4;i++)
//     {
//     if(min>arr[i])
//     {
//         min=arr[i];
//     }
//     }
//     printf("%d",min);
//      return 0;
//   }

// #include<stdio.h>
//   int main(){
//     int i;
//     int arr[5]={-2,-5,-6,-7,-89};
//     int max=arr[0];
//     for( i=0;i<=4;i++)
//     {
//     if(max<arr[i])
//     {
//         max=arr[i];
//     }
//     }
//     printf("%d",max);
//      return 0;
//   }

// #include<stdio.h>
// int func1(int array[])
// {
//     for(int i =0; i<4;i++)
//     {
//         printf("the value at %d is %d\n ",i, array[i]);
//     }
//     array[0] = 354;
//     return 0;
// }
// int main(){
//     int arr[] = {23,13,3,4};
//     printf("the value at index 0 is %d\n ",arr[0]);
//     func1(arr);
//     printf("the value at index 0 is %d\n ",arr[0]);
//     return 0;
// }

// #include<stdio.h>
// void fun(int arr[])
// {
//     arr[0]=10;
//     return ;
// }
// int main()
// {
//     int arr[5] ={ 1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d\n",arr[0]);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, i;
//     printf("enter the value of n=");
//     scanf("%d", &n);
//     int arr[n];
//     for (int i = 0; i <= n - 1; i++)
//     {
//         scanf("%d ", &arr[i]);
//     }
//     for (int i = 0; i <= n - 1; i++)
//     {
//         if (i % 2 != 0)
//         {
//             printf("%d  ", arr[i] * 2);
//         }
//         else if (i % 2 == 0)
//         {
//             printf("%d ", arr[i] + 10);
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5] = {12, 3, 4, 42, 5};
//     int count = 0;
//     int i, x;
//     printf("enter the value of x=");
//     scanf("%d", &x);
//     for (int i = 0; i <= 4; i++)
//     {
//         if (arr[i] > x)
//         {
//             count = count + 1;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int sum_e = 0;
//     int sum_o = 0;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i <= 4; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum_e = sum_e + arr[i];
//         }
//         else if (i % 2 != 0)
//         {
//             sum_o = sum_o + arr[i];
//         }
//     }
//     printf("%d\n", sum_e);
//     printf("%d\n", sum_o);

//     int diff = sum_e - sum_o;
//     printf("difference between %d and %d = %d", sum_e, sum_o, diff);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int count=0;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int x = 6;
//     for (int i = 0; i <= 4; i++)
//     {
//         for (int j = i + 1; j <= 4; j++)
//         {
//             if (arr[i] + arr[j] == x)
//             {
//                 count = count + 1;
//             }
//         }
//     }

//     printf("%d\n", count);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int count = 0;
//     int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int x = 12;
//     for (int i = 0; i <= 7; i++)
//     {
//         for (int j = i + 1; j <= 7; j++)
//         {
//             for (int k = j + 1; k <= 7; k++)
//             {
//                 if (arr[i] + arr[j] + arr[k] == x)
//                 {
//                     count = count + 1;
//                     printf("(%d,%d,%d)\n", arr[i], arr[j], arr[k]);
//                 }
//             }
//         }
//     }

//     printf("%d\n", count);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int max = arr[0];
//     int smax = arr[0];
//     for (int i = 0; i <= 4; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     for (int i = 0; i <= 4; i++)
//     {
//         if (smax < arr[i] && arr[i] != max)
//         {
//             smax = arr[i];
//         }
//     }
//     printf("%d", smax);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int brr[5];
//     for(int i=0;i<=4;i++)
//     {
//         brr[i]=arr[4-i];
//     }
//     for(int i=0;i<=4;i++)
//     {
//         printf("%d",brr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// void revrse(int arr[])
// {
//     int i = 0, j = 4;
//     while (i < j)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     revrse(arr);
//     for (int i = 0; i <= 4; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>

// int is_palindrome(int arr[], int n)
// {
//     int i, j;

//     for (i = 0, j = n - 1; i < j; i++, j--)
//     {
//         if (arr[i] != arr[j])
//         {
//             return 0; // not a palindrome
//         }
//     }

//     return 1; // palindrome
// }

// int main()
// {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[n];
//     printf("Enter the elements: ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     if (is_palindrome(arr, n))
//     {
//         printf("The array is a palindrome.\n");
//     }
//     else
//     {
//         printf("The array is not a palindrome.\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// void revrse(int arr[],int si,int ei)
// {
//     for(int i=si, j=ei;i<j;)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
//     return ;
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int n=5;
//     int k=58;

//     // steps
//     k=k%n;
//     revrse(arr,0,n-1);
//     revrse(arr,0,k-1);
//     revrse(arr,k,n-1);

//     for (int i = 0; i <= 4; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int arr[5]={1,2,3,4,5};
//     int x=4;
//     for(int i=0;i<=4;i++){
//         if(arr[i]==x){
//             printf("yes\n%d",i);
//             break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int x = 4;
//     int idx = -1;
//     bool flag = false;
//     for (int i = 0; i <= 4; i++)
//     {
//         if (arr[i] == x)
//         {
//             flag = true;
//             idx = i;
//             break;
//         }
//     }
//     if (flag == false)
//     {
//         printf("not present");
//     }
//     else if (flag == true)
//     {
//         printf("it is present\n %d", idx);
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 7, 4, 5, 6, 7};
    for (int i = 0; i <= 6; i++)
    {
        for (int j = i + 1; j <= 6; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is duplicate", arr[i]);
                break;
            }
        }
    }
    return 0;
}