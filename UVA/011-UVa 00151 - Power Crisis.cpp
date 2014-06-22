#include <iostream>
#include <string.h>
#include <math.h>
#include <map>
#include <vector>
#include <sstream>


using namespace std;



int getForLast(int m)
{
    int curr=0;
    bool found=false;
    int todel;
    
    while (true)
    {
        curr++;
        int crossed=0;
        bool* ring=new bool[m];
        for(int i=0;i<m;i++)
        {
            ring[i]=true;
        }
        
        int last=0;
        
        ring[0]=false;
        
        while(crossed<m-2)
        {
            int steps=0;
            while(steps<curr)
            {
                last=(last+1)%(m);
                if(ring[last]==true) steps++;
                
            }
            
            ring[last]=false;
            //cout<<last+1<<endl;
            crossed++;
        }
        
        //cout<<"done"<<endl;
        if(ring[12]==true) return curr;
    }
    
}


int main()
{
    int m;
    cin>>m;
    while(m>0)
    {
        cout<<getForLast(m)<<endl;
        cin>>m;
        
    }
}
