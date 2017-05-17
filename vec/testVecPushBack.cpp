// vector::push_back
#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> myvector;
    int myint;

    std::cout << "Please enter some integers (enter 0 to end):\n";

    do {
        std::cin >> myint;
        myvector.push_back (myint);
        std::vector<int>::iterator it;
        std::cout << "lsk_test contains:";
        for (it=myvector.begin(); it<myvector.end(); it++)
            std::cout << ' ' << *it;
        std::cout << '\n';
    } while (myint);

    std::cout << "myvector stores " << int(myvector.size()) << " numbers.\n";

    return 0;
}
