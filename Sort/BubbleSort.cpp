#include<iostream>
#include<vector>

void PrintArray(std::vector<int> &array){
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
void Bubble(std::vector<int> &array){
    for(int i =0; i<array.size();i++)
    {
        for(int j=0;j<array.size()-i-1;j++)
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j]= array[j+1];
                array[j+1]=temp;
            }
    }
}

int main()
{
    int arr[] = {5,3,8,6,2,7,1,4};
    std::vector<int> array(arr, arr+sizeof(arr)/sizeof(int));
    Bubble(array);
    PrintArray(array);
}