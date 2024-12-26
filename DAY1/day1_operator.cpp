# include <iostream> //allows program to perform input and output

using std::cout; //program uses cout
using std::cin; //program uses cin
using std::endl; //program uses endl

//function main begins program 
int main(){
    // declaring variables
    int number1;
    int number2;
    // Can write cout, cin withoud std:: prefix
    cout<< "Enter two integers to compare : ";
    cin >> number1 >> number2; //read two integers 
    
    if (number1 == number2)
        cout << number1 << " == " << number2 << endl;
    if (number1 != number2)
    // if the condition is true (the values are not equal), execute this statement
        cout << number1 << " != " << number2 << endl;
    if (number1 < number2)
        cout << number1 << " < " << number2 << endl;
    if (number1 > number2)
        cout << number1 << " > " << number2 << endl;
    if (number1 <= number2)
        cout << number1 << " <= " << number2 << endl;
    if (number1 >= number2)
        cout << number1 << " >= " << number2 << endl;
    
    return 0; // indicate that program ended successfully

} //end function main