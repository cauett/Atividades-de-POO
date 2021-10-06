#include <iostream>

int procurarPosicao(int nums[])
{
    int iniciaProcura {};
        
    std::cout << "Digite a posicao inicial: " << "\n";
    std::cin >> iniciaProcura;

    int menor_pos {}, menor = nums[0];

    while (iniciaProcura < 5) {
        if(nums[iniciaProcura] < menor) {
            menor_pos = iniciaProcura;
        }
        iniciaProcura++;
    }

    return menor_pos;
}

int main() 
{
    int i {}, nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    return procurarPosicao(nums);
}