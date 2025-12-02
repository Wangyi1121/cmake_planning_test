#include<iostream>
#include "process.h"

using std::cout,std::endl;

int main()
{
    cout<<"planning start"<<endl;
    Process my_process;
    my_process.planProcess();
    cout<<"planning end"<<endl;
    return 0;
}