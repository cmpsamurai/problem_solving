#include <iostream>
#include <string.h>
#include <math.h>
#include <map>
#include <vector>
#include <sstream>


using namespace std;

int getval(char c)
{
    if(c=='X' or c=='/')
    {
        return 10;
    }
    return c-'0';
}

int getScore(string line)
{
    stringstream ss(line);
    int score=0;
    int oldscore=0;
    char curr;
    char next;
    int frame=0;
    vector<char> throws;
    
    while (ss>>curr)
    {
      throws.push_back(curr);
    }
    
    int i=0;
    while(i<throws.size()&&frame<=10)
    {
        curr=throws[i];
        //cout<<curr;
        frame++;
        next=throws[i+1];
        if(curr=='X')
        {
            oldscore=score;
           if(frame==10)
           {
            if(throws[i+2]=='/')
            {
                score+=20;
            }
            else if(next=='X'&&throws[i+2]=='X')
            {
            //cout<<"["<<oldscore<<"]";
            score+=30;
            i+=2;
            }
            else
            {
                  
                 score=score+10+getval(throws[i+1])+getval(throws[i+2]);
                 
            }
            break;
           }
           
           else if(next=='X')
            {
                score=score+20+getval(throws[i+2]);
                //cout<<":"<<score-oldscore<<"-";
            }
            else if(throws[i+2]=='/')
            {
                score+=20;
                //cout<<":"<<score-oldscore<<"-";
                
            }
            else
            {  
                score=score+10+getval(throws[i+1])+getval(throws[i+2]);
                //cout<<":"<<score-oldscore<<"-";
            }
             if(frame==10)
                {
                   // cout<<"con";
                    i+=2;
                    break;
                }
            
            
            
            
        }
        else  // not strike
        {
                        
            if(next=='/')  //spare
            {
                score=score+10+getval(throws[i+2]);
                //cout<<":"<<score-oldscore<<"-";
                i++;
                
                if(frame==10)
                {
                    i+=2;
                   // cout<<"con";
                }
            }
            else
            {
                score=score+getval(curr)+getval(next);
                //cout<<":"<<score-oldscore<<"-";
                
                
                i++;
            }
           
        }
        i++;  
        
        if(curr=='X'&&frame==10)
        {
            i+=2;
        }
        else if(next=='/'&&frame==10)
        {
            i+=1;
        }
        //cout<<"*"<<score<<"*";
    }
       //cout<<endl;
    return score;
}


int main()
{
    stringstream ss;
    string line;
    
    while(getline(cin,line))
    {
       
        if(line=="Game Over")
        {
            break;
        }
        cout<<getScore(line)<<endl;
        
        
        
    
    }
}
