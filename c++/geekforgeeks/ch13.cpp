#include <iostream>

using namespace std;

// challenge 13: maximum number in array

int main(){
	int max=0;
	int array[5]={1, 2, 3, 4, 5};
	for(int i=0; i<5; i++){
		if (array[i]>max)
			max = array[i];
	}
	cout << "Max: " << max << endl;
	return 0;
}
