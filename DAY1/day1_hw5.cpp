# include <iostream>

using namespace std;

int main(){
    int x,y;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    
    if (x>y){
        cout << x << " is bigger than " << y << endl;
    }
    if (x==y){
        cout << x << " == " << y << endl;
    }
    if (x<y){
        cout << x << " is smaller than " << y << endl;
    }

    return 0;
}