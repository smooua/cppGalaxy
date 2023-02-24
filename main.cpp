#include <iostream>
#include "MathFunctions.h"
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string choice;
    double a,b,c,d,e,f;
    
    cout << "Welcome to universalCalc. Here you can use any number (even 0.1 and stuff like that) and calculate anything you want" << endl;
    ask:
    cout << "What would you like to calculate? Write anything that is not in the program to exit. Input 'help' to view all the commands." << endl;
    getline(cin, choice);
    if(choice == "sin" || choice == "sine")
    {
        cout << "Calculating: sine" << endl;
        cout << "Input the angle: ";
        cin >> a;
        cout << "Input the length of the opposite of the triangle: ";
        cin >> b;
        cout << "Input the length of the hypotenuse of the triangle: ";
        cin >> c;
        cout << "sin(" << a << ") is equal to: " << sin(a, b, c) << endl;
    }
    else if(choice == "cos" || choice == "cosine")
    {
        cout << "Calculating: cosine" << endl;
        cout << "Input the angle: ";
        cin >> a;
        cout << "Input the length of the adjacent of the triangle: ";
        cin >> b;
        cout << "Input the length of the hypotenuse of the triangle: ";
        cin >> c;
        cout << "cos(" << a << ") is equal to: " << cos(a, b, c) << endl;
    }
    else if(choice == "tan" || choice == "tangent")
    {
        cout << "Calculating: tangent" << endl;
        cout << "Input the angle: ";
        cin >> a;
        cout << "Input the length of the opposite of the triangle: ";
        cin >> b;
        cout << "Input the length of the adjacent of the triangle: ";
        cin >> c;
        cout << "tan(" << a << ") is equal to: " << tan(a, b, c) << endl;
    }
    else if(choice == "Add" || choice == "a" || choice == "add")
    {
        cout << "Calculating: add" << endl;
        cout << "Input a number: ";
        cin >> a;
        cout << "Input another number: ";
        cin >> b;
        cout << "The sum of " << a << " and " << b << " equals: " << add(a, b) << endl;
    }
    else if(choice == "Subtract" || choice == "s" || choice == "subtract")
    {
        cout << "Calculating: subtract" << endl;
        cout << "Input a number: ";
        cin >> a;
        cout << "Input another number: ";
        cin >> b;
        cout << "The subtraction of " << a << " and " << b << " equals: " << subtract(a, b) << endl;
    }
    else if(choice == "Multiply" || choice == "m" || choice == "multiply")
    {
        cout << "Calculating: multiply" << endl;
        cout << "Input a number: ";
        cin >> a;
        cout << "Input another number: ";
        cin >> b;
        cout << "The multiplication of " << a << " and " << b << " equals: " << multiply(a, b) << endl;
    }
    else if(choice == "Divide" || choice == "d" || choice == "divide")
    {
        cout << "Calculating: divide" << endl;
        cout << "Input a number: ";
        cin >> a;
        cout << "Input another number: ";
        cin >> b;
        cout << "The multiplication of " << a << " and " << b << " equals: " << divide(a, b) << endl;
    }
    else if(choice == "Square area" || choice == "area of square" || choice == "square area")
    {
        cout << "Calculating: area of square" << endl;
        cout << "Input the length of the side of the square: ";
        cin >> a;
        b = a * a;
        cout << "The area of the square equals: " << b << endl;
    }
    else if(choice == "Triangle area" || choice == "area of triangle" || choice == "triangle area")
    {
        cout << "Calculating: area of triangle" << endl;
        cout << "Input the base of the triangle: ";
        cin >> a;
        cout << "Input the height of the triangle: ";
        cin >> b;
        c = a * b;
        d = c / 2;
        cout << "The area of the triangle is equal to: " << d << endl;
    }
    else if(choice == "Rhombus area" || choice == "area of rhombus" || choice == "rhombus area")
    {
        cout << "Calculating: area of rhombus" << endl;
        cout << "Input the length of the first diagonal: ";
        cin >> a;
        cout << "Input the length of the second diagonal: ";
        cin >> b;
        c = a * b;
        cout << "The area of the rhombus equals: " << c << endl;
    }
    else if(choice == "Parallelogram area" || choice == "area of parallelogram" || choice == "parallelogram area")
    {
        cout << "Calculating: field of parallelogram" << endl;
        cout << "Input the base of the parallelogram: ";
        cin >> a;
        cout << "Input the height of the parallelogram: ";
        cin >> b;
        c = a * b;
        cout << "The field of the parallelogram equals: " << c << endl;
    }
    else if(choice == "Trapezoid area" || choice == "area of trapezoid" || choice == "trapezoid area")
    {
        cout << "Calculating: area of trapezoid" << endl;
        cout << "Input the first base of the trapezoid: ";
        cin >> a;
        cout << "Input the second base of the trapezoid: ";
        cin >> b;
        cout << "Input the height of the trapezoid: ";
        cin >> c;
        d = a + b;
        e = d * c;
        f = e / 2;
        cout << "The area of the trapezoid equals: " << f << endl;
    }
    else if(choice == "Rectangle area" || choice == "area of rectangle" || choice == "rectangle area")
    {
        cout << "Calculating: area of rectangle" << endl;
        cout << "Input the first side of the rectangle: ";
        cin >> a;
        cout << "Input the second side of the rectangle: ";
        cin >> b;
        c = a * b;
        cout << "The area of the rectangle equals: " << c << endl;
    }
    else if(choice == "Velocity" || choice == "velocity")
    {
        cout << "Calculating: velocity (v = d / t)" << endl;
        cout << "Input the displacement: ";
        cin >> a;
        cout << "Input the time: ";
        cin >> b;
        c = a / b;
        cout << "The velocity of the object equals: " << c << endl;
    }
    else if(choice == "Acceleration" || choice == "acceleration" || choice == "accel")
    {
        cout << "Calculating: acceleration (a = change in v / change in t)" << endl;
        cout << "Input the change in velocity: ";
        cin >> a;
        cout << "Input the change in time: ";
        cin >> b;
        c = a / b;
        cout << "The acceleration is: " << c << endl;
    }
    else if(choice == "Displacement" || choice == "displacement" || choice == "displ")
    {
        cout << "Calculating: displacement" << endl;
        cout << "Input the velocity: ";
        cin >> a;
        cout << "Input the time: ";
        cin >> b;
        c = a * b;
        cout << "The displacement is: " << c << endl;
    }
    else if(choice == "Time" || choice == "time")
    {
        cout << "Which way do you want to calculate it?" << endl;
        cout << "1. time = displacement / velocity" << endl;
        cout << "2. time = square root(2 * height / gravity)" << endl;
        cin >> f;
        if(f == 1)
        {
            cout << "Calculating: time (method 1)" << endl;
            cout << "Input the displacement: ";
            cin >> a;
            cout << "Input the velocity: ";
            cin >> b;
            c = a / b;
            cout << "The time equals: " << c << endl;
        }
        else if(f == 2)
        {
            cout << "Calculating: time (method 2)" << endl;
            cout << "Input the height: ";
            cin >> a;
            cout << "The gravity is around 10 m/s²" << endl;
            b = 10;
            c = 2 * a;
            d = c / b;
            cout << "The time equals: " << sqrt(d) << endl;
        }
    }
    else if(choice == "height" || choice == "Height")
    {
        cout << "Calculating: height (h = 1/2 * g * t²)" << endl;
        cout << "The gravity is around 10 m/s²." << endl;
        a = 10;
        cout << "Input the time: ";
        cin >> b;
        c = b * b;
        d = a * c;
        e = d / 2;
        cout << "The height is: " << e << endl;
    }
    else if(choice == "Greatest Common Factor" || choice == "gcf" || choice == "GCF")
    {
        cout << "Calculating: Greatest Common Factor" << endl;
        cout << "Input a number: ";
        cin >> a;
        cout << "Input another number: ";
        cin >> b;

        while(a != b)
        {
            if(a > b)
            {
                a -= b;
            }
            else 
            {
                b -= a;
            }
        }
        cout << "The Greatest Common Factor is: " << a << endl;
    }
    else if(choice == "help")
    {
        cout << "The commands are: " << endl;
        cout << "help \nsine \ncosine \ntangent \nadd \nsubtract \nmultiply \ndivide \narea of square \narea of rectangle \narea of triangle \narea of rhombus \narea of parallelogram \narea of trapezoid \nvelocity \nacceleration \ndisplacement \ntime \nheight \nGCF \n";
        goto ask;
    }
}