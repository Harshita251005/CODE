// binary search

// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int n, int key)
// {
//     // start, mid , end;
//     int start = 0, end = n - 1, mid;
//     while (start <= end)
//     {
//         mid = (start + end) / 2;
//         if (arr[mid] == key)
//             return mid;
//         else if (arr[mid] < key)
//             start = mid + 1;
//         else
//             end = mid - 1;
//     }
//     return -1;
// }
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
//     cout << endl;
//     int key;
//     cout << "enter the key : ";
//     cin >> key;

//     int result = binarysearch(arr, n, key);
//     if (result != -1)
//         cout << "Key found at index " << result << endl;
//     else
//         cout << "Key not found in the array." << endl;
//     return 0;
// }


