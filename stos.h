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
    Stos(int lengthMax) : lengthMax(lengthMax) {
        length = 0;
        this->lengthMax = lengthMax;
        tab = new int[lengthMax];
        cout << "Konstruktor parametrowy wywolany (" << addressof(tab) << ")" << endl;
    }

    Stos() {
        length = 0;
        lengthMax = 25;
        tab = new int[lengthMax];
        cout << "Konstruktor domyslny wywolany(" << addressof(tab) << ")" << endl;
    }

    Stos(const Stos &stos) {
        length = stos.length;
        lengthMax = stos.lengthMax;
        tab = stos.tab;
        for (int i = 0; i < length - 1; i++) {
            tab[i] = stos.tab[i];
        }
        cout << "Konstruktor kopiujący wywolany (" << addressof(tab) << ")" << endl;
    }


    ~Stos() {
        cout << "Destruktor wywolany (" << addressof(tab) << ")" << endl;
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

    bool empty() {
        if (length == 0) {
            return true;
        }
        return false;
    }

    bool full() {
        if (length == lengthMax) {
            return true;
        }
        return false;
    }

};


#endif //UNTITLED3_STOS_H
