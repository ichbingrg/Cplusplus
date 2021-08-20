#include <iostream>

using namespace std;

class Deep{
private:
	int *data;
public:
	void display_deep(const Deep);
	int get_data_value(){
		return *data;
		}
	Deep (int d);
	Deep (const Deep &source);
	~Deep();
};

void display_deep(Deep s){
	cout << s.get_data_value() << endl;
}


Deep:: Deep (int d){
	data = new int ;
	*data = d;
	cout << "constructor " << endl;}
	
//Deep :: Deep (const Deep &source){
//	data = new int ;
//	*data = *source.data;
//	cout << "Copy" << endl;
//} //ALso copy constructor

Deep :: Deep (const Deep &source):
		Deep {*source.data}{
		cout << "copy" << endl;
	
}

Deep :: ~Deep (){
	delete data;
	cout << "Destructor" << endl;
}

int main(){
	
	Deep obj1{100};
	display_deep(obj1);	
	
	return 0;
}