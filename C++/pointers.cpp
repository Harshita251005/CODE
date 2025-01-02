// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int a = 10;
// //     //print address of a
// //     cout << &a << endl;
// //     int *ptr = &a;
// //     cout << ptr << endl;     //address of a
// //     cout<<*ptr<<endl;        //value inside a
// //     // cout <<sizeof(ptr) << endl;
// //     // float m = 2.6;
// //     // float *ptr1 = &m;
// //     // cout<<ptr1<<endl;
// //     // cout<<sizeof(ptr1)<<endl;
// //     int b=20;
// //     ptr = &b;
// //     cout<<ptr<<endl;
// //     cout<<*ptr<<endl;
// //     b=30;
// //     cout<<*ptr<<endl;
// // }

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int arr[5] = {1, 2, 3, 4, 5};
// //     int *ptr = arr;
// //     // print the address of first element or 0 index
// //     cout << arr << endl;
// //     cout << arr + 0 << endl;
// //     cout << &arr[0] << endl;
// //     cout << ptr << endl;

// //     // print thr address of second element or 1 index
// //     cout << arr + 1 << endl;
// //     cout << &arr[1] << endl;

// //     // print the value of 0 index
// //     cout << arr[0] << endl;
// //     cout << *arr << endl;
// //     cout << *(arr + 0) << endl;
// //     cout << *ptr << endl;

// //     // sare address ko print kardo

// //     for (int i = 0; i < 5; i++)
// //     {
// //         cout << arr + i << endl;
// //     }

// //     // print all the values
// //     for (int i = 0; i < 5; i++)
// //     {
// //         cout << *(arr + i) << endl;
// //     }

// //     // print all the values
// //     for (int i = 0; i < 5; i++)
// //     {
// //         cout << ptr[i] << endl;
// //     }

// //     // sare address ko print kardo

// //     for (int i = 0; i < 5; i++)
// //     {
// //         cout << ptr + i << endl;
// //     }

// //     //Arithmetic operations ptr++;ptr--,ptr = ptr+1

// //     //print all the values

// //     for(int i=0;i<8;i++)
// //     {
// //         cout<<*ptr<<" ";
// //         ptr++;
// //     }

// //     //Addition

// //     ptr = ptr+3;
// //     cout<<*ptr<<endl;

// //     ptr = ptr-2;
// //     cout<<*ptr<<endl;
// // }

// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     char arr[5] = "1234";
// //     char *ptr = arr;
// //     cout<<(void*)arr<<endl;
// //     cout<<(void*)ptr<<endl;
// //     char name = 'a';
// //     char *ptr1 = &name;
// //     cout<<(void*)&name;
// //     cout<<(void*)ptr1;
// // }

// // #include<iostream>
// // using namespace std;
// // void swapping(int p1,int p2)  //pass by value
// // {
// //     int temp = p1;
// //     p1=p2;
// //     p2=temp;
// //     cout<<&p1<<endl;
// //     cout<<&p2<<endl;
// //     cout<<p1<<" "<<p2<<endl;
// // }
// // int main()
// // {
// //     int first=10,second=20;
// //     cout<<&first<<endl;
// //     cout<<&second<<endl;
// //     swapping(first,second);
// //     cout<<first<<" "<<second;
// // }

// // #include<iostream>
// // using namespace std;
// // void swapping(int *p1,int *p2)  //pass by pointer
// // {
// //     int temp = *p1;
// //     *p1=*p2;
// //     *p2=temp;
// //     cout<<p1<<endl;
// //     cout<<p2<<endl;
// //     cout<<&p1<<endl;
// //     cout<<&p2<<endl;
// // }
// // int main()
// // {
// //     // int first=10,second=20;
// //     // cout<<&first<<endl;
// //     // cout<<&second<<endl;
// //     // swapping(&first,&second);
// //     // cout<<first<<" "<<second;
// // }



// // #include <iostream>
// // using namespace std;
// // void swapping(int &p1, int &p2) // pass by reference
// // {
// //     int temp = p1;
// //     p1 = p2;
// //     p2 = temp;
// //     cout << p1 << endl;
// //     cout << p2 << endl;
// // }

// // // void pass(vector<int>temp)
// // // {
// // //     for(int i=0;i<5;i+=)
// // //     temp[i]=20;

// // // }
// // // void dob(int p[])
// // // {
// // //     for(int i=0;i<5;i++)
// // //     p[i]=p[i]*2;
// // // }


// // //vector,string reference help;
// // // int arr,char arr pointer ki help se


// // int main()
// // {
// //     // reference varriable

// //     // int num = 10;
// //     // int &temp = num; // num and temp are same
// //     // cout << temp << endl;
// //     // temp++;
// //     // cout << num << endl;
// //     // cout << &temp << endl;
// //     // cout << &num;
// //     // int first = 10, second = 20;

// //     // swapping(first, second);
// //     // cout << first << " " << second;

// //     // vector<int>v(5,0);
// //     // pass(v);
// //     // for(int i=0;i<5;i++)
// //     // cout<<v[i]<<" ";
// //     int arr[5]={1,2,3,4,5};
// //     dob(arr);
// //     for(int i=0;i<5;i++)
// //     cout<<p[i]<<" ";
// //     vector<int>v(5,0);
// //     pass(v);
// //     for(int i=0;i<5;i++)
// //     cout<<v[i]<<" ";
// // }


