/*
Algorytm za: http://pl.wikipedia.org/wiki/Wielkanoc#Dla_kalendarza_gregoria.C5.84skiego_2

Dzielimy liczb� roku na 19 i wyznaczamy reszt� a.
Dzielimy liczb� roku przez 100, wynik zaokr�glamy w d� (odcinamy cz�� u�amkow�) i otrzymujemy liczb� b.
Dzielimy liczb� roku przez 100 i otrzymujemy reszt� c.
Liczymy: b : 4 i wynik zaokr�glamy w d� i otrzymujemy liczb� d.
Liczymy: b : 4 i wyznaczamy reszt� e.
Liczymy: (b + 8) : 25 i wynik zaokr�glamy w d� i otrzymujemy liczb� f.
Liczymy: (b - f + 1) : 3 i wynik zaokr�glamy w d� i otrzymujemy liczb� g.
Liczymy: (19 x a + b � d � g + 15) : 30 i wyznaczamy reszt� h.
Liczymy: c : 4 i wynik zaokr�glamy w d� i otrzymujemy cyfr� i.
Liczymy: c : 4 i wyznaczamy reszt� k.
Liczymy: (32 + 2 x e + 2 x i � h � k) : 7 i otrzymujemy reszt� l.
Liczymy: (a + 11 x h + 22 x l) : 451 i wynik zaokr�glamy w d� i otrzymujemy liczb� m.
Liczymy: (h + l � 7 x m + 114) : 31 i otrzymujemy reszt� p.
Dzie� Wielkanocy = p + 1.
Miesi�c = Zaokr�glenie w d� dzielenia (h + l � 7 x m + 114) przez 31.
*/

#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, c, d, e, f, g, h, i, k, l, m, p, dzien, miesiac, rok;
    cin >> rok;
    a = rok % 19;
    b = rok / 100;
    c = rok % 100;
    d = b / 4;
    e = b % 4;
    f = (b + 8) / 25;
    g = (b - f + 1) / 3;
    h = (19 * a + b - d - g + 15) % 30;
    i = c / 4;
    k = c % 4;
    l = (32 + 2 * e + 2 * i - h - k) % 7;
    m = (a + 11 * h + 22 * l) / 451;
    p = (h + l - 7 * m + 114) % 31;
    dzien = p + 1;
    miesiac = (h + l - 7 * m + 114) / 31;
    cout << dzien << " " << miesiac << endl;
}
