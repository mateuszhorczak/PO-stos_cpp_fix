#include <iostream>
#include "stos.h"

using namespace std;

void f(Stos s, int a) {
    s.push(a);
}

int main() {
    Stos s;
    s.push(0);
    f(s, 1);
    f(s, 2);
    s.push(4);
    s.push(1);
    s.push(2);
    s.push(6);
    s.push(5);

    while (!s.empty()) {
        cout <<
        s.top();
        s.pop();
    }



    return 0;
}
