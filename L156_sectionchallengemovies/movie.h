#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>
#include <iostream>

using namespace std;

class movie{
  string name;
  string rating;
  int count;
public:
  movie(string name_val, string rating_val, int count_val);
  ~movie();
  movie(const movie &source);
  
  string get_name(){return name;}
  string get_rating(){return rating;}
  int get_count(){return count;}

  void plus_count(){++count;}
  void display_movie_name(){
    cout << name << ", " << rating << ", "<< count << endl;
  }
};



#endif