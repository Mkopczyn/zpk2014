#include <iostream>
using namespace std;

int main() {
    int pomiar1, pomiar2, wynik;
    pomiar1=0; // wprowadzany pomiar;
    pomiar2=0; // stary pomiar; przypisywana warto�� nowego pomiaru je�li pomiar1<>pomiar2 i zanieczyszczenie wzro�nie
    wynik=0;
    while (pomiar1!=-1) {
            cin >> pomiar1;
            if (pomiar1!=pomiar2) {
                wynik++;
                pomiar2=pomiar1;
            }
    }
        cout << wynik-1 << endl;
}
