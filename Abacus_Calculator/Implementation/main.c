#include<calci.h>
int a,b,c;
unsigned int option = 0;

enum operations{ ADD =1, SUB, MUL, SQUR, CUBE, SPHERE, CUBOID, CYLINDER, CONE, TRIANGLE, CIRCLE, RECTANGLE, SQUARE, TRAPEZIUM,EXIT};
void calci_menu(void);
int valid_operation(int operation);

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
    printf("\n1. Add\n2. Sub\n3. Mult\n4. Div\n5. Exit");
    printf("\n\tEnter your choice\n");
    scanf("%d", &option);
    if(EXIT == option)
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
        case ADD:
           printf("\n\t%d + %d = %d\nEnter to continue",a,b,add(a,b));            
            getchar();
            break;
        case SUB:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            a,b,sub(a,b));            
            getchar();
            break;
        case MUL:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            a,b,mul(a,b));            
            getchar();
            break;
        case SQUR:
            printf("\n\tThe square of %d = %d\nEnter to continue", 
            a, squr(a));            
            getchar();
            break;
        case CUBE:
            printf("\n\tThe volume of cube with side %d  = %d\nEnter to continue", 
            a,vol_cube(a));
            getchar();
            break;
        case SPHERE:
            printf("\n\tThe volume of sphere of radius %d = %d\nEnter to continue", 
            a,vol_sphere(a));
            getchar();
            break;
        case CUBOID:
            printf("\n\tThe volume of cuboid with dimensions %d, %d, %d = %d\nEnter to continue", 
            a,b,c,vol_cuboid(a,b,c)); 
            getchar();
            break;
        case CYLINDER:
            printf("\n\tThe volume of cylinder with dimensions %d, %d = %d\nEnter to continue", 
            a,b,vol_cylinder(a,b));
            getchar();
            break;
        case CONE:
            printf("\n\tThe volume of cone with dimensions %d, %d = %d\nEnter to continue", 
            a,b,vol_cone(a,b));
            getchar();
            break;
        case TRIANGLE:
            printf("\n\tThe area of triangle with parameters %d & %d = %d\nEnter to continue", 
            a,b, Triangle(a,b));
            getchar();
            break;
        case CIRCLE:
            printf("\n\tThe area of circle with radius %d  = %d\nEnter to continue", 
            a,Circle(a)); 
            getchar();
            break;
        case RECTANGLE:
            printf("\n\tThe area of rectangle with parameters %d & %d = %d\nEnter to continue", 
            a,b,Rectangle(a,b)); 
            getchar();
            break;
        case SQUARE:
            printf("\nThe area of square with side  %d = %d\nEnter to continue", 
            a,Square(a));            
            getchar();
            break;
        case EXIT:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}

