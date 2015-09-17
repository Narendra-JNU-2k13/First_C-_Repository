#include<stdio.h>
#include<math.h>

void reverse_no_recursively(int n,int len)
{  
     if(n>0)
     {
	     len+=n%10;
	     if(n/10!=0)
	     len*=10;
	     else
	     printf("%d",len);
         reverse_no_recursively(n/10,len);
     }
}

int main()
{
    int input,output,len=0;
    printf("\n \t Enter a no : - ");
    scanf("%d",&input);
    printf("\n\t Reversed Digits of given no : - ");
    if(input<0)   // to handle negative number.
    {            // it will convert into positive no and prefixed the output by negative(-) sign.
      input*=-1;
      printf("-");
    }  
  reverse_no_recursively(input,0);
    getchar();
    return getchar();
}
