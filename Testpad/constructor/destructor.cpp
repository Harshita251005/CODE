//count number of objects

// int cnt=0;	// manipluate this variable in your code
// class Counter
// { 
//   public: 
//   Counter(){
//     ++cnt;
//   }
//   ~Counter(){
//     --cnt;
//   }
// };


//box

// #include <iostream>
// using namespace std;
// class Box
// {
//   private:
//   int length;
//   int breadth;
//   int height;
//   public:
//   Box() : length(0), breadth(0), height(0) {}
//   Box(int length, int breadth, int height) 
//         : length(length), breadth(breadth), height(height) {}
//   Box(const Box& b1) 
//         : length(b1.length), breadth(b1.breadth), height(b1.height) {}
//   int getLength() const {
//         return length;
//     }
//   int getBreadth() const {
//         return breadth;
//     }
//   int getHeight() const {
//         return height;
//     }
//   long long CalculateVolume() const {
//         return static_cast<long long>(length) * breadth * height;
//     }
// };