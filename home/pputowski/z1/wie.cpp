#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    // Dzielimy liczb� roku na 19 i wyznaczamy reszt� a.
    int a = r % 19;
    // Dzielimy liczb� roku przez 100, wynik zaokr�glamy w d� (odcinamy cz�� u�amkow�) i otrzymujemy liczb� b.
    int b = r / 100;
    // Dzielimy liczb� roku przez 100 i otrzymujemy reszt� c.
    int c = r % 100;
    // Liczymy: b : 4 i wynik zaokr�glamy w d� i otrzymujemy liczb� d.
    int d = b / 4;
    // Liczymy: b : 4 i wyznaczamy reszt� e.
    int e = b % 4;
    // Liczymy: (b + 8) : 25 i wynik zaokr�glamy w d� i otrzymujemy liczb� f.
    int f = ( b + 8 ) / 25;
    // Liczymy: (b � f + 1) : 3 i wynik zaokr�glamy w d� i otrzymujemy liczb� g.
    int g = ( b - f + 1 ) / 3;
    // Liczymy: (19 x a + b � d � g + 15) : 30 i wyznaczamy reszt� h.
    int h = ( 19 * a + b - d - g + 15 ) % 30;
    // Liczymy: c : 4 i wynik zaokr�glamy w d� i otrzymujemy cyfr� i.
    int i = c / 4;
    // Liczymy: c : 4 i wyznaczamy reszt� k.
    int k = c % 4;
    // Liczymy: (32 + 2 x e + 2 x i � h � k) : 7 i otrzymujemy reszt� l.
    int l = ( 32 + 2 * e + 2 * i - h - k ) % 7;
    // Liczymy: (a + 11 x h + 22 x l) : 451 i wynik zaokr�glamy w d� i otrzymujemy liczb� m.
    int m = ( a + 11 * h + 22 * l) / 451;
    // Liczymy: (h + l � 7 x m + 114) : 31 i otrzymujemy reszt� p.
    int p = ( h + l - 7 * m + 114 ) % 31;

    cout << p + 1 << " " << ( h + l - 7 * m + 114 ) / 31 << endl;
}
