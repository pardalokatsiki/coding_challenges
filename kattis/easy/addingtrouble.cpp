#include <iostream>
#include <cmath>

int main(){
    int A, B, C;
    do{
        std::cin>>A;
    }while(A<-pow(10,9)||A>pow(10,9));
    do{
        std::cin>>B;
    }while(B<-pow(10,9)||B>pow(10,9));
    do{
        std::cin>>C;
    }while(C<-pow(10,9)||C>pow(10,9));
    if(A+B==C){
        std::cout<<"correct!";
    }
    else{
        std::cout<<"wrong!";
    }
    return 0;
