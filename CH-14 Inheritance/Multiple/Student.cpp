#include <iostream>
using namespace std;

// parent class
class Father
{
protected:
    double amount;

    Father()
    {
        this->amount = 350;
    }
};

// parent class
class Mother
{
    protected:
    double pocketAmount;

    Mother()
    {
        this->pocketAmount = 100;
    }
};

// parent class
class Brother
{
    protected:
    double uniqueAmount;

    Brother()
    {
        this->uniqueAmount = 2000;
    }
};

// child class
class Me : public Father, Mother, Brother
{
    private:
        double total;
    public:
    void myTotalAmount()
    {
        this->total = amount + pocketAmount + uniqueAmount;

        cout << "My Total Amount : " << this->total << endl;
    }
};

int main()
{
    Me m1;

    m1.myTotalAmount();
}