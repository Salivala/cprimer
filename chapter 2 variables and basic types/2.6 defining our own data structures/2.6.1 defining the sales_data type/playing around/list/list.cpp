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
    list_node tmp = *list;
    std::cout << tmp.item << std::endl;
    if (tmp.next)
    {
        print_list(tmp.next);
    }
}

void print_list2(list_node *list)
{
    std::cout << list->item << std::endl;
    if (list->next)
    {
        print_list2(list->next);
    }
}

void delete_list(list_node *list)
{
    if(list->next)
    {
        list_node *tmp = list->next;
        std::cout << tmp->item << " deleted" << std::endl;
        delete_list(tmp);
        delete list;
    }
}

int main()
{
    list_node *k = generate_list(30);
    print_list2(k);
    delete_list(k);
}
