#include<iostream>
#include<typeinfo>

using namespace std;

struct Base
{
    virtual ~Base() = default;
};

struct Derived: public Base {};

int main() {
    Base *bp = new Derived;

    if(Derived *dp = dynamic_cast<Derived*>(bp)) {
        cout<<"Le cast a ete execute avec succes - Le pointeur vers l'objet 'Derived' dp peut etre utilise."<<endl;
    }

    delete bp;
    return EXIT_SUCCESS;
}