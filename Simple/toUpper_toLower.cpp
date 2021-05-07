#include <iostream>

void tolower(char *sPtr )
{
    int diff_value='a'-'A';
   while ( *sPtr != '\0' )
   {   
    //   *sPtr = toupper( *sPtr ); 
      if(*sPtr>='A'&& *sPtr<='Z'){
          *sPtr = *sPtr+diff_value;
      }
      sPtr++; 
   }
}
void toupper( char *sPtr )
{
    int diff_value='a'-'A';
   while ( *sPtr != '\0' )
   {   
    //   *sPtr = toupper( *sPtr ); 
      if(*sPtr>='a'&& *sPtr<='z'){
          *sPtr = *sPtr-diff_value;
      }
      sPtr++; 
   }
}
int main(){
    // int arr[]={1,2,3,4,5,6};
    // std::cout << *arr << std::endl;
    char phrase[] = "When I was child";
    
    std::cout << phrase << std::endl;
    
    tolower( phrase );
    std::cout << phrase << std::endl;
    //char *input="";
    //std::cin>>input;
    //f(input);
    //std::cout<< input << std::endl;

    return 0;
}