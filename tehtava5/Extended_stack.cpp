#include "Extended_stack.h"

Extended_stack::Extended_stack():Stack()
{

}

void Extended_stack::clear()
{
    while(count > 0)
        pop();
}

bool Extended_stack::full() const
{
    if(count == maxstack)
        return true;
    else
        return false;
}

int Extended_stack::size() const
{
    return count;
}