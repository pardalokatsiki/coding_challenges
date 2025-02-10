#include <iostream>
#include <cmath>

int main(){
    int a,b;
    do{
        std::cin>>a>>b;
    }while(a<0||a>pow(10,6)||b<0||b>pow(10,6));
    std::cout<<a+b;
}
