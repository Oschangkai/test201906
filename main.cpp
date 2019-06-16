//
//  main.cpp
//  c.test.kaiyeee
//
//  Created by KaiYi Chang on 2019/6/13.
//

#include <iostream>

using namespace std;

void prog0();
void prog0_main(const int[], int);
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
    prog0();
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
    /* Answer
        m[0][0] = 1   m[1][0] = 2   m[2][0] = 3
        m[3][0] = 3   m[3][1] = 4   m[3][2] = 5
     */
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
    /* Answer
         *p2 = 3
         p1 = 0x0
     */
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
    /* Answer
        prog7_00.jpg
        prog7_01.jpg
     */
}

void prog6() {
    int a = 17, b = 9;
    while (a != b)
        if (a > b)
            a = a-b;
        else b = b-a;
    cout << a;
    /* Answer
        a = 1
    */
}

void prog5() {
    int a[3][3] = { {1,2,3}, {4, 5, 6}, {7, 8, 9} };
    cout << a[1][2] << endl << a[2][1];
    /* Answer
        a[1][2] = 6
        a[2][1] = 8
     */
}

void prog4() {
    int n = 0;
    if (n = 0) n = 2;
    else if (n = 2) n = 4;
    else if (n = 4) n = 6;
    else if (n = 6) n = 8;
    cout << n;
    /* Answer
         n = 4
     */
}

void prog3 () {
    int x[10];
    int *p, *q;
    p = x + 1; // x[1]
    q = x + 5; // x[5]
    *(p+1) = 10; // x[2]
    cout << q-p;
    /* Answer
        q-p = 4
     */
}

void prog2() {
    int i = 10, j = 6;
//    int *s, *t;
//    *s = &i;
//    *t = &j;
//    cout << 10 * (*s / *t) + 7;
//      這題有問題
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
    /* Answer
        a = 1
        b = 4
        c = 4
        d = 4
     */
}

void prog0() {
    int a[] = {1,3,5,7,9,11};
    prog0_main(a, 5);
}
void prog0_main(const int b[], int c) {
    if(c > 0) {
        prog0_main(&b[1], c - 1);
        cout << b[0];
    }
    /* Answer
         97531
         prog0.jpeg
     */
}
