#include <iostream>
using namespace std;

class DMA
{
private:
    int size;
    int *arr;

public:
    DMA(int size) // parameterized constructor
    {
        this->size = size;
        arr = new int[size];

        if (arr == nullptr)
        {
            cout << "Memory Allocation failed..." << endl;
        }
        else
        {
            cout << "Memory Allocation Successfully...." << endl;
        }
    }
    ~DMA()
    {
        delete[] arr;
        arr = nullptr;

        if (arr != nullptr)
        {
            cout << "Memory deallocation failed..." << endl;
        }
        else
        {
            cout << "Memory deallocation Successfully..." << endl;
        }
    }

    void insert(int index, int value)
    {
        if (index >= 0 && index < this->size)
        {
            arr[index] = value;
        }
        else
        {
            cout << endl << "Index is wrong" << endl;
        }
        
        
    }
};

int main()
{
    DMA d1(5);
    d1.insert(6, 45);
}