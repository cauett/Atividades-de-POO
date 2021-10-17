#include <iostream>

int pegarCalmos(int i, int nums[])
{    
    int numsClone[5];

    for (int j = {0}; j < 5; j++) {

        if (nums[i] > 0 && nums[i] < 10) {
            numsClone[i] = {nums[i]};
        }
        else {
            numsClone[i] = {0};
        }
    }

    return numsClone[i];
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
        std::cout << " " << pegarCalmos(i, nums);
    }

    return 0;
}