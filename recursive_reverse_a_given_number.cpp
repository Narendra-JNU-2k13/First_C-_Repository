#include<stdio.h>
int reverse_no_recursively(int n)
{   static int result=0;
    if(n>0)
        { 
	  result+=(n%10);
	  if(n/10!=0)
            result*=10;
	   reverse_no_recursively(n/10);         
          }
    return result; 	
 }

 int main()
   {
     int input,output; 
     printf("\n \t Enter a no : - ");
     scanf("%d",&input); 
     printf("\n\t Reversed Digits of given no : - ");
     if(input<0)   // to handle negative number.
	  {            // it will convert into positive no and prefixed the output by negative(-) sign.
	      input=input*(-1);	       
	       printf("-");				
	  }		
        output=reverse_no_recursively(input);
        printf("%d",output);
        return getchar();
  }

