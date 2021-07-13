#include <iostream>
using namespace std;
//

class A{
    public:
        virtual void hello(){
            cout << "A:hello" <<endl;
        }
        void bye(){
            cout << "A:bye" <<endl;
        }
        A() {
            cout << "A:gz" <<endl;
        }

        ~A(){
            cout << "A:xg" << endl;
        }
};

class B:public A{
    public:
        void hello(){
            cout << "B:hello" <<endl;
        }
        void bye(){
            cout << "B:bye" <<endl;
        }
        B() {
            cout << "B:gz" <<endl;
        }

        ~B(){
            cout << "B:xg" << endl;
        }
};

class C:public B{
    public:
        void hello(){
            cout << "C:hello" <<endl;
        }
        void bye(){
            cout << "C:bye" <<endl;
        }
        C() {
            cout << "C:gz" <<endl;
        }

        ~C(){
            cout << "C:xg" << endl;
        }
};




int main() {
    C c;
    A *p = &c;
    p->hello();
    p->bye();
    return 0;
}