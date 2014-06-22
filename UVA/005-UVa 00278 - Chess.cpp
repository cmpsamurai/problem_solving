    #include <iostream>
    #include <string.h>
    #include <math.h>
    #include <map>
    #include <vector>
    #include <sstream>


    using namespace std;

    
    
    int getPossiblePieces(char p,int L,int W)
    {
     if(p=='r'){return min(L,W);}
     else if(p=='k')
     {
        	bool flag = false;
            int white,black;
			white = black = 0;
            int result;
			//generating the board to obtain the number of black and white room
			for (int i = 0; i < L; ++i){
				if (!flag) flag = true;
				else flag = false;

				for (int j = 0; j < W; j+=2){
					if (flag) ++white;// board[i][j] = 'w';
					else ++black; //board[i][j] = 'b';
				}

				for (int j = 1; j < W; j+=2){
					if (!flag) ++white; //board[i][j] = 'w';
					else ++black; //board[i][j] = 'b';
				}
			}
			result = max(black, white);
			return result;
     }
     else if(p=='K')
     {
        return ( ((L+1) / 2) * ((W+1)/2));
     }
     else if(p=='Q')
     {
        return min(L,W);;
     
     }
    
    }
    
    
    int main()
    {
      int N,L,W;
      cin>>N;
      char p;
      
      for(int i=0;i<N;i++)
      {
        cin>>p>>L>>W;
        cout<<getPossiblePieces(p,L,W)<<endl;
      }
    }
