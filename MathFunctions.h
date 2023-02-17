#ifndef MATHFUNCTIONS_H_
#define MATHFUNCTIONS_H_

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

#endif