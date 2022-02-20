#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    int max = v1 < v2 ? v2 : v1;
    int min = max == v1 ? v2 : v1;

    for (int i = min; i <= max; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}