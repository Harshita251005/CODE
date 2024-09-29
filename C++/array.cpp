// min element

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     int temp = arr[0];
//     for (i = 0; i < 5; i++)
//     {
//         if (temp > arr[i])
//             temp = arr[i];
//     }
//     cout << endl;
//     cout << temp;
//     return 0;
// }

// max element

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     int temp = arr[0];
//     for (i = 0; i < 5; i++)
//     {
//         if (temp < arr[i])
//             temp = arr[i];
//     }
//     cout << endl;
//     cout << temp;
//     return 0;
// }

// search element

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     int element;
//     cin >> element;
//     bool search = false;
//     for (i = 0; i < 5; i++)
//     {
//         if (arr[i] == element)
//             search = true;
//     }
//     if (search)
//     {
//         cout << element;
//     }
//     else
//     {
//         cout << "-1";
//     }
//     return 0;
// }

// reverse array

// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr[5];
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     cout << endl;

//     i = 0;
//     while (i < 5 / 2)
//     {
//         int temp = arr[i];
//         arr[i] = arr[4 - i];
//         arr[4 - i] = temp;
//         i++;
//     }

//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     cout << endl;

//     return 0;
// }

// second max

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     int temp = arr[0];
//     for (i = 0; i < 5; i++)
//     {
//         if (temp < arr[i])
//             temp = arr[i];
//     }
//     cout << endl;
//     cout << temp;
//     cout << endl;
//     int smax = INT_MIN;
//     for (i = 0; i < 5; i++)
//     {
//         if (smax < arr[i] && temp != arr[i])
//         {
//             smax = arr[i];
//         }
//     }
//     cout << endl;
//     cout << smax;
//     return 0;
// }

// missing no.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int sum = 0;
//     int sum1 = 0;
//     int arr1[5] = {1, 2, 3, 4, 5};
//     int arr2[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr1[i];
//         sum = sum + arr1[i];
//     }

//     cout << endl;
//     cout << sum;
//     cout << endl;

//     for (int j = 0; j < 5; j++)
//     {
//         cin >> arr2[j];
//     }
//     for (int j = 0; j < 5; j++)
//     {
//         cout << arr2[j];
//         sum1 = sum1 + arr2[j];
//     }
//     cout << endl;
//     cout << sum1;
//     cout << endl;

//     int missing_element;
//     missing_element = sum - sum1;
//     cout << endl;
//     cout << missing_element;

//     return 0;
// }

// fibanachi no.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     if (n < 2)
//     {
//         cout << "Invalid input. Please enter a value of n that is 2 or greater." << endl;
//         return 1;
//     }

//     vector<int> arr(n);
//     arr[0] = 0;
//     arr[1] = 1;

//     for (int i = 2; i < n; i++)
//     {
//         arr[i] = arr[i - 1] + arr[i - 2];
//     }

//     cout << "The " << n << "th term of the Fibonacci sequence is: " << arr[n - 1] << endl;

//     return 0;
// }

// rotate array by 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }
//     int temp = arr[0];
//     for (i = 0; i <= 4; i++)
//     {
//         arr[i] = arr[i + 1];
//     }
//     arr[4] = temp;
//     cout << endl;
//     for (i = 0; i < 5; i++)
//     {
//         cout << arr[i];
//     }

//     return 0;
// }

// function array

// #include <iostream>
// using namespace std;
// void fun(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << a[i] << " ";
// }
// int main()
// {
//     int arr[5] = {2, 1, 4, 5, 7};
//     fun(arr, 5);
//     return 0;
// }



