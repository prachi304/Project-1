#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <vector<char> > arr(3, vector<char> (3,'_'));
    int num=0;
    cout << "\n\t\t\t\tWelcome to the game of TIC-TAC-TOE!\n\nChoose a cell number between 1-9 to play.\n";
    for(int i=0;i<3;i++)
    {
        cout << "\t\t";
        for(int j=0;j<3;j++)
            cout << ++num << '\t';
        cout << "\n\n";
    }
    int c=0,flag=0;
    do
    {
        int row,col;
        if(c%2) cout << "Player 2's turn\n";
        else cout << "Player 1's turn\n";
        cout << "Select the number:\n";
        cin >> num;
        switch(num)
        {
        case 1:
            row=0;
            col=0;
            break;
        case 2:
            row=0;
            col=1;
            break;
        case 3:
            row=0;
            col=2;
            break;
        case 4:
            row=1;
            col=0;
            break;
        case 5:
            row=1;
            col=1;
            break;
        case 6:
            row=1;
            col=2;
            break;
        case 7:
            row=2;
            col=0;
            break;
        case 8:
            row=2;
            col=1;
            break;
        case 9:
            row=2;
            col=2;
            break;
        default:
            cout << "\nERROR. Please enter a value between 1-9\n\n";
        }
        if(num<1 || num>9) continue;
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
    cout << "Result: ";
    if(flag)
    {
        if(c%2) cout << "Player 1 won!\n";
        else cout << "Player 2 won!\n";
    }
    else cout << "It is a draw.\n";
    return 0;
}
