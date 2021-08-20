#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City{
	std::string name;
	long population;
	double cost;
};

//Assuming each counry has atleast 1 city
struct Country{
	std::string name;
	std::vector <City> cities;
	
};

struct Tour{
	std::string title;
	std::vector<Country> countries;
};

int main(){
	Tour tours{"Tour Tickets Prices from Miami",
	  {
		  {
			  "Columbia",{
				  {"Bogota", 8778000,400.98},
				  {"Cali",2401000,424.12},
				  {"Medellin", 2464000, 350.98},
				  {"Cartagana", 972000, 345.34}
			  }
		  },
		  {
			  "Brazil",{
				  {"Rio De Janiero", 135000000, 567.45},
				  {"Sao Paulo",11310000, 975.45},
				  {"Salvador",18234000,855.99}
			  }
		  },
		  {
			  "Chile",{
				  {"Valdivia", 260000, 569.12},
				  {"Santiago", 7040000, 520.00}
			  }
		  },
		  {
			  "Argentina",{
				  {"Buenos Aires", 3010000,728.77}
			  }
		  }
	    }
		  
	};
	
	//Unformatted display so you can see how to access the vector elements
	std::cout << "1234567890123456789012345678901234567890123456789012345678901234567890\n" << std::endl; 
	std::cout << std::setw(50) << tours.title <<std::endl<< std::endl;
	std::cout <<  std::setw(20) << std::left << "Country"
			  << std::setw(20) << std::left << "City"
			  << std::setw(15) << std::right << "Population" 
			  << std::setw(15) << "Price" << std::endl;
	std::cout << std::setfill('-') << std::setw(70) << "-"<<std::endl;
	std::cout << std::setfill(' ') ;
	for (auto country:tours.countries){
		//std::cout << std::setw(20) << std::left << country.name;
		for (auto city : country.cities){
			std::cout << std::setw(20) << std::left << ((city.name==country.cities.at(0).name)?country.name:"")
					  << std::left << std::setw(20)<< city.name
					  << std::setw(15) << std::right<<std::setprecision(10)<<city.population
					  << std::setw(15) << std::setprecision(4) << std::fixed << std::setprecision(2) << city.cost << std::endl;
		}
	}
	
	std::cout << std::endl << std:: endl;
	
	return 0;
}