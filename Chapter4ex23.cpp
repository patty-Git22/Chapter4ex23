﻿/*
Title: Chapter4 exercise 23 - Geometry Calculator
File Name: Chapter4ex23.cpp
Programmer: Patrick Maloon
Date: 10/24/24

Requirements:
Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
Enter your choice (1–4):
If the user enters 1, the program should ask for the radius of the circle then display its area. Use the following formula:
area = πr2 Use 3.14159 for π and the radius of the circle for r. 
If the user enters 2, the program should ask for the length and width of the rectangle, 
then display the rectangle’s area. Use the following formula: area = length * width
If the user enters 3, the program should ask for the length of the triangle’s base and its height,
then display its area. Use the following formula: area = base * height * .5
If the user enters 4, the program should end.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14159;
    int user_choice;

    cout << "Geometry Calculator\n"
        << "  1. Calculate the Area of a Cricle\n"
        << "  2. Calculate the Area of a Rectangle\n"
        << "  3. Calculate the Area of a Triangle\n"
        << "  4. Quit\n"
        << "\nEnter you choice (1-4): ";
    cin >> user_choice;
    cout << endl;

    switch (user_choice)
    {
        float area;

    case 1:
        int radius;

        cout << "What is the radius: ";
        cin >> radius;

        if (radius < 0)
        {
            cout << "We're sorry. The radius must be a positive number." << endl;
            cout << "Rerun the program and try again." << endl;
         
        }
        else
        {
            area = PI * pow(radius, 2); 

            cout << "The area of the circle is  "
                << area << endl;
        }
        break;

    case 2:
        float width, length;

        cout << "What is the length? " << endl;
        cin >> length;

        if (length > 0)
        {
            cout << "What is the width? " << endl;
            cin >> width;

            if (width > 0) {
                area = length * width;
                cout << "The area of rectangle is "
                    << area
                    << endl;
            }
            else {
                cout << "\nWe're sorry. The width must be greater than 0." << endl;
                cout << "Rerun the program and try again." << endl;
            }

        }
        else
        {
            cout << "\nWe're sorry. The length must be greater that 0." << endl;
            cout << "Rerun the program and try again." << endl;
        }
        break;

    case 3:
        float height,
            base;

        cout << "What is the base? ";
        cin >> base;

        if (base > 0)
        {
            cout << "What is the height? ";
            cin >> height;

            if (height > 0)
            {
                area = (base * height) * .5;
                cout << "Area of triangle is "
                    << area
                    << endl;
            }
            else
            {
                cout << "\nWe're sorry. The height must be greater than 0.\n"
                    << "Rerun the program and try again." << endl;
            }

        }
        else
        {
            cout << "\nWe're sorry. The Base length must be greater than 0.\n"
                << "Rerun the program and try again." << endl;
        }
        break;

    case 4:
        cout << "Thank you for using Geometry Calculator, Good-bye." << endl;
        break;

    default:
        cout << "We're sorry. Your choice must be between 1 and 4.\n"
            << "Rerun the program and try again." << endl;
        break;
    }

    cout << endl;

    return 0;
}