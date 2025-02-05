#include <iostream>

using namespace std;

// challenge #20: Rotate an array to the left by 1 position

void rotate(int* array,int length);

int main(){
	int array[5]={1,2,3,4,5};
	int length = sizeof(array)/sizeof(array[0]);
	rotate(array, length);
	for(int i=0; i<5; i++)
		cout << array[i] << endl;
	return 0;
}

void rotate(int* array,int length){
	int temp;
	temp = array[0];
	for(int i=0; i<length-1; i++)
		array[i]=array[i+1];
	array[length-1]=temp;
}

