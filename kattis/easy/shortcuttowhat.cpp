#include <iostream>

using namespace std;

int main(){
    int n;
    do
    {
        cin >> n;
    }
    while(n<-1000 || n > 1000);
    n +=5; n*=3; n-=10;
    cout << n;
    return 0;
}
