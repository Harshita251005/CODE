// calculate mount using compound interest

// #include <iostream>
// #include <cstdio>
// #include <math.h>
// #include <iomanip>

// using namespace std;

// int main()
// {
//     double P, R, T, A;
//     cin >> P >> R >> T;
//     A = P * pow(1 + R / 100, T);
//     cout << fixed << setprecision(1) << A;

//     return 0;
// }



//Rectangle

// #include<iostream>
// #include<string>
// using namespace std;

// class Rectangle
// {

// public:Rectangle(int x, int y, int width, int height){
//   this->x=x;
//   this->y=y;
//   this->width=width;
//   this->height=height;
// }
//   int getHeight(){
//     return height;
//   }
//   int getWidth(){
//     return width;
//   }
//   int getX(){
//     return x;
//   }
//   int getY(){
//     return y;
//   }
// 	string toString()
//     {
//       string output="Rectangle[x=" + to_string(x) + ",y=" + to_string(y) + ",width=" + to_string(width) + ",height=" + to_string(height) + "]";
//       return output;
//     }
//   private:
//   int x;
//   int y;
//   int width;
//   int height;
// };


// int main()
// {
//   Rectangle rect(1,2,3,4);
//   cout<< rect.toString()<<endl;
//   return 0;
// }

//Timespan


// class TimeSpan
// {
//   // Write your code here
//   int mm,hh;
//   public:
//   	TimeSpan(int hours,int minutes):hh{hours},mm{minutes}{}
//   	int getHours(){
//       return this->hh;
//     }
//   	int getMinutes(){
//       return this->mm;
//     }
//    	void add(int hours,int minutes){
//       this->hh +=hours;
//       this->mm += minutes;
//       while(this->mm >= 60){
//         this->mm -=60;
//         this->hh++;
//       }
//     }
//   	void add(TimeSpan tp){
//       this->add(tp.getHours(),tp.getMinutes());
//     }
//   	double getTotalHours(){
//       return hh+(mm/60.0);
//     }
//   	string toString(){
//       char buff[100];
//       sprintf(buff,"%d Hours, %d Minutes",this->hh,this->mm);
//       return string(buff);
//     }
// };


//date


// #include <string>
// using namespace std;
// class Date {
//   private:
//     int month, day;
//   public:
//     Date(int a, int b) : month(a), day(b) {}
//     int daysInMonth() {
//       if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
//         return 31;
//       } else if (month == 2) {
//         return 28;  // Could add leap year handling here
//       } else {
//         return 30;
//       }
//     }
//     int getDay() const {
//       return day;
//     }
//     int getMonth() const {
//       return month;
//     }
//     void nextMonth() {
//       if (month == 12) {
//         month = 1;
//       } else {
//         ++month;
//       }
//     }
//     void nextDay() {
//       if (day == daysInMonth()) {
//         day = 1;
//         nextMonth();
//       } else {
//         ++day;
//       }
//     }
//     string toString() const {
//       return to_string(month) + "/" + to_string(day);
//     }
//     int absoluteDay() const {
//       static const int daysInMonths[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // Days in each month
//       int totalDays = day;
//       for (int i = 1; i < month; ++i) {
//         totalDays += daysInMonths[i];
//       }
//       return totalDays;
//     }
// };


//circle


// #include <iomanip> // for std::setprecision
// #include <cmath>   // for M_PI (PI constant)
// class Circle {
// private:
//     double radius;
// public:
//     // Constructor to initialize the Circle with the given radius
//     Circle(double r) : radius(r) {}
//     // Returns the area of the circle, formatted to 2 decimal places
//     double area() const {
//         return M_PI * radius * radius;
//     }
//     // Returns the circumference of the circle, formatted to 2 decimal places
//     double circumference() const {
//         return 2 * M_PI * radius;
//     }
//     // Returns the radius formatted to 1 decimal place
//     double getRadius() const {
//         return radius;
//     }
//     // Returns a string representation of the circle
//     string toString() const {
//         stringstream ss;
//         ss << fixed << setprecision(1) << radius;
//         return "Circle{radius=" + ss.str() + "}";
//     }
// };


//safearray


// class SafeArray{
//   int *arr;
//   int LIMIT;
//   public:
//   	SafeArray(int capacity):LIMIT{capacity}{
//       this->arr = new int[this->LIMIT];
//     }
//   	void putElement(int index,int value){
//       if(index >=LIMIT ){
//         return;
//       }
//       arr[index] = value;
//     }
//   	int getElement(int index){
//       if(index <0 || index>=LIMIT)
//         return -1;
//       return arr[index];
//     }
// };



//tollbooth



// #include <iostream>
// using namespace std;
// class TollBooth {
// private:
//     int totalCars;   // Total number of cars
//     int totalCash;   // Total amount of money collected
// public:
//     // Constructor initializes totalCars and totalCash to 0
//     TollBooth() : totalCars(0), totalCash(0) {}
//     // Method to handle paying cars
//     void payingCar() {
//         totalCars++;
//         totalCash += 50; // Each paying car adds 50 Rupees
//     }
//     // Method to handle non-paying cars
//     void nopayCar() {
//         totalCars++;
//     }
//     // Method to display the total cars and total cash
//     void display() const {
//         cout << "Total Cash : " << totalCash << "/-" << endl;
//         cout << "Total Cars : " << totalCars << endl;
//     }
// };
// int main() {
//     TollBooth booth; // Create a TollBooth object
//     char input;
//     // Loop to process user input
//     while (true) {
//         cin >> input; // Read user input
//         if (input == 'p') {
//             booth.payingCar(); // Count a paying car
//         } else if (input == 'n') {
//             booth.nopayCar(); // Count a non-paying car
//         } else if (input == 'q') {
//             booth.display(); // Display totals and quit
//             break; // Exit the loop
//         } else {
//             cout << "Invalid input. Please enter 'p', 'n', or 'q'." << endl;
//         }
//     }
//     return 0; // Return 0 to indicate normal termination
// }