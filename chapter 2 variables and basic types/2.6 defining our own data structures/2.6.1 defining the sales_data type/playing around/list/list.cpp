#include <iostream>
#include "list_node.h"

list_node *generate_list(unsigned amount)
{
    list_node *listptr = new list_node();
    listptr->item = amount;
    if (amount > 0) 
    {
        listptr->next = generate_list(amount - 1);
    }
    return listptr;
}

/*
 * Precondition: List has not been destroyed with delete_list function
 * undefined behavior will happen otherise
 */
void print_list(list_node *list)
{
    //std::cout << list->item << std::endl;
    //std::cout << list->next->item << std::endl; // it's not in scope?
    list_node tmp = *list;
    std::cout << tmp.item << std::endl;
    if (tmp.next)
    {
        print_list(tmp.next);
    }
}

void delete_list(list_node *list)
{
    if(list->next)
    {
        list_node *tmp = list->next;
        delete_list(tmp);
        delete list;
    }
}

int main()
{
    list_node *k = generate_list(6);
    //std::cout << k->next->next->next->next->next->next->item << std::endl; // this works, yields 0
    print_list(k); 
    delete_list(k);
    print_list(k);
}
