#include <iostream>
using namespace std;

class Maximum
{
protected:
    int value;

public:
    void setNumberData()
    {
        cout << "Enter any Number : ";
        cin >> this->value;
    }
    void getNumberData()
    {
        cout << "Higher Number : " << this->value;
    }

    Maximum operator>(Maximum object)
    {
        Maximum a;
        if (this->value > object.value)
        {
            a.value = this->value;
        }
        else
        {
            a.value = object.value;
        }
        return a;
    }
};

