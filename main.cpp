//
//  main.cpp
//  c.test.kaiyeee
//
//  Created by KaiYi Chang on 2019/6/13.
//

#include <iostream>

using namespace std;

void prog1();
void prog2();
void prog3();
void prog4();
void prog5();
void prog6();
void prog7();
int prog7_main(int);
void prog8();
void prog9();


int main() {
    prog9();
    return 0;
}

void prog9() {
    int m[4][4];
    int i=0, j=0, k=0;
    for(i=0; i<3; i++) m[i][j] = ++k;
    for(j=0; j<3; j++) m[i][j] = k++;
    
    
    for(i=0; i<3; i++) {
        cout << "m[" << i << "][0] = ";
        cout << m[i][0] << "   ";
    }
    cout << endl;
    
    for(i=0; i<3; i++) {
        cout << "m[3][" << i << "] = ";
        cout << m[3][i] << "   ";
    }
    cout << endl;
}

void prog8() {
    int *p1; int *p2;
    p1 = new int; p2 = new int;
    *p1 = 0;
    p2 = 0;
    p2 = p1;
    *p2 = 1;
    *p1 = 3;
    p1 = 0;
    cout << *p2 << endl << p1;
}

void prog7() {
    cout << prog7_main(5);
}

int prog7_main(int i) {
    if ( i < 8) {
        return (prog7_main(++i) + prog7_main(++i));
    }
    else
        return 1;
}

void prog6() {
    int a = 17, b = 9;
    while (a != b)
        if (a > b)
            a = a-b;
        else b = b-a;
    cout << a;
}

void prog5() {
    int a[3][3] = { {1,2,3}, {4, 5, 6}, {7, 8, 9} };
    cout << a[1][2] << a[2][1];
}

void prog4() {
    int n = 0;
    if (n = 0) n = 2;
    else if (n = 2) n = 4;
    else if (n = 4) n = 6;
    else if (n = 6) n = 8;
    cout << n;
}

void prog3 () {
    int x[10];
    int *p, *q;
    p = x + 1; // x[1]
    q = x + 5; // x[5]
    *(p+1) = 10; // x[2]
    cout << q-p;
    *x = 1;
    cout << x[0];
}

void prog2() {
    int i = 10, j = 6;
    //    int *s, *t;
//    *s = &i;
//    *t = &j;
//    cout << 10 * (*s / *t) + 7;
}

void prog1() {
    int a, b;
    int *x, *y;
    a = 1; b = 2;
    x = &a; y = &b;
    x = y;
    *x = 3;
    *y = 4;
    cout << a << b << *x << *y;
}
