#include <iostream>
using namespace std;

class Person {
    private:
    string name;
    int age;
    public:
    string getName() {
        return name;
    }
    void setName(string name) {
        this->name = name;
    }
    int getAge() {
        return age;
    }
    void setAge(int age) {
        this->age = age;
    }
    void operator +() {
        age += 1;
    }
};

int main() {
    Person person;
    person.setName("Shree");
    person.setAge(23);
    cout<<"The person name is "<<person.getName()<<" and the age is "<<person.getAge()<<endl;
    +person;
    cout<<"After birthday of "<<person.getName()<<" he's age is "<<person.getAge()<<endl;
}