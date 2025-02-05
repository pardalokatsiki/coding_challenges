#include <iostream>
#include <cmath>

using namespace std;

// challenge #16: check if a number is prime

bool is_prime(int n);

int main(){
	cout << "12: " << is_prime(12) << endl;
	cout << "11: " << is_prime(11) << endl;
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
