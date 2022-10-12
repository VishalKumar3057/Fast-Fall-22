//3. Write a program that solve quadratic equation.
#include <iostream>
using namespace std;

int main () {
int a,b,c;
cout<<"Enter coefficient of x^2: \n";
cin>>a;
cout<<"Enter coefficient of x: \n";
cin>>b;
cout<<"Enter constant: \n";a;
cin>>c;
float y= (-b+(b*b-4*a*c) ^ (1/2)) / (2*a);
float z= (-b-(b*b-4*a*c) ^ (1/2)) / (2*a);
cout<<"The roots of your given equations are:  "<<y<<" and "<<z<<endl;

    return 0;
}

