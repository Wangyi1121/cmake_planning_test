#include<iostream>
#include "process.h"

using std::cout,std::endl;

void Process::planProcess()
{
    cout<<"This is Process class planProcess function."<<endl;
    my_map.mapInfo();
    cout<<"Finished planProcess function."<<endl;
};