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
bool a,b,c;
int n;
cin>>n;

int count=0;

for(int i=0;i<n;i++)
{
    cin>>a>>b>>c;
    if(a+b+c>=2) count++;
}

cout<<count;
return 0;
}