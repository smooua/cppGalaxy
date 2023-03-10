#ifndef MATHFUNCTIONS_H_
#define MATHFUNCTIONS_H_

#include <iostream>
#include <string>

double sin(double a, double opposite, double hypotenuse)
{
    double allat = opposite / hypotenuse;
    return allat;
}
double cos(double a, double adjacent, double hypotenuse)
{
    double allat = adjacent / hypotenuse;
    return allat;
}
double tan(double a, double opposite, double adjacent)
{
    double allat = opposite / adjacent;
    return allat;
}
double add(double a, double b)
{
    double allat = a + b;
    return allat;
}
double subtract(double a, double b)
{
    double allat = a - b;
    return allat;
}
double multiply(double a, double b)
{
    double allat = a * b;
    return allat;
}
double divide(double a, double b)
{
    double allat = a / b;
    return allat;
}
double pi()
{
    double pi = 3.14159265358979323846264338327950288419716939937510;
    return pi;
}
double cubeVol(double side)
{
    return side * side * side;
}
int biggestNumber(int a,int b,int c,int d,int e,int f,int g,int h)
{
    double max;
    if(a > b && a > c && a > d && a > e && a > f && a > g && a > h) max = a;
    if(b > a && b > c && b > d && b > e && b > f && b > g && b > h) max = b;
    if(c > a && c > b && c > d && c > e && c > f && c > g && c > h) max = c;
    if(d > a && d > b && d > c && d > e && d > f && d > g && d > h) max = d;
    if(e > a && e > b && e > c && e > d && e > f && e > g && e > h) max = e;
    if(f > a && f > b && f > c && f > d && f > e && f > g && f > h) max = f;
    if(g > a && g > b && g > c && g > d && g > e && g > f && g > h) max = g;
    if(h > a && h > b && h > c && h > d && h > e && h > f && h > g) max = h;
    if(max > 100) return max / 100;
    else return max / 10;
}

#endif