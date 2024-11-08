/*
maze[][] = 2d ,matric

only two moves allowed from (i,j)
    - (i+1,j)
    -(i,j+1)

*/

/*
//   BACKTRACKING  SOLUTIION

boo issafe(int i,int j)
{
    return(i<n && j<n && maze[i][j]==1);
}

bool maze[n][n],sol[n][n];

bool solveMaze()
{
    if(solveMazeRec(0,0)==false)
        return false;
    else
        {
            printMatric(sol);
            return true;
        }    
}
boolean solveMazeRec(int i,int j)
{
    if(i==n-1 && j=n-1){sol[i][j]=1; return true;}
    if(issafe(i,j)==true)
    {
        sol[i][j]=1;
        if(solveMazeRec(i+1,j)==true) return true;
        else if(solveMazeRec(i,j+1)==true) return true;
        sol[i][j]=0;
    }
    return false;
}

*/