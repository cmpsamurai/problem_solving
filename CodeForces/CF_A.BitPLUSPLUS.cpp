/*************************************************************************
 * Copyright (C) 2008 by Moustafa Mahmoud (cmpsamurai)                   *
 * moustafa@cmpsamurai.com                                               *
 *************************************************************************/
/*C++ " A. Bit++ " */

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
int x=0;
int n;
cin>>n;
string temp;
for(int i=0;i<n;i++)
{
cin>>temp;
if(temp[0]=='+'||temp[1]=='+')x++;
else x--;
}
cout<<x<<endl;
return 0;
}