#include <iostream>
#include <iomanip>
using namespace std;

class ticTacToe{
      char b[3][3]; //two dimenstional  array
public:
      ticTacToe(); //constructor
      void board(); //prints the game board
      void Input_p1(int); //takes the input from the user
      bool Checker(); //checks the winner
};
int main()
{
      ticTacToe game; //creating object
      game.board(); //display the game board
      for (int i = 1; i <= 9; i++) //takes the game input from the user
      {
            game.Input_p1(i);
            if (game.Checker())
                  break;
            if (i + 1 == 10)
            {
                  cout << "NO one WUNS\n";
            break;
            }
            i++;
            game.Input_p1(i);
            if (game.Checker())
                  break;
            if (i+1 == 10)
                  cout << "NO one WUNS\n";
      }
      system("pause");
}
ticTacToe::ticTacToe() //constructor to intialize the 3by3 array
{
      b[0][0] = '1';
      b[0][1] = '2';
      b[0][2] = '3';
      b[1][0] = '4';
      b[1][1] = '5';
      b[1][2] = '6';
      b[2][0] = '7';
      b[2][1] = '8';
      b[2][2] = '9';
}
void ticTacToe::board()//function to create  the game board
{
      for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
            {
                  cout << " "<<b[i][j];
                  if (j <= 1)
                        cout << " |";
                  else
                        cout << endl;
                  if (j == 2&&i<2)
                        cout << "-----------" << endl;
            }
}
void ticTacToe::Input_p1(int a) //function that takes input from the user
{
      int n, temp = 0;
      char c;
      if (a == 1 || a == 3 || a == 5 || a == 7 || a == 9)
      {
            cout << "Player 'X' Turn" << endl;
            c = 'X';
      }
      else
      {
            cout << "Player 'O' Turn" << endl;
            c = 'O';
      }
     
      cout << "Enter the Box no :";
      do{ // loop to take the box number AGAIN if user enters in correct number
            if (temp == 1)
                  cout << "  Again Enter the box no:";
            while (!(cin >> n))
            {
                  cin.clear();
                  cin.ignore(900, '\n');
                  cout << "  Invalid!\n  Again Enter the box no :";
            }
            if (n < 0 || n>9)
                  temp = 1;
            switch (n)
            {
            case 1:
                  if (b[0][0] == 'X'||b[0][0]=='O')
                        temp = 1;
                  else
                  {
                        b[0][0] = c;
                        temp = 0;
                  }
                  break;     
     
            case 2:
                  if (b[0][1] == 'X' || b[0][1] == 'O')
                        temp = 1;
                  else
                  {
                        b[0][1] = c;
                        temp = 0;
                  }
                  break;
           
            case 3: 
                  if (b[0][2] == 'X' || b[0][2] == 'O')
                        temp = 1;
                  else
                  {
                        b[0][2] = c;
                        temp = 0;
                  }
                  break;
            case 4:
                  if (b[1][0] == 'X' || b[1][0] == 'O')
                  temp = 1;
                  else
                  {
                        b[1][0] = c;
                        temp = 0;
                  }
                  break;
     
            case 5:
                  if (b[1][1] == 'X' || b[1][1] == 'O')
                        temp = 1;
                  else
                  {
                        b[1][1] = c;
                        temp = 0;
                  }
                  break;
            case 6:
                  if (b[1][2] == 'X' || b[1][2] == 'O')
                        temp = 1;
                  else
                  {
                        b[1][2] = c;
                        temp = 0;
                  }
                  break;
            case 7:
                  if (b[2][0] == 'X' || b[2][0] == 'O')
                        temp = 1;
                  else
                  {
                        b[2][0] = c;
                        temp = 0;
                  }
                  break;
           
            case 8:
                  if (b[2][1] == 'X' || b[2][1] == 'O')
                        temp = 1;
                  else
                  {
                        b[2][1] = c;
                      temp = 0;
                }
                  break;
            case 9:
                  if (b[2][2] == 'X' || b[2][2] == 'O')
                        temp = 1;
                  else
                  {
                        b[2][2] = c;
                        temp = 0;
                  }
                  break;
            }
      }while(temp != 0);
      board();
}

bool ticTacToe::Checker() //checks the winner
{
      if ((b[0][0] == 'X'&& b[0][1] == 'X'&&b[0][2] == 'X') ||
            (b[1][0] == 'X'&& b[1][1] == 'X'&&b[1][2] == 'X') ||
            (b[2][0] == 'X'&& b[2][1] == 'X'&&b[2][2] == 'X') ||
            (b[0][0] == 'X'&& b[1][0] == 'X'&&b[2][0] == 'X') ||
            (b[0][1] == 'X'&& b[1][1] == 'X'&&b[2][1] == 'X') ||
            (b[0][1] == 'X'&& b[1][1] == 'X'&&b[2][1] == 'X') ||
            (b[0][2] == 'X'&& b[1][1] == 'X'&&b[2][0] == 'X')||
            (b[0][0] == 'X'&& b[1][1] == 'X'&&b[2][2] == 'X'))
      {
            cout << "Player 'X' WINS" << endl;
            return 1;
      }
      else if ((b[0][0] == 'O'&& b[0][1] == 'O'&&b[0][2] == 'O') ||
            (b[1][0] == 'O'&& b[1][1] == 'O'&&b[1][2] == 'O') ||
            (b[2][0] == 'O'&& b[2][1] == 'O'&&b[2][2] == 'O') ||
            (b[0][0] == 'O'&& b[1][0] == 'O'&&b[2][0] == 'O') ||
            (b[0][1] == 'O'&& b[1][1] == 'O'&&b[2][1] == 'O') ||
            (b[0][1] == 'O'&& b[1][1] == 'O'&&b[2][1] == 'O') ||
            (b[0][2] == 'O'&& b[1][1] == 'O'&&b[2][0] == 'O') ||
            (b[0][0] == 'O'&& b[1][1] == 'O'&&b[2][2] == 'O'))
            cout << "Player 'O' WINS" << endl;
      else
            return 0;
}
