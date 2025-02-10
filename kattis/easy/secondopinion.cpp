#include <iostream>

using namespace std;

int main(){
    int secs;
    do
    {
        cin >> secs;
    }
    while(secs<0 || secs > 1000000);
    int s, m, h;
    h = secs/3600;
    m = (secs%3600)/60;
    s = (secs%3600)%60;
    cout << h << " : " << m << " : " << s;
    return 0;
}
