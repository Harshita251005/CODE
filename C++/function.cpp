// #include <iostream>
// using namespace std;

// int sum(int a, int b) // function declare

// {
//     int ans = a + b; // function define
//     return ans;
// }

// int mul(int x, int y)
// {
//     int output = x * y;
//     return output;
// }

// void fun()
// {
//     cout << "Hello Coder Army\n";
// }

// bool prime(int n)
// {
//     if (n < 2)
//     {
//         return 0;
//     }
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return 0;
//     }

//     return 1;
// }

// int fact(int h)
// {
//     int ans1 = 1;
//     for (int j = 1; j <= h; j++)
//     {
//         ans1 = ans1 * j;

//         return ans1;
//     }
// }
// int main()
// {
//     int num1, num2;
//     cin >> num1 >> num2;

//     // function call
//     cout << sum(num1, num2);
//     cout << endl;
//     cout << mul(num1, num2);
//     cout << endl;
//     fun();
//     cout << endl;
//     cout << prime(num1);
//     cout << endl;
//     cout << fact(num2);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int swap(int x, int y, int temp)
// {
//     x = y;
//     y = temp;
//     temp = x;
//     return x, y;
// }
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << "no. before swap" << endl;
//     cout << a << endl
//          << b << endl;
//     swap(a, b);
//     cout << "no. after swap" << endl;
//     cout << a << endl
//          << b;
//     return 0;
// }

// covert small  letter to big
// #include <iostream>
// using namespace std;
// char convert(char name1)
// {
//     char ans = name1 - 'a' + 'A';
//     return ans;
// }
// int main()
// {
//     char name;
//     cin >> name;
//     cout << convert(name);
// }

// armstrong no.


// #include <iostream>
// #include <math.h>
// using namespace std;
// int count_digit(int num)
// {
//     int count = 0;
//     while (num != 0)
//     {
//         num /= 10;
//         count++;
//     }
//     return count;
// }
// int armstrong(int n, int digit)
// {

//     int ans = 0;

//     while (n != 0)
//     {

//         int x = n % 10;

//         int temp = 1;

//         for (int i = 1; i <= digit; i++)
//             temp = temp * x;

//         ans += temp;

//         n /= 10;
//     }

//     return ans;
// }
// int main()
// {
//     int num, original_num;
//     cin >> num;
//     original_num = num;
//     int countdigit = count_digit(num);

//     int anss = armstrong(num, countdigit);

//     if (anss == num)
//         cout << "It is a armstrong no.";
//     else
//         cout << "It is not a armstrong no.";

//     return 0;
// }





// trailing zero in the fact

// #include <iostream>
// using namespace std;

// int trailing_0(int num)
// {
//    int count = 0;
//    for (int i = 5; num / i >= 1; i *= 5)
//    {
//       count += num / i;
//    }
//    return count;
// }
// int main()
// {
//    int n, fact = 1;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//       fact = fact * i;
//    }
//    cout << fact << endl;

//    int no = trailing_0(n);
//    cout << no;
//    return 0;
// }

// rectangle form or not
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c,d;
//     cin>>a>>b>>c>>d;
//     if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
//         cout<<"it forms a rectangle";
//     }
//     else{
//         cout<<"it doesn.t form a rectangle";
//     }
//     return 0;
// }

// bishop
//  #include<iostream>
//  using namespace std;
//  int main()
//  {
//      int a,b,count=0;
//      cin>>a>>b;
//      count+=min(8-a,8-b);
//      count+=min(8-a,b-1);
//      count+=min(a-1,b-1);
//      count+=min(a-1,8-b);
//      cout<<count;
//      return 0;
//  }

// nim
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     if (n % 4 == 0)
//     {
//         cout << "0";
//     }
//     else
//     {
//         cout << "1";
//     }
//     return 0;
// }