#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    for(int i = n; i >= 1; i--){
        for(int j = n; j > i; j--)
            printf("%d ", j);
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    for(int i = 1; i < n; i++){
        for(int j = n; j > i; j--)
            printf("%d ", j);
        for(int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i + 1);
        for(int j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}


Second Method : 


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            int min = i < j ? i : j;
            min = min < len-i ? min : len-i-1;
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
 
