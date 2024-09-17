#include <iostream>
using namespace std;
int main(){
    // assigne base(16)
    short a = 0x800, b = 0x7fff;
    unsigned short c = 0x0, d = 0xffff;
    
    //result base (10)
    cout << a << " < short < " << b << endl;
    cout << c << " < unsigned short < " << d << endl;

    return 0;
}