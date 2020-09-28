#include <iostream>

using namespace std;

int main()
{
  int checkWin();
  void board();

  int player = 1, i, choice;

  char mark;

  do
  {
    board();
  }while (i == -1);
}

int checkwin(int square[3][3])
{

    if (square[1][1] == square[2][1] && square[2][1] == square[3][1])

        return 1;
    else if (square[2][1] == square[2][2] && square[2][2] == square[2][3])

        return 1;
    else if (square[3][1] == square[3][2] && square[3][2] == square[3][3])

        return 1;
    else if (square[1][1] == square[1][2] && square[1][2] == square[1][3])

        return 1;
    else if (square[2][1] == square[2][2] && square[2][2] == square[2][3])

        return 1;
    else if (square[3][1] == square[3][2] && square[3][2] == square[3][3])

        return 1;
    else if (square[1][1] == square[2][2] && square[2][2] == square[3][3])

        return 1;
    else if (square[3][1] == square[2][2] && square[2][2] == square[1][3])

        return 1;
    else if (square[1][1] != '1' && square[2][1] != '2' && square[3][1] != '3' 
                    && square[1][2] != '4' && square[2][2] != '5' && square[3][2] != '6' 
                  && square[3][1] != '7' && square[3][2] != '8' && square[3][3] != '9')

        return 0;
    else
        return -1;
}

void board (int square[3][3])
{
   cout << "Player 1 (X) - Player 2 (O)" << endl << endl;

   cout << "     |     |     " << endl;
   cout << "  " << square[1][1] << "  |  " << square[2][1] << "  |  " << square[3][1] << endl;

   cout << "_____|_____|_____" << endl;
   cout << "     |     |     " << endl;

   cout << "  " << square[2][1] << "  |  " << square[2][2] << "  |  " << square[2][3] << endl;

   cout << "_____|_____|_____" << endl;
   cout << "     |     |     " << endl;

   cout << "  " << square[3][1] << "  |  " << square[3][2] << "  |  " << square[3][3] << endl;

   cout << "     |     |     " << endl << endl;
}
