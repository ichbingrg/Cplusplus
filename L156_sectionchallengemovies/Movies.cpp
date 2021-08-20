#include "movies.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;





Movies::Movies(){}

Movies:: ~Movies(){}
  
  
void Movies:: print_movies(){
  cout << endl << "===================================\n" << endl;
  if (movies.size()!=0){

  for (movie m: movies)
    m.display_movie_name();
}
  else{
    cout << "EMPTY!!" << endl;
  }
  cout << endl << "===================================\n" << endl;
}

void Movies:: push_back(movie a){
  movies.push_back(a);
}


bool Movies::can_icrement_count(string name){
  for (movie &m: movies){
    if (m.get_name()==name){
          m.plus_count();
          return 1;}
  }
  return 0;
}




 bool Movies::can_add_new(string name){
    for (movie m: movies){
      if (m.get_name() == name){
        return 0;
      }
    } return 1;


  }
