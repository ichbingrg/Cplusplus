#ifndef _MOVIES_H_
#define _MOVIES_H_


#include "movie.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Movies{
  vector <movie> movies;


public:
  Movies();
  ~Movies();
  void print_movies();
  bool can_icrement_count(string name);
  bool can_add_new(string name);
  void push_back(movie a);
  
};

#endif