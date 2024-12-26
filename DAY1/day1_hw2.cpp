# include <iostream>

int main(){
    int x ;
    int y ;
    int z = 7;
    std::cout << "int z = 7\n";
    std::cout << "Enter two integers for x and y: " << std::endl;
    std::cin >> x >> y;
 
    std::cout << "\nx: " << x << " y: " << y;
    
    x = x + z;
    y = y + z;
    
    std::cout << "\n\nx = x + z, y = y + z\n";
    std::cout << "\nx: "<< x << " y: "<< y;

    return 0;

}