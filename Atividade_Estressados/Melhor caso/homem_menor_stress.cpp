#include <iostream>

int procurarPosicao(int i, int nums[])
{
    int homemCalmo {0}, menor = nums[0];

    for (i = -1; i < 5; i++) {
        if(nums[i] < menor && nums[i] > 0) {
            
            homemCalmo = i;
        }
    }
    
    return homemCalmo;
}

int main() 
{
    int i {}, nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    return procurarPosicao(i, nums);
}