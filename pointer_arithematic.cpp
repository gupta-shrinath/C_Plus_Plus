#include <iostream>

using namespace std;

int main() {
    int firstNumber = 10;
    int secondNumber = 20;
    int *firstNumberPointer = &firstNumber;
    int *secondNumberPointer = &secondNumber;
    cout<<firstNumberPointer - secondNumberPointer<<endl;
    cout<<secondNumberPointer<<endl;
    cout<<*firstNumberPointer+*secondNumberPointer<<endl;
}