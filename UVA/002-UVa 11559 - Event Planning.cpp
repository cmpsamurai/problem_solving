#include <iostream>
#include <string.h>
#include <math.h>
#include <map>
#include <vector>
#include <sstream>


using namespace std;

int main()
{

int N,B,H,W,p;

while(cin>>N)
{
    
    cin>>B>>H>>W;
    //cout<<"-"<<N<<" "<<B<<" "<<H<<" "<<W<<endl;
    int min=-1;
    int temp;
    int cost;
    
    for(int i=0;i<H;i++)
    {
        cin>>p;
        for(int j=0;j<W;j++)
        {
            cin>>temp;
            //cout<<temp<<" ";
            if(temp>=N)
            {
                cost=N*p;
                if(cost<=B&&(cost<min||min==-1))
                {
                    min=cost;
                }
                
            }
            
            
        }
        
    
    }   
    
    if(min!=-1)
    {
        cout<<min<<endl;
    }
    else
    {
        cout<<"stay home"<<endl;
    }

}
}
