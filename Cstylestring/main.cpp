#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};
    
    //cout << first_name; //Garbage data
    
//    cout << "Enter your first name: ";
//    cin >> first_name;
//    
//    cout << "Enter your last name: ";
//    cin >> last_name;
//    cout << "------------------------------------"<< endl;
//    
//    cout << "Hello, " << first_name<<"! Your first name has " << strlen(first_name) << " Characters." << endl;
//    cout << "And your last name, " << last_name << " has " << strlen(last_name) << " Characters." << endl;
//    
//    strcpy(full_name,first_name);
//    strcat(full_name," ");
//    strcat(full_name, last_name);
//    
//    cout << "Your full name is "<< full_name << endl;
    
    cout << "----------------------------------" << endl;
    cout << "Enter your full name: " ;
    //cin >> full_name; //gets space between first and last name and outputs only the first name.
    
    cin.getline(full_name,50);// stops either at it's limit 50 or at 'enter' key input.
    
    cout << "Your full name is "<< full_name << endl ;
    
    cout << "-------------------------------------" << endl;
    strcpy(temp, full_name);
    if (strcmp(temp,full_name)==0)
        cout << temp << " and " << full_name << " are the same." << endl;
    else
        cout << temp << " and " << full_name << " are the different." << endl;
    cout << "---------------------------------------"<< endl;
    
    
    for ( size_t i{0}; i < strlen(full_name); ++i){
        if ( isalpha(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }
    if (strcmp(temp,full_name)==0)
        cout << temp << " and " << full_name << " are the same." << endl;
    else
        cout << temp << " and " << full_name << " are the different." << endl;
    cout << "---------------------------------------"<< endl;
    
    cout << "Length:" << strlen(full_name) << endl;
    cout << "Result comparing " << temp << " and " << full_name<< " : " << strcmp(temp,full_name) << endl;
    cout << "Result comparing " << full_name << " and " << temp << " : " << strcmp(full_name,temp) << endl;
    
    
    return 0;
}