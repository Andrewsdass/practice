#include<stdio.h>
int main()
{
    struct student
    {
        char students[25];
        int roll_number;
        int age;
    }s[2];
    int sn,i,j;
    for(i=1;i<=2;i++)
    {
        printf("enter the student name:\n");
        scanf("%c",&s[i].students);
        printf("enter your roll number:\n");
        scanf("%d",&s[i].roll_number);
        printf("enter your age:\n");
        scanf("%d",&s[i].age);
        
    }
    printf("eligible students\n");
    printf("-----------------------------------\n");
    printf(" sn   student   age\n");
    printf("------------------------------------\n");
    sn=1;
    
    for(i=1;i<=2;i++)
    { 
        if(s[i].roll_number%2!=0)
        {
        
            printf("%d   %s   %d \n",sn,s[i].students,s[i].age);
            sn++;
            printf("------------------------------------\n");

        }
    }
    printf("your seat alloted in ground floor \n");

    
    printf("0- not able to sit \n");
    printf("1 - you are request to sit \n");
    printf("groundfloor seat arrangement \n");
    printf("------------------------------------\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        {
            if(j%2==0)
            {
              printf("1\t");
            }
            else
            {
              printf("0\t");
            }
        }  
        printf("\n");
    }
    printf("------------------------------------\n");
    printf(" sn   student   age\n");
    printf("------------------------------------\n");
    sn=1;
    for(i=1;i<=2;i++)
    {
        if(s[i].roll_number%2==0)
        {
            
            printf("%d   %s   %d \n",sn,s[i].students,s[i].age);
            sn++;
        }
    }
        printf("your seat alloted in first floor\n");

        printf("first floor arragement\n");
        printf("------------------------------------\n");

        for(i=0;i<5;i++)
        {
          for(j=0;j<5;j++)
        {
            if(j%2==0)
            {
                printf("1\t");
            }
            else
                {
                    printf("0\t");
                }
            
        }
        printf("\n");
        }
        printf("------------------------------------\n");

            
        
        
}
