#include <iostream>
#include <string>

using namespace std;

int main(){
    
//    
//    string s0;
//    string s1 = "Apple";
//    string s2 = "Banana";
//    string s3 = "Kiwi";
//    string s4 = "apple";
//    string s5 = s1;
//    string s6{s1,0,3}; // App
//    string s7(10, 'X'); // XXXXXXXXXX
//    
//    cout << s0 << endl;    // No garbage 
//    cout << s0.length() << endl; // empty string -> 0
    
    //Initialsation
    
//    cout << "\nInitialisation"<< "\n-------------------------------" << endl;
//    cout << "s1 is initialised to: " << s1 << endl;
//    cout << "s2 is initialised to: " << s2 << endl;
//    cout << "s3 is initialised to: " << s3 << endl;
//    cout << "s4 is initialised to: " << s4 << endl;
//    cout << "s5 is initialised to: " << s5 << endl;
//    cout << "s6 is initialised to: " << s6 << endl;
//    cout << "s7 is initialised to: " << s7 << endl;
//    
//    
//    cout << "\nFOR LOOP\n" << "-----------------------------" << endl;
//    for (size_t i=0; i< s1.length(); i++)
//        cout << s1.at(i);
//    cout << endl;
//    
//    cout << "\n RANGE BASED FOR LOOP \n" << "----------------------" << endl;
//    for (auto c: s1)
//        cout << c ;
//        
//    cout << endl;
    
    
    //Substring
//    cout << "\nSUBSTRING\n-------------------\n";
//    
//    string s1="This is a test.";
//    cout << s1.substr(0,4) << endl;
//    cout << s1.substr(5,2) << endl;
//    cout << s1.substr(8,1) << endl;
//    cout << s1.substr(10,4) << endl;
//    
//    //ERASE
//    
//    cout << "\nERASE\n----------------------\n";
//    
//    s1.erase(0,5);
//    cout << s1 << endl;
//    
//    //GETLINE
//    
//    cout << "\nGETLINE\n----------------------------\n";
//    
//    string full_name{};
//    cout << "Enter your full name : ";
//    getline (cin,full_name);
//    
//    cout << "Your full name is: " << full_name << endl;

        //Find
        
        cout << "\nFIND\n------------------------------\n";
        string s1="The secret word is Boo.";
        string word{};
        
        cout << "Enter the word to find: ";
        cin >> word;
        
        size_t position = s1.find(word);
        
        if (position!= string::npos)
            cout << "FOUND!! " << word << " at position : " << position << endl;
        else
            cout << "Sorry, " << word << " not found" << endl;
            
        cout << endl;
    
    return 0;
}