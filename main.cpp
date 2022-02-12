#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <vector<char> > arr(3, vector<char> (3,'_'));
    int c=0,flag=0;
    do
    {
        int row,col;
        if(c%2) cout << "Player 2's turn\n";
        else cout << "Player 1's turn\n";
        cout << "Select the row and column:\n";
        cin >> row >> col;
        row--;
        col--;
        if(arr[row][col]=='O' || arr[row][col]=='X')
            cout << "\nERROR: An occupied field was selected.\n\n";
        else
        {
            c++;
            if(c%2) arr[row][col]='X';
            else arr[row][col]='O';
            int i,j;
            for(i=0;i<3;i++)
            {
                cout << "\t\t";
                for(j=0;j<3;j++)
                    cout << arr[i][j] << '\t';
                cout << "\n\n";
            }
            if(row==0 && col==0)
            {
                if((arr[row][col]==arr[row][col+1]&&arr[row][col]==arr[row][col+2]) || (arr[row][col]==arr[row+1][col+1]&&arr[row][col]==arr[row+2][col+2]) || (arr[row][col]==arr[row+1][col]&&arr[row][col]==arr[row+2][col]))
                    flag=1;
            }
            else if(row==0 && col==1)
            {
                if((arr[row][col]==arr[row][col-1]&&arr[row][col]==arr[row][col+1]) || (arr[row][col]==arr[row+1][col]&&arr[row][col]==arr[row+2][col]))
                    flag=1;
            }
            else if(row==0 && col==2)
            {
                if((arr[row][col]==arr[row][col-2]&&arr[row][col]==arr[row][col-1]) || (arr[row][col]==arr[row+1][col-1]&&arr[row][col]==arr[row+2][col-2]) || (arr[row][col]==arr[row+1][col]&&arr[row][col]==arr[row+2][col]))
                    flag=1;
            }
            else if(row==1 && col==0)
            {
                if((arr[row][col]==arr[row][col+1]&&arr[row][col]==arr[row][col+2]) || (arr[row][col]==arr[row-1][col]&&arr[row][col]==arr[row+1][col]))
                    flag=1;
            }
            else if(row==1 && col==1)
            {
                if((arr[row][col]==arr[row][col-1]&&arr[row][col]==arr[row][col+1]) || (arr[row][col]==arr[row-1][col-1]&&arr[row][col]==arr[row+1][col+1]) || (arr[row][col]==arr[row-1][col+1]&&arr[row][col]==arr[row+1][col-1]) || (arr[row][col]==arr[row-1][col]&&arr[row][col]==arr[row+1][col]))
                    flag=1;
            }
            else if(row==1 && col==2)
            {
                if((arr[row][col]==arr[row][col-2]&&arr[row][col]==arr[row][col-1]) || (arr[row][col]==arr[row-1][col]&&arr[row][col]==arr[row+1][col]))
                    flag=1;
            }
            else if(row==2 && col==0)
            {
                if((arr[row][col]==arr[row][col+1]&&arr[row][col]==arr[row][col+2]) || (arr[row][col]==arr[row-1][col+1]&&arr[row][col]==arr[row-2][col+2]) || (arr[row][col]==arr[row-2][col]&&arr[row][col]==arr[row-1][col]))
                    flag=1;
            }
            else if(row==2 && col==1)
            {
                if((arr[row][col]==arr[row][col-1]&&arr[row][col]==arr[row][col+1]) || (arr[row][col]==arr[row-2][col]&&arr[row][col]==arr[row-1][col]))
                    flag=1;
            }
            else if(row==2 && col==2)
            {
                if((arr[row][col]==arr[row][col-2]&&arr[row][col]==arr[row][col-1]) || (arr[row][col]==arr[row-1][col-1]&&arr[row][col]==arr[row-2][col-2]) || (arr[row][col]==arr[row-2][col]&&arr[row][col]==arr[row-1][col]))
                    flag=1;
            }
            if(flag) break;
        }
    }while(c!=9);
    if(flag)
    {
        if(c%2) cout << "Player 1 won\n";
        else cout << "Player 2 won\n";
    }
    else cout << "No one won\n";
    return 0;
}
