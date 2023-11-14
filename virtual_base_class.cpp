#include <iostream>
using namespace std;

class GrandParent
{
public:
    void display()
    {
        cout << "In GrandParent Class" << endl;
    }
};

class Father : virtual public GrandParent
{
};

class Mother : public virtual GrandParent
{
};

class Child : public Father, public Mother
{
};

int main()
{
    Child child;
    child.display();
}