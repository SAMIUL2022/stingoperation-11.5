#include <stdio.h>
#include<string.h>
int main ()
{
char a[1001];
scanf("%s",a);
int l=strlen(a)-1;
// printf("%d ",l);
 int ispalindrome=1;
for (int i = 0; i <=l/2; i++)
{
   
  if (a[i]!=a[l-i])
   {
    ispalindrome=0;
     break;
 
  }
 

 
}
  
 if(ispalindrome==0)
{printf("NO");}
else
 
 
{printf("YES");}
    
    return 0;
}