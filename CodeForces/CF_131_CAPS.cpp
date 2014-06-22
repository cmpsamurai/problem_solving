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
string word;
cin>>word;

string nword="";
bool wrong=true;

for(int i=1;i<word.size();i++)
{
if(islower(word[i])){wrong=false;}
}

if(wrong&&islower(word[0]))
{
    wrong=true;
}




if(wrong&&islower(word[0]))
{
nword+=toupper(word[0]);
}
else
{
nword+=tolower(word[i]);
}

for(int i=1;i<word.size();i++)
{
if(wrong&&isupper(word[i]))
{
nword+=tolower(word[i]);
}
}

if(!wrong){cout<<word;}

cout<<nword;
return 0;
}