// #include <iostream>
// using namespace std;
// int maxSubarraySum(int arr[], int n)
// {
//     int maxending = 0;
//     int max_so_far = arr[0];
//     int cur_max = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         cur_max = max(arr[i], cur_max + arr[i]);
//         max_so_far = max(max_so_far, cur_max);
//     }
//     return max_so_far;
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
//     cout << maxSubarraySum(arr, n) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int maxending = 0;
//     int max_so_far = arr[0];
//     int cur_max = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         cur_max = max(arr[i], cur_max+ arr[i]);
//         max_so_far = max(max_so_far, cur_max);
//     }
//     return max_so_far;
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
//     cout << missingSubarraySum(arr, n) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int maxending = 0;
//     int max_so_far = arr[0];
//     int cur_max = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         cur_max = max(arr[i], cur_max + arr[i]);
//         max_so_far = max(max_so_far, cur_max);
//     }
//     return max_so_far;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int maxending = 0;
//     int max_so_far = arr[0];
//     int cur_max = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         cur_max = max(arr[i], cur_max + arr[i]);
//         max_so_far = max(max_so_far, cur_max);
//     }
//     return max_so_far;
// }
// int main()
// {
//     int a;
//     cin >> a;
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << missingSubarraySum(arr, a) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int miss_ele = 0;
//     int max_of_far = arr[0];
//     int cur_max = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         cur_max = max(arr[i], cur_max + arr[i]);
//         max_of_far = max(max_of_far, cur_max);
//     }
//     return max_of_far;
// }
// int main()
// {
//     int a;
//     cin >> a;
//     int arr[a];
//     for (int i = 0; i < a; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << missingSubarraySum(arr, a) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int missingSubarraySum(int arr[],int n)
// {
//     int missing_val=0;
//     int max_so_far=arr[0];
//     int curr_max=arr[0];
//     for(int i=1;i<n;i++)
//     {
//         curr_max=max(arr[i],curr_max+arr[i]);
//         max_so_far=max(max_so_far,curr_max);
//     }
//     return max_so_far;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int miss_last = 0;
//     int max_so_far = arr[0];
//     int curr_max = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         curr_max = max(arr[i], curr_max + arr[i]);
//         max_so_far = max(max_so_far, curr_max);
//     }
//     return max_so_far;
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
//     cout << missingSubarraySum(arr, n)<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int missinglast = 0;
//     int max_so_far = arr[0];
//     int curr_last = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         curr_last = max(arr[i], curr_last + arr[i]);
//         max_so_far = max(max_so_far, curr_last);
//     }
//     return max_so_far;
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
//     cout << missingSubarraySum(arr, n) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int missinglast = 0;
//     int max_so_far = arr[0];
//     int curr_last = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         curr_last = max(arr[i], curr_last + arr[i]);
//         max_so_far = max(max_so_far, curr_last);
//     }
//     return max_so_far;
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
//     cout << missingSubarraySum(arr, n) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int missinglast = 0;
//     int max_so_far = arr[0];
//     int curr_last = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         curr_last = max(arr[i], curr_last + arr[i]);
//         max_so_far = max(max_so_far, curr_last);
//     }
//     return max_so_far;
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
//     cout << missingSubarraySum(arr, n) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int missingSubarraySum(int arr[], int n)
// {
//     int missingend = 0;
//     int max_so_far = arr[0];
//     int curr_max = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         curr_max = max(arr[i], curr_max + arr[i]);
//         max_so_far = max(max_so_far, curr_max);
//     }
//     return max_so_far;
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
//     cout << missingSubarraySum(arr, n) << endl;
//     return 0;
// }