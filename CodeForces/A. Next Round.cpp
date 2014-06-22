/*************************************************************************
 * Copyright (C) 2008 by Moustafa Mahmoud (cmpsamurai)                   *
 * moustafa@cmpsamurai.com                                               *
 *************************************************************************/
/*C++ " A. Theatre Square " */

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
int k,n,temp;
int num=0;

cin>>k>>n;
for(int i=0;i<n;i++)
{
    cin>>temp;
    if(temp>n){num++;}
    
}
while(cin>>temp&&temp>n){num++;}
cout<<num;

return 0;
}