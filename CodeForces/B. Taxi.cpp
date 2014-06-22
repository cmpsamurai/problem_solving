/*************************************************************************
 * Copyright (C) 2008 by Moustafa Mahmoud (cmpsamurai)                   *
 * moustafa@cmpsamurai.com                                               *
 *************************************************************************/
/*C++ " B. Taxi " */

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <math.h>
using namespace std;



int main()
{
int n;
cin>>n;

int temp;
int num=0;
vector<int> nums;
for(int i=0;i<n;i++)
{
    cin>>temp;
    nums.push_back(temp);
}

sort(nums.begin(),nums.end());
int intaxi=0;

for(int i=0;i<nums.size();i++)
{
    if(intaxi+nums[i]<=4)
    {
        intaxi+=nums[i];
    }
    else
    {
        num++;
        intaxi=nums[i];
    }
}

cout<<num+1;
}