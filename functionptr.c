#include<stdio.h>

// Function Defination
void Fun()
{
    printf("Inside fun\n");
}


int Addition(int no1, int no2)
{
    int ans = 0;
    ans = no1+no2;
    return ans;
}

int main()
{
    int ret = 0;

    Fun();     // Function call 

    void (*fptr)();

    fptr = Fun;

    fptr();

    int (*fptr1)(int,int);
    fptr1 = Addition;

    ret = Addition(10,11);
    printf("Addition is : %d\n",ret);

    ret = fptr1(10,11);
    printf("Addition is : %d\n",ret);

    return 0;
}


