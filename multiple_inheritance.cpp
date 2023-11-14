#include <iostream>
using namespace std;

class Father
{
public:
    string eyeColor;
};

class Mother
{
private:
    string skinTone;

public:
    void setSkinTone(string _skinTone)
    {
        skinTone = _skinTone;
    }
    string getSkinTone()
    {
        return skinTone;
    }
};

class Child : public Father, public Mother
{
public:
    void setFaceCharacter(string _eyeColor, string _skinTone)
    {
        eyeColor = _eyeColor;
        setSkinTone(_skinTone);
    }

    void showFaceCharacter()
    {
        cout << "The child eye color is " << eyeColor << " and skin tone is " << getSkinTone() << endl;
    }
};

int main()
{
    Child child;
    child.setFaceCharacter("Blue", "Dark");
    child.showFaceCharacter();
}