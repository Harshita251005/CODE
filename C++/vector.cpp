// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> a;
//     vector<int> b(5, 1);
//     cout << "size of a : " << a.size() << endl;
//     cout << "capacity of a : " << a.capacity() << endl;
//     a.push_back(4);
//     cout << "size of a : " << a.size() << endl;
//     cout << "capacity of a : " << a.capacity() << endl;
//     a.push_back(5);
//     cout << "size of a : " << a.size() << endl;
//     cout << "capacity of a : " << a.capacity() << endl;
//     a.push_back(6);
//     cout << "size of a : " << a.size() << endl;
//     cout << "capacity of a : " << a.capacity() << endl;
//     a.push_back(7);
//     cout << "size of a : " << a.size() << endl;
//     cout << "capacity of a : " << a.capacity() << endl;
//     a.pop_back();
//     cout << "size of a : " << a.size() << endl;
//     cout << "capacity of a : " << a.capacity() << endl;
//     // update value
//     b[1] = 5;
//     cout << "size of b : " << b.size() << endl;
//     cout << "capacity of b : " << b.capacity() << endl;
//     b.push_back(5);
//     cout << "size of b : " << b.size() << endl;
//     cout << "capacity of b : " << b.capacity() << endl;
//     vector<int> c = {1, 2, 3, 4, 5};
//     cout << "size of c : " << c.size() << endl;
//     cout << "capacity of c : " << c.capacity() << endl;
//     c.clear();
//     cout << "size of c : " << c.size() << endl;
//     cout << "capacity of c : " << c.capacity() << endl;

//     return 0;
// }


//segregate 0 and 1 (two pointer)

// class Solution {
//   public:
//     void segregate0and1(std::vector<int>& arr) {
//         int start = 0, end = arr.size() - 1;
//         while (start < end) {
//             if (arr[start] == 0) {
//                 start++;
//             } else {
//                 if (arr[end] == 0) {
//                     swap(arr[start], arr[end]);
//                     start++, end--;
                    
//                 } else {
//                     end--;
//                 }
//             }
//         }
//     }
// };

//two sum
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         vector<int>ans;
//         int start=0,end=numbers.size()-1;
//         while(start<end)
//         {
//             if(numbers[start]+numbers[end]==target)
//             {
//                 ans.push_back(start+1);
//                 ans.push_back(end+1);
//                 return ans;
//             }
//             else if(numbers[start]+numbers[end]<target)
//             start++;
//             else
//             end--;
//         }
//         return ans;
//     }
// };



//pair with given difference
// int Solution::solve(vector<int> &A, int B) {
    
//     sort(A.begin(),A.end());
//     int start=0,end=1,n=A.size();
//     if(B<0)
//     B=abs(B);
//     while(end<n){
//         if(A[end]-A[start]==B)
//         return 1;
//         else if(A[end]-A[start]<B)
//         end++;
//         else
//         start++;
//         if(start==end)
//         end++;
//     }
//     return 0;
// }


//prefix
// vector<int>prefix(n)
// prefix[0]=arr[0];
// for(int i=1;i<n;i++)
// {
//     prefix[i]=prefix[i-1]+arr[i];
// }


//divide array in 2 subarray with equal sum
//time complexity order of n^2;
// for(int i=0;i<n-1;i++)
// {
//     int sum1=0,sum2=0;
//     for(j=0;j<=i;j++)
//     sum1+=arr[j];
//     for(j=i+1;j<n;j++);
//     sum2+=arr[j];
//     if(sum1==sum2)
//     return 1;
// }


// or

// n time complexity
// total_sum =0;
// for(i=0;i<n;i++)
//     total_sum+=arr[i];
//     int prefix=0;
// for(i=0;i<n-1;i++)
// {
//     prefix +=arr[i];
//     ans = total_sum-prefix;
//     if(ans==prefix)
//     return 1;
// }
// return 0;


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// bool divide(vector <int> arr)
// {
//     int maxi = INT_MIN,prefix=0,total_sum=0,n=arr.size();
//     for(int i=0;i<n;i++)
//     {
//         prefix +=arr[i];
//         int ans =total_sum-prefix;
//         if(ans==prefix)
//         return 1;
//     }
//     return 0;

// }
// int main()
// {
//     int n;
//     cout<<"enter the size of array";
//     cin>>n;
//     vector<int>v(n);
//     cout<<"enter the element in array";
//     for(int i=0;i<n;i++)
//     cin>>v[i];
//     cout<<divide(v);
// }


// {
//     maxi=INT_MIN,prefix=0;
//     for(int i=0;i<n;i++)
//     {
//         prefix+=arr[i];
//         maxi=max(prefix,maxi)
//         if(prefix<0)
//         prefix=0;
//     }
//     return maxi;
// }


//max difference betwen two element
// int maxDiff(int arr[], int arr_size)
// {     
//   int max_diff = arr[1] - arr[0];
//   for (int i = 0; i < arr_size; i++)
//   {
//     for (int j = i+1; j < arr_size; j++)
//     {     
//       if (arr[j] - arr[i] > max_diff) 
//         max_diff = arr[j] - arr[i];
//     } 
//   }         
//   return max_diff;
// } 
 
// /* Driver program to test above function */
// int main()
// {
//   int arr[] = {1, 2, 90, 10, 110};
//   int n = sizeof(arr) / sizeof(arr[0]);
   
//   // Function calling
//   cout << "Maximum difference is " << maxDiff(arr, n);
 
//   return 0;
// }
