#include <iostream>
#include <string.h>
#include <math.h>
#include <map>
#include <vector>
#include <sstream>


using namespace std;

int main()
{
    int num_cases;
    cin>>num_cases;
    int key,value;
    int to_be;
    int n_players,n_teleporters,n_rolls;
    
    for(int i=0;i<num_cases;i++)
    {
        cin>>n_players>>n_teleporters>>n_rolls;
       //cout<<"np:"<<n_players<<" nt:"<<n_teleporters<<" nr:"<<n_rolls<<endl;
        to_be=1;
        
        map<int,int> teleporters;
        
        
        for(int j=0;j<n_teleporters;j++)
        {
            cin>>key>>value;
            if(value<=100)
            {
            teleporters[key]=value;
            }
            else
            {
            teleporters[key]=100;
            }
        }
        
        
        // initializing player moves 
        int* player_pos= new int [n_players];
        
        for (int j=0;j<n_players;j++)
        {
            player_pos[j]=1;
        }
        
        
        // simulating rolls ;
        for(int j=0;j<n_rolls;j++)
        {
            cin>>value;
            to_be=value+player_pos[j%n_players];
                    //player_pos.erase(player_pos.begin() + (j%player_pos.size()) );   
            
            while(teleporters.count(to_be)!=0)
            {
                to_be=teleporters[to_be];
            }
            
            player_pos[j%n_players]=to_be;
            
            
            if(player_pos[j%n_players]>=100)
            {
                player_pos[j%n_players]=100;
                
                for(int m=j+1;m<n_rolls;m++)
                {
                	cin>>value;
                }
                break;
            }
            
        }
        
        for (int j=0;j<n_players;j++)
        {
            cout<<"Position of player "<<j+1<<" is "<<player_pos[j]<<"."<<endl;
        }
        
        delete player_pos;
       
    }
}
