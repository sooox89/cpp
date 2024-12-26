# include <iostream>

using namespace std;

int main(){
    int digit1 = 0;
    int digit2 = 0;
    cout << "Enter two digits : " << endl;
    cin >> digit1 >> digit2;

    cout << " Sum of two digits : " << endl;
    cout << digit1 + digit2 << endl;
// 굳이 SUM 변수 사용하지 않아도 이렇게 !!! 오 ~
    return 0;
}