#include <iostream>
using namespace std;

class A {
    public:
        virtual void hello(){
            cout << "A:hello" << endl;
        };
        void bye(){
            cout << "A:bye" << endl;
        }
        A() {
            cout << "A:构造" << endl;
        }
        ~A() {
            cout << "A:析构" << endl;
        }
};

class B :public A{
    public:
        void hello(){
            cout << "B:hello" << endl;
        };
        virtual void bye(){
            cout << "B:bye" << endl;
        }
        B() {
            cout << "B:构造" << endl;
        }
        ~B() {
            cout << "B:析构" << endl;
        }
};

class C :public B{
    public:
        A a;
        B b;
        void hello(){
            cout << "C:hello" << endl;
        }
        void bye(){
            cout << "C:bye" << endl;
        }
        C():B() {
            cout << "C:构造" << endl;
        }
        ~C() {
            cout << "C:析构" << endl;
        }
};



int main() {
    C c;
    cout << "123" << endl;
    c.hello();
    // c.hello();
}