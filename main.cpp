#include <iostream>

int main(){
    int input = 0;
    std::cout<<"Enter limit: ";
    std::cin<<input;
    int output = [input];
    for(int i = 0; i<=input; i++){
        if(i)
        output[i] = i;
    }
    return 0;
}
