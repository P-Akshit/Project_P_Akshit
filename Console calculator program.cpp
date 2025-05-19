#include <iostream>

int main(){

    std::cout << "Hello this is a calculator program " << std::endl;
    float one;
    float two;
    char op;
    double output;
    std::cout << "Enter the first number : " << std::endl;
    std::cin >> one;
    std::cout << "Enter the operator + , - , * , / : " <<std::endl;
    std::cin >> op;
    std::cout << "Enter the second number : " << std::endl;
    std::cin >> two;
    
    switch(op){
        case '+' : 
           output = one + two;
           std::cout << "The output is " << output << std::endl;
           break;
        case '-' : 
           output = one - two;
           std::cout << "The output is "<< output << std::endl;
           break;
        case '*' :
            output = one * two ;
            std::cout << "The output is " << output << std::endl;
            break;
        case '/' : 
            if (two == 0){
                std::cout << "Enter a number not 0" << std::endl;
            }
            else{
                output = one/two;
                std::cout << "The output is " << output << std::endl;
            }
            break;
    }
    return 0;
}