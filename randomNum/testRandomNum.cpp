#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string.h>

int main()
{
    int n = 10;
    std::cout<<"lsklsk\n";
    //std::vector<int> temp;
    //std::vector<int>::iterator it;
    int temp[100] = {0};
    //char temp[] = {'a','b','c','d','e'};
    for(int j = 0; j < 100; ++j)
    {
        //temp.push_back(j+1);
        temp[j] = j+1;
    }
    std::random_shuffle(temp,temp+100);
    //random_shuffle(temp.begin(),temp.end());
    //for(it=temp.begin();it != temp.end(); ++it)
    //memset(temp+12,0,sizeof(temp)-12);
    bzero(temp+12,sizeof(temp)-12);
    for(int i = 0;i < 100; ++i)
    {
        //std::cout<<*it<<std::endl;
        std::cout<<temp[i]<<std::endl;
    }
    //copy(temp.begin(),temp.end(),ostream_iterator<int>(cout,"\n"));

    return 0;
}
