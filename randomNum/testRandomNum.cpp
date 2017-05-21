#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

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
        //std::cout<<temp[i]<<std::endl;
    }
    //const char* tempbuffer = "lsk123987";
    char tempbuffer[100];
    std::string buffer;
    //bzero(buffer,sizeof(buffer));
    buffer.append(tempbuffer);
    for(int i = 0;i < 100; ++i)
    {
        sprintf(tempbuffer,"-%d",i);
        buffer.append(tempbuffer);
    }
   //int j = 12346;
   //itoa(j,buffer,10);
   std::cout<<buffer<<std::endl;
   char* buf = (char *)buffer.c_str();
    //copy(temp.begin(),temp.end(),ostream_iterator<int>(cout,"\n"));
   char* ptr = strtok(buf,"-");
    //std::vector<string>iteritor it_str;
    while(ptr != NULL)
    {
        std::stringstream ss;
        ss<<ptr;
        int num = 0;
        ss>>num;
        std::cout<<ptr<<std::endl;
        printf ("%d\n",num);
        ptr = strtok (NULL, "-");
    }
    return 0;
}
