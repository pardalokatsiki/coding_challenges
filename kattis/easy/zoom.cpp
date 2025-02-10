#include <iostream>
#include <cmath>

int main(){
    int n,k;
    do{
        std::cin>>n>>k;
    }while(k<1||k>n||n>pow(10,5));
    int array[n], i;
    for(i=0; i<n; i++){
        do{
            std::cin>>array[i];
        }while(array[i]<0||array[i]>pow(2,30));
    }
    int q = floor(n/k);
    for(i=k-1; i<q*k; i+=k){
        std::cout<<array[i]<<" ";
    }
    return 0;
}
