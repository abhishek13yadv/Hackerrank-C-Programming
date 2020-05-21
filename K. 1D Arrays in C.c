#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int arr;
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr);
        sum = sum+arr;
    }    
    printf("%d",sum);
    return 0;
}
