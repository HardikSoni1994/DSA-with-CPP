#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Temp
{
private:
    // Data members = Attributes
    T1 x;
    T2 y;

public:
    // parameterized constructor
    Temp(T1 x, T2 y)
    {
        this->x = x;
        this->y = y;
    }

    void getData()
    {
        cout << "X : " << this->x << endl
             << "Y : " << this->y << endl;
    }
};

int main()
{
    Temp<int, double> t1(45, 98.74);

    t1.getData();
    return 0;
}