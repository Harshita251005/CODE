// ADD DIGIT
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, ans = 0, rem;
//     cin >> num;
//     while (num > 9)
//     {
//         ans = 0;
//         while (num != 0)
//         {
//             rem = num % 10;
//             num = num / 10;
//             ans = ans + rem;
//         }
//         num = ans;
//     }
//     cout << ans;

//     return 0;
// }

// leap  year

// #include <iostream>
// using namespace std;
// int main()
// {
//     int year;
//     cin >> year;
//     if ((year % 400 == 0) || year % 4 == 0 && year % 100 != 0)
//     {
//         cout << "leap year";
//     }
//     else
//     {
//         cout << "not a leap year";
//     }
//     return 0;
// }

// reverse integer

// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int num, ans = 0, rem;
//     cin >> num;
//     while (num != 0)
//     {
//         rem = num % 10;
//         num = num / 10;
//         if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
//         {
//             cout << 0;
//         }
//         ans = ans * 10 + rem;
//     }

//     cout << ans;

//     return 0;
// }

// power of 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;

//     if (num <= 0)
//     {
//         cout << num << " is not a power of 2";
//     }
//     else if ((num & (num - 1)) == 0)
//     {
//         cout << num << " is a power of 2";
//     }
//     else
//     {
//         cout << num << " is not a power of 2";
//     }

//     return 0;
// }

// squar root

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int num, root;
//     cin >> num;
//     root = sqrt(num);
//     cout << root;

//     return 0;
// }



// palidrome no.

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num, num2 = 0;
//     cin >> num;
//     int original_num = num;
//     while (num != 0)
//     {
//         int rem = num % 10;
//         num = num / 10;
//         num2 = num2 * 10 + rem;
//     }
//     cout << num2;
//     if (original_num == num2)
//     {
//         cout << "\nit is a pallidrome";
//     }
//     else
//     {
//         cout << "\nit is not a pallidrome";
//     }
//     return 0;
// }

