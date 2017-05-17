// inserting into a vector
#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> myvector (3,100);
    std::vector<int>::iterator it;

    std::vector<int>::iterator it_1;
    std::vector<int>::iterator it_2;
    std::vector<int>::iterator it_3;
    std::vector<int>::iterator it_4;
    std::vector<int>::iterator it_5;

    std::cout << "111myvector contains:";
    for (it_1=myvector.begin(); it_1<myvector.end(); it_1++)
        std::cout << ' ' << *it_1;
    std::cout << '\n';

    it = myvector.begin();
    it = myvector.insert ( it , 200 );

    std::cout << "222myvector contains:";
    for (it_2=myvector.begin(); it_2<myvector.end(); it_2++)
        std::cout << ' ' << *it_2;
    std::cout << '\n';

    myvector.insert (it,2,300);

    std::cout << "333myvector contains:";
    for (it_3=myvector.begin(); it_3<myvector.end(); it_3++)
        std::cout << ' ' << *it_3;
    std::cout << '\n';

    // "it" no longer valid, get a new one:
    //it = myvector.begin();

    std::vector<int> anothervector (2,400);
   myvector.insert (it+2,anothervector.begin(),anothervector.end());
    std::cout << "444myvector contains:";
    for (it_4=myvector.begin(); it_4<myvector.end(); it_4++)
        std::cout << ' ' << *it_4;
    std::cout << '\n';

    int myarray [] = { 501,502,503 };
    myvector.insert (myvector.begin(), myarray, myarray+3);

    std::cout << "555myvector contains:";
    for (it_5=myvector.begin(); it_5<myvector.end(); it_5++)
        std::cout << ' ' << *it_5;
    std::cout << '\n';

    return 0;
}
