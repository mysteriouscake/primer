#include <iostream>
#include <fstream>

int main(){
    int input = 0;
    std::cout<<"Enter number: ";
    std::cin>>input;
    bool output[input];
    //for(int i = 0; i<=input; i++){
        for(int ii = 0; ii<input; ii++){
            double*results;
            results = new double [input/2];
            bool*check;
            check = new bool [input/2];
            for(int j = 0; j<=input/2; j++){
                results[j] = input%j;
            }
            for(int jj = 1; jj<=(input/2); jj++){
                if(results[jj] == 0){
                    check[jj] = false;
                    output[jj] = check[jj];
                }
                else{
                    check[jj] = true;
                    output[jj] = check[jj];
                }
            }
            delete[] results;
            delete[] check;
        }
    //}
    std::ofstream primer;
    primer.open("out.txt");
    primer<<"Beginning line is always 0 ---, if any line between the start and end contains 0 ---, the number is not a prime. \n \n";
    for(int i = 1; i<=input; i++){
        if(output[i] == true){
            primer<<output[i]<<'\n';
        }
        else{
            primer<<output[i]<<" ---"<<'\n';
        }
    }
    primer.close();
    return 0;
}
