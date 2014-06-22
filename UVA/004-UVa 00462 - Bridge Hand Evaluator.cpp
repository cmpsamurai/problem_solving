    #include <iostream>
    #include <string.h>
    #include <math.h>
    #include <map>
    #include <vector>
    #include <sstream>


    using namespace std;

    int main()
    {
        stringstream ss;
        string line;
        
        while(getline(cin,line))
        {
            ss.str(line);
            ss.clear();
            vector<string> S,H,D,C;
            bool stopped[4]={0,0,0,0};
            int points=0;
            for(int i=0;i<13;i++)
                {
                    string card;
                    ss>>card;
                    switch(card[0])
                    {
                        case 'A':
                            points+=4;
                            break;
                        case 'K':
                            points+=3;
                            break;
                        case 'Q':
                            points+=2;
                            break;
                        case 'J':
                            points+=1;
                            break;
                    }
                    
                    switch(card[1])
                    {
                        case 'S':
                            S.push_back(card);
                            break;
                        case 'H':
                            H.push_back(card);
                            break;
                        case 'D':
                            D.push_back(card);
                            break;
                        case 'C':
                            C.push_back(card);
                            break;                
                    }
                    
                    
                    
                }
                
                
                 //evaluating rules 2,3,4 for S
                    for(int i=0;i<S.size();i++)
                    {
                        if(S[i][0]=='A')
                        {
                            stopped[0]=1;
                        }
                        
                        
                        if(S[i][0]=='K')
                        {
                            if(S.size()==1){
                            points-=1;
                            }
                            else
                            {
                                stopped[0]=1;
                            }
                        }
                        
                        else if(S[i][0]=='Q')
                        {
                            if(S.size()<=2)
                            {
                            points-=1;
                            }
                            else
                            {
                                stopped[0]=1;
                            }
                        }
                        else if(S[i][0]=='J'&&S.size()<=3)
                        {
                            points-=1;
                        }
                        
                    }
                    
                    
                    
                    for(int i=0;i<H.size();i++)
                    {
                        if(H[i][0]=='A')
                        {
                            stopped[1]=1;
                        }
                        
                        
                        if(H[i][0]=='K')
                        {
                            if(H.size()==1){
                            points-=1;
                            }
                            else
                            {
                                stopped[1]=1;
                            }
                        }
                        
                        else if(H[i][0]=='Q')
                        {
                            if(H.size()<=2)
                            {
                            points-=1;
                            }
                            else
                            {
                                stopped[1]=1;
                            }
                        }
                        else if(H[i][0]=='J'&&H.size()<=3)
                        {
                            points-=1;
                        }
                        
                    }
                    
                    
                    
                    for(int i=0;i<D.size();i++)
                    {
                        if(D[i][0]=='A')
                        {
                            stopped[2]=1;
                        }
                        
                        
                        if(D[i][0]=='K')
                        {
                            if(D.size()==1){
                            points-=1;
                            }
                            else
                            {
                                stopped[2]=1;
                            }
                        }
                        
                        else if(D[i][0]=='Q')
                        {
                            if(D.size()<=2)
                            {
                            points-=1;
                            }
                            else
                            {
                                stopped[2]=1;
                            }
                        }
                        else if(D[i][0]=='J'&&D.size()<=3)
                        {
                            points-=1;
                        }
                        
                    }
                    
                    
                    
                    for(int i=0;i<C.size();i++)
                    {
                        if(C[i][0]=='A')
                        {
                            stopped[3]=1;
                        }
                        
                        
                        if(C[i][0]=='K')
                        {
                            if(C.size()==1){
                            points-=1;
                            }
                            else
                            {
                                stopped[3]=1;
                            }
                        }
                        
                        else if(C[i][0]=='Q')
                        {
                            if(C.size()<=2)
                            {
                            points-=1;
                            }
                            else
                            {
                                stopped[3]=1;
                            }
                        }
                        else if(C[i][0]=='J'&&C.size()<=3)
                        {
                            points-=1;
                        }
                        
                    }
                    
                    
                    
                    // checking and rules 4 5 6
                    
                    if(points>15 &&(stopped[0]==true&&stopped[1]==true&&stopped[2]==true&&stopped[3]==true))
                    {
                        cout<<"BID NO-TRUMP"<<endl;
                    }
                    else
                    {
                     
                     if(S.size()==2)
                     {
                        points+=1;
                     }
                     else if(S.size()==1||S.size()==0)
                     {
                        points+=2;
                     }
                     
                      if(H.size()==2)
                     {
                        points+=1;
                     }
                     else if(H.size()==1||H.size()==0)
                     {
                        points+=2;
                     }
                     
                     if(D.size()==2)
                     {
                        points+=1;
                     }
                     else if(D.size()==1||D.size()==0)
                     {
                        points+=2;
                     }
                     
                     if(C.size()==2)
                     {
                        points+=1;
                     }
                     else if(C.size()==1||C.size()==0)
                     {
                        points+=2;
                     }
                     
                     //cout<<"points :"<<points<<endl;
                     if(points<14) { cout<<"PASS"<<endl;}
                     else
                     {
                        int max=0;
                        
                        int sizes[4];
                        string _S="SHDC";
                        sizes[0]=S.size();
                        sizes[1]=H.size();
                        sizes[2]=D.size();
                        sizes[3]=C.size();
                        for(int i=0;i<4;i++)
                        {
                            if(sizes[i]>max) max=sizes[i];
                        }
                        
                        for(int i=0;i<4;i++)
                        {
                            if(sizes[i]==max) 
                            {
                            cout<<"BID "<<_S[i]<<endl;
                            break;
                            }
                        }
                     }
                    
                    }
                    
        }
    }
