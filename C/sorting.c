// #include<stdio.h>
// int main()
// {
//     int n=6;
//     int arr[6]={1,2,3,2,4,5};
//     for(int i =0;i<n-1;i++){
//         for(int j= i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 printf("%d",arr[i]);
//                 break;
//             }
//         }
//     }
//     return 0;
// }




// #include<stdio.h>

// int main() {
//     int n = 5;
//     int arr[5] = {3, 2, 5, 1, 4};

//     // print original array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     // bubble sort
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // print sorted array
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }




// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// int main()
// {
//     int arr[7]={7,4,5,9,8,2,1};
//     int n =7;
//     printf("unsorted array : \n");
//     for(int i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     for(int i =0;i<n-1;i++){
//         int min = INT_MAX;
//         int minidx = -1;
//         for(int j =i;j<=n-1;j++){
//             if(min>arr[j]){
//                 min = arr[j];
//                 minidx = j;
//             }
//         }
//         int j;
//         int temp = arr[minidx];
//         arr[minidx] = j;
//     }
//     printf("\n");
//     printf("sorted array : \n");
//     for(int i=0;i<n;i++){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int arr[9] = {5, 8, 2, 0, 0, 4, 5, 0, 2};
//     int ans[9]; // declare ans as an array
//     int idx = 0;

//     // move non-zero elements to the front of the array
//     for (int i = 0; i < 9; i++) {
//         if (arr[i] != 0) {
//             ans[idx] = arr[i];
//             idx++;
//         }
//     }

//     // fill the rest with zeros
//     while (idx != 9) {
//         ans[idx] = 0;
//         idx++;
//     }

//     // print the result
//     for (int i = 0; i < 9; i++) {
//         printf("%d ", ans[i]);
//     }
//     printf("\n");

//     return 0;
// }



// #include <stdio.h>

// // Function to sort the array in ascending order
// void sort(int arr[], int n) {
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// // Function to find the kth smallest element
// int kthSmallest(int arr[], int n, int k) {
//     sort(arr, n);
//     return arr[k - 1];
// }

// int main() {
//     int arr[] = {7, 10, 4, 3, 20, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     printf("K'th smallest element is %d\n", kthSmallest(arr, n, k));
//     return 0;
// }



// #include <stdio.h>

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6}; // given array of digits
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // sort the array in ascending order
//     int i, j, temp;
//     for (i = 0; i < n - 1; i++) {
//         for (j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // form two numbers using the sorted digits
//     int num1 = 0, num2 = 0;
//     for (i = 0; i < n; i++) {
//         if (i % 2 == 0) {
//             num1 = num1 * 10 + arr[i];
//         } else {
//             num2 = num2 * 10 + arr[i];
//         }
//     }

//     // calculate the sum of the two numbers
//     int sum = num1 + num2;

//     printf("Minimum possible sum is %d\n", sum);

//     return 0;
// }