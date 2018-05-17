//
// Created by K i D on 17.05.2018.
//

#ifndef CLION_CUST_H
#define CLION_CUST_H

struct customer
{
    char fullname[35];
    double payment;
};

typedef customer Item;

class Stack
{
private:
    enum { MAX = 10 };
    Item items[MAX];
    int top;
    double payment;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};
#endif //CLION_CUST_H
