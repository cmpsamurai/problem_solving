#include <iostream>
#include <string.h>
#include <math.h>
#include <map>
#include <vector>
#include <sstream>


using namespace std;



int getJoseph(int m)
{
    int curr=0;
    bool found=false;
    int todel;
    int crossed;
    bool* ring;
    while (true)
    {
        curr++;
        found=true;
        crossed=0;
        ring=new bool[2*m];
        for(int i=0;i<2*m;i++)
        {
            ring[i]=true;
        }
        
        int last=-1;
        
        
        while(crossed<m)
        {
            int steps=0;
            while(steps<curr)
            {
                last=(last+1)%(2*m);
                if(ring[last]==true) steps++;
                
            }
            if(last<m) {found=false; break;}
            ring[last]=false;
            //cout<<last<<endl;
            
            crossed++;
        }
        
        //cout<<"done "<<curr<<"m: "<<m<<endl;
        /*
        found=true;
        for(int k=0;k<m;k++)
        {
            if(ring[k]==false)
            {
                found=false;
            }
        }*/
        
        if(found) return curr;

    }
    
}


int main()
{
    int m;
    cin>>m;
    while(m>0)
    {
        cout<<getJoseph(m)<<endl;
        cin>>m;
        
    }
}