// // #include<iostream>
// // using namespace std;

// // void second(int *p1, int *p2)
// // {
// //     p1=p2;
// //     *p1=2;
// // }
// // // void fun(int **p1)
// // // {
// // //     *p1 = *p1+1;
// // // }
// // int main()
// // {
// //     // int n=10; 
// //     // int *p = &n; //single  pointer
// //     // int **p2=&p; //double pointer
// //     // // int ***p3=&p2; //triple pointer
// //     // // cout<<p<<endl;
// //     // // cout<<&p<<endl;
// //     // // cout<<p2<<endl;
// //     // // cout<<&p2<<endl;
// //     // // cout<<p3<<endl;
// //     // // //value ko modify karna ho,jo n main rakhi hae..

// //     // // ***p3 = ***p3*10;
// //     // // cout<<n<<endl;

// //     // cout<<p<<endl;
// //     // fun(p2);
// //     // cout<<p<<endl;

// //     // int i=0,j=1;
// //     // second(&i,&j);
// //     // cout<<i<<" "<<j<<endl;
// // }


// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     char c[]="GATE2024";
// //     char *p =c ;
// //     cout<<p+p[3]-p[1];
// //     cout<<endl;
// // }


// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //    int *ptr;
// //    int x=0;
// //    ptr=&x;
// //    int y=*ptr;
// //    *ptr=1;
// //    cout<<x<<" "<<y<<endl;
// // }

// // #include<iostream>
// // using namespace std;
// // void second(int *p1, int *p2)
// // {
// //     p1=p2;
// //     *p1=2;
// // }
// // int main()
// // {
// //    int i=0,j=1;
// //    second(&i,&j);
// //    cout<<i<<" "<<j<<endl;
// // }


// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //    int a=5,b=10;
// //    int &name=a;
// //    int *ptr=&a;
// //    (*ptr)++;
// //    ptr=&b;
// //    *ptr=*ptr+5;
// //    name+=5;
// //    cout<<a<<" "<<b;
// // }

// // #include<iostream>
// // using namespace std;
// // int four(int x,int *py,int **ppz)
// // {
// //     int y,z;
// //     **ppz+=1; z=**ppz;
// //     *py+=2; y=*py;
// //     x+=3;
// //     return x*y*z;
// // }
// // int main()
// // {
// //    int c,*b,**a;
// //    c=4; b=&c;a=&b;
// //    cout<<four(c,b,a);
// // }



// // #include<iostream>
// // using namespace std;
// // int five(char *str1, char *str2)
// // {
// //     while{(*str1=*str2)}{
// //         str1++,str2++;
// //     }
// // }
// // int main()
// // {
// //    char first[]="Mohit";
// //    char second[]="Rohan";
// //    five(first,second);
// //    cout<<first;
// //    return 0;
// // }

// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //   int n =10;
// //   int *p=&n;
// //   int **q=&p;
// //   cout<<p<<endl;
// // }


// // #include<iostream>
// // using namespace std;

// // int main()
// // {
// //   //variable ke liye heap memory allocate karo
// //   int *ptr = new int;
// //   *ptr = 5; //value assign
// //   cout<<*ptr<<endl;

// //   float *ptr2=new float;
// //   *ptr2 = 3.6;
// //   cout<<*ptr2<<endl;

// //   int n;
// //   cout<<"Enter the size of array: ";
// //   cin>>n;
// //   int *p = new int [n];

// //   //value daalo
// //   for(int i=0;i<n;i++)
// //   {
// //     p[i]=i+1;
// //   }

// //   //print kara do
// //   for(int i=0;i<n;i++)
// //   cout<<p[i]<<endl;

// //   //delete keywoed use
// //   delete ptr;
// //   delete ptr2;
// //   delete[] p;
// // }


// #include<iostream>
// using namespace std;
// int main()
// {
//     //arrray create karna jo addresss store karega address
//     int n,m;
//     cin>>n>>m;
//     int **ptr = new int *[n];
//     //created 2D array
//     for(int i=0;i<n;i++)
//     {
//         ptr[i]=new int [m];
//     }
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cin>>ptr[i][j];
//         }
//     }
//     //print the value
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<m;j++)
//         {
//             cout<<ptr[i][j]<<" ";
//             cout<<endl;
//         }
//     }

//     //release the memory, heap main

//     for(int i=0;i<n;i++)
//     delete[] ptr[i];
//     delete[] ptr;


//     int l,b,h;
//     cin>>l>>b>>h;
//     int ***ptr=new int **[l];

//     //create 2d array and store it's address in ptr

//     for(int i=0;i<l;i++)
//     {
//         ptr[i]=new int *[b];
//         for(int j=0;j<b;j++)
//         {
//             ptr[i][j]=new int [h];
//         }
//     }

//     for(int i=0;i<l;i++)
//     for(int j=0;j<b;j++)
//     for(int k=0;k<h;k++)
//     ptr[i][j][k]=i+j+k;


//     for(int i=0;i<l;i++)
//     for(int j=0;j<b;j++)
//     for(int k=0;k<h;k++)
//     cout<<ptr[i][j][k]<<" ";

    
// }