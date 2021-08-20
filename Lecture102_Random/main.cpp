#include <iostream>
#include <cstdlib> // for rand()
#include <ctime> // for time()

using namespace std;

int main(){
    
    int random_number;
    size_t count = 10; //no. of random numbesrs to generate 
    int min = 1; // lowerbound
    int max = 6; // upperbound
    
    // seed the random number generator otherwise you get the same random vaklue everysingle time
    
    cout << "RAND_MAX of my system is: " << RAND_MAX << endl;
    srand(time(nullptr));
    
    for ( size_t i =1; i <= count ; ++i ){
        random_number = rand()% max + min; // (max to min) (The generated random number mod by 6 plus 1;
        cout << "The random number is: " << random_number << endl; 
    }
    
    return 0;
}