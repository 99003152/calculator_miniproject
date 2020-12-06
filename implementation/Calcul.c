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
           return x/y;
    }
int squr(int x)
    { 
        return x*x;
    }
int vol_cube(int x)
{
    return x*x*x;
}

int vol_sphere(int x)
{
    return 1.33*pi*x*x*x;
}

int vol_cuboid(int x, int y, int z)
{
    return x*y*z;
}

int vol_cylinder(int x, int y)
{
    return pi*x*x*y;
}

int vol_cone(int x, int y)
{
    return 0.33 pi*x*x*y;
}
int B_H_Triangle()
{
    printf("Enter the base and height of the triangle:\nBase: ");
    scanf("%d",&base);
    printf("\nHeight: ");
    scanf("%d",&height);
    return (base*height*.5);
}
int Circle()
{
    int radius;
    printf("\nEnter the radius of the Circle: ");
    scanf("%d",&radius);
    area=3.14* pow(radius,2);
    return area;
}
int Rectangle()
{
    int length,breadth;
    printf("\nEnter the following parameters: \nLength: ");
    scanf("%d",&length);
    printf("\nBreadth: ");
    scanf("%d",&breadth);
    area=length*breadth;
    return area;
}
int Square()
{
    int side;
    printf("\nEnter the side of the Square: ");
    scanf("%d",&side);
    area=pow(side,2);
    return area;
}
int Trapezium()
{
    int h,l1,l2;
    printf("\nEnter the following parameters of Trapezium: \nParallel side 1: ");
    scanf("%d",&l1);
    printf("\nParallel side 2: ");
    scanf("%d",&l2);
    printf("\nHeight: ");
    scanf("%d",&h);
    area= .5*h*(l1+l2);
    return area;
}


