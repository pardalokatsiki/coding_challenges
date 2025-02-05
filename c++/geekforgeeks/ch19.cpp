#include <iostream>
#include <cmath>

using namespace std;

// challenge #19: first "nPrimes" prime numbers greater than "startAt"

void function(int nPrimes, int startAt);
bool is_prime(int n);

int main(){
	function(5, 10);
	return 0;
}

void function(int nPrimes, int startAt){
	int count=0;
	for(int i=startAt; count<nPrimes; i++)
	{
		if(is_prime(i)){
			count++;
			cout << i << endl;
		}
	}
}


bool is_prime(int n){
	if(n<=1)
		return false;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0)
			return false;
	return true;
}
