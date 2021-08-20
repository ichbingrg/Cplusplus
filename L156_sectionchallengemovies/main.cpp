#include "movie.h"
#include "movies.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;






void print_movies_set(Movies &my_movies){
  my_movies.print_movies();
}

void add_movies(Movies &m, string name, string rating, int count){
  if (m.can_add_new(name)){
    movie n(name,rating,count);
    m.push_back(n);
    cout << name << " added." << endl;
  }
  else 
    cout << endl <<  name << " already exists." << endl;
}

void increment_count(Movies &m, string n){
  if (m.can_icrement_count(n)){
     
     }
  else 
      cout << n << "not found" << endl;

}

int main(){



Movies my_movies;

print_movies_set(my_movies);

add_movies(my_movies, "Sudip" , "PG13", 12);

add_movies (my_movies, "Sudip", "PG", 13);


print_movies_set(my_movies);

increment_count(my_movies, "Sudip");
print_movies_set(my_movies);


  return 0;
}