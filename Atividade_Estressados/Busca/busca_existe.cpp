#include <iostream>

int verifik(int i, float nums[])
{
    int search_x {};

    std::cout << "Digite o numero que deseja verificar: " << "\n";
    std::cin >> search_x;

    for (i = 0; i < 5; i++) {

        if (nums[i] == search_x) {
            return true;
            }
        }
        
    return false;
}

int main() 
{
    int i {};
    float nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];

    } 

    return verifik(i, nums);
}