#include <iostream>
using namespace std;
int main(){
    /*hours minutes seconds*/
    int h, mn, sec, h_s, m_s, total_sec;
    cout << "Enter hours: " ;
    cin >> h;
    h_s = h * 3600;
    cout << h <<"Hours = " << h_s << " seconds" <<endl;
    cout << "Enter minuts: " ;
    cin >> mn; 
    m_s = mn * 60;
    cout << mn <<"Minutes = " << m_s << " seconds" <<endl;
    cout << "Enter secounds: " ;
    cin >> sec;
    cout << "seconds =" << sec <<endl;
    total_sec = h_s + m_s + sec;
    cout << "Total second = " << total_sec << endl;
    return 0;
}