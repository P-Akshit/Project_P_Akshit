#include <iostream>
#include <string>
#include <cmath>

int main(){
    float a;
    float b;
    float c;

    std::cout<<"Enter side 'A' : ";
    std::cin >> a;

    std::cout<< "Enter side 'B' : ";
    std::cin >> b;

    float a2;
    float b2;

    a2 = a*a;
    b2= b*b;

    c=sqrt(a2+b2);

    std::cout << "The Hypotenuse or C is : " << c << std::endl;

    return 0;
}