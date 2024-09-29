// selection sort

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout << "enter the no. of elements : ";
//     cin >> n;
//     int arr[n];
//     cout << "enter the elements : ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "elements are : ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
    // for (i = 0; i < n - 1; i++)
    // {
    //     int index = i;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] < arr[index])
    //             index = j;
    //     }
    //     swap(arr[i], arr[index]);
    // }
//     cout << endl
//          << "sorted array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

// bubble sort

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout << "enter the no. of elements : ";
//     cin >> n;
//     int arr[n];
//     cout << "enter the elements : ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "elements are : ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
    // for (int i = n - 2; i >= 0; i--)
    // {
    //     bool swapped = 0;
    //     for (int j = 0; j <= i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swapped = 1;
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    //     if (swapped == 0)
    //         break;
    // }
//     cout << endl
//          << "sorted array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// insertion sort

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout << "enter the no. of elements : ";
//     cin >> n;
//     int arr[n];
//     cout << "enter the elements : ";
//     for (i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "elements are : ";
//     for (i = 0; i < n; i++)
//     {
//         cout << arr[i];
//     }
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         if (arr[j] < arr[j - 1])
    //             swap(arr[j], arr[j - 1]);
    //         else
    //             break;
    //     }
    // }
//     cout << endl
//          << "sorted array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

