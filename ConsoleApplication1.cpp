// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//sellocale(LC_ALL, "Russian");
using namespace std;


unsigned RotateRight(unsigned n)
{
    printf("Zadanie 28 right\n");
    bool trans = n & 1;
    n >> 1;
    if (trans)
        n |= 0x80000000; // !!!!! предполагаем, что число 4 байтовое
    return n;
}

void zd27() {
    
    printf("Zadanie 27\n");
    unsigned long n, p, x, y, i, m = 0xFFFFFFFF;
    printf("%x\n", m);
    scanf_s("%d%d%x%x", &n, &p, &x, &y);
    printf("X=%x\n", x);
    printf("Y=%x\n", y);
    y = ~y;
    printf("~Y=%x\n", y);
    for (i = n; i; m <<= 1, i--);
    //  printf("%x\n",m);
    for (i = n; i < p; i++) {
        m <<= 1; m += 1;
    }

    y <<= (32 - n);
    x >>= (p - n);
    x |= y;
    x >>= 1;
    //  printf("%x\n",m);
    x &= m;
    printf("X&m=%x\n", x);
 
}

//void zd25() {

    //char              a, b, c, d;
    //unsigned int      pack;
    
     //   pack = (((((a << 8) | b) << 8) | c) << 8) | d;
//}
void zd22()
{
    printf("Zadanie 22\n");
    setlocale(LC_ALL, "Russian");
    double a, a2, a4, a8, a12, a20, a21;

    printf("Введите число a:");
    scanf_s("%lf", &a);
    a2 = a * a;
    printf("1:a^2=%lf\n", a2);
    a4 = a2 * a2;
    printf("2:a^2*a^2=%lf\n", a4);
    a8 = a4 * a4;
    printf("3:a^4^a^4=%lf\n", a8);
    a12 = a8 * a4;
    printf("4:a^8*(a^4=%lf\n", a12);
    a20 = a12 * a8;
    printf("5:a^12*a^8=%lf\n", a20);
    a21 = a20 * a;
    printf("6:a^20*a=%lf\n", a21);
    cout << a21 << endl;
}

void zd21()
{
    printf("Zadanie 21\n");
    int sec, hour, min;
    printf("Idet Secunda\n");
    scanf_s("%d", &sec);
    hour = sec / 3600;
    min = (sec - hour * 3600) / 60;
    printf("Proshlo Vremeni \n Hour:%d min:%d \n", hour, min);

}

