#pragma once

#include <iostream>
using namespace std;

class Box
{
public:

    bool Filled;
    char Mark;
    int Owner;

    Box()
    {
        Filled = false;
        Mark = NULL;
        Owner = 0;
    }
};

class C_TicTacToe : public Box
{
private:
    Box Boxes[9];
    int GameFinished;  // 0 -> Not Finished , 1 -> Finished , 2 -> Draw 
    int PlayerTurn;
    int Winner;

public:
    C_TicTacToe()
    {
        GameFinished = 0;
        PlayerTurn = 1;
        Winner = NULL;
    }

    void FillBox(int Number, char Mark)
    {
        if (Boxes[Number].Filled == false)
        {
            Boxes[Number].Filled = true;
            Boxes[Number].Mark = Mark;
            Boxes[Number].Owner = PlayerTurn;

            if ((Boxes[0].Owner == Boxes[1].Owner && Boxes[0].Owner == Boxes[2].Owner && Boxes[0].Owner != 0)
                || (Boxes[0].Owner == Boxes[3].Owner && Boxes[0].Owner == Boxes[6].Owner && Boxes[0].Owner != 0)
                || (Boxes[0].Owner == Boxes[4].Owner && Boxes[0].Owner == Boxes[8].Owner && Boxes[0].Owner != 0)
                || (Boxes[1].Owner == Boxes[4].Owner && Boxes[1].Owner == Boxes[7].Owner && Boxes[1].Owner != 0)
                || (Boxes[2].Owner == Boxes[4].Owner && Boxes[2].Owner == Boxes[6].Owner && Boxes[2].Owner != 0)
                || (Boxes[3].Owner == Boxes[4].Owner && Boxes[3].Owner == Boxes[5].Owner && Boxes[3].Owner != 0)
                || (Boxes[6].Owner == Boxes[7].Owner && Boxes[6].Owner == Boxes[8].Owner && Boxes[6].Owner != 0))
            {
                GameFinished = 1;
                Winner = PlayerTurn;
            }

            if (PlayerTurn == 1)
            {
                PlayerTurn = 2;
            }
            else
            {
                PlayerTurn = 1;
            }
        }


    }

    int CheckGameFinished()
    {
        if (GameFinished && Winner != NULL)
        {
            return GameFinished;
        }
       
        bool AllBoxesFilled = true;

        for (int i = 0; i < 9; i++)
        {
            if (Boxes[i].Filled == false)
            {
                AllBoxesFilled = false;
                break;
            }
        }

        // Not Finished
        GameFinished = AllBoxesFilled;

        if (GameFinished && Winner == NULL)
        {
            GameFinished = 2;
        }
        else
        {
            GameFinished = 0;
        }

        return GameFinished;

    }

    int GetPlayerTurn() const
    {
        return PlayerTurn;
    }

    int GetWinner() const
    {
        return Winner;
    }

    bool CheckFill(int Number)
    {
        if (Boxes[Number].Filled)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};



