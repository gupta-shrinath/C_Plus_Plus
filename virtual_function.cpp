#include <iostream>
using namespace std;

class Parent
{
protected:
    string surname;

public:
    virtual string getName()
    {
        cout << "Parent class's getName()" << endl;
        return surname;
    }
};

class Child : public Parent
{
public:
    string name;
    void setName(string _name)
    {
        name = _name;
    }
    string getName()
    {
        cout << "Child class's getName()" << endl;
        return name + " " + surname;
    }
    void setSurname(string _surName)
    {
        surname = _surName;
    }
};

int main()
{
    Parent *parentPointer;
    Child child;
    child.setName("Akash");
    child.setSurname("Patil");
    parentPointer = &child;
    cout << parentPointer->getName() << endl;
    return 0;
}