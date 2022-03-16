#include<stdio.h>
#include<string.h>
int main()
{
    struct s{
        float salary;
        char name[25];
        int age;
    };
    struct s b;
    b.age=25;
    strcpy(b.name,"Arun");//here Arun is copied to  b.name
    printf("\n%s%d",b.name,b.age);//print b.name as Arun,b.age as 25 
    return 0;
}
