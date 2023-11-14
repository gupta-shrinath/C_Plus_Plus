#include <iostream>
using namespace std;

class InputManager {
    public:
    virtual void start() {
        cout<<"Start Input"<<endl;
    }
    virtual void stop() {
        cout<<"Stop Input"<<endl;
    }
};

class Keyboard: public InputManager {
    public:
    void start() {
        cout<<"Starting Keyboard"<<endl;
    }

    void stop() {
        cout<<"Stopping Keyboard"<<endl;
    }

};

class Mic: public InputManager {
    public:
    void start() {
        cout<<"Starting Mic"<<endl;
    }

    void stop() {
        cout<<"Stopping Mic"<<endl;
    }
};

class App {
    InputManager *inputManager;
    public:
    void startKeyboard() {
        Keyboard keyboard;
        inputManager = &keyboard;
        inputManager->start();   
    }

    void startMic() {
        Mic mic;
        inputManager = &mic;
        inputManager->start();  
    }

};

int main() {
    App myApp;
    myApp.startKeyboard();
    myApp.startMic();
    return 0;
}