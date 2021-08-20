#include <iostream>

using namespace std;

int *apply_all(const int *const array1, size_t size1,const int *const array2, size_t size2){
	int *new_array{nullptr};
	new_array = new int[size1*size2];
	int k=0;
	for (size_t i =0; i< size2 ;++i){
		for (size_t j=0;j<size1; ++j){
			new_array[k]= array2[i]*array1[j];
			++k;
		}
	}
	
	
	return new_array;
}

void print(const int *const array, size_t size){
	cout << "[ " ;
	for (size_t i =0; i< size; ++i)
		cout << array[i] << " ";
	cout <<" ]" << endl;
}



int main(){
	const size_t array1_size{5};
	const size_t array2_size{3};
	
	int array1[]{1,2,3,4,5};
	int array2[]{10,20,30};
	
	cout <<"Array1: ";
	print(array1,array1_size) ;
	
	
	cout <<"Array2: ";
	print(array2,array2_size);
		 
	int *result{nullptr};
	result = apply_all(array1, array1_size, array2, array2_size);
	
	cout << "RESULT: " ;
	print(result, array1_size * array2_size);
	
	
	delete [] result;
	return 0;
}