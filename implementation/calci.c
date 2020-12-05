#include <calci.h>

double pi = 3.14;

double vol_cube(double x)
{
    return x*x*x;
}

double vol_sphere(double x)
{
    return (4/3)*pi*x*x*x;
}

double vol_cuboid(double x, double y, double z)
{
    return x*y*z;
}

double vol_cylinder(double x, double y)
{
    return pi*x*x*y;
}

double vol_cone(double x, double y)
{
    return (1/3) pi*x*x*y;
}

