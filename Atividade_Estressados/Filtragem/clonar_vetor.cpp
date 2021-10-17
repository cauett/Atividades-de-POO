#include <iostream>

int clonarVetor(int i, int nums[])
{    
    int numsClone[5];
    
    return numsClone[i] = {nums[i]};
}

int main() 
{
    int i {};
    int nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    for (i = 0; i < 5; i++) {
        std::cout << " " << clonarVetor(i, nums);
    }

    return 0;
}