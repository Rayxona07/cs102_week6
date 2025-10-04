#include <iostream>
#include <cmath>
#include <random>
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
//Problem 10
// int getTriangularNumber(int n) {
// return n+(n+1)/2;
// }
// int main () {
//     cout<<"First 75 triangular numbers:"<<endl;
//     for (int i=1; i<=75; i++) {
//         cout<<getTriangularNumber(i)<<endl;
//         if (i % 5 ==0)cout <<endl;
//     }
//
// }
//Problem 11
// void displayEven(int number) {
//     cout <<"Even digits;";
//     while (number >0) {
//         int digit = number % 10;
//         if (digit % 2 == 0) {
//             cout << digit;
//
//         }
//         number = number / 10;
//     }
//     cout << endl;
// }
// int main() {
//     int number;
//     cout<<"Enter an integer: ";
//     cin>>number;
//     displayEven(number);
//     return 0;
// }
//Problem 12
// int cubeOfDigits(int number) {
//     int sum = 0, digit;
//     while (number > 0) {
//         digit = number % 10;
//         sum += digit * digit * digit;
//         number /= 10;
//     }
//     return sum;
// }

// void isArmstrong(int sum, int number) {
//     if (sum == number)
//         cout << number << " is an Armstrong number." << endl;
//     else
//         cout << number << " is NOT an Armstrong number." << endl;
// }
//
// int main() {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;
//     int sum = cubeOfDigits(num);
//     isArmstrong(sum, num);
//     return 0;
// }
//Problem 13
// int numberOfDaysInFebruary(int year) {
//     //Leap year condition;
//     //divisible by 4 AND (not divisible by 100 OR divisible by 400)
//     if ((year % 4 == 0) && (year % 100 != 0)) {
//         return 29;
//     } else {
//             return 28;


//         }
//     }
//
// int main() {
//     cout<< "Year\tDays in February"<<endl;
//     for (int year= 1985;year<=1993;year++) {
//         cout<<year<<"\t"<<numberOfDaysInFebruary(year)<<endl;
//     }
// }
//Problem 14
// double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
//     return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
// }
//
// int main() {
//     double investmentAmount, annualInterestRate;
//     int years;
//
//     cout << "Enter investment amount: ";
//     cin >> investmentAmount;
//     cout << "Enter annual interest rate (e.g., 3.25 for 3.25%): ";
//     cin >> annualInterestRate;
//     cout << "Enter number of years: ";
//     cin >> years;
//
//     double monthlyInterestRate = annualInterestRate / 1200.0; // convert % to monthly rate
//     double futureValue = futureInvestmentValue(investmentAmount, monthlyInterestRate, years);
//
//     cout << "Future investment value is: " << futureValue << endl;
//
//     return 0;
// }
//Problem 15
// void printASCII(char ch1,char ch2, int int numPerLine) {
//     int count = 0;
//     for (char ch = ch1; ch <= ch2; ch++) {
//         cout<<ch<<"="<<(int)ch<<"\";"
//                                 "count++;"
//                                 "if(count==numPerLine==0) {
//         cout<<endl;
//     }
// }
// cout <<endl;
// }
// int main() {
//     cout <<"ASCII values from 'a' to 'm':"<<endl;
//     printASCII('a','m',6);
//     return 0;
//
// }
//Problem 16
// void printMatrix(int n) {
//     for (int i=0; 1<n;i++) {
//         for (int j=0; j<n; j++) {
//             cout<<rand() % 1001 <<"\t";
//         }
//     cout<<endl;
//     }
//
// }
// int main () {
//     int n;
//     cout<<"Enter n for n*n matrix:";
//     cin>>n;
//     cout<<"Matrix of size"<<n<<"x"<<n<<":\n";
//     printMatrix(n);
//     return 0;
// }
//Problem 17
// bool isPalindrome(int num) {
//     int original = num, reversed = 0, digit;
//     while (num > 0) {
//         digit = num % 10;
//         reversed = reversed * 10 + digit;
//         num /= 10;
//     }
//     return original == reversed;
// }
//
// int main() {
//     int count = 0, num = 2; // start from 2
//     cout << "First 50 even palindrome numbers:\n";
//
//     while (count < 50) {
//         if (num % 2 == 0 && isPalindrome(num)) {
//             cout << num << "\t";
//             count++;
//             if (count % 5 == 0) cout << endl; // 5 numbers per line
//         }
//         num++;
//     }
//
//     return 0;
// }
//Problem 19
// void sorted (double a, double b,double c) {
//     double arr[]={a,b,c};
//
//     for (int i=0; i<3-1;i++) {
//         for (int j=0; j<3-i-1; j++) {
//             if (arr[j]>arr[j+1]) {
//                 //swap
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for (int i=0; i<3;i++) cout<<arr[i]<<" ";
// }
// int main () {
//     double a,b,c;
//     cout<<"input 3 numb";
//     cin>>a>>b>>c;
//     sorted(a,b,c);
//     return 0;
// }
//problem 20
// string convertMillis(long millis) {
//     long totalSeconds = millis / 1000;             //convert to seconds
//     long seconds =totalSeconds % 60;               //remaining seconds
//     long totalMinutes = totalSeconds /60;
//     long minutes = totalMinutes % 60;              //remaining minutes
//     long hours = totalMinutes / 60;                //remaining hours
// }
//Problem 21
// int main() {
//     time_t timer;
//     time(&timer);
//     tm* timeInfo;
//     timeInfo = localtime(&timer);
//
//     cout << "Current date and time is " << asctime(timeInfo);
//
//     return 0;
// }
//Problem 22
// double area(int n,double side) {
//     return(n * pow(side, 2))/(4 *tan(M_PI/n));

// }
// int main() {
//     int numSides;
//     double sideLength;
//     cout<<"Enter the number of sides: ";
//     cin>>numSides;
//     cout<<"Enter the side: ";
//     cin>>sideLength;
//     double polygonArea = area(numSides,sideLength);
//     cout<<"Area of the polygon is: "<<polygonArea<<endl;
// }
//problem 25
// bool isPrime(int n) {
//     if (n <= 1) return false;
//     if (n % 2 == 0) return false;
//     for (int i = 3; i <= sqrt(n); i += 2) {
//         if (n % i == 0) return false;
//     }
//         return true;
// }
// int sumOfDigits(int n) {
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }
// bool isAdditivePrime(int n) {
//     if (!isPrime(n)) return false;
//     int digitsSum = sumOfDigits(n);
//     return isPrime(digitsSum);
// }
// void dindAndDisplayAdditivePrimes(int count) {
//     int number = 2;
//     int found = 0;
//     while (found < count) {
//         if (isAdditivePrime(number)) {
//             cout << number << endl;
//             found++;
//         }
//         number++;
//     }
// cout<<endl;
// }