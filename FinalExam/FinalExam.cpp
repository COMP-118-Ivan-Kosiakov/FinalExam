/** \file FinalExam.cpp
 * \brief Manipulations with matrix
 * \details This program used to manipulate with matrix (enter data, negate elements and show them) with functions through menu
 * \author Ivan Kosiakov
 * \version 1.1
 * \date 2022-2022
 */

#include <iostream>
#include <cassert>

using namespace std;

//Global Variables
int const COLUMNS = 4;

//Function prototypes
int menuCall();

/** Function <code>main</code> used to execute all the code of the program
 *  </br>
 *  @return Returns 0 to successfully end the program
 */
int main()
{
    int const ROWS = 3;
    double matrix[ROWS][COLUMNS];
    int choice;

    do {
        choice = menuCall();
        switch (menuCall()) {
        case 1:
            //Entering data
            break;

        case 2:
            //Negation of all elements
            break;

        case 3:
            //Showing data in matrix
            break;

        case 4:
            //No code needed

        default:
            //This switch cannot contains something exept the numbers 1-4
            assert(true);
        }
    } while (choice != 4);
}

/** Function <code>menuCall</code> used to create a menu and allows user to choice a point of the menu (1-4)
 *  </br>
 *  @return Returns choice of the user
 */
int menuCall() {
    int choice;

    do {
        cout << "1) Enter data in matrix (range -10.5 to 7.5)" << endl
            << "2) Negate all element (i.e. if a element is -5 => 5, or element 5 => -5)" << endl
            << "3) Show data in matrix" << endl
            << "4) Exit" << endl
            << "Enter your choise: ";

        cin >> choice;


        if (choice < 1 || choice > 4)
            cout << "You've entered an invalid value! Try again!" << endl;
    } while (choice < 1 || choice > 4);

    return choice;
}