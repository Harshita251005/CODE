// #include<iostream>
// using namespace std;
// int main()
// {
// int a,b;
// cin>>a>>b;
// cout<<a+b;
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int a;
// cin>>a;
// if(a>10){
//     cout<<"accept";
// }
// else{
//     cout<<"not accepted";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int marks;
// cin>>marks;
// if(marks>33){
//     cout<<"pass";
// }
// else{
//     cout<<"fail";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int a,b;
// cin>>a>>b;
// if(a>b){
//     cout<<"yes";
// }
// else{
//     cout<<"no";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int num;
// cin>>num;
// if(num%2==0){
//     cout<<"even";
// }
// else{
//     cout<<"odd";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int age;
// cin>>age;
// if(age>18){
//     cout<<"adult";
// }
// else{
//     cout<<"teeneger";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int num;
// cin>>num;
// if(num>0){
//     cout<<"positive";
// }
// else if(num<0)
// {
//     cout<<"negative";
// }
// else {
//     cout<<"zero";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// char c;
// cin>>c;
// if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'|| c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
//     cout<<"Vowel";
// }
// else{
//     cout<<"constant";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int num;
// cin>>num;
// switch(num){
//     case 1:cout<<"monday";
//     break;
//     case 2: cout<<"tuesday";
//     break;
//     case 3:cout<<"wednesday";
//     break;
//     case 4: cout<<"thursday";
//     break;
//     case 5:cout<<"friday";
//     break;
//     case 6: cout<<"saturday";
//     break;
//     case 7:cout<<"sunday";
//     break;
//     default: cout<<"Invalid";
// }
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     long long A, B, C, D;
//     cin >> A >> B >> C >> D;

//     long long result = (A % 100) % 100 * (B % 100) % 100 * (C % 100) % 100 * (D % 100) % 100;

//     if(result < 10) {
//         cout << "0" << result << endl;
//     } else {
//         cout << result << endl;
//     }

//     return 0;
// }




// #include <iostream>
// using namespace std;

// long long range_sum(long long l, long long r) {
//     return (r * (r + 1) - l * (l - 1)) / 2;
// }

// int main() {
//     int T;
//     cin >> T;
//     for (int i = 0; i < T; i++) {
//         long long l, r;
//         cin >> l >> r;
//         cout << range_sum(l, r) <<endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main() {
// 	int n,m;
// 	cin>>n>>m;
// 	int arr[n];
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>arr[i];
// 	}
// 	bool flag=false;
// 	for(int i=0;i<n;i++)
// 	{
// 		if (arr[i]==m){
// 		cout<<i<<endl;
// 		flag = true;
// 		break;

// 		}
// 	}
// 	if(!flag)
// 	cout<<-1<<endl;
// 	return 0;
// }