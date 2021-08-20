#include <iostream>
using namespace std;

const double pi = 3.14159;


double calc_area_circle( double radius){
    return ( pi * radius * radius);
}

void area_circle(){
    cout << endl << "Enter the radius: ";
    double radius;
    cin >> radius;
    
    cout << "The area of the circle with the radius " << radius << " is " << calc_area_circle(radius) << endl;;
}

double calc_volume_cylinder ( double radius, double height){
    return calc_area_circle(radius)*height;
}
void volume_cylinder (){
    cout << endl << "Enter the radius of the cylinder: " ;
    double radius;
    cin >> radius;
    
    cout << endl << "Enter the height of the cylinder: " ;
    double height;
    cin >> height;
    
    cout << "The Volume of the cylinder is : " << calc_volume_cylinder(radius, height) << endl;
}
int main(){
    
    
    area_circle();
    volume_cylinder();
    
    return 0;
}