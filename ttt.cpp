#include <iostream>
using namespace std;

int checkwin(int square[3][3])
{
    //row 1
    if (square[0][0] == square[1][0] && square[1][0] == square[2][0])

        return 1;
    //row 2
    else if (square[0][1] == square[1][1] && square[1][1] == square[2][1])

        return 1;
    //row 3
    else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])

        return 1;
    //column 1
    else if (square[0][0] == square[0][1] && square[0][1] == square[0][2])

        return 1; 
    //column 2
    else if (square[1][0] == square[1][1] && square[1][1] == square[1][2])

        return 1;
    //column 3
    else if (square[2][0] == square[2][1] && square[2][1] == square[2][2])

        return 1;

    //diagonals
    else if (square[0][0] == square[1][1] && square[1][1] == square[2][2])

        return 1;
    else if (square[2][0] == square[1][1] && square[1][1] == square[0][2])

        return 1;
    else if (square[0][0] != '1' && square[1][0] != '2' && square[2][0] != '3' 
                    && square[0][1] != '4' && square[1][1] != '5' && square[2][1] != '6' 
                  && square[0][2] != '7' && square[1][2] != '8' && square[2][2] != '9')

        return 0;
    else
        return -1;
}


void board(int square[3][3])
{

    //system("cls");

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[0][0] << "  |  " << square[1][0] << "  |  " << square[2][0] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[0][1] << "  |  " << square[1][1] << "  |  " << square[2][1] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[0][2] << "  |  " << square[1][2] << "  |  " << square[2][2] << endl;

    cout << "     |     |     " << endl << endl;
}


int main()
{

  //int checkwin();

  int square[3][3] = {1,4,7,2,5,8,3,6,9};
  board(square);
	int player = 1, i, choice;

    char mark;
    do
    {
        board(square);
        
        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[0][0] == '1')

            square[0][0] = mark;
        else if (choice == 2 && square[1][0] == '2')

            square[1][0] = mark;
        else if (choice == 3 && square[2][0] == '3')

            square[2][0] = mark;
        else if (choice == 4 && square[0][1] == '4')

            square[0][1] = mark;
        else if (choice == 5 && square[1][1] == '5')

            square[1][1] = mark;
        else if (choice == 6 && square[2][1] == '6')

            square[2][1] = mark;
        else if (choice == 7 && square[0][2] == '7')

            square[0][2] = mark;
        else if (choice == 8 && square[1][2] == '8')

            square[1][2] = mark;
        else if (choice == 9 && square[2][2] == '9')

            square[2][2] = mark;
        else
        {
            cout<<"Invalid move ";

            //go back to the turn
            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin(square);

        player++;
    }while(i==-1);
    board(square);
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}
