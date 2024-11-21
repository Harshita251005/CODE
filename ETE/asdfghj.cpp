// #include <iostream>
// using namespace std;
// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     int arr[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = n - 1; j >= 0; j--)
//             {
//                 cout << arr[i][j];
//             }
//         }
//         else
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << arr[i][j];
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Vehicle
// {
// protected:
//     string make;
//     int year;

// public:
//     Vehicle(string make, int year)
//     {
//         this->make = make;
//         this->year = year;
//     }
//     void displayDetails()
//     {
//         cout << "Make: " << make << endl
//              << "Year: " << year << endl;
//     }
// };
// class Car : public Vehicle
// {
// protected:
//     string fuelType;

// public:
//     Car(string make, int year, string fuelType) : Vehicle(make, year), fuelType(fuelType) {}
//     void displayDetails()
//     {
//         Vehicle::displayDetails();
//         cout << "FuelType: " << fuelType << endl;
//     }
// };
// class Bike : public Vehicle
// {
// protected:
//     string engineType;

// public:
//     Bike(string make, int year, string engineType) : Vehicle(make, year), engineType(engineType) {}
//     void displayDetails()
//     {
//         Vehicle::displayDetails();
//         cout << "EngineType: " << engineType << endl;
//     }
// };
// class Truck : public Car
// {
// protected:
//     int cargoCapacity;

// public:
//     Truck(const string &make, int year, const string &fuelType, int cargoCapacity) : Car(make, year, fuelType), cargoCapacity(cargoCapacity) {}
//     void displayDetails()
//     {
//         Car::displayDetails();
//         cout << "CargoCapacity: " << cargoCapacity << endl;
//     }
// };

// int main()
// {
//     string car_build, car_fuel;
//     int car_year;
//     cin >> car_build >> car_year >> car_fuel;
//     Car car(car_build, car_year, car_fuel);

//     string bike_build, bike_fuel;
//     int bike_year;
//     cin >> bike_build >> bike_year >> bike_fuel;
//     Bike bike(bike_build, bike_year, bike_fuel);

//     string truck_build, truck_fuel;
//     int truck_year, truck_capacity;
//     cin >> truck_build >> truck_year >> truck_fuel >> truck_capacity;
//     Truck truck(truck_build, truck_year, truck_fuel, truck_capacity);

//     cout << "Car Details: ";
//     car.displayDetails();
//     cout << "\nBike Details: ";
//     bike.displayDetails();
//     cout << "\nTruck Details: ";
//     truck.displayDetails();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int arr[N][N];
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < N - 1; i++)
//     {
//         for (int j = i + 1; j < N; j++)
//         {
//             swap(arr[i][j], arr[j][i]);
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         int start = 0, end = N - 1;
//         while (start <= end)
//         {
//             swap(arr[i][start], arr[i][end]);
//             start++, end--;
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Counter
// {
// public:
//     int count;
//     Counter()
//     {
//         count = 0;
//     }
//     Counter(int intialCount)
//     {
//         count = intialCount;
//     }

//     Counter &operator++()
//     {
//         ++count;
//         return *this;
//     }
//     Counter &operator--()
//     {
//         --count;
//         return *this;
//     }
//     Counter operator+(int n)
//     {
//         return Counter(count + n);
//     }
//     Counter operator-(int m)
//     {
//         return Counter(count - m);
//     }
// };
// int main()
// {
//     int x, y, n, m;
//     cin >> x >> y >> n >> m;
//     Counter counter;
//     for (int i = 0; i < x; ++i)
//     {
//         ++counter;
//     }
//     for (int i = 0; i < y; ++i)
//     {
//         --counter;
//     }
//     counter = counter + n;
//     counter = counter - m;
//     cout << counter.count << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int arr[N][N];
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int i = 0; i < N; i++)
//     {
//         if (i % 2 == 0)
//         {
//             for (int j = 0; j < N; j++)
//             {
//                 cout << arr[i][j];
//             }
//         }
//         else
//         {
//             for (int j = N - 1; j >= 0; j--)
//             {
//                 cout << arr[i][j];
//             }
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Person
// {
// protected:
//     string name;
//     int age;

// public:
//     Person(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl
//              << "Age: " << age << endl;
//     }
// };

// class Employee : public Person
// {
//     int employeeid;
//     double salary;

// public:
//     Employee(string name, int age, int employeeid, double salary) : Person(name, age), employeeid(employeeid), salary(salary) {}
//     void display()
//     {
//         Person::display();
//         cout << "Employee_ID: " << employeeid << endl
//              << "Salary: " << salary << endl;
//     }
// };

// int main()
// {
//     string name;
//     int age, employeeid;
//     double salary;
//     cin >> name >> age >> employeeid >> salary;
//     Employee employee(name, age, employeeid, salary);
//     employee.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int N;
//     cin >> N;
//     int arr[N][N];
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     for (int j = 0; j < N; j++)
//     {
//         cout << arr[0][j];
//     }

//     for (int i = 1; i < N; i++)
//     {
//         cout << arr[i][N - 1 - i];
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Complex
// {
// private:
//     int real;
//     int img;

// public:
//     Complex(int r, int i)
//     {
//         real = r;
//         img = i;
//     }
//     Complex operator+(const Complex &other) const
//     {
//         return Complex(real + other.real, img + other.img);
//     }
//     Complex operator*(const Complex &other) const
//     {
//         return Complex(real * other.real - img * other.img,
//                        real * other.img + img * other.real);
//     }
//     void display() const
//     {
//         cout << real << " + " << img << " i" << endl;
//     }
// };

// int main()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     Complex c1(a, b);
//     Complex c2(c, d);
//     Complex add = c1 + c2;
//     Complex mul = c1 * c2;
//     add.display();
//     mul.display();
// }



// #include <iostream>
// using namespace std;
// int maxSubarraySum(int prices[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             res = max(res, prices[j] - prices[i]);
//         }
//     }
//     return res;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << maxSubarraySum(arr, n) << endl;
//     return 0;
// }