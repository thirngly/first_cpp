#include <iostream>
using namespace std;
int main(){
    int a = 8, b = 10, c = 16;

    cout << "decimal = base(10) : " << dec << a << " " << b << " " << c << endl; // 0-9
    cout << "octal = base(8) : " << oct << a << " " << b << " " << c << endl; // 0-7
    cout << "hexa = base(16) : " << hex << a << " " << b << " " << c << endl; // 0-9 a-f

    return 0;
}