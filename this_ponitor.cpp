#include <iostream>

using namespace std;

class Person {
    private:
    string name;
    int age;

    public:
    void setDetails(string name,int age) {
        this->name = name;
        this->age = age;
    }

    void getPersonDetails() {
        cout<<"The person name is "<<name<<" and the age is "<<age<<endl;
    }
};

int main() {
    Person p;
    p.setDetails("Shree",25);
    p.getPersonDetails();
    return 0;
}