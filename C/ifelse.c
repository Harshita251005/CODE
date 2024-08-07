// #include<stdio.h>
// int main()
// {
//     int maths,science;
//     printf("enter the marks of maths exam=");
//     scanf("%d",&maths);
//     printf("enter the marks of  science exam=");
//     scanf("%d",&science);
//     if((maths>75) && (science>75)){
//         printf("got a gift of 45 rupee");
//     }
//     else if(((maths>75) && (science<75)) || ((maths<75) && (science>75))){
//         printf("got a gift of 15");
//     }
//     else {
//         printf("no gift");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     float kmstoMiles = 0.621371;
//     float inchestoFoot = 0.08333333;
//     float cmstoKgs = 0.393701;
//     float poundtoKgs = 0.453592;
//     float inchestometers = 0.0254;

//     char num ;
//     printf("enter the value to switch on case = ");
//     scanf("%c",&num);

//     float num1,num2;
    
//     switch(num){
//         case '1':
//         printf("enter the value of num1 = ");
//         scanf("%f",&num1);
//         num2 = num1 * kmstoMiles;
//         printf("%f is equal to %f \n",num1,num2);
//         break;
//         case '2':
//         printf("enter the value of num1 = ");
//         scanf("%f",&num1);
//         num2 = num1 * inchestoFoot;
//         printf("%f is equal to %f \n",num1,num2);
//         break;
//         case '3':
//         printf("enter the value of num1 = ");
//         scanf("%f",&num1);
//         num2 = num1 * cmstoKgs;
//         printf("%f is equal to %f \n",num1,num2);
//         break;
//         case '4':
//         printf("enter the value of num1 = ");
//         scanf("%f",&num1);
//         num2 = num1 * poundtoKgs;
//         printf("%f is equal to %f \n",num1,num2);
//         break;
//         case '5':
//         printf("enter the value of num1 = ");
//         scanf("%f",&num1);
//         num2 = num1 * inchestometers;
//         printf("%f is equal to %f \n",num1,num2);
//         break;
//         default :
//         printf("INVALID VALUE");
//     }

//  return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int sub1,sub2,sub3;
//     printf("enter the marks of sub1 = ");
//     scanf("%d",&sub1);
//     printf("enter the marks of sub2 = ");
//     scanf("%d",&sub2);
//     printf("enter the marks of sub3 = ");
//     scanf("%d",&sub3);
//     if(sub1>33 && sub2 >33 && sub3 >33)
//     {
//         printf("student is pass");
//     }
//     else {
//         printf("student is fail");
//     }

// }



// #include<stdio.h>
// int main()
// {
//     float amount,tax;
//     printf("enter the employee salary=");
//     scanf("%f",&amount);
//     if(amount<2.5){
//         printf("no tax");
//     }
//     else if ((amount>2.5) || (amount<5.0))
//     {
//         tax=amount*0.05;
//     }
//     else if((amount>5) || (amount<10))
//     {
//         tax=amount*0.20;
//     }
//     else if (amount>10)
//     {
//         tax=amount*0.30;        
//     }
//     printf("%.2f",tax);
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int year;
//     printf("enter the year=");
//     scanf("%d",&year);
//     if(((year%4==0) && (year%100!=0)) || (year%400==0)){
//         printf("year is a leap year");
//     }
//     else {
//         printf("it is not a leap year");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("enter the character=");
//     scanf("%c",&ch);
//     if(ch>='a' && ch<='z')
//     {
//         printf("it is a lowest character");
//     }
//     else {
//         printf("it is not a lowest character");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int num1,num2,num3,num4;
//     printf("enter the value =");
//     scanf("%d",&num1);
//     printf("enter the value =");
//     scanf("%d",&num2);
//     printf("enter the value =");
//     scanf("%d",&num3);
//     printf("enter the value =");
//     scanf("%d",&num4);
//     if(num1>num2){
//         if(num1>num3){
//             if(num1>num4){
//                 printf("num1 is greater");
//             }
//             else {
//                 printf("num4 is greater");
//             }
//         }}
//         else{
//             if(num2>num3){
//                 if(num2>num4){
//                     printf("num2 is greater");
//                 }
//                 else {
//                     printf("num4 is greater"); 
//                 }}
//         else {
//             if(num3>num4){
//                 printf("num3 is greater");
//             }
//             else {
//                 printf("num4 is greater");
//             }}}
//     return 0;
// }




// #include<stdio.h>
// int main()
// {
//     int i=0;
//     for(int i=10; i<=20; i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }
        


// #include<stdio.h>
// int main()
// {
//     int n,i=0;
//     scanf("%d",&n);
//     do
//     {
//       printf("%d",i);
//       i++;
//     } while (i<n);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int n,i=0;
//     scanf("%d",&n);
//     for(i=0;i<n;i++)
//     printf("%d",i);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int n,i=0;
//     scanf("%d",&n);
//     for(i=n;i>0;i--)
//     printf("%d",i);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int num1,n;
//     scanf("%d",&num1);
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     printf("%d\n", num1 * i);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int num2,num1;
//     scanf("%d",&num1);
//     scanf("%d",&num2);
//     for(int i=num2;i>=1;i--)
//     printf("%d\n", num1 * i);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i=1,n,sum=0;
//     scanf("%d",&n);
//     while(i<=n){
//         sum=sum+i;
      
//         i++;
//     }
//       printf("%d",sum);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i,n,sum=0;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum=sum+i; 
//     }
// printf("%d",sum);
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int i=1,n,sum=0;
//     scanf("%d",&n);
//     do{
//         sum=sum+i;
//         i++;
//     printf("%d",sum);

//     }
//     while(i<=n) ;   
//     return 0;
// }



// #include<stdio.h>
// int main()
// {
//     int i,n,sum=0,num1;
//     scanf("%d",&num1);
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         printf(" %d x %d = %d\n",num1,i,num1 *i);
//         sum=sum+(num1*i);
//         printf("%d",sum);
//     }   
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int i,n,fact=1;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("%d",fact);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=1;
//     while(i<=8){
//         printf("%d",8);
//         i++;
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int i,n;
//     scanf("%d",&n);
//     if(n<2)
//     {
//         printf("not prime");
//         return 0;
//     }
//     else{
//         for(int i=2;i<n;i++)
//         {
//             if(n%i==0)
//             {
//                 printf("not prime");
//                 return 0;
//             }
            
//         }
//         printf("prime");
//          return 0;
//     }
   
// }


// #include<stdio.h>
// int main(){
//     int num;
//     scanf("%d",&num);
//     if(num>90){
//         printf("A");
//     }
//     else if (num>80 && num<=90){
//         printf("B");
//     }
//     else if( num>70 && num<=80){
//         printf("C");
//     }
//     else if(num>60 && num<=70){
//         printf("D");
//     }
//     else if(num<=60){
//         printf("FAIL");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=0;
//     for(i=10;i<=20;i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     scanf("%d",&n);
//     for(i=n;i>=1;i--){
//         printf("%d",i);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int i=1,n;
//     scanf("%d",&n);
//     do{
//         printf("%d",i);
//         i++;
//     }
//     while(i<=n);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int i,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         printf("%d",i);
//     }
//     return 0;
// }
