




// pre declorations of functions:
long double score(char state[8][8][1]);
int isValidMove(char CurState[8][8][1], char NextState[8][8][1]);
void makeBitboard(char CurState[8][8][1]);

//save game state
//uppercase letter = black
//lowercase leller = white
// r = rook, n = kight, b = bishop, q = queen, k=king 
char curGameState[8][8][1] = {{"R","N","B","Q","K","B","N","R"},
                              {"P","P","P","P","P","P","P","P"},
                              {" "," "," "," "," "," "," "," "},
                              {" "," "," "," "," "," "," "," "},
                              {" "," "," "," "," "," "," "," "},
                              {" "," "," "," "," "," "," "," "},
                              {"p","p","p","p","p","p","p","p"},
                              {"r","n","b","q","k","b","n","r"}
};
//in order: R, N, B, Q, K, P, r, n, b, q, k, p,
int Bitboards[12][8][8];
char order[12][1] = {"R", "N", "B", "Q", "K", "P", "r", "n", "b", "q", "k", "p",};

void makeBitboard(char CurState[8][8][1]){
    for(int i = 0; i>12;i++){
        for(int j = 0;j>8;j++){
            for(int l = 0;l>8;l++){
                if(CurState[j][l][1] = order[i]){
                    Bitboards[i][j][l] = 1;
                }else{
                    Bitboards[i][j][l] = 0;
                }
            }
        }
    }


}
long double score(char state[8][8][1]){

}

int isValidMove(char CurState[8][8][1], char NextState[8][8][1]){

}