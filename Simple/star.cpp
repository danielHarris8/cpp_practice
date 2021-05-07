#include <iostream>
#include <cmath>
int main(){

    int inputValue=7;
    // int keyValue = inputValue/2;
    // for(int i =-keyValue;i<=keyValue;i++){
        
    //     for(int space =0;space<abs(i);space++)
    //         std::cout<<" ";
    //     for(int star=0;star<inputValue-abs(i)*2;star++)
    //         std::cout<<"*";
    //     std::cout<<std::endl;
    // }

    // for(int i =0; i<inputValue;i++)
    // {
    //     for(int space =0;space<inputValue-i-1;space++)
    //         std::cout<<" ";
    //     for(int star=0; star<2*i+1;star++)
    //         std::cout<<"*";
    //     std::cout<<std::endl;
    // }

    for(int i = 0; i<inputValue; i++)
    {
        for(int space = 0; space<i;space++)
            std::cout<<" ";
        for(int star=0; star<2*(inputValue-i)-1;star++)
            std::cout<<"*";
        std::cout<<std::endl;
    }
    
    return 0;
}