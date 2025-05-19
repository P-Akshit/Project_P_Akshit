#include <iostream>
#include <cmath>

int main(){
    float temp;
    float f = 32;
    float c = 1;
    char c_or_f;
    float main_temp;

    std::cout<< "Enter the temp : " <<std::endl;
    std::cin >> temp;

    std::cout<< "The temp is in c or f"<<std::endl;
    std::cin >> c_or_f;

    if(c_or_f == 'c' || c_or_f == 'C'){
          main_temp= (1.8 * temp) + 32.0;
         std::cout << "Temperature in Fahrenheit: " << main_temp << std::endl; 
    }
    else{
        main_temp = (temp - 32.0) / 1.8;
        std::cout << "Temperature in Celsius: " << main_temp << std::endl; 
    }

    return 0 ;
}