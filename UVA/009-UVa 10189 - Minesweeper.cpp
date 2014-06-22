#include <iostream>
#include <string.h>
#include <math.h>
#include <map>
#include <vector>
#include <sstream>


using namespace std;

int main()
{
    
    int x,y;
    char ** field;
    int curr=0;
    int temp;
    
    cin>>x>>y;
     
    do
    {
    curr++;
   
    if((x+y)==0) break;
    
    field=new char*[x+2];
    
    for(int i=0;i<x+2;i++)
    {
        field[i]=new char[y+2];
        
    }
    
    
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
        	
            cin>>field[i][j];
            
        }
    }
    
    
    cout<<"Field #"<<curr<<":"<<endl;
    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=y;j++)
        {
           temp=0;
           if(field[i][j]=='*')
           {
           cout<<'*';
           continue;
           }
           if(field[i+1][j]=='*') temp++;
           if(field[i][j+1]=='*') temp++;
           if(field[i-1][j]=='*') temp++;
           if(field[i][j-1]=='*') temp++;
           
           if(field[i+1][j+1]=='*') temp++;
           if(field[i-1][j-1]=='*') temp++;
           if(field[i-1][j+1]=='*') temp++;
           if(field[i+1][j-1]=='*') temp++;
           
           cout<<temp;
           
        }
        cout<<endl;
    }
    
    cin>>x>>y;
    if((x+y)!=0)
    {
        cout<<endl;
    }
    
    }
    while((x+y)!=0);
}
