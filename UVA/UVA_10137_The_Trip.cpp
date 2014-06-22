
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int chainLen(int n)
{

    int counter=1;
    while(n!=1)
    {
        if(n&1) 
        {
            n=3*n+1;
        }
        else 
        {
            n=n>>1;
        }
        counter++;    
    }
    return counter;
}


int main()
{

int Dict[1000000]={0};
string line;
stringstream ss;

int x,y;


while(getline(cin,line))
{
    ss.str(line);
    ss.clear();
    ss>>x>>y;
    bool swap=false;
   
    if(y<x)
    {
        int temp=x;
        x=y;
        y=temp;
        swap=true;
    }
   
    int max=-1;
    int clen;
    for(int i=x;i<=y;i++)
    {
        if(Dict[i]==0)
        {
            clen=chainLen(i);
            Dict[i]=clen;
        }
        else
        {
            clen=Dict[i];
        }
        if(clen>max||max==-1)
        {
            max=clen;
        }
    }
    if(!swap)
    {
    cout<<x<<" "<<y<<" "<<max<<endl;
    }
    else
    {
    cout<<y<<" "<<x<<" "<<max<<endl;
    }
}


return 0;
}