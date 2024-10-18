#include <iostream>


int main() 
{
    int x;
    int i;
    std::cout << "Enter number (0 < x < 10^9): ";
    std::cin >> x;

    if (x <= 0 || x >= 1000000000) 
    {
        std::cout << "Number Error" << std::endl;
        return 1;
    }

    std::cout << "Enter i: ";
    std::cin >> i;
    if (i < 0 || i > 31)
    {
        std::cout << "Index error" << std::endl;
        return 1;
    }

    int result = x | (1 << i);
    std::cout << "Result: " << result << std::endl;

    return 0;
}