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
void enterMatrix(double[][COLUMNS], int const);
void negateMatrix(double[][COLUMNS], int const);
void showMatrix(double const[][COLUMNS], int const);


/** Function <code>main</code> used to execute all the code of the program
 *  </br>
 *  @return Returns 0 to successfully end the program
 */
int main()
{
    int const ROWS = 3;
    double matrix[ROWS][COLUMNS] = {0};
    int choice;

    do {
        choice = menuCall();
        switch (choice) {
        case 1:
            enterMatrix(matrix, ROWS);
            break;

        case 2:
            negateMatrix(matrix, ROWS);
            break;

        case 3: {
            showMatrix(matrix, ROWS);
            break;
        }
        case 4:
            //No code needed
            break;

        default:
            //This switch cannot contains something exept the numbers 1-4
            assert(false);
        }
    } while (choice != 4);

    cout << "Bye.";

    return 0;
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

/** Function <code>enterMatrix</code> used to enter data in matrix
 *  </br>
 *  @param matrix is the array that contains doubles with dimensions 3X4 that is going to be filled in.
 */
void enterMatrix(double matrix[][COLUMNS], int const rows) {
    //TODO: add assert for negative rows

    double const MIN = -10.5, MAX = 7.5;
    double userEnter;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {

            do {
                cout << "Enter value for matrix[" << i << "][" << j << "] in range from " << MIN << " to " << MAX << ": " << endl;
                cin >> userEnter;

                if (userEnter < MIN || userEnter > MAX)
                    cout << "You've entered value that out of range! Try again!" << endl;
                else
                    matrix[i][j] = userEnter;
            } while (userEnter < MIN || userEnter > MAX);

        }
    }
}

/** Function <code>negateMatrix</code> used to negate all elements in matrix
 *  </br>
 *  @param matrix is the array that contains doubles with dimensions 3X4 that is going to be negated.
 */
void negateMatrix(double matrix[][COLUMNS], int const rows) {
    //TODO: add assert for negative rows

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            matrix[i][j] = matrix[i][j] * -1;
        }
    }
}

/** Function <code>showMatrix</code> used to show all elements in matrix
 *  </br>
 *  @param matrix is the array that contains doubles with dimensions 3X4 that is going to be showed.
 */
void showMatrix(double const matrix[][COLUMNS], int const rows) {
    //TODO: add assert for negative rows

    cout << "Matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            cout << " [" << matrix[i][j] << "] ";
        }
        cout << endl;
    }
    cout << endl;
}