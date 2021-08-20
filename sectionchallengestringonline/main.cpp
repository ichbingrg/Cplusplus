#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string input;
    cout << "Enter your word: " ;
    getline(cin,input);
    
    int length = input.length();
    
    int position = 0;
    for ( auto c: input){
        
        int space = (length - (position+1));
        //space
        for ( space; space > 0; space--)
            cout << "-";
        
        //words in order 
        for (int i =0; i <= position ; ++i)
            cout << input.at(i);
         
         // words in reverse order
         
         for (int j=1; j <= position ; j++)
             cout << input.at(position-j);
    position++;
    cout << endl;}
    
    return 0;
}




























//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(){
//    
//    string input;
//    cout << "Enter the word :" ;
//    getline(cin,input);
//    
//    int l = input.length();
//    int p = 0;
//    
//    cout << input << endl;
//    for ( auto c: input){
//        int space = l - p;
//        
//        while (space >1){
//            cout << "-" ;
//            --space;
//            }
//             
//        for (int j = 0; j <= p; j++ )
//            cout << input.at(j);
//        
//        for (int k = 1; k <=p  ; k++)
//        {
//            cout << input.at(p-k);
//        }
//    cout << endl;
//    p++;}
//    
//    return 0;
//}
//
//
//





// Letter Pyramid
// Written by Frank J. Mitropoulos
/*
#include <iostream>
#include <string>


int main()
{
    std::string letters{};

    std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(std::cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            std::cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            std::cout << letters.at(j);
        }

        // Display the current 'center' character
        std::cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            std::cout << letters.at(k);
        }

        std::cout << std::endl; // Don't forget the end line
        ++position;
    }

    return 0;
}
*/