#include <iostream>
#include <string>

std::string maisStress(int i, float nums[])
{
    int x {0}, y {0};
    float media_1 {0}, media_2 {0};

    for (i = 0; i < 5; i++) {
        if (nums[i] > 0){
            media_1 = media_1 + nums[i];
            x += 1;
        }
        if (nums[i] < 0){
            media_2 = media_2 + (nums[i] * -1);
            y += 1;
        }
    }
    
    media_1 = media_1 / x;
    media_2 = media_2 / y;  

    if (media_1 > media_2) {
        return "Homens sao mais estressados!";
    }
    if (media_2 > media_1) {
        return "Mulheres sao mais estressadas!";
    }
    return "Empate no stress";
}

int main() 
{
    int i {};
    float nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    std::cout << "\n" << maisStress(i, nums) << "\n";
}