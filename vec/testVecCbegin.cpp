// vector::cbegin/cend return a const_iterator so call it cbegin(const begin),and so cend.
// 不能编译通过是由于编译器版本
#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> myvector = {10,20,30,40,50};

    std::cout << "myvector contains:";

    for (auto it = myvector.cbegin(); it != myvector.cend(); ++it)
        std::cout << ' ' << *it;
    std::cout << '\n';

    return 0;
}
