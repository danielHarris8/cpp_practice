#include<iostream>

int f(char *sPtr){

    int result=0;
    while ( *sPtr != '\0' )
    {   
        
        //   *sPtr = toupper( *sPtr ); 
        if(*sPtr>='0' && *sPtr<='9'){
            result= 10*result + *sPtr-'0';
            std::cout<<*sPtr<<std::endl;
        }        
        sPtr++; 
    }
    return result;
}

int main(int argc, char* argv[]){
    int sum=0;
    for(int i = 0; i<argc; i++)
        sum+=f(argv[i]);
    
    // std::cout<<argc<<std::endl;
    std::cout<<sum/(argc-1);
    
}