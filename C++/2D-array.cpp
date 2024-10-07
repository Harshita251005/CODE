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