#include <iostream>

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
double acceleration(double v1, double v2, double t) {
   return (v2-v1)/t;
}
int main () {
    double v1, v2, t;
    cout<<"Enter the final velocity (v2): ";
    cin>>v1;
    cout<<"Enter the initial velocity(v1):";
    cin>>v2;
    cout<<"Enter the time (t): ";
    cin>>t;
    cout<<"Acceleration is: "<<acceleration(v1,v2,t);
}
    //problem3


