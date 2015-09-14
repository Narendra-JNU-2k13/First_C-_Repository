#include<stdio.h>
#include<math.h>

int reverse_no_recursively(int n,int len)
{  
    if(len==1)
    { 
         return n;
    }
    else
    {    len--;
       return ((n%10)*pow(10,len))+reverse_no_recursively(n/10,len);    
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
    output=input;     // calculating length of number using output as a temporary variable
    while(output>0)
     {
        len++;             
         output/=10;          
      }
    output=reverse_no_recursively(input,len);
    printf("%d",output);
    getchar();
    return getchar();
}
