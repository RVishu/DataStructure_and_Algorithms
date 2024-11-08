/*
SUPERNIEVE- n^2[C]n  -> permutations of putting n queens at n^2 places

NAIVE SOLUTION- Gnerate all permutaion of row number


*/




/*


bool isSafe(int row,int col)
{
    for(int i=0;i<col;i++)
        if(board[row][i])
            return false;

    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
        if(board[i][j])
            return false;

    for(int i=row,j=col;j>=0 && i<n ;i++,j--)
        if(board[i][j])
            return false;                

    return true;
}











bool board[N][N]

bool solve()
{
    if(solveRec(0)==false)
        return false;
    else
    {
        printmatrix(board);
        return true;
    }    
}
bool solveRec(int col)
{
    if(col==N) return true;
    for(int i=0;i<N<i++)  // here this syntax was in video
    {
        if(isSafe(i,col))
        {
            board[i][col]=1;
            if(solveRec(col+1))
                return true;
            board[i][col]=0;
        }   
    }
    return false;
}



*/