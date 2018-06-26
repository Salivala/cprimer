#include <string>

template <typename T>
class list_node
{
    private:
        T item;
        list_node *next = nullptr;
    public:
        void generatListFromArr(T arr[]);
};
