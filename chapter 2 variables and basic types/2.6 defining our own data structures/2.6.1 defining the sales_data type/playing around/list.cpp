#include <iostream>

struct list_item
{
    int item;
    list_item *next = nullptr;
};

int print_all(list_item list)
{
        std::cout << list.item << std::endl;
        if (list.next != nullptr) 
        {
            print_all(*list.next);
        }
        return 0;
}

list_item generate_simple_list(unsigned amount)
{
    list_item list;
    list.item = amount;
    if (amount > 0)
    {
        /*
         * I know that dereferencing list.next will attempt to change the value of nullptr, which isn't what i want.
         * I'm trying to change the location list.next points to to the new list generated. 
         * I can't seem to use & before the recurse though, so I'm a bit stuck.
         */
        *list.next = generate_simple_list(amount - 1);
        
        //list.next = &list;
    }

    return list;
}

int main()
{
    print_all(generate_simple_list(20));
}
