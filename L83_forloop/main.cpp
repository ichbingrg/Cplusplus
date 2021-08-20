#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
//vector <int> nums{10,20,30,40,50};
//    for (unsigned int i{0}; i < nums.size(); ++i)
//        cout << nums[i] << endl;

// RANGE BASED FOR
//    int scores[]{100,90,97};
//    
//    for (auto score:scores)
//        cout << score << endl;
//    vector <double> temps{77.9,89.2,80.0,72.6};
//    double average{},total{};
//    
//    
//    for (auto temp: temps)
//        total += temp;
//        
//    
//    temps.size()!=0? (average = total / temps.size()):average;
//    
//    cout <<fixed << setprecision(1);
//    cout << average << endl;
//
//for (auto val: {1,2,3,4,5})
//        cout << val << endl;

//for (auto c: "This is a test")
//       if (c!=' ')
//           cout << c ;
 for (auto c: "This is a test")
     {if (c==' ')
         cout << "\t";
     else
         cout << c;} cout << endl;
return 0;
}