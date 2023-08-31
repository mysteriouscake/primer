#include <iostream>

int main(){
    int input = 0;
    std::cout<<"Enter limit: ";
    std::cin<<input;
    int output = [input];
    for(int i = 0; i<=input; i++){
        for(int ii = 1; ii<input; ii++){
            output[ii] = input%i
        }
    }
    return 0;
}
