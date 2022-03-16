#include<stdio.h>
int main()
{
    char str[20]="The_answer_is_";
    str[15]='B';//B is stored in 15th index of str array
    printf("%s",str);//output is  The_answer_is_
    return 0;
}
