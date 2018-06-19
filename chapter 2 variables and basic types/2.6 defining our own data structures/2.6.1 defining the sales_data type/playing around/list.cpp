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

list_item generate_list(int index, int numbers[])
{
    list_item n;
    n.item = index;
    if (index < 8)
    {
        list_item k = generate_list(++index, numbers);
        n.next = &k;
    }
    return n;
}

int main()
{
    int k[8] = {0,1,2,3,4,5,6,7};
    print_all(generate_list(0, k));
}
