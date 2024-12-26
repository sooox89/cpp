# include <iostream>

using namespace std; //declare default namespace of this file

int main(){ //main fuction

    // declaring variable
    char name[50];

    // Can write cout, cin withoud std:: prefix
    cout << "COM : What's your name?\n"; 
    cout << "YOU : My name is ";
    cin >> name; //read char name
    cout << "COM : It's good to see you, " << name; 

    return 0; // indicate that program ended successfully
} //end function main