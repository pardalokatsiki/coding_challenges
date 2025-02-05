#include <iostream>

using namespace std;

// challenge #6: calculate 10!

int main(){
	int product = 1;
	for(int i=1; i<=10; i++)
		product*=i;
	cout << product << endl;
	return 0;
}


