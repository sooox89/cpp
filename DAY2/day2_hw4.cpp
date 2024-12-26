#include <iostream>

int main(){
    int i = 1;
    int end = 0;
    int sum = 0;

    std::cout << "Enter last number of sum : " ;
    std::cin >> end;

    while(i!=end){
        std::cout<< i << " " ;
        sum += i ;
        i++ ;
    }
    std::cout << i << "\n";
    std::cout <<  sum+i ;
    std::cout << "\n계속하려면 아무 키나 누르십시오" ;

    return 0;
}