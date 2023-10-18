#include <stdio.h>
#include<string.h>
int main ()
{
char a [200];
char b [100];
scanf("%s %s",a,b);
int j=strlen(a);
printf("%d\n",j);
for (int i = 0; i <= strlen(b); i++)
{
   a[j]=b[i];
   j++;
}
printf("%s\n",a);



    return 0;
}