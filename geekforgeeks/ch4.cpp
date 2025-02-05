#include <iostream>

using namespace std;

// challenge #4: print all multiplication tables from 1 to 10

int main(){
	int i, j;
	for (i=1; i<=10; i++){
		for(j=1; j<=10; j++)
			cout << i*j << " " << endl;
	}
	return 0;
}

