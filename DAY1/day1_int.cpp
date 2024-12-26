#include <iostream>

int main(){

    // variable declarations
    int number1 ;
    int number2 ;
    int sum ;

    std::cout << "Enter first integer: "; 
    std::cin >> number1; // read first integer from user into number1

    std::cout << "Enter second integer: ";
    std::cin >> number2; // read second integer from user into number2

    sum = number1 + number2; // add the numbers; store result in sum
    std::cout << "Sum is " << sum << std::endl; //display sum; end line
    
    return 0; //indicate that program ended successfully


} //end function main
