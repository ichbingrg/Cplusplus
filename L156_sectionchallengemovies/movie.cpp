#include "movie.h"
#include <iostream>
#include <string>

 movie:: movie(string name_val, string rating_val, int count_val)
      : name{name_val}, rating{rating_val}, count{count_val}{}
 movie:: ~movie(){}
 movie:: movie(const movie &source)
      : movie(source.name, source.rating, source.count){}