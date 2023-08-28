#include <iostream>

int main(){
    int input = 0;
    std::cout<<"Enter limit: ";
    std::cin<<input;
    int output = [input];
    for(int i = 0; i<=input; i++){
        do{
            
        }while(input%i == 0);
        output[i] = input;
    }
    return 0;
}
