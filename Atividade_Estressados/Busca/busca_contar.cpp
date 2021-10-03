#include <iostream>

int contar(int i, float nums[])
{
    int count = 0; 
    
    { int search_X;
        
        std::cout << "Verifique um numero: " << "\n";
        std::cin >> search_X;

        for (i = 0; i < 5; i++) {
            if (search_X == nums[i]) {
                count += 1;
            }
        }
    }
    return count;
}

int main() 
{
    int i;
    float nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    return contar(i, nums);
}