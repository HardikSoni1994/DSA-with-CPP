#include <iostream>
using namespace std;

template <typename T1>
class Collection
{
private:
    int size;
    int *arr;

public:
    Collection(int size)
    {
        this->size = size;
        arr = new int[size];

        if (arr != nullptr)
        {
            cout << "Array is Alloacated : " << endl;
        }
    }
    ~Collection()
    {
        delete[] arr;
        arr = nullptr;
        if (arr == nullptr)
        {
            cout << "Array is dealloacated : " << endl;
        }
    }
    void insertElement(int index, int value)
    {
        if (index >= 0 && index < this->size)
        {
            arr[index] = value;
        }
        
    }

    void fetchcollection()
    {
        cout << "Collection of Element : " << endl;
        for (int i = 0; i < this->size; i++)
        {
            cout << arr[i] <<"\t";
        }
        cout << endl;
        
    }
};

int main()
{
    Collection<int> intcollection(5);
    intcollection.insertElement(0, 10);
    intcollection.insertElement(2, 30);
    intcollection.insertElement(4, 50);
    intcollection.fetchcollection();
    return 0;
}