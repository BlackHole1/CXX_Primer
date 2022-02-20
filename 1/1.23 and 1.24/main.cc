#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currVal, item;
    std::cin >> currVal;

    bool isBegin = true;
    int cnt = 1;
    while(std::cin >> item)
    {
        if (item.isbn() == currVal.isbn())
        {
            ++cnt;
        } else {
            std::cout << (isBegin ? currVal.isbn() : item.isbn()) << ": " << cnt << std::endl;
            currVal = item;
            cnt = 1;
        }
    }
    std::cout << currVal.isbn() << ": " << cnt << std::endl;

    return 0;
}