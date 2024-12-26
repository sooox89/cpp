#include <iostream>

int main(){
    int i = 1;
    int sum = 0;

    while(i<100){
        std::cout<< i << " ";
        sum += i;
        i++;
    }
    std::cout<<"\n"<< sum;
    std::cout<<"\n 계속 하려면 아무 키나 누르십시오 . . .";

    return 0;
}