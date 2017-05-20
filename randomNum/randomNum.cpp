#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template<class RandomAccessIterator>
    void random_shuffle(
        RandomAccessIterator _First,
        RandomAccessIterator _Last
        );


void randperm(int Num)
{
    vector<int> temp;
    for (int i = 0; i < Num; ++i)
    {
        temp.push_back(i + 1);
    }

    random_shuffle(temp.begin(), temp.end());

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}
int main()
{
    randperm(10);

    return 0;
}

