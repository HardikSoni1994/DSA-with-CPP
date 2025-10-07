#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1{10, 20, 30, 40, 50, 60, 70, 80};
    // v1.insert(v1.begin() + 2, 100);
    v1.erase(v1.begin() + 3, v1.end() - 1);

    // v1.push_back(12);
    // v1.push_back(24);
    // v1.push_back(36);
    // v1.push_back(48); // aa push and pop method store data in Heap Section..

    // cout << v1.front() << endl;
    // cout << v1.back() << endl;
    // cout << v1[0] << endl;
    // cout << v1[v1.size() - 1] << endl;

    // forEach Loop
    cout << "Vector is : ";
    for (int element : v1)
    {
        cout << element << " ";
    }

    // v1.pop_back();

    //  cout << "Vector is Empty : " << v1.empty() << endl;

    // cout << "Vector is : ";
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1.at(i) << " ";
    // }
    // cout << endl;

    // v1.clear();
    // cout << "Vector Length : " << v1.size() << endl;

    return 0;
}