#include<iostream>

int main(){
    int n;
    while(std::cin>>n)
    {
        if(n%400==0 || (n%4==0&&n%100!=0))
            std::cout<<"yes"<<std::endl;
        else
            std::cout<<"no"<<std::endl;
    }
    system("pause>null");
    return 0;
    
}