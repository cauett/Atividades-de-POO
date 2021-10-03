#include <iostream>

int pesquisa(int i, float nums[])
{
    int search_x;

    std::cout << "Digite o numero que procura: " << "\n";
    std::cin >> search_x;
    
        for(i = -1; i < 5; i++) {
            if(search_x == nums[i]) {
                return i;
            }
        }
    return -1;
}

int main() 
{
    int i;
    float nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];

    }
     
    return pesquisa(i, nums);
}