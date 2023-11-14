#include <iostream>
using namespace std;

void sum(int a, int b) {
    cout<<"The sum of two integers "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

void sum(float a, float b) {
    cout<<"The sum of two float "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

void sum(double a, double b) {
    cout<<"The sum of two double "<<a<<" and "<<b<<" is "<<a+b<<endl;
}

int main() {
    sum(10,20);
    sum(1.2f,1.4f);
    sum(2.3333,2.4444);
    return 0;
}