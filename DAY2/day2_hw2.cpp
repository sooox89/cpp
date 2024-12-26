#include <iostream>

int main(){
    int i = 0;

    while(i<100){
        if(i%2==1){
            std::cout<< i << " ";
            i++;
        }
        else{
            i++;
        }
        
    }

    std::cout<<" 계속 하려면 아무 키나 누르십시오 . . .";

    return 0;
}