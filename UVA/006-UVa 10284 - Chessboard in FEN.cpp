    #include <iostream>
    #include <string.h>
    #include <math.h>
    #include <map>
    #include <vector>
    #include <sstream>


    using namespace std;

    
    
    int getPossiblePieces(int L,int W)
    {
            if(L==1||W==1)
            {
                return L*W;
            }
            if (L==2&&W==2)
            {
                return L*W;
            }
             if (L==2&&W==3)
            {
                return 4;
            }
            
            if (L==3&&W==2)
            {
                return 4;
            }
            
            if(L==2||W==2){
            int a=(L>W)?L:W;
            if(a%2!=0||(a/2)%2!=0){
                a=((a/2)+1)*2;
                return a;
            }
            }
            
            return ((L*W)+1)/2; 
             
        
     
    }
    
    
    int main()
    {
      int L,W,Result;
      
      while(cin>>L)
      {
      cin>>W;
      Result=getPossiblePieces(L,W);
      if(Result>0)
      {
      cout<<Result<<" knights may be placed on a "<<L<<" row "<<W<<" column board."<<endl;
      }
      }
      
     
    }
