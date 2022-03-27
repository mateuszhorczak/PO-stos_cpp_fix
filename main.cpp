#include <iostream>
#include "stos.h"

using namespace std;

void f(Stos s, int a) {
    s.push(a);
}

int main() {
    cout << "Inicjalizuje stos automatyczny z parametrem" << endl;
    Stos stos1(20);
    cout << "Inicjalizuje stos dynamiczny z parametrem" << endl;
    Stos *stos2 = new Stos(30);
    cout << "Inicjalizuje stos dynamiczny bez parametru" << endl;
    Stos *stos3 = new Stos;
    cout << "Inicjalizuje stos automatyczny bez parametru" << endl;
    Stos stos4;






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
