#include <iostream>
using namespace std; 

class Car {
    private:
    int speed;

    public:
    inline int getSpeed() {
        return speed;
    }
    inline void setSpeed(int speed) {
        this->speed = speed;
    }
};

int main() {
    Car c;
    c.setSpeed(200);
    cout<<"The current speed of car is "<<c.getSpeed()<<endl;
}