#include <stdio.h> 
#include <stdlib.h>
 int main()
 { int i,T[10]={11,20,7,10,0,15,12,14,8};
 for (i=0;i<=8;i++)
 { printf("|%d",T[i]); }
 printf("\n");
 for (i=10;i>3;i--) 
{ T[i]=T[i-1]; } 
T[4]=9; 
for (i=0;i<=9;i++)
 { printf("|%d",T[i]); } 
return 0;
 }
