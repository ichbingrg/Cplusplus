#include <iostream>
#include <memory>
#include <vector>


using namespace std;

class Test{
	int data;
public:
	Test():data(0){
		cout << "Test constructor for " << data << endl;
	}
	Test (int data): data(data){
		cout << "Test constructor for " << data << endl;
	}
	int get_data() const {
		return data;
	}
	~Test(){
		cout << "Destructor for " << data << endl;
	}
};

void my_deleter(Test *ptr){
	cout << "Custom deleter for " << ptr->get_data() << endl;
	delete ptr;
}


template<typename T, typename... Args>      //for make_unique
std::unique_ptr<T> make_unique(Args&&... args) {
    return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

unique_ptr<vector <shared_ptr<Test>>> make(){
	return make_unique<vector<shared_ptr<Test>>>();                  
}
void fill(vector <shared_ptr<Test>> &vec, int num){
	int temp;
	
	for( int i =1; i<=num; ++i){
		cout <<"Enter data point [" << i << "] :";
		cin >> temp;
		Test a = temp;
		shared_ptr<Test> ptr = make_shared<Test>(a);
		vec.push_back(ptr);
	}
}
void display(const vector <shared_ptr<Test>> &vec){
	cout <<" =====================================" << endl;
	for ( const auto &a: vec){
		//cout << (*a).get_data() << endl;
		cout << a-> get_data() << endl;
	}
	
	cout <<" =====================================" << endl;
	
}



int main(){
	unique_ptr<vector <shared_ptr<Test>>> vec_ptr;
	vec_ptr = make();
	cout << "How many data points do you want to enter: ";
	int num;
	cin >> num;
	fill (*vec_ptr, num);
	display (*vec_ptr);
	
	
	
	return 0;
}
