#include <iostream>

int stressMedio(int i, float nums[])
{
    float media {0};

    for (i = 0; i < 5; i++) {
        media = media + nums[i];
    }
    
    media = media/5;

    return media;
}

int main() 
{
    int i {};
    float nums[5];

    std::cout << "Digite 5 numeros: " << "\n";

    for (i = 0; i < 5; i++) {
        std::cin >> nums[i];
    } 
    
    return stressMedio(i, nums);
}