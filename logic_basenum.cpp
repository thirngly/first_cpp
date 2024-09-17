#include <iostream>
using namespace std;
int main (){
    int i = 10, j = 12; 
    
    // 10 = 1010 binary 
    // 12 = 1100 binary
    // hex { 0,1,2,3,4,5,6,7,8,9,a,b,c,d,e,f}

    int a = i & j; // => 1000 binary => 8 decimal => 8 hexa
    cout << "base(16) value i and j = 0x" << hex << a << endl;

    int b = i | j; // => 1110 binary => 14 decimal => e hexa
    cout << "base(16) value i or j = 0x" << hex << b << endl;

    int c = i ^ j; // => 0110 binary => 6 decimal => 6 hexa
    cout << "base(16) value i XOR j = 0x" << hex << c << endl;

    int x = i >> 2; // i / 2*2 => 10 / 4 = 2
    cout << "base(16) value i / 4 = 0x" << hex << x << endl;

    int y = j >> 2; //  / 2*2 => 12 / 4 = 3
    cout << "base(16) value j / 4 = 0x" << hex << y << endl;
    
    cout << " ==> Octal : " << endl;
    i &= j; // a = i(oct) = i & j
    cout << "i &= j <==> i : " << oct << i << endl;

    i ^= j;// i = i(oct) , j = same
    cout << "i ^= j <==> i : " << oct << i << endl;

    j = 0xe;// = b
    cout << "j = 0xe : " << oct << j << endl;

    return 0;
}