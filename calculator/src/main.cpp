/* CalcC++ - A calculator written in C++
 *
 * Copyright (C) 2021 miten
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "main.h"

int main() 
{
    cout << "CalculateC++!" << endl;

    calculate();

    return 0;
}

void calculate()
{
    double num1;
    double num2;
    char op;

    double result;

    cout << "\nEnter equation: [x + y]\n";
    cin >> num1;
    cin >> op;
    cin >> num2;

    switch(op)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            result = 0;
            break;
    }

    cout << "Answer: " << result << "\n" << endl;

    again();
}

void again()
{
    char again;

    cout << "Again? [y/n]: ";
    cin >> again;

    switch(again)
    {
        case 'Y':
        case 'y':
            calculate();
            break;
        default:
            break;
    }
}