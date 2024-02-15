#include <stdio.h> 
void pascal(int n) 
{ 
    for (int i=1;i<=n;i++) 
    { 
        for (int j=1;j<=n-i;j++) 
            printf("  "); 
        int c=1; 
        for (int k=1;k<=i;k++) 
        { 
            printf("%4d", c); 
            c=c*(i-k)/k; 
        } 
        printf("\n"); 
    } 
}  
int main() 
{ 
    int n = 5; 
    pascal(n); 
    return 0; 
}
