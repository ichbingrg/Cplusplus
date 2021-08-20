#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string alpha{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"QWERTZUIOPASDFGHJKLYXCVBNMqwertzuiopasdfghjklyxcvbnm"};
    
    string input;
    cout << "Enter your code: " ;
    getline(cin,input);
    
    string encrypt;
    
    for (char c:input){
        
        size_t pos=alpha.find(c);
        if (pos != string::npos){
            encrypt = encrypt + key.substr(pos,1);}
        else 
            encrypt = encrypt + c;
    }
    
    cout << "Encrypted: " << encrypt << endl;
    
    string decrypt;
    
    for (auto c: encrypt){
        
            size_t pos2 = key.find(c);
        if (pos2 != string::npos){
            decrypt = decrypt + alpha.substr(pos2,1);
        }
        else 
            decrypt = decrypt + c;
    }
    
    cout << "Decrypted: " << decrypt << endl;
    return 0;
}