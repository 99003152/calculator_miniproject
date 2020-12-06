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
double Scalene()
{
    double side_1,side_2,side_3;
    printf("Enter the three sides of the Triangle:\nSide 1:");
    scanf("%f",&side_1);
    printf("\nSide 2: ");
    scanf("%f",&side_2);
    printf("\nSide 3: ");
    scanf("%f",&side_3);
    int semi=(side_1 + side_2 + side_3)/2;
    area = sqrt(semi*(semi-side_1)*(semi-side_2)*(semi-side_3));
    return area;
}
double Isosceles()
{
    double side_i,side_i2;
    printf("Enter the length of equal sides: \n");
    scanf("%f",&side_i);
    printf("Enter the length of the third side: \n");
    scanf("%f",&side_i2);
    area= .5*(sqrt((pow(side_i,2)-pow(side_i2,2))/4)*side_i2);
    return area;
}
double Equilateral()
{
    double side_e;
    printf("Enter the sides: ");
    scanf("%f",&side_e);
    area=(sqrt(3)*side_e*side_e)/4;
    return area;
}
double B_H_Triangle()
{
    printf("Enter the base and height of the triangle:\nBase: ");
    scanf("%f",&base);
    printf("\nHeight: ");
    scanf("%f",&height);
    return (base*height*.5);
}
double Circle()
{
    double radius;
    printf("\nEnter the radius of the Circle: ");
    scanf("%f",&radius);
    area=3.14* pow(radius,2);
    return area;
}
double Rectangle()
{
    double length,breadth;
    printf("\nEnter the following parameters: \nLength: ");
    scanf("%f",&length);
    printf("\nBreadth: ");
    scanf("%f",&breadth);
    area=length*breadth;
    return area;
}
double Square()
{
    double side;
    printf("\nEnter the side of the Square: ");
    scanf("%f",&side);
    area=pow(side,2);
    return area;
}
double Trapezium()
{
    double h,l1,l2;
    printf("\nEnter the following parameters of Trapezium: \nParallel side 1: ");
    scanf("%f",&l1);
    printf("\nParallel side 2: ");
    scanf("%f",&l2);
    printf("\nHeight: ");
    scanf("%f",&h);
    area= .5*h*(l1+l2);
    return area;
}


