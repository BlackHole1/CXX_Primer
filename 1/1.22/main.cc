#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, sum;
    int count = 0;
    while(std::cin >> item)
    {
        sum += item;
        ++count;
    }
    std::cout << sum.avg_price() * count << std::endl;

    return 0;
}