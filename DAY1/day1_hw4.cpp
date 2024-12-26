# include <iostream>

using namespace std;

int main(){
    int digit1 = 0;
    int digit2 = 0;
    cout << "Enter two digits : " << endl;
    cin >> digit1 >> digit2;

    cout << " Sub of two digits : " << endl;
    cout << digit1 - digit2 << endl;

    cout << " Multiply of two digits : " << endl;
    cout << digit1 * digit2 << endl;

    cout << " Divide of two digits : " << endl;
    cout << digit1 / digit2 << endl;

    cout << " Remainder of two digits : " << endl;
    cout << digit1 % digit2 << endl;
    return 0;
}