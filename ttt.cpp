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
    //board();
  }while (i == -1);
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
