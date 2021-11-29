#include <stdio.h>
int main()
{
    int n, s, n1;
 
    printf("Enter number : ");
    scanf("%d",&n);
    
    s = 0;
    n1 = n;
    while(n1 > 0)
    {
    	while (n > 0)  {
        	s ++;
        	n /= 10;
    	}
    	n1--;
    	n = n1;
    }
 
    printf("Sum of digit : %d\n",s);
    return 0;
}
