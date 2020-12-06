#include<calci.h>
int a,b,c;
unsigned int option = 0;
void calci_menu(void);
int valid_operation(int operation);
#define VALID (1)
#define INVALID (0)

int main(int argc, char *argv[])
{
    printf("\n**calci**\n");
    while(1)
    {
        calci_menu();
    }
}

void calci_menu(void)
{
    printf("\nAvailable operations\n");
    printf("\n1. Add\n2. Sub\n3. Mult\n4. Div\n5.Square\n6.Volume of Cube\n7.Volume of Sphere\n8.Volume of Cuboid\n9.Volume of Cylinder\n10.Volume of Cone\n11.Area of Triangle\n12.Area of Circle\n13.Area of Rectangle\n14.Area of Square\n15.Exit\n");
    printf("\n\tEnter your choice\n");
    scanf("%d", &option);
    if(15 == option)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    if(INVALID != valid_operation(option))
    {
        printf("\n\tEnter your Numbers with space between them\n");
        scanf("%d %d", &a, &b);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        getchar();
        return;
        
    }
    switch(option)
    {
        case 1:
           printf("\n\t%d + %d = %d\nEnter to continue",a,b,add(a,b));            
            getchar();
            break;
        case 2:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            a,b,sub(a,b));            
            getchar();
            break;
        case 3:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            a,b,mul(a,b));            
            getchar();
            break;
        case 4:
            printf("\n\tThe square of %d = %d\nEnter to continue", 
            a, squr(a));            
            getchar();
            break;
        case 6:
            printf("\n\tThe volume of cube with side %d  = %d\nEnter to continue", 
            a,vol_cube(a));
            getchar();
            break;
        case 7:
            printf("\n\tThe volume of sphere of radius %d = %d\nEnter to continue", 
            a,vol_sphere(a));
            getchar();
            break;
        case 8:
            printf("\n\tThe volume of cuboid with dimensions %d, %d, %d = %d\nEnter to continue", 
            a,b,c,vol_cuboid(a,b,c)); 
            getchar();
            break;
        case 9:
            printf("\n\tThe volume of cylinder with dimensions %d, %d = %d\nEnter to continue", 
            a,b,vol_cylinder(a,b));
            getchar();
            break;
        case 10:
            printf("\n\tThe volume of cone with dimensions %d, %d = %d\nEnter to continue", 
            a,b,vol_cone(a,b));
            getchar();
            break;
        case 11:
            printf("\n\tThe area of triangle with parameters %d & %d = %d\nEnter to continue", 
            a,b, Triangle(a,b));
            getchar();
            break;
        case 12:
            printf("\n\tThe area of circle with radius %d  = %d\nEnter to continue", 
            a,Circle(a)); 
            getchar();
            break;
        case 13:
            printf("\n\tThe area of rectangle with parameters %d & %d = %d\nEnter to continue", 
            a,b,Rectangle(a,b)); 
            getchar();
            break;
        case 14:
            printf("\nThe area of square with side  %d = %d\nEnter to continue", 
            a,Square(a));            
            getchar();
            break;
        case 15:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((1 <= operation) && (15 >= operation)) ? VALID: INVALID;
}

