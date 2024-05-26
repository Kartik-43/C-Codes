#include <stdio.h>

int main()
{

    float ph, ch, ma, je, cu;

    printf("Enter your marks in Physics : ");
    scanf("%f", &ph);

    printf("Enter your marks in Chemestry : ");
    scanf("%f", &ch);

    printf("Enter your marks in Maths : ");
    scanf("%f", &ma);

    float percentage;
    percentage = ((ph+ch+ma)/300)*100;

    printf("Your total agregate percentage of physics, chemestry and maths is : %0.2f \n", percentage);

    printf("Enter your jee mains percentile : ");
    scanf("%f", &je);
    
    printf("Enter your Cuet percentile of physics, chemestry and maths : ");
    scanf("%f", &cu);

    if (percentage > 75 || je > 90 || cu > 85) 
    {
        printf("Congratulations, You can take admission in your desired college!\n");
    } 

    else 
    {
        printf("Sorry, you do not meet the criteria for admission.\n");
    }

    return 0;

}
