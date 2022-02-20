#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;

    std::cin >> v1 >> v2;

    int max = 0, min = 0;

    if (v1 < v2)
    {
        max = v2;
        min = v1;
    } else {
        max = v1;
        min = v2;
    }

    while(min <= max)
    {
        std::cout << min << std::endl;
        ++min;
    }

    return 0;
}