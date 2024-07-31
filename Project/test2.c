#include <stdio.h>

int main()
{
    int choice, i = 0;
    float number[2];
    scanf("%d", &choice);

    if (choice == 1)
    {
        for (i = 0; i < 2; i++)
        {
            scanf("%.f", &number[i]);
        }

        printf("1. Rectangle\n2. Triangle\n3. Circle\n");
        printf("Enter your choice: %d\n", choice);
        printf("Enter the width: %.f\n", number[0]);
        printf("Enter the height: %.f\n", number[1]);

        if ((number[0] * number[1]) < 0)
        {
            printf("The area of the rectangle is: Error");
        }
        else
        {
            printf("The area of the rectangle is: %.2f", number[0] * number[1]);
        }
    }
    else if (choice == 2)
    {
        for (i = 0; i < 2; i++)
        {
            scanf("%f", &number[i]);
        }

        printf("1. Rectangle\n2. Triangle\n3. Circle\n");
        printf("Enter your choice: %d\n", choice);
        printf("Enter the base: %.f\n", number[0]);
        printf("Enter the height: %.f\n", number[1]);

        if ((0.5 * number[0] * number[1]) < 0)
        {
            printf("The area of the triangle is: Error");
        }
        else
        {
            printf("The area of the triangle is: %.2f", 0.5 * number[0] * number[1]);
        }
    }
    else if (choice == 3)
    {
        scanf("%f", &number[0]);

        printf("1. Rectangle\n2. Triangle\n3. Circle\n");
        printf("Enter your choice: %d\n", choice);
        printf("Enter the radius: %.f\n", number[0]);

        if ((3.14 * (number[0] * number[0])) < 0)
        {
            printf("The area of the circle is: Error");
        }
        else
        {
            printf("The area of the circle is: %.2f", 3.14 * (number[0] * number[0]));
        }
    }
    else
    {
        printf("1. Rectangle\n2. Triangle\n3. Circle\n");
        printf("Enter your choice: %d\nInvalid choice", choice);
    }

    return 0;
}