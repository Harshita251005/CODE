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

// merge sort

// #include <iostream>
// #include <vector>
// using namespace std;
// void merge(int arr[], int start, int mid, int end)
// {
//     vector<int> temp(end - start + 1);
//     int left = start, right = mid + 1, index = 0;
//     while (left <= mid && right <= end)
//     {
//         if (arr[left] <= arr[right])
//         {
//             temp[index] = arr[left];
//             index++, left++;
//         }
//         else
//         {
//             temp[index] = arr[right];
//             index++, right++;
//         }
//     }

//     // left array is not empty yet
//     while (left <= mid)
//     {
//         temp[index] = arr[left];
//         index++, left++;
//     }

//     // right array is not empty yet

//     while (right <= end)
//     {
//         temp[index] = arr[right];
//         index++, right++;
//     }

//     index = 0;

//     // put these value in array

//     while (start <= end)
//     {
//         arr[start] = temp[index];
//         start++, index++;
//     }
// }

// void mergesort(int arr[], int start, int end)
// {
//     if (start >= end)
//         return;

//     int mid = (start + end) / 2;
//     // left side
//     mergesort(arr, start, mid);
//     // right side
//     mergesort(arr, mid + 1, end);
//     merge(arr, start, mid, end);
// }

// int main()
// {
//     int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
//     mergesort(arr, 0, 9);
//     for (int i = 0; i < 10; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// quick sort

// #include <iostream>
// #include <vector>
// using namespace std;
// int partition(int arr[], int start, int end)
// {
//     int pos = start;
//     for (int i = start; i <= end; i++)
//     {
//         if (arr[i] <= arr[end])
//         {
//             swap(arr[i], arr[pos]);
//             pos++;
//         }
//     }
//     return pos - 1;
// }
// void quicksort(int arr[], int start, int end)
// {
//     if (start >= end)
//         return;

//     int pivot = partition(arr, start, end);
//     // left side
//     quicksort(arr, start, pivot - 1);
//     // right side
//     quicksort(arr, pivot, end);
// }

// int main()
// {
//     int arr[] = {6, 3, 1, 2, 8, 9, 10, 7, 3, 10};
//     quicksort(arr, 0, 9);
//     for (int i = 0; i < 10; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }