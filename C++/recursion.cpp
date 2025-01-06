// #include<iostream>
// using namespace std;
// void fun(int n)
// {
//     if(n==0)
//     {
//         cout<<"Happy Birthday\n";
//         return;
//     }
//     cout<<n<<" days left for birthday\n";
//     fun(n-1);
// }
// int main()
// {
//     fun(8);
// }

// #include <iostream>
// using namespace std;
// void print(int n)
// {
//     if (n == 1)
//     {
//         cout << 1 << endl;
//         return;
//     }
//     print(n - 1);
//     cout << n << endl;
// }
// int main()
// {
//     int n = 5;
//     print(n);
// }

// #include <iostream>
// using namespace std;
// void print(int n)
// {
//     if (n == 1)
//     {
//         cout << 1 << endl;
//         return;
//     }
//     cout << n << endl;
//     print(n - 1);
// }
// int main()
// {
//     int n = 5;
//     print(n);
// }

// #include <iostream>
// using namespace std;
// void print(int n)
// {
//     if (n == 2)
//     {
//         cout << 2 << endl;
//         return;
//     }
//     print(n - 2);
//     cout << n << endl;
// }
// int main()
// {
//     int n = 10;
//     print(n);
// }

// #include <iostream>
// using namespace std;
// void print(int num, int N)
// {
//     if (num == N)
//     {
//         cout << num << endl;
//         return;
//     }
//     cout << num << endl;
//     print(num + 1, N);
// }
// int main()
// {
//     int N;
//     cin >> N;
//     print(1, N);
// }

// #include <iostream>
// using namespace std;
// void print(int N)
// {
//     if (N == 1)
//     {
//         cout << 1 << endl;
//         return;
//     }
//     print(N - 1);
//     cout << N << endl;
// }
// int main()
// {
//     int N;
//     cin >> N;
//     print(N);
// }

// #include <iostream>
// using namespace std;
// void printeven(int num,int N)
// {
//     if (num == N)
//     {
//         cout << num << endl;
//         return;
//     }

//     cout << num << endl;
//     printeven(num+2,N);
// }
// int main()
// {
//     int N;
//     cin >> N;
//     if(N%2==1)
//     N--;
//     printeven(2,N);
// }

// #include <iostream>
// using namespace std;
// void printeven(int N)
// {
//     if (N == 2)
//     {
//         cout << 2 << endl;
//         return;
//     }
//     printeven(N - 2);
//     cout << N << endl;
// }
// int main()
// {
//     int N;
//     cin >> N;
//     if (N % 2 == 1)
//         N--;
//     printeven(N);
// }

// #include <iostream>
// using namespace std;
// int fact(int N)
// {
//     if (N == 0)
//     {
//         return 1;
//     }
//     return N*fact(N-1);
// }
// int main()
// {
//     int N;
//     cin >> N;
//     if(N<0)
//     {
//         cout<<"factorial is not possible\n";
//         return 0;
//     }
//     cout<<fact(N);
// }

// #include <iostream>
// using namespace std;
// int sum(int N)
// {
//     if (N == 1)
//     {
//         return 1;
//     }
//     return N + sum(N - 1);
// }
// int main()
// {
//     int N;
//     cin >> N;

//     cout << sum(N) << endl;
// }

// #include <iostream>
// #include<math.h>
// using namespace std;
// int pow(int N,int num)
// {
//     if (N == 0)
//     {
//         return 1;
//     }
//     return num*pow(num,N-1);
// }
// int main()
// {
//     int N;
//     cin >> N;
//     cout<<pow(2,N);
// }

// #include <iostream>
// using namespace std;
// int sqsum(int N)
// {
//     if (N == 1)
//     {
//         return 1;
//     }
//     return N*N+sqsum(N-1);
// }
// int main()
// {
//     int N;
//     cin >> N;
//     cout<<sqsum(N);
// }

// #include <iostream>
// using namespace std;
// int fib(int N)
// {
//     if (N <= 1)
//     {
//         return N;
//     }
//     return fib(N-1)+fib(N-2);
// }
// int main()
// {
//     int N;
//     cin >> N;
//     cout<<fib(N);
// }

// #include <iostream>
// using namespace std;
// int gcd(int N, int M)
// {
//     if (M==0)
//     {
//         return N;
//     }
//     return gcd(M,N%M);
// }

// max no.
//  #include <iostream>
//  using namespace std;

// void print(int arr[], int index)
// {
//     if (index == -1)
//         return;
//     cout << arr[index] << " ";
//     print(arr, index - 1);
// }

// int main()
// {
//     int arr[] = {3, 4, 1, 2, 8};
//     print(arr, 4);
// }

// sum
//  #include <iostream>
//  using namespace std;

// int sum(int arr[], int index, int n)
// {
//     if (index == n)
//         return 0;
//     return arr[index] + sum(arr, index + 1, n);
// }

// int main()
// {
//     int arr[] = {3, 4, 1, 2, 8};
//     cout << sum(arr, 0, 5) << endl;
// }

// min
//  #include <iostream>
//  using namespace std;

// int minelement(int arr[], int index, int n)
// {
//     if (index == n - 1)
//         return arr[index];

//     int minRest = minelement(arr, index + 1, n);

//     // Return the minimum between the current element and the minimum of the rest
//     return min(arr[index], minRest);
// }

// int main()
// {
//     int arr[] = {3, 4, 1, 2, 8};
//     cout << minelement(arr, 0, 5) << endl;
// }

// check pallidrome

// #include <iostream>
// using namespace std;
// bool checkpl(string str, int start, int end)
// {
//     // base condition
//     if (start >= end)
//         return 1;

//     // not matched
//     if (str[start] != str[end])
//         return 0;

//     // matched

//     else
//         return checkpl(str, start + 1, end - 1);
// }

// int main()
// {
//     // check palidrome

//     string str = "paras";
//     cout << checkpl(str, 0, 4) << endl;
// }

// count vowels

// #include <iostream>
// using namespace std;
// int count(string str, int index)
// {
//     // base condition
//     if (index == -1)
//         return 0;

//     // vowel hoga
//     if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u')
//         return 1 + count(str, index - 1);

//     // nahi hoga

//     else
//         return count(str, index - 1);
// }

// int main()
// {
//     // count vowels

//     string str = "aertu";
//     cout << count(str, 4) << endl;
// }

// reverse string

// #include <iostream>
// using namespace std;
// void rev(string &str, int start, int end)
// {
//     // base condition
//     if (start >= end)
//         return;
//     char c = str[start];
//     str[start] = str[end];
//     str[end] = c;
//     rev(str, start + 1, end - 1);
// }

// int main()
// {
//     // reverse string

//     string str = "rohit";
//     rev(str, 0, 4);
//     cout << str << endl;
// }

// uppercase

// #include <iostream>
// using namespace std;
// void lowertoupper(string &str, int index)
// {
//     // base condition
//     if (index==-1)
//         return;
//    str[index]='A'+str[index]-'a';
//    lowertoupper(str,index-1);
// }

// int main()
// {
//     // lower case to uppercase

//     string str = "rohit";
//     lowertoupper(str,4);
//     cout << str << endl;
// }

// linear search
// #include <iostream>
// using namespace std;

// bool linearsearch(int arr[], int X, int index, int N)
// {
//     if (index == N)
//         return 0;

//     if (arr[index] == X)
//         return 1;

//     return linearsearch(arr, X, index + 1, N);
// }

// int main()
// {
//     int arr[] = {2,3,6,7,1,5};
//     int X = 10;
//     cout << linearsearch(arr, X, 0, 5) << endl;
// }

// binary search

// #include <iostream>
// using namespace std;

// bool binarysearch(int arr[], int start, int end, int X)
// {
//     if (start > end)
//         return 0;

//     int mid = start + (end - start) / 2;
//     if (arr[mid] == X)
//         return 1;
//     else if (arr[mid] < X)
//         return binarysearch(arr, mid + 1, end, X);
//     else
//         return binarysearch(arr, start, mid - 1, X);
// }

// int main()
// {
//     int arr[] = {2,4,7,8,23,34};
//     int X = 7;
//     cout << binarysearch(arr, 0, 5,X) << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void subsequence(int arr[], int index, int n, vector<vector<int>> &ans, vector<int> temp)
// {
//     if(index==n)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     // not included
//     subsequence(arr, index + 1, n, ans, temp);
//         // included
//         temp.push_back(arr[index]);
//     subsequence(arr, index + 1, n, ans, temp);
// }

// int main()
// {
//     int arr[] = {1, 2, 4};
//     vector<vector<int>> ans;
//     vector<int> temp;
//     subsequence(arr, 0, 3, ans, temp);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void subset(string &s, int index, int n, vector<string> &ans, string &temp)
// {
//     if (index == n)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     // not included
//     subset(s, index + 1, n, ans, temp);
//     // included
//     temp.push_back(s[index]);
//     subset(s, index + 1, n, ans, temp);
//     temp.pop_back();
// }

// int main()
// {
//     string s = "abcd";
//     vector<string> ans;
//     string temp;
//     subset(s, 0, s.size(), ans, temp);
//     for (int i = 0; i < ans.size(); i++)
//     {

//         cout << ans[i] << endl;
//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void parantheses(int n, int left, int right, vector<string> &ans, string &temp)
// {
//     if(left+right==2*n)
//     {
//         ans.push_back(temp);
//         return;
//     }
//     if(left<n)
//     {
//         temp.push_back('(');
//         parantheses(n,left+1,right,ans,temp);
//         temp.pop_back();
//     }
//      if(right<left)
//     {
//         temp.push_back(')');
//         parantheses(n,left,right+1,ans,temp);
//         temp.pop_back();
//     }

// }
// vector<string> generateparanthess(int n){
//     vector<string>ans;
//     string temp;
//     parantheses(n,0,0,ans,temp);
//     return ans;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void print(int arr[], int index, int n, int sum, vector<int> &ans)
// {
//     if (index == n)
//     {
//         ans.push_back(sum);
//         return;
//     }

//     // not included
//     print(arr, index + 1, n, sum, ans);
//     // included
//     print(arr, index + 1, n, sum + arr[index], ans);
// }
// int main()
// {
//     int arr[] = {1, 2, 3, 4};
//     vector<int> ans;
//     print(arr, 0, 4, 0, ans);
//     for (int i = 0; i < ans.size(); i++)
//         cout << ans[i] << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// bool find(int arr[], int index, int n, int target)
// {
//     if (target == 0)
//     {
//         return 1;
//     }

//     if (index == n || target < 0)
//     {
//         return 0;
//     }

//     return find(arr, index + 1, n, target) || find(arr, index + 1, n, target - arr[index]);
// }
// int main()
// {
//     int arr[] = {2, 4, 1, 8, 7};
//     int target = 13;
//     cout << find(arr, 0, 5, target) << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int subset(int arr[], int index, int sum, int n)
// {
//     if (index == n)
//     {
//         return sum == 0;
//     }

//     return subset(arr, index + 1, sum, n) + subset(arr, index + 1, sum - arr[index], n);
// }
// int main()
// {
//     int arr[] = {2, 5, 6, 1};
//     int sum = 8;
//     cout << subset(arr, 0, 3, sum) << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int subsum(int arr[], int index, int n, int sum)
// {
//     if (sum == 0)
//     {
//         return 1;
//     }
//     if (index == n || sum < 0)
//     {
//         return 0;
//     }

//     return subsum(arr, index + 1, n, sum) + subsum(arr, index, n, sum - arr[index]);
// }
// int main()
// {
//     int arr[] = {2, 3, 4};
//     int sum = 6;
//     cout << subsum(arr, 0, 3, sum) << endl;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// void permut(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> visited)
// {
//     // base condition
//     if (visited.size() == temp.size())
//     {
//         ans.push_back(temp);
//         return;
//     }
//     for (int i = 0; i < visited.size(); i++)
//     {
//         if (visited[i] == 0)
//         {
//             visited[i] = 1;
//             temp.push_back(arr[i]);
//             permut(arr, ans, temp, visited);
//             visited[i] = 0;
//             temp.pop_back();
//         }
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3};
//     vector<vector<int>> ans;
//     vector<int> temp;
//     vector<bool> visited(3, 0);
//     permut(arr, ans, temp, visited);
//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//             cout << ans[i][j] << " ";
//         cout << endl;
//     }
// }

// void permit(vector<int> &arr,vector<vector<int>> &ans, int index)
// {
//     if(index == arr.size())
//     {
//         ans.push_back(arr);
//         return;
//     }

//     for(int i=index;i<arr.size();i++)
//     {
//         swap(arr[i],arr[index]);
//         permit(arr,ans,index+1);
//         swap(arr[i],arr[index]);
//     }
// }

// vector<vector<int>>permit(vector<int> &nums)
// {
//     vector<vector<int>>ans;
//     permit(nums,ans,0);
//     return ans;
// }

// void permit(vector<int> &arr, vector<vector<int>> &ans, int index)
// {
//     if (index == arr.size())
//     {
//         ans.push_back(arr);
//         return;
//     }

//     vector<bool> use(21, 0);
//     for (int i = index; i < arr.size(); i++)
//     {
//         if(use[arr[i]+10]==0)
//         swap(arr[i], arr[index]);
//         permit(arr, ans, index + 1);
//         swap(arr[i], arr[index]);
//         use[arr[i]=10]=1;
//     }
// }

// vector<vector<int>> permit(vector<int> &nums)
// {
//     vector<vector<int>> ans;
//     permit(nums, ans, 0);
//     return ans;
// }

// int way(int arr[], int m, int sum)
// {
//     if (sum == 0)
//         return 1;
//     if (sum < 0)
//         return 0;

//     int ans = 0;
//     for (int i = 0; i < m; i++)
//         ans += way(arr, m, sum - arr[i]);

//     return ans;
// }

// int countways(int arr[], int m, int N)
// {
//     return way(arr, m, N);
// }

// tower of hanoi

// void tohcal(int N, int sour, int help, int dest)
// {
//     if (N == 1)
//     {
//         cout << "move disk" << N << "from rod" << sour << "to rod" << dest << endl;
//         return;
//     }
//     tohcal(N - 1, sour, dest, help);
//     cout << "move disk" << N << "from rod" << sour << "to rod" << dest << endl;
//     tohcal(N - 1, help, sour, dest);
// }
// long long toh(int N, int from, int to, int aux)
// {
//     tohcal(N, from, aux, to);
//     return pow(2,N)-1;
// }

// predict the winner

// class Solution {
//     public:

//     int winner(vector<bool>&person, int n, int index,int person_left, int k)
//     {
//         if(person_left==1)
//         {
//             for(int i=0;i<n;i++)
//             if(person[i]==0)
//             return i;
//         }

//         //find the position kill
//         int kill= (k-1)%person_left;

//         while(kill--)
//         {
//             index=(index+1)%n;
//             while(person[index]==1)
//             index = (index+1)%n; //skip the killed person
//         }
//         person[index]=1;

//         //next alive person
//         while(person[index]==1)
//         index=(index+1)%n;
//         return winner(person,n,index,person_left-1,k);
//     }

//      int findTheWinner(int n, int k) {
//         vector<bool>person(n,0);
//         return winner(person,n,0,n,k)+1;
//     }
// };


// int winner(int n, int k)
// {
//     //base case
//     if(n==1)
//     return 0;

//     return (winner(n-1,k)+k)%n;
// }
// int findthewinner(int n, int k){
//     return winner(n,k)+1;
// }




// rat in a maze problem

// class solution{
//     public:
//     int row[]={-1,1,0,0};
//     int col[]={0,0,-1,1};
//     string dir="UDLR";

// bool valid(int i,int j , int n)
// {
//     return i>=0 && j>=0&&i<n&&j<n;
// }
//     void Total(vector<vector<int>> &matrix, int i,int j, int n,string &path, vector<string>&ans,vector<vector<bool>>&visited)
//     {
//         //base case
//         if(i==n-1 && j==n-1)
//         {
//             ans.push_back(path);
//             return;
//         }
//         visited[i][j]=1;
//         for(int k=0;k<4;k++)
//         {
//             if(valid(i+row[k],j+col[k],n)&&matrix[i+row[K][j+col[k]]&&!visited[i+row[k]][j+col[k]]])
//             {
//                 path.push_back(dir[k]);
//                 Total(matrix,i+row[k],j+col[k],n,path,ans,visited);
//                    path.pop_back();
// //             }
// //         }
//     visited[i][j]=0;



// //up
// if(valid(i-1,j,n) &&matrix[i-1][j]&&!visited[i-1][j])
// {
//     path.push_back("U");
//     Total(matrix,i-1,j,n,path,ans,visited);
// }
// //down
// if(valid(i+1,j,n) &&matrix[i+1][j]&&!visited[i+1][j])
// {
//     path.push_back("D");
//     Total(matrix,i+1,j,n,path,ans,visited);
// }
// //left
// if(valid(i,j-1,n) &&matrix[i][j-1]&&!visited[i][j-1])
// {
//     path.push_back("L");
//     Total(matrix,i,j-1,n,path,ans,visited);
// }
// //right
// if(valid(i,j+1,n) &&matrix[i][j+1]&&!visited[i][j+1])
// {
//     path.push_back("R");
//     Total(matrix,i,j+1,n,path,ans,visited);
// }






//     }
//     vector<string> findpath(vector<vector<int>> &n, int n){
    // vector<vector<bool>>visited(n,vector<bool>(n,0));
    // vector<string>ans;
    // string path;

    // if(m[0][0]==0||m[n-1][n-1]==0)
    // return ans;

    // Total(m,0,0,n,path,ans,visited);

//     }
// };






// class solution
// {
// public:
//     void find(int N, vector<string> &ans, string temp, int zero, int one)
//     {
//         if (temp.size() == N)
//         {
//             ans.push_back(temp);
//             return;
//         }
//         temp.push_back('1');
//         find(N, ans, temp, zero, one + 1);
//         temp.pop_back();
//         if (zero < one)
//         {
//             temp.push_back('0');
//             find(N, ans, temp, zero + 1, one);
//             temp.pop_back();
//         }
//     }
//     vector<string> NBitBinary(int N)
//     {
//         vector<string> ans;
//         string temp;
//         find(N, ans, temp, 0, 0);
//         return ans;
//     }
// }