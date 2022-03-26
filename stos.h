//
// Created by mateusz on 23.03.2022.
//

#ifndef UNTITLED3_STOS_H
#define UNTITLED3_STOS_H

using namespace std;

class Stos {
private:
    int length;
    int lengthMax;
    int *tab;


public:
    explicit Stos(int lengthMax) : lengthMax(lengthMax) {
        length = 0;
        this->lengthMax = lengthMax;
        tab = new int[lengthMax];
        cout << "Konstruktor parametrowy" << endl;
    }

    Stos() {
        length = 0;
        lengthMax = 25;
        tab = new int[lengthMax];
        cout << "Konstruktor domyślny" << endl;
    }

    Stos(const Stos &stos) {
        length = stos.length;
        lengthMax = stos.lengthMax;
        tab = stos.tab;
        cout << "THIS IS THIS IS THIS IS" << endl;
    }


    ~Stos() {
        cout << "Hejka tu twój destruktor" << endl;
        delete[] tab;
    }

    void push(int value) {
        if (!full()) {
            tab[length] = value;
            length++;
        }
    }

    int pop() {
        if (!empty()) {
            length--;
            return tab[length];
        }
        return 0;
    }

    int top() {
        return tab[length-1];
    }

    int empty() {
        if (length == 0) {
            return 1;
        }
        return 0;
    }

    int full() {
        if (length == lengthMax) {
            return 1;
        }
        return 0;
    }

};


#endif //UNTITLED3_STOS_H
