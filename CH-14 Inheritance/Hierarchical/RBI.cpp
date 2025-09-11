#include <iostream>
using namespace std;

// parent class
class RBI
{
private:
    double rate;

protected:
    RBI()
    {
        rate = 7.5;
    }
    void findBankRate(double total_amount, string bank_name)
    {
        double final_Amount = (total_amount * rate) / 100;
        cout << bank_name << " : " << final_Amount << endl;
    }
};

// child class
class SBI : public RBI
{
private:
    double total_amount;

public:
    // setter
    void setTotalAmountSBI()
    {
        cout << "Enter SBI Total Amount : ";
        cin >> this->total_amount;
        findBankRate(this->total_amount, "SBI");
    }
};
// child class
class ICICI : public RBI
{
private:
    double total_amount;

public:
    // setter
    void setTotalAmountICICI()
    {
        cout << "Enter ICICI Total Amount : ";
        cin >> this->total_amount;
        findBankRate(this->total_amount, "ICICI");
    }
};
// child class
class HDFC : public RBI
{
private:
    double total_amount;

public:
    // setter
    void setTotalAmountHDFC()
    {
        cout << "Enter HDFC Total Amount : ";
        cin >> this->total_amount;
        findBankRate(this->total_amount, "HDFC");
    }
};

int main()
{
    SBI s1;
    ICICI i1;
    HDFC h1;

    s1.setTotalAmountSBI();
    i1.setTotalAmountICICI();
    h1.setTotalAmountHDFC();
}