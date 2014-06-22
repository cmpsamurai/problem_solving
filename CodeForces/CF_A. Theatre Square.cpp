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
float n,m,a;
    while(cin>>n>>m>>a)
    {
        cout<<ceil(n/(float)a)*ceil(m/(float)a)<<endl;
    }
return 0;
}