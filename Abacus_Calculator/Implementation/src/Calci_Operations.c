#include <calci.h>

#define pi 3.14

int add(int x, int y)
{
    return x+y;
 }
int sub(int x, int y)
{
     return x-y;
}
int mul(int x, int y)
    {
        return x*y;
    }
int div(int x, int y)
    {
        if(0 == y)
            return 0;
        else 
           return (int)x/y;
}
int squr(int x){
return x*x;
}
int vol_cube(int x)
{
    return x*x*x;
}

int vol_sphere(int x)
{
    return (int)(1.33*pi*x*x*x);
}

int vol_cuboid(int x, int y, int z)
{
    return x*y*z;
}

int vol_cylinder(int x, int y)
{
    return (int)pi*x*x*y;
}

int vol_cone(int x, int y)
{
    return (int)(0.33*pi*x*x*y);
}
int Triangle(int x, int y)
{
    return (int)(x*y*.5);
}
int Circle(int x)
{
   return (int)pi*x*x;
}
int Rectangle(int x,int y)
{
    return x*y;
}
int Square(int x)
{
    return x*x;
}



