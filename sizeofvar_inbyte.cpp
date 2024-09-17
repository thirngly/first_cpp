#include <iostream>
using namespace std;
int main(){
    cout << "size of int=" <<sizeof(int) << endl;
    cout << "size of long=" <<sizeof(long) << endl;
    cout << "size of short=" <<sizeof(short) << endl;
    cout << "size of double=" <<sizeof(double) << endl;
    cout << "size of float=" <<sizeof(float) << endl;
    cout << "size of bool=" <<sizeof(bool) << endl;
    cout << "size of char=" <<sizeof(char) << endl;
    cout << "size of string=" <<sizeof(string) << endl<< endl;

    // all size of variables below = 8 bytes if 64 bits machine.
    cout << "size of int=" <<sizeof(int*) << endl;
    cout << "size of long=" <<sizeof(long*) << endl;
    cout << "size of short=" <<sizeof(short*) << endl;
    cout << "size of double=" <<sizeof(double*) << endl;
    cout << "size of float=" <<sizeof(float*) << endl;
    cout << "size of bool=" <<sizeof(bool*) << endl;
    cout << "size of char=" <<sizeof(char*) << endl;
    cout << "size of string=" <<sizeof(string*) << endl;

    double *a,b,c;
    cout << sizeof(c) + sizeof(b) << endl; // 16
    cout << sizeof(b) - sizeof(a) << endl; // 4

    return 0;
}