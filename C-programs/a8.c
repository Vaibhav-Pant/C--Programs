// Get the three angles of a triangle as input.

// find the count of the type of the triangle.

// Continue the process for 5 times.

// If the sum of the three angles is greater than 180 then prompt for correct values. (the sum of all internal angles of a triangle is always equal to 180°). Keep the count of the wrong entries also.

// Acute Angled Triangle (all three angles less than 90°)

// Right-Angled Triangle (one angle that measures exactly 90°)

// Obtuse Angled Triangle (one angle that measures more than 90°)

#include<stdio.h>

int main()
{
    int a1,a2,a3, i = 0;
    while( i < 5)
    {
        printf("Enter angle 1: ");
        scanf("%d",&a1);
        printf("Enter angle 2: ");
        scanf("%d",&a2);    
        printf("Enter angle 3: ");
        scanf("%d",&a3);

        if(a1+a2+a3 != 180)
        {
            printf("Wrong angles. Do again.\n");
            i = 0;
        }
        else
        {
            i++;
            if(a1 < 90 && a2 < 90 && a3 < 90)
            {
                printf("Acute angled triangle.\n");
            }
            else if (a1 == 90 || a2 == 90 || a3 == 90)
            {
                printf("Right angled triangle.\n");
            }
            else{
                printf("Obtuse angled trainle.\n");
            }
        }
    }
    return 0;
}