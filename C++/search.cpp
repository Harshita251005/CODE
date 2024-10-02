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

// first and last position of an element

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int target;
//     cin >> target;

//     // Find the first occurrence of target
//     int start = 0, end = n - 1, first = -1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             first = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     if (first != -1)
//     {
//         cout << "First occurrence of " << target << " is at index " << first << endl;
//     }
//     else
//     {
//         cout << "Target element not found in the array." << endl;
//     }

//     // Find the last occurrence of target
//     start = 0;
//     end = n - 1;
//     int last = -1;
//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             last = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     if (last != -1)
//     {
//         cout << "Last occurrence of " << target << " is at index " << last << endl;
//     }
//     else
//     {
//         cout << "Target element not found in the array." << endl;
//     }

//     return 0;
// }

// find the position of an element either it is there or not

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int target;
//     cin >> target;

//     int start = 0, end = n - 1, mid = -1;

//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;

//         if (arr[mid] == target)
//         {
//             return mid;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }

//     if (mid != -1)
//     {
//         cout << "Index of " << target << " is at index " << mid << endl;
//     }
//     else
//     {
//         cout << start << endl;
//     }

//     return 0;
// }

// squrt
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     if (n == 0)
//     {
//         cout << "0" << endl;
//         return 0;
//     }

//     int start = 1, end = n;

//     while (start <= end)
//     {
//         int mid = start + (end - start) / 2;

//         if (mid * mid == n)
//         {
//             cout << mid << endl;
//             return 0;
//         }

//         if (mid * mid > n)
//         {
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }
//     cout << start - 1 << endl;

//     return 0;
// }

// peak

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int start = 0, end = n - 1, mid;

//     while (start <= end)
//     {
//         mid = end + ( start - end) / 2;

//         if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
//         {
//             cout<<arr[mid];
//             return 0;
//         }
//         else if (arr[mid] >arr[mid-1])
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;

//         }
//     }
//     cout<<"-1";

//     return 0;
// }

// no. of times the targetv no come

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "Array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     int target;
//     cin >> target;
//     int start = 0, end = n - 1, count = 0, mid;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] == target)
//         {
//             count = 1;
//             int temp = mid - 1;
//             while (temp >= start && arr[temp] == target)
//             {
//                 count++;
//                 temp--;
//             }
//             temp = mid + 1;
//             while (temp <= end && arr[temp] == target)
//             {
//                 count++;
//                 temp++;
//             }
//             break;
//         }
//         else if (arr[mid] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//     }
//      return count;
// }

// search min in rotated array
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int arr[];
//      int n;
//      int start=0, end =n-1,mid,ans=arr[0];
//      while(start<=end)
//      {
//          mid=start+(end-start)/2;
//          if(arr[mid]>=arr[0]){
//              start=mid+1;
//          }
//          else{
//          ans =arr[mid];
//          end=mid-1;
//          }
//      }
//      return ans;
//  }

// search in rotated array
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,nums[],target;
//     int start=0,end=n-1,mid;
//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         if(nums[mid]==target)
//         {
//             return mid;
//         }
//         else if(nums[mid]>=nums[0])
//         {
//             if(nums[mid]>=target && nums[start]<=target)
//             {
//                 end=mid-1;
//             }
//             else{
//                 start=mid +1;
//             }
//         }
//         else{
//             if(nums[mid]<=target&& nums[end]>=target)
//             {
//                 start=mid+1;
//             }
//             else{
//                 end=mid-1;
//             }
//         }
//     }
//     return -1;
// }

// kth missing positive no.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[], k;
//     int start = 0, end = arr[] - 1, mid, ans;
//     while (start <= end)
//     {
//         mid = start + (end - start) / 2;
//         if (arr[mid] - mid - 1 >= k)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else
//         {
//             start = mid + 1;
//         }
//     }

//     return ans + k;
// }