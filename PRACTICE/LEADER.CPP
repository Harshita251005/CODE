// #include <iostream>
// using namespace std;
// void findleaders(int arr[], int n)
// {
//     int v[n];
//     int count = 0;
//     long long max = arr[n - 1];
//     for (long long i = n - 1; i >= 0; i--)
//     {
//         if (arr[i] >= max)
//         {
//             max = arr[i];
//             v[count] = (max);
//             count++;
//         }
//     }
//     for (int j = count - 1; j >= 0; j--)
//     {
//         cout << v[j] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     findleaders(arr, n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int immediateLeader(int arr[], int n)
// {
//     int v[n];
//     int count = 0;
//     long long max = arr[n - 1];
//     for (long long i = n - 1; i >= 0; i--)
//         if (arr[i] >= max)
//         {

//             {
//                 max = arr[i];
//                 v[count] = (max);
//                 count++;
//             }
//         }
//     for (int j = count - 1; j >= 0; j--)
//     {
//         cout << v[j] << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// int immediateLeader(int arr[], int n)
// {
//     int v[n];
//     int count = 0;
//     long long max = arr[n - 1];
//     for (long long i = n - 1; i >= 0; i--)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//             v[count] = (max);
//             count++;
//         }
//     }
//     for (int j = count - 1; j >= 0; j--)
//     {
//         cout << v[j] << "";
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// int immediateLeader(int arr[], int n)
// {
//     int v[n];
//     int count = 0;
//     long long max = arr[n - 1];
//     for (long long i = n - 1; i >= 0; i--)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//             v[count] = (max);
//             count++;
//         }
//     }
//     for (int j = count - 1; j >= 0; j--)
//     {
//         cout << v[j] << "";
//     }
//     cout << endl;
// }

#include<iostream>
using namespace std;
int immediateLeader(int arr[],int n,int x)
{
    int v[n];
    int count =0;
    long long max=arr[n-1];
    for(long long i=n-1;i>=0;i--)
    {
        if(arr[i]>max){
        max=arr[i];
        v[count]=(max);
        count++;
    }}
    for(int j=count-1;j>=0;j--)
    {
        cout<<v[j]<<"";
    }
    cout<<endl;
}