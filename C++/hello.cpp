// #include<iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout<<"Hello World\nHarshita";
//     cin>>a;
//     cout<<a;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     while (n != 0)
//     {
//         int temp = n % 10;
//         sum += temp;
//         n = n / 10;
//     }
//     cout << sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     while (n >= 10)
//     {
//         sum = 0;

//         while (n != 0)
//         {
//             int temp = n % 10;
//             sum += temp;
//             n = n / 10;
//         }
//         n = sum;
//     }
//     cout << n;
//     return 0;
// }

// two array given and sort it

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n;
//     cin >> m;
//     int arr1[n];
//     int arr2[m];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr1[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> arr2[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr1[i];
//     }
//     cout<<endl;
//     for (int i = 0; i < m; i++)
//     {
//         cout << arr2[i];
//     }
//     return 0;
// }

//

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << sum;
//     return 0;
// }

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
//     cout << arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] != arr[i - 1])
//         {
//             cout << arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (i > 0 && arr[i] == arr[i - 1])
//         {
//             cout << arr[i];
//         }
//     }
//     cout << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Hello World";
//     return 0;
// }