/* 
 * using a collection/list of integers and allowing users to select options from a menu to perform operations
 * 
 * P-Print numbers
 * A- Add a number
 * M- Display mean of the numbers
 * S- Display the smallest number 
 * L- Display largest number
 * Q- Quit
 * "Unknown selection, please try again" if false input. and display menu items again.
 * 

*/


#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> num{10,20,30,40,50,15};
    
    
    char input{};
    
    do{
        cout << endl << "P - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number \n";
        cout << "F - Search the number in the list display how many times it exists. \n";
        cout << "C - Clear out the list \n";
        
        cout << "Q - Quit\n";
        
        cout << "\nENTER YOUR CHOICE: ";
        cin >> input;
        
        
        
        if (input =='P' || input == 'p'){
            if (num.size() ==0)
                cout << endl << "[]- the list is empty." << endl;
            else{
                cout << endl << "[ ";
                    for (unsigned int i =0; i < num.size();++i)
                        cout <<  num.at(i) << " ";
                cout << "]" << endl;
        } 
        
    }
        else if (input == 'A' || input == 'a'){
            int add;
            cout << endl << "Enter the number you want to add: ";
            cin >> add;
            
            bool exist{0};
            for (unsigned int i=0; i< num.size();i++){
                if (add==num.at(i))
                    exist = 1;
                }
            if (exist ==0){
                    num.push_back(add);
                    cout << endl << add << " added." << endl;
        }  
            else 
                cout << "The requested integer already exists. " << endl;
        
        }
        
        else if (input =='C'|| input =='c'){
            num.clear();
            cout << endl << " The list is now empty. " << endl ;
        }
        
        else if (input == 'F' || input == 'f'){
            int find{};
            
            cout << "Enter the number to find: " ;
            cin >> find;
            int count =0;
            for (unsigned int i = 0; i < num.size(); ++i){
                if ( find == num.at(i)){
                    count++;
                }
            }
            if (count != 0){
                cout << "The number " << find << " exists " << count << " times." << endl;}
            else
                cout << "The number doesn't exist." << endl; 
        }
        
        
        else if ( input =='M' || input =='m'){
            if (num.size()==0)
                cout << endl << "Unable to calculate the mean- NO DATA." << endl;
            else {
                int sum=0, average=0; 
                for (unsigned int i = 0; i < num.size(); i++){
                    sum += num.at(i);
                }
                average = sum / num.size();
                
                cout << " The mean average of the collection is : " << average << endl << endl;
            }
        }
        else if (input == 'S' || input == 's'){
            if (num.size()==0)
                cout << endl << "Unable to determine the smallest value - NO DATA." << endl;
            else {
                int smallest=num.at(0);
                
                for (unsigned int i= 1; i < num.size();++i){
                    if (smallest > num.at(i))
                        smallest = num.at(i);
                    
                }
                cout << "The smallest number is " << smallest  << endl << endl;
            }
    
    }
    else if (input == 'L' || input == 'l'){
            if (num.size()==0)
                cout << endl << "Unable to determine the largest value - NO DATA." << endl;
            else {
                int largest=num.at(0);
                
                for (unsigned int i= 1; i < num.size();++i){
                    if (largest < num.at(i))
                        largest = num.at(i);
                    
                }
                cout << "The largest number is " << largest  << endl << endl;
            }
    
    }
    
    else if (input == 'q' || input == 'Q'){
        cout << "------------GOOD BYE----------------" << endl;
        break;
    }
    else 
        cout << "Unknown Selection, please try again." << endl;
    
    } // closing do:
    while ( input != 'q' && input != 'Q');
    
    return 0;
}// closing main