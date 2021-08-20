



//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Shallow{
//private:
//	int * data;
//public:	
//	Shallow (int d);
//	Shallow (const Shallow &source);
//	~Shallow ();
//};
//
//Shallow::Shallow(int d){
//	data = new int ;
//	*data = d;
//	cout << "Constructor" << endl;
//}
//
//Shallow :: Shallow(const Shallow &source):
//		data{source.data}{ //Pointer value gets passed
//			cout << "Copy created" << endl;
//
//}
//
//Shallow :: ~Shallow(){
//	delete data;
//	cout << "Destructor " << endl;
//} 
//
//int main(){
//	Shallow Gurung(100);
//	Shallow Susidp (Gurung);
//	return 0;
//}




//#include <iostream>
//#include <string>
//
//using namespace std;
//
//class Player {
//private:
//	string name;
//	int health;
//	int xp;
//public:	
//	Player(string name_val, int health_val, int xp_val );
//	Player (const Player &source);
//	~Player ();
//	
//	
//};
//
//Player::Player(string name_val, int health_val, int xp_val ):
//	name{name_val}, health{health_val}, xp{xp_val}{
//		cout << "Constructor for " + name << endl;
//	}
//Player:: ~Player (){
//	cout << "Destructor of " + name << endl;
//}
//
//Player :: Player (const Player &source)
//	: name {source.name}, health{source.health}, xp{source.xp}{
//	cout << "Copy of " + source.name + " created" << endl; 
//}
//
//int main(){
//	Player Sudip("Sudip",100,100);
//	Player Suman(Sudip);
//	
//	return 0;
//}


/*POINTER EXERCISE
 * 
#include <iostream>
#include <string>

using namespace std;

int *create_array( const size_t size){
	int *new_array{nullptr};
	new_array =new int[size];
	int init;
	for (size_t i =0; i<size ; ++i){
		cout << "Enter the element " << i << ":" ;
		cin >> init;
		new_array[i]=init;
	}
	
	return new_array;
} 

void display(const int *const array, const size_t size){
	
	cout << "[ ";
	for (size_t i =0; i<size ; ++i)
		cout << *(array+i) << " ";
	cout << "]" << endl;
}

int *work_array(const int *const array1, const size_t size1, const int *const array2, const size_t size2 ){
	int *result{nullptr};
	result = new int[size1*size2];
	size_t k=0;
	for (size_t i =0; i< size2; ++i){
		for (size_t j =0; j < size1; ++j){
			result[k] = array1[j]*array2[i];
			++k;
		}
	}
	return result;
}

int main(){
	int size1,size2;
	
	cout << "Enter size1: " ;
	cin >> size1;
	
	cout << "Enter size2: ";
	cin >> size2;
	
	int *array1{nullptr};
	int *array2{nullptr};
	
	array1 = create_array(size1);
	array2 = create_array(size2);
	
	cout << endl <<"Array1: ";
	display(array1, size1);
	
	cout << endl <<"-----------------------------------------------------\n"<<"Array2: ";
	display(array2, size2);
	
	int *final{nullptr};
	
	final=work_array(array1, size1, array2, size2);
	
	cout << endl <<"-----------------------------------------------------\n";
	cout << "RESULT: " ; display (final, size1*size2);
	
	delete [] array1;
	delete [] array2;
	delete [] final;
	return 0;
}

*/