void zd20() {

    int n, m, n1;
    printf("Zadanie 20\n");
    printf("n = ");
    scanf_s("%d",&n);
    n1 = abs(n);
    m = (n1 % 10) * 100 + (n1 / 10 % 10) * 10 + (n1 / 100);
    cout << m << endl;

}
void zd19() {

    printf("Zadanie 19\n");
    double p = 3.14; int k;
    k = (p - int(p)) * 10;
    cout << k << endl;

}
void lol() {
    printf("Zadanie 15\n");
    double d = 3.2, x; int i = 2, y;

    x = (y = d / i) * 2; printf("x = %f ;y = %d\n", x, y);

    x = (y = d / i) * 2; printf("x = %d ;y = %f\n", x, y);

    y = (x = d / i) * 2; printf("x = %f ;y = %d\n", x, y);

    y = d * (x = 2.5 / d); printf("x = %f; y = %d\n", x, y);

    x = d * (y = ((int)2.9 + 1.1) / d); printf("x = %d y = %f\n", x, y);

}
void mife() {
    printf("Zadanie 18\n");
    int x, k;
    printf(" x: ");
    scanf_s("%d", &x);
    if (x < 100) {
        printf("x odnoznachnoe ili dvuznachnoe\n");
    }
    else {
        k = x / 100 + x % 10 + (x % 100) / 10;
        printf("k = %d\n", k);
    }

}
void glu() {
    printf("Zadanie 17\n");
    int x, k;
    printf(" x: ");
    scanf_s("%d", &x);
    if (x < 100) {
        printf("x odnoznachnoe ili dvuznachnoe\n");
    }
    else {
        k = x / 10 / 10 % 10;
        printf("k = %d\n", k);
    }

}
void nerf() {
    printf("Zadanie 14\n");
    double d; float f; long lng; int i; short s;

    s = i = lng = f = d = 100 / 3;

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

    d = f = lng = i = s = 100 / 3;

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

    s = i = lng = f = d = 1000000 / 3;

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

    d = f = lng = i = s = 1000000 / 3;

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

    lng = s = f = i = d = 100 / 3;

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

    f = s = d = lng = i = (double)100 / 3;

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

    s = i = lng = f = d = 100 / (double)3;

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

    f = s = d = lng = i = (double)100 / 3;

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);

    i = s = lng = d = f = (double)(100 / 3);

    printf("s = %hd i = %d lng = %ld f = %f d = %f\n", s, i, lng, f, d);


}
void pruf(){
    printf("Zadanie 8\n");
    int i, j, k, m; char c, d; i = 1; j = 2; k = -7; m = 0; c = 'w';

    d = 'a' + 1 < c;
    cout << d << endl;//?

    m = (3 < j < 5);
    cout << m << endl;//1 результат верный только для < 5, но задание на выражение а не логические функции так что вообще не верно

    m = c = !87;
    cout << m << endl;//0

    //!m = = c + 87; // 
    //cout << m << endl;

    k *= 3 + j;
    cout << m << endl;

    //m = !c = 87; // 
    //cout << m << endl;

    //m = 1 + 3 * n += 7 / 5; n не определён да
    //cout << m << endl;



}
int main()
{
    std::cout << "Hello World!\n";
    cout << 123 << endl; //integer or byte
    cout << 1234LU << endl; //1234
    cout << +0xaf << endl; //175
    cout << "x" << endl; //x
    // cout << -‘x’ << endl; //необъявленный идентификатор
    // cout << ‘\n’ << endl; //нераспознанная лексема (что в данном случае лексема? константа или символ "\")
    // cout << ‘\x7’ << endl; // нераспознанная лексема?
    cout << 1.71 << endl;
    cout << 5.E+2 << endl;
    cout << 0X1E6 << endl;
    cout << -12.3E-6 << endl;
    // cout << 0x1A1.5 << endl; //недопустимая константа с плавающей запятой + шестнадцатеричный литерал с плавающей запятой требует экспоненту
    cout << .005 << endl; //
    // cout << 1.0E-10D << endl; // не определён символ 'D'
    // cout << E - 6 << endl; // E - необъявленый идентификатор

    printf("Zadanie 3\n");
    int a, b, c, d, e, i, j, k, m;
    a = 2; b = 13; c = 7; d = 19; e = -4;

    cout << b / a / c << endl; //0 целочисленый тип,а ответ с плавающий запятой
    cout << c % d - e << endl; //11 ...
    cout << 9 / c - -20 / d << endl; //2 ...
    cout << -e % a + b / a * -5 + 5 << endl; //-25 ...

    printf("Zadanie 4\n");
    c = 5;

    c++;
    a = 2 * c;
    cout << a << endl; // 12

    c += 1;
    a = c + c;
    cout << a << endl; // 14

    +c;
    a = c++;
    cout << a << endl; // 7

    +c;
    a = c += 1;
    cout << a << endl; // 9

    +c;
    a = ++c;
    cout << a << endl; // 10

    +c;
    a = (c += 1);
    cout << a << endl; // 11

    a = 2 * c++;
    cout << a << endl; // 22

    printf("Zadanie 5\n");
    c = 5;

    --c;
    a = c / 2;
    cout << a << endl;//2

    a = c -= 1 / 2;
    cout << a << endl;//4

    a = --c / 2;
    cout << a << endl;//1

    c -= 1;
    a = c % 2;
    cout << a << endl;//0

    a = c-- / 2;
    cout << a << endl;//1

    a = (c -= 1) / 2.0;
    cout << a << endl;//0

    a = (c -= 1) / 2;
    cout << a << endl;//0

    //Zadanie 6


    printf("Zadanie 7\n");
    a = 2; b = 6; c = 3;

    cout << - - -a << endl;// -2

    //-- - a;
    //cout << a << endl;

    cout << b-- - a << endl; // 4

    a += a++;
    cout << a << endl; // 5

    ++b / a++ * --c;
    cout << a << endl; // 6

    pruf();
    nerf();
    glu();
    mife();
    lol();
    zd19();
    zd20();
    zd21();
    zd22();
    zd27();
}

