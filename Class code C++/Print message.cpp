#include <iostream>
using namespace std;

class Message {
public:

    void mymessage() {
        cout<<"I love programming languages"<<endl;
    }

    void mymessage(string lg) {
        cout<<"I love "<<lg<<endl;
    }
};

int main() {
    Message msg;

    msg.mymessage();
    msg.mymessage("cpp");

}

