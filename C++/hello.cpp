// #include<iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout<<"Hello World\nHarshita";
//     cin>>a;
//     cout<<a;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     int M,N;
//     cin>>M>>N;
//     int arr[M][N];

//         for(int i =0;i=M;i++){
//             for (int j=0;j=N;j++){
//                 cin>>[i][j];
//         }
    
//     }
//     return 0;
// }




// #include<iostream>
// using namespace std;

// int main()
// {
//     int M, N;
//     cin >> M >> N;

//     // You can't declare an array with variable size in C++ like this
//     // int arr[M][N];

//     // Instead, you can use dynamic memory allocation
//     int** arr = new int*[M];
//     for (int i = 0; i < M; i++) {
//         arr[i] = new int[N];
//     }

//     // Initialize the 2D array
//     for (int i = 0; i < M; i++) {
//         for (int j = 0; j < N; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     //for column1 && column3

//         for(int j=0;j<N;j++){
//             if(j%2==0){
//                 for(int i=0;i<=M-1;i++)
//                 cout<< arr [i] [j]<<" , ";
//             }
//             else {
//                 for(int i=M-1;i>=0;i--)
//                 cout<<arr [i] [j] << " , ";
//             }
//         }
    

//     // Don't forget to deallocate the memory when you're done
//     for (int i = 0; i < M; i++) {
//         delete[] arr[i];
//     }
//     delete[] arr;

//     return 0;
// }


