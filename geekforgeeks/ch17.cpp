#include <iostream>

using namespace std;

// challenge #17: sum of digits of positive integer

int main(){
	int sum=0;
	int n = 1234;
	while(n>0)
	{
		sum+=n%10;
		n = n/10;
	}
	cout << sum << endl;
	return 0;
}

