#include <iostream>
using namespace std;

int& maxValue(int& a, int& b);

int main() {
    
    return 0;
    
}

int& maxValue(int& a, int& b) {
    if (a > b) {
        return a;
    }else {
        return b;
    }
}
