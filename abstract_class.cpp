#include <iostream>
using namespace std;

class Animal {
    public:
    // Pure Virtual function
    virtual void sound() = 0;
    // Concrete function
    void move() {
        cout<<"Move";
    }
};

class Dog:Animal {
    public:
    void sound() {
        cout<<"Bark"<<endl;
    }
};

int main() {
    Dog d;
    d.sound();
    return 0;
}