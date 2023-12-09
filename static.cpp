#include <iostream>
using namespace std;

class Animal {
    public:
    string name;
    int legs;
    // static data member 
    static string parent;
    // static member function
    static string getParent() {
        return parent;
    }
};

string Animal::parent = "Mammal";

int main() {
    Animal dog;
    dog.name = "Dog";
    dog.legs = 4;
    cout<<"The animal name is "<<dog.name<<" and its number of legs are "<<dog.legs<<" which is a "<<dog.getParent<<endl;
    //cout<<&dog.parent<<endl;
    Animal cat;
    cat.name = "Cat";
    cat.legs = 4;
    cout<<"The animal name is "<<cat.name<<" and its number of legs are "<<cat.legs<<" which is a "<<cat.getParent()<<endl;
    //cout<<&cat.parent<<endl;
    // The dog.parent and cat.parent have the same memory address as they are static
    return 0;
}