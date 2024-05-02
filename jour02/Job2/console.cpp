#include <iostream>

int main()
{
    int n;
    n = -5;
    do
    {
        std::cout << "donnez un nombre >0 ";
        std::cin >> n;
    } while (n <= 0);
    std::cout << n;

    return 0;
}
