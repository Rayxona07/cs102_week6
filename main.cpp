#include <iostream>
#include <cmath>
using namespace std;
//
// float product(float x,float y) {
//     return x*y;
// }
// int main() {
// float x,y;
//     cin>>x>>y;
//     cout<< product(x,y);
//     cout<<"\nrounded:"<<product((int)x,(int)y);
// }
//problem 2
// double acceleration(double v1, double v2, double t) {
//    return (v2-v1)/t;
// }
// int main () {
//     double v1, v2, t;
//     cout<<"Enter the final velocity (v2): ";
//     cin>>v1;
//     cout<<"Enter the initial velocity(v1):";
//     cin>>v2;
//     cout<<"Enter the time (t): ";
//     cin>>t;
//     cout<<"Acceleration is: "<<acceleration(v1,v2,t);
// }
    //problem 3
// void fun(double r) {
//     double M_PI=3.14;
//     double circumference= 2*M_PI*r;
//     double area= M_PI*r*r;
//     cout<<"Circle circumference: "<<circumference<<endl;
//     cout<<"Circle area: "<<area<<endl;
// }
// int main () {
//     double radius;
//     cout<<"Enter the radius of the circle: ";
//     cin>>radius;
//     fun(radius);
// }
//Problem 4
// void fun(double r) {
//     double circimference = 2*M_PI*r;
//     double area= M_PI*r*r;
//     cout<<"Circle circumference: "<<circimference<<endl;
//     cout<<"Area: "<<area<<endl;
// }
// void fun(double a, double b) {
//     double perimeter=2*(a*b);
//     cout<<"Rectangle perimeter: "<<perimeter<<endl;
//     cout<<"Rectangle area: "<<perimeter*perimeter<<endl;
// }
// int main() {
//     double r,a,b;
//     cout<<"Enter the radius of the circle: ";
//     cin>>r;
//     fun(r);
//     cout<<"\nEnter sides of rectangle (a,b):";
//     cin>>a>>b;
//     fun(a,b);
// }
//Problem 5
// void swapNumbers(int &x, int &y) {
//     x=x+y;
//     y=x-x;
//     x=x-y;
// }
// int main() {
//     int a, b;
//     cout<<"Enter two integers: ";
//     cin>>a>>b;
//     cout<<"Before swap:a="<<a<<",b="<<b<<endl;
//     swapNumbers(a, b);
//     cout<<"After swap:a="<<a<<",b="<<b<<endl;
// }
//Problem 6
// long long Factorial(int n=1) {
//    if (n<0) {
//         return 0;
//     }
//     long long result = 1;
//     for (int i = 1; i <= n; ++i) {
//          result *= i;
//     }
//     return result;
// }
// int main() {
//     cout << "Factorial of 5:"<<Factorial(5)<<endl;
//     cout<<"factorial pf 0:"<<Factorial(0)<<endl;
//     cout<<"Factorial with no parameter (defaults to 1):"<<Factorial()<<endl;
// }
//Problem 7
// int gcd(int num1,int num2) {
//     while (num2 !=0) {
//         int temp = num2;
//         num2 = num1 % num2;
//         num1 = temp;
//     }
//     return num1;
//     int main () {
//         cout<<"GCD of 48 and 18:"<<gcd(48,18)<<endl;
//         cout<<"GCD of 101 and 103:"<<gcd(101,103)<<endl;
//     }
// }
//Problem 8
// int maximum(int a, int b, int c) {
//     int max = a;
//     if (b > max) max = b;
//     if (c > max) max = c;
//     return max;
// }
//
// int minimum(int a, int b, int c) {
//     int min = a;
//     if (b < min) min = b;
//     if (c < min) min = c;
//     return min;
// }
//
// int main() {
//     int x, y, z;
//     cout << "Enter three numbers: ";
//     cin >> x >> y >> z;
//
//     cout << "Maximum: " << maximum(x, y, z) << endl;
//     cout << "Minimum: " << minimum(x, y, z) << endl;
// }
//Problem 9
// double sum(double a, double b) {
//     return a+b;
//     double subtract = a-b;
//     return a-b;
//     double product = a*b;
//     return a*b;
//     double quotient = a/b;
//     if (b == 0) {
//         cout << "Error: Division by zero!" << endl;
//         return 0;
//     }
//     return a/b;
//     int main () {
//         double a, b;
//         cout<<"Enter 2 numbers: ";
//         cin>>a>>b;
//         cout<<"Sum:"<<sum(a,b)<<endl;
//         cout<<"Subtract:"<<subtract(a,b)<<endl;
//         cout<<"Product:"<<product<<endl;
//         cout<<"Quotient:"<<quotient<<endl;
//     return 0;
// }
//problem 10
// int getTriangularNumber(int n) {
//     return n * (n + 1) / 2;
// }
// int main() {
//     for (int i = 1; i <= 75; i++) {
//         cout << getTriangularNumber(i) << "\t";
//         if (i % 5 == 0) cout << endl;
//     }
//     return 0;
// }
