#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n);

// challenge 18: First 100 prime numbers

int main(){
	for(int i=1; i<=100; i++)
		if(is_prime(i))
			cout << i << endl;
	return 0;
}

bool is_prime(int n){
	if(n<=1)
		return false;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return false;
	return true;
}

