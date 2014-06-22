#include <iostream>
#include <string.h>
#include <math.h>
#include <map>
#include <vector>
#include <sstream>


using namespace std;

int getNextKilled(int k)
{
    bool* array=new bool[2*k];
    
    int steps=0;
    int todel=0;
    int m=5;
    
    while(steps<m)
    {
        todel++;
        if(array[todel%(2*k)]==true)
        {
            steps++;
        }
    }    
    cout<<todel<<endl;
    array[todel]=0;
    return todel;
}



int main()
{
int i;
cin>>i;
getNextKilled(i);

}
