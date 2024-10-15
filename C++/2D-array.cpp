// #include <iostream>
// using namespace std;
// void printcol(int arr[][4], int row, int col)
// {
//     // col wise
//     for (int j = 0; j < col; j++)
//     {
//         for (int i = 0; i < row; i++)
//         {
//             cout << arr[i][j] << " ";
//         }
//     }
// }
// int main()
// {
//     // create 2d array
//     int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
//     // print all the values in array row wise
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//     }
//     cout << endl;
//     // print all the values in array col wise,function call
//     printcol(arr, 3, 4);
//     // find the element in array
//     cout << endl;
//     int target = 7;
//     bool found = false;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (arr[i][j] == target)
//             {
//                 cout << "yes";
//                 found = true;
//                 break;
//             }
//         }
//         if (found)
//             break;
//     }
//     if (!found)
//         cout << "no";
//     return 0;
// }

// add two matrices

// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j];
//         }
//     }
//     cout << endl;
//     int brr[3][3] = {2, 3, 4, 5, 6, 7, 8, 9, 1};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << brr[i][j];
//         }
//     }
//     cout << endl;
//     int add[3][3];
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             add[i][j] = arr[i][j] + brr[i][j];
//         }
//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//          cout<<add[i][j];
//         }
//     }
// }

// print row index with max sum
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int index = -1, sum = INT_MIN;
//     int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     for (int i = 0; i < 3; i++)
//     {
//         int total = 0;
//         for (int j = 0; j < 3; j++)
//         {
//             total += arr[i][j];

//             if (total > sum)
//             {
//                 sum = total;
//                 index = 1;
//             }
//         }
//     }
//     cout << index;

//     cout << endl;
// }

// sum of diagonal elements
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int row = 3, col = 3;
//     int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int first = 0, sec = 0;
//     int i = 0;
//     while (i < row)
//     {
//         first += arr[i][i];
//         i++;
//     }
//     // second diagonal
//     i = 0;
//     int j = col - 1;
//     while (j >= 0)
//     {
//         sec += arr[i][j];
//         i++, j--;
//     }
//     cout << first << " " << sec << " ";
//     return 0;
// }

// reverse

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row=3,col=3;
//     int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j];
//         }
//     }
//     cout << endl;
//     int start,end;
//     for (int i=0;i<row;i++)
//     {
//         start=0,end=col-1;
//         while(start<end){
//             swap(arr[i][start],arr[i][end]);
//             start++,end--;
//         }

//     }
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << arr[i][j];
//         }
//     }
// }

// create 2D vector

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> matrix(n, vector<int>(m));
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<4;j++)
//     //     {
//     //         cout<<matrix[i][j]<<" ";
//     //     }
//     // }
//     // cout<<endl;
//     // cout<<"rows="<<matrix.size()<<endl;
//     // cout<<"col="<<matrix[0].size();

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//wave form
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[3][3]={1,2,3,4,5,6,7,8,9};
//     for(int j=0;j<3;j++){
//         if(j%2==0)
//         {
//             for(int i=0;i<3;i++)
//             {
//                 cout<<arr[i][j];
//             }           
//         }
//         else{
//             for( int i=2;i>=0;i--)
//             {
//                 cout<<arr[i][j];
//             }
//         }
//     }
//     return 0;
// }



//spiral
// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int>ans;
//         int row=matrix.size(),col=matrix[0].size();
//      int top=0,bottom=row-1,left=0,right=col-1;   
//      while(top<=bottom && left<=right){
//      for(int j=left;j<=right;j++)
//         ans.push_back(matrix[top][j]);
//         top++;

//      for(int i=top;i<=bottom;i++)
//         ans.push_back(matrix[i][right]);
//         right--;
     
//      if(top<=bottom){
//      for(int j=right;j>=left;j--)
//         ans.push_back(matrix[bottom][j]);
//         bottom--;
//      }
//      if(left<=right){
//      for(int i=bottom;i>=top;i--)
//         ans.push_back(matrix[i][left]);
//         left++;
//      }

//     }
//          return ans;
//     }
// };


//transpose of matrix
//  void transpose(vector<vector<int> >& matrix, int n)
//     { 
//         for(int i=0;i<n-1;i++){
//             for(int j=i+1;j<n;j++){
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//     }


//rotate by 90
// class Solution {
// public:
//     void rotate(vector<vector<int>>& matrix) {
        
//         int n=matrix.size();
//         for(int i=0;i<=n-1;i++){
//             for(int j=i+1;j<n;j++)
//             {
//                 swap(matrix[i][j],matrix[j][i]);
//             }
//         }
//         for(int i=0;i<n;i++){
//             int start=0,end=n-1;
//             while(start<end){
//                 swap(matrix[i][start],matrix[i][end]);
//                 start++,end--;
//             }
//         }
//     }
// };


//binary search
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int N=matrix.size(),M=matrix[0].size();
//         int row_index,col_index,start=0,end=N*M-1,mid;
//         while(start<=end)
//         {
//             mid=end+(start-end)/2;
//             row_index=mid/M;
//             col_index=mid%M;
//             if(matrix[row_index][col_index]==target)
            
//                 return 1;
            
//             else if(matrix[row_index][col_index]<target)
//             start=mid+1;
//             else
//             end= mid-1;
//         }
//         return 0;
        
//     }
// };


//search in row-colsorted array
// class Solution {
//   public:
//     // Function to search a given number in row-column sorted matrix.
//     bool search(vector<vector<int> > &matrix, int n, int m, int x) {
//         int row=0,col=m-1;
//         while(row<n && col>=0)
//         {
//             if(matrix[row][col]==x)
//             return 1;
//             else if(matrix[row][col]<x)
//             row++;
//             else
//             col--;
//         }
//         return 0;
//     }


//how to store two no. at one position
//find missing and repeating

// class Solution {
//   public:
//     vector<int> findTwoElement(vector<int> arr) {
//         int n = arr.size();
//         vector<int> ans(2);
//         //declare valuew by 1
//         for(int i =0;i<n;i++){
//             arr[i]--;
//         }
//         // Mark the occurrence of each element
//         for(int i = 0; i < n; i++) {
//             arr[(arr[i])%n] += n;
//         }
        
//         // Find the repeating and missing elements
//         for(int i = 0; i < n; i++) {
//             if(arr[i] / n == 2) {
//                 ans[0] = i + 1;  // Repeating element
//             } else if(arr[i] / n == 0) {
//                 ans[1] = i + 1;  // Missing element
//             }
//         }
        
//         return ans;
//     }
// };

//majority element
// class Solution {
// public:
//     int majorityElement(vector<int>& num) {
//         int candidate,count=0,n=num.size();
//         for(int i=0;i<n;i++)
//         {
//             if(count==0)
//             {
//                 count=1;
//                 candidate=num[i];
//             }
//             else
//             {
//                 if(candidate==num[i])
//                 count++;
//                 else
//                 count--;
//             }
//         }
//         return candidate;
//     }
// };


//another code of this
// class Solution {
// public:
//     int majorityElement(vector<int> &arr) {
//         int candidate, count = 0;
//         for (int i = 0; i < arr.size(); i++) {
//             if (count == 0) {
//                 count = 1;
//                 candidate = arr[i];
//             } else {
//                 if (candidate == arr[i])
//                     count++;
//                 else
//                     count--;
//             }
//         }
//         count = 0;
//         for (int i = 0; i < arr.size(); i++)
//             if (arr[i] == candidate)
//                 count++;
//         if (count > arr.size() / 2)
//             return candidate;
//         else
//             return -1;
//     }
// };