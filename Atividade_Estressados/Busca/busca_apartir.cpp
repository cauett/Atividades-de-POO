#include <iostream>

int procurar_apartir(int i, float nums[])
{
    int iniciaBusca {}, search_X {};
        
        std::cout << "Digite X: " << "\n";
        std::cin >> search_X;

        std::cout << "Digite a posicao inicial: " << "\n";
        std::cin >> iniciaBusca;

        for (i = iniciaBusca; i < search_X; i++) {
            if (search_X == nums[i]) {
                
                return i;
            }
        }
    return -1;
}

int main() 
{
    int i {};
    float nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    return procurar_apartir(i, nums);
}