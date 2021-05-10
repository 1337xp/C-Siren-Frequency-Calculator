#include <stdio.h>
#include <stdlib.h>
int a1;
int a2;
int a3;
int result;
int main()
{
    printf("Enter port value\n");
    scanf("%d", &a1);
    printf("Enter RPM\n");
    scanf("%d", &a2);
    printf("Enter line frequency (60/50) \n");
    scanf("%d", &a3);
    result = calculatevalue(a1,a2,a3);
    printf("%d\n", result);


}
int calculatevalue(a1,a2,a3)
{
    return a1 * a2 / a3;
}
