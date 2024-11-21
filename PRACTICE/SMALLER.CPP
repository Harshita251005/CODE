// #include <iostream>
// using namespace std;
// int immediateSmaller(int arr[], int n, int x)
// {
//     int count = 0;
//     int diff = 10000;
//     for (int i = 0; i < n; i++)
//     {
//         if (x > arr[i])
//         {
//             count = x - arr[i];
//             if (count < diff)
//             {
//                 diff = count;
//             }
//         }
//     }
//     if (diff == 10000)
//         return -1;
//     else if (diff > 0)
//         return (x - diff);
// }
// int main()
// {
//     int n, x;
//     cin >> n >> x;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << immediateSmaller(arr, n, x) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int immediateSmaller(int arr[], int n, int x)
// {
//     int count = 0;
//     int diff = 10000;
//     for (int i = 0; i < n; i++)
//     {
//         if (x > arr[i])
//         {
//             count = x - arr[i];
//             if (count < diff)
//             {
//                 diff = count;
//             }
//         }
//     }
//     if (diff == 10000)
//         return -1;
//     else if (diff > 0)
//         return (x - diff);
// }

// #include <iostream>
// using namespace std;
// int immediateSmallerr(int arr[], int n, int x)
// {
//     int count = 0;
//     int diff = 1000;
//     for (int i = 0; i < n; i++)
//     {
//         if (x > arr[i])
//         {
//             count = x - arr[i];
//             if (count < diff)
//             {
//                 diff = count;
//             }
//         }
//     }
//     if (diff == 10000)
//         return -1;
//     else if (diff > 0)
//         return (x - diff);
// }

// #include <iostream>
// using namespace std;
// int immediateSmaller(int arr[], int n, int x)
// {
//     int count = 0;
//     int diff = 10000;
//     for (int i = 0; i < n; i++)
//     {
//         if (x > arr[i])
//         {
//             count = x - arr[i];
//             if (count < diff)
//             {
//                 diff = count;
//             }
//         }
//     }
//     if (diff == 10000)
//         return -1;
//     else if (diff > 0)
//         return (x - diff);
// }

// #include<iostream>
// using namespace std;
// int immediateSmaller(int arr[],int n,int x)
// {
//     int count=0;
//     int diff=10000;
//     for(int i=0 ;i<n;i++)
//     {
//         if(x>arr[i])
//         {
//             count=x-arr[i];
//             if(count<diff)
//             {
//                 diff=count;
//             }
//         }
//     }
//     if(diff==0)
//     {
//         return -1;
//     }
//     else if(diff>0)
//     {
//         return x-diff;
//     }
// }

// #include <iostream>
// using namespace std;
// int immediateSmaller(int arr[], int n, int x)
// {
//     int count = 0;
//     int diff = 10000;
//     for (int i = 0; i < n; i++)
//     {
//         if (x > arr[i])
//         {
//             count = x - arr[i];
//             if (count < diff)
//             {
//                 diff = count;
//             }
//         }
//     }
//     if (diff == 0)
//     {
//         return -1;
//     }
//     else if (diff > 0)
//     {
//         return x - diff;
//     }
// }

// #include<iostream>
// using namespace std;
// int immediateSmaller(int arr[],int n,int x)
// {
//     int count=0;
//     int diff=10000;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]<x)
//         {
//             count=x-arr[i];
//             if(count<diff)
//             {
//                 diff=count;
//             }
//         }
//     }
//     if(diff==10000)
//     {
//         return -1;
//     }
//     else if(diff>0)
//     {
//         return x-diff;
//     }
// }

#include <iostream>
using namespace std;
int immediateSmaller(int arr[], int n, int x)
{
    int diff = 10000;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < diff)
        {
            count = diff - arr[i];
            if (arr[i] < diff)
            {
                diff = count;
            }
        }
    }
    if (diff == 0)
    {
        return -1;
    }
    else if (diff > 0)
    {
        return x - diff;
    }
}