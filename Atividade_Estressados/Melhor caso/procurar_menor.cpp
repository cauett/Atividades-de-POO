#include <iostream>

int procurarMenor(int i, int nums[])
{
    int menor = nums[0];

    for (i = 1; i < 5; i++) {
        if(nums[i] < menor) {
            menor = nums[i];
        }
    }
    
    return menor;
}

int main() 
{
    int i {}, nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    return procurarMenor(i, nums);
}