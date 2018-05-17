#include "cust.h"
#include <iostream>

Stack::Stack()
{
    top = 0;
    payment = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const Item & item)
{
    if (top < MAX)
    {
        items[top++]= item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if (top > 0)
    {
        payment += items[--top].payment;
        std::cout <<"Klijent: " << items[top].fullname<< "\nBilans wplat: " << payment << "\n";
        item = items[top];
        return true;
    }
    else
        return false;
}