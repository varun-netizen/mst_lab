#include <stdio.h>

int main()
{
    int n, diff, num_b, num_g, p, q;
    float boys_p, girls_p;
    printf("Enter the ratio of boys to girls as p/q");
    printf("Enter p :  \n");
    scanf("%d", &p);
    printf("Enter q :  \n");
    scanf("%d", &q);
    printf("Enter total number of students:  \n");
    scanf("%d", &n);

    num_b =  n * p/(p+q);
    num_g =  n - num_b;

    diff = num_b - num_g;
    boys_p = (float)num_b * 100/(float)n;
    girls_p  = 100 - (float)boys_p;



    printf("There are %d boys in the class. \n", num_b);
    printf("There are %d girls in the class. \n", num_g);

    printf("Perecentage of boys in the class is %f\n", boys_p);
    printf("Precentage of girls in the class is %f\n", girls_p);


    printf("The difference between boys and girls is %d \n", diff);


    if(boys_p >= 70)
    {
        printf("Gender partiality in education");
    }
    else if(diff >= -5 && diff <= 5)
    {
        printf("Equal opportunities of education for both");
    }
    else if(girls_p>= 70)
    {
        printf("Girls are dominating in education");
    }
    else
    {
        printf("No Conclusions drawn");
    }
    
    return 0;
}
