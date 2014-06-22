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
int max=0;
int intram=0;

int a,b;

cin>>n;
for(int i=0;i<n;i++)
{
cin>>a>>b;
intram+=(b-a);
if(intram>max){max=intram;};
}
cout<<max;

}