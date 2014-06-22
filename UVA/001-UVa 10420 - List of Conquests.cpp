#include <iostream>
#include <string.h>
#include <math.h>
#include <map>
#include <vector>
#include <sstream>


using namespace std;

int main()
{
int N;
cin>>N;
string line,buffer;
getline(cin,line);

stringstream ss;
map<string,int> DICT;
map<string, int>::iterator itr;

for(int i=0;i<N;i++)
    {
        getline(cin,line);
        ss.str(line);
        ss.clear();
        ss>>buffer;
        itr=DICT.find(buffer);

        if(itr!=DICT.end())
        {
        DICT[buffer]++;
        }
        else
        {
        DICT[buffer]=1;
        }

    }
    
for(itr = DICT.begin();itr!=DICT.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }


}
