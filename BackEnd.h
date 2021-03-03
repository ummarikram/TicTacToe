#pragma once

#include <iostream>
using namespace std;

// Box Class
class Box
{
public:

    bool Filled; // If Box is Filled OR NOT
    char Mark;   // The Mark associated with that Box e.g "X" OR "O"
    int Owner;   // The Owner associated with that Box e.g "Player 1" , "Player 2"

    // Constructor
    Box()
    {
        Filled = false;
        Mark = NULL;
        Owner = 0;
    }
};

// Main Class For Game inherits From Box Class
class C_TicTacToe : public Box
{
private:
    Box Boxes[9];  // Array of 9 Boxes
    int PlayerTurn; // Player turn Controller
    int Winner;  // Game Winner if Any

public:

    int GameFinished;  // 0 -> Not Finished , 1 -> Finished , 2 -> Draw 
    static int FilledBoxes;  // No Of Filled Boxes

    // Constructor
    C_TicTacToe()
    {
        GameFinished = 0;
        PlayerTurn = 1;  // Player 1 Turn First
        Winner = NULL;
    }

    // Fill Box which takes a number and a Mark
    void FillBox(int Number, char Mark)
    {
        // if this box is not filled previously
        if (Boxes[Number].Filled == false)
        {
            // Fill this Box
            Boxes[Number].Filled = true;
            Boxes[Number].Mark = Mark;
            Boxes[Number].Owner = PlayerTurn;
            FilledBoxes++; // Increment No Of Filled Boxes

            // If any Winning Pattern Found e.g Diagonally , Row wise , Column wise
            if ((Boxes[0].Owner == Boxes[1].Owner && Boxes[0].Owner == Boxes[2].Owner && Boxes[0].Owner != 0)
                || (Boxes[0].Owner == Boxes[3].Owner && Boxes[0].Owner == Boxes[6].Owner && Boxes[0].Owner != 0)
                || (Boxes[0].Owner == Boxes[4].Owner && Boxes[0].Owner == Boxes[8].Owner && Boxes[0].Owner != 0)
                || (Boxes[1].Owner == Boxes[4].Owner && Boxes[1].Owner == Boxes[7].Owner && Boxes[1].Owner != 0)
                || (Boxes[2].Owner == Boxes[4].Owner && Boxes[2].Owner == Boxes[6].Owner && Boxes[2].Owner != 0)
                || (Boxes[2].Owner == Boxes[5].Owner && Boxes[2].Owner == Boxes[8].Owner && Boxes[2].Owner != 0)
                || (Boxes[3].Owner == Boxes[4].Owner && Boxes[3].Owner == Boxes[5].Owner && Boxes[3].Owner != 0)
                || (Boxes[6].Owner == Boxes[7].Owner && Boxes[6].Owner == Boxes[8].Owner && Boxes[6].Owner != 0))
            {
                // Game Finished with a Winner
                GameFinished = 1;
                Winner = PlayerTurn;
            }

            // else switch turns
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

    // Reset Game for Play Again Purpose
    void Reset()
    {
        for (int i = 0; i < 9; i++)
        {
            Boxes[i].Filled = false;
            Boxes[i].Mark = NULL;
            Boxes[i].Owner = 0;
        }

        GameFinished = 0;
        PlayerTurn = 1;
        Winner = NULL;
        FilledBoxes = 0;
    }

    // Check if Game Finished
    int CheckGameFinished()
    {
        // if Game Finished with a Winner
        if (GameFinished && Winner != NULL)
        {
            return GameFinished;
        }
       
        // Check if All Boxes are Filled
        bool AllBoxesFilled = true; // Initially set it to true

        for (int i = 0; i < 9; i++)
        {
            // if any box is not filled
            if (Boxes[i].Filled == false)
            {
                // Set it to false which will indicate that game is not finished
                AllBoxesFilled = false;
                break;
            }
        }

        // Assign this to GameFinished variable
        GameFinished = AllBoxesFilled;

        // if Game Finished but No Winner e.g Match Drawn
        if (GameFinished && Winner == NULL)
        {
            GameFinished = 2;
        }

        // Else Game Not Finished
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

    // Functions that returns a smart move for Computer to Play
    int GetEmptyBox() const
    {
        // if only one box is filled
        if (FilledBoxes < 2)
        {
            // Return the first empty Box that is not filled
            for (int i = 0; i < 9; i++)
            {
                int index = rand() % (8 + 1 - 0) + 0;
                
                if (Boxes[index].Filled == false)
                {
                    return index;
                }
            }
        }

        // Check all possiblity to tackle Player's move smartly and prevent easy win

        // All Rows Combination
        {
            if ((Boxes[0].Owner == Boxes[1].Owner && Boxes[0].Owner != Boxes[2].Owner)
                && Boxes[0].Owner != 0 && Boxes[2].Filled == false)
            {
                return 2;
            }
            else if ((Boxes[2].Owner == Boxes[1].Owner && Boxes[2].Owner != Boxes[0].Owner)
                && Boxes[2].Owner != 0 && Boxes[0].Filled == false)
            {
                
                return 0;
            }
            else if ((Boxes[0].Owner == Boxes[2].Owner && Boxes[0].Owner != Boxes[1].Owner)
                && Boxes[0].Owner != 0 && Boxes[1].Filled == false)
            {
                return 1;
            }


            else if ((Boxes[3].Owner == Boxes[4].Owner && Boxes[3].Owner != Boxes[5].Owner)
                && Boxes[3].Owner != 0 && Boxes[5].Filled == false)
            {
                return 5;
            }
            else if ((Boxes[5].Owner == Boxes[4].Owner && Boxes[5].Owner != Boxes[3].Owner)
                && Boxes[5].Owner != 0 && Boxes[3].Filled == false)
            {
                return 3;
            }
            else if ((Boxes[3].Owner == Boxes[5].Owner && Boxes[3].Owner != Boxes[4].Owner)
                && Boxes[3].Owner != 0 && Boxes[4].Filled == false)
            {
                return 4;
            }


            if ((Boxes[6].Owner == Boxes[7].Owner && Boxes[6].Owner != Boxes[8].Owner)
                && Boxes[6].Owner != 0 && Boxes[8].Filled == false)
            {
                return 8;
            }
            else if ((Boxes[8].Owner == Boxes[7].Owner && Boxes[8].Owner != Boxes[6].Owner)
                && Boxes[8].Owner != 0 && Boxes[6].Filled == false)
            {
                return 6;
            }
            else if ((Boxes[6].Owner == Boxes[8].Owner && Boxes[6].Owner != Boxes[7].Owner)
                && Boxes[6].Owner != 0 && Boxes[7].Filled == false)
            {
                return 7;
            }
        }

        // All Columns Combination
        {
            if ((Boxes[0].Owner == Boxes[3].Owner && Boxes[0].Owner != Boxes[6].Owner)
                && Boxes[0].Owner != 0 && Boxes[6].Filled == false)
            {
                return 6;
            }
            else if ((Boxes[6].Owner == Boxes[3].Owner && Boxes[6].Owner != Boxes[0].Owner)
                && Boxes[6].Owner != 0 && Boxes[0].Filled == false)
            {
               
                return 0;
            }
            else if ((Boxes[0].Owner == Boxes[6].Owner && Boxes[0].Owner != Boxes[3].Owner)
                && Boxes[0].Owner != 0 && Boxes[3].Filled == false)
            {
                return 3;
            }


            else if ((Boxes[1].Owner == Boxes[4].Owner && Boxes[1].Owner != Boxes[7].Owner)
                && Boxes[1].Owner != 0 && Boxes[7].Filled == false)
            {
                return 7;
            }
            else if ((Boxes[7].Owner == Boxes[4].Owner && Boxes[7].Owner != Boxes[1].Owner)
                && Boxes[7].Owner != 0 && Boxes[1].Filled == false)
            {
                return 1;
            }
            else if ((Boxes[1].Owner == Boxes[7].Owner && Boxes[1].Owner != Boxes[4].Owner)
                && Boxes[1].Owner != 0 && Boxes[4].Filled == false)
            {
                return 4;
            }


            else if ((Boxes[2].Owner == Boxes[5].Owner && Boxes[2].Owner != Boxes[8].Owner)
                && Boxes[2].Owner != 0 && Boxes[8].Filled == false)
            {
                return 8;
            }
            else if ((Boxes[8].Owner == Boxes[5].Owner && Boxes[8].Owner != Boxes[2].Owner)
                && Boxes[8].Owner != 0 && Boxes[2].Filled == false)
            {
                return 2;
            }
            else if ((Boxes[2].Owner == Boxes[8].Owner && Boxes[2].Owner != Boxes[5].Owner)
                && Boxes[2].Owner != 0 && Boxes[5].Filled == false)
            {
                return 5;
            }
        }

        // All Diagonals Combination
        {
            if ((Boxes[0].Owner == Boxes[4].Owner && Boxes[0].Owner != Boxes[8].Owner)
                && Boxes[0].Owner != 0 && Boxes[8].Filled == false)
            {
                return 8;
            }
            else if ((Boxes[8].Owner == Boxes[4].Owner && Boxes[8].Owner != Boxes[0].Owner)
                && Boxes[8].Owner != 0 && Boxes[0].Filled == false)
            {
                
                return 0;
            }
            else if ((Boxes[0].Owner == Boxes[8].Owner && Boxes[0].Owner != Boxes[4].Owner)
                && Boxes[0].Owner != 0 && Boxes[4].Filled == false)
            {
                return 4;
            }


            else if ((Boxes[2].Owner == Boxes[4].Owner && Boxes[2].Owner != Boxes[6].Owner)
                && Boxes[2].Owner != 0 && Boxes[6].Filled == false)
            {
                return 6;
            }
            else if ((Boxes[6].Owner == Boxes[4].Owner && Boxes[6].Owner != Boxes[2].Owner)
                && Boxes[6].Owner != 0 && Boxes[2].Filled == false)
            {
                return 2;
            }
            else if ((Boxes[2].Owner == Boxes[6].Owner && Boxes[2].Owner != Boxes[4].Owner)
                && Boxes[2].Owner != 0 && Boxes[4].Filled == false)
            {
                return 4;
            }
        }


        // Exception handling in case if no tackle possiblilty was returned
        for (int i = 0; i < 9; i++)
        {
            // Returns the first box that is not Filled yet
            if (Boxes[i].Filled == false)
            {
                return i;
            }
        }
       
    }

    // Takes a number and returns true if that box is filled
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

int C_TicTacToe::FilledBoxes = 0;

