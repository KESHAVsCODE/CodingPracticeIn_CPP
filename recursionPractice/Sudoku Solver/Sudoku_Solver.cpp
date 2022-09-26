#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
bool isRightNumber(int r, int c, char Number, vector<vector<char>> &Board)
{
    for(int j=0; j<Board.size(); j++)
        if(Board[r][j]==Number)
            return false;
    for(int i=0; i<Board.size(); i++)
        if(Board[i][c]==Number)
            return false;
    int r1=(r/3)*3, c1=(c/3)*3;
    for(int i=r1; i<=r1+2; i++)
    {
        for(int j=c1; j<=c1+2; j++)
        {
            if(Board[i][j]==Number)
                return false;
        }
    }
    return true;
}
/* bool Sudoku_Solver(int r, int c,  vector<vector<char>> Board)
{
    if(r==Board.size())
    {
        for(auto &v: Board)
        {
            for(auto x: v)
                cout<<x<<" ";
            cout<<endl;
        }
        return false;
    }
    if(r<Board.size() && c==Board.size())
    {
        return Sudoku_Solver(r+1, 0, Board);
    }
    if(Board[r][c]=='.')
    {
        for(int i=49; i<58; i++)
        {
            if(isRightNumber(r, c, i, Board))
            {
                Board[r][c]=i;

                if(Sudoku_Solver(r, c+1, Board))
                    Board[r][c]='.';
                else
                    return false;
            }
        }
    }
    else
        Sudoku_Solver(r, c+1, Board);
    return true;                               // it means we should backtrack
} */
bool Sudoku_Solver(vector<vector<char>> &Board)
{
    int n = Board.size();
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(Board[i][j]=='.'){
                for(int k=49; k<=57; k++)
                {
                    if(isRightNumber(i, j, k, Board))
                    {
                        Board[i][j]=k;

                        if(Sudoku_Solver(Board))
                            return true;
                        else
                            Board[i][j]='.';

                    }
                }
                return false;
            }
        }
    }
            for(auto &v: Board)
        {
            for(auto x: v)
                cout<<x<<" ";
            cout<<endl;
        }
    return true;
}
int main()
{
    vector<vector<char>> Board={{'5','3','.','.','7','.','.','.','.'}, {'6','.','.','1','9','5','.','.','.'},{'.','9','8','.','.','.','.','6','.'},{'8','.','.','.','6','.','.','.','3'},{'4','.','.','8','.','3','.','.','1'},{'7','.','.','.','2','.','.','.','6'},{'.','6','.','.','.','.','2','8','.'},{'.','.','.','4','1','9','.','.','5'},{'.','.','.','.','8','.','.','7','9'}};
    Sudoku_Solver(Board);
   return 0;
}