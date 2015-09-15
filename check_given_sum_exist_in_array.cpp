#include<iostream>
using namespace std;

int subset_exist_for_sum(int a[],int n,int sum)
{
    bool arr[n][sum+1];
    int i,j;
    for(i=0;i<n;i++)
      arr[i][0]=true;
    for(i=1;i<sum+1;i++)
       {
         if(a[0]==i)
         arr[0][i]=true;
         else
         arr[0][i]=false;                 
       }       
       
     for(i=1;i<n;i++)
     {
       for(j=1;j<=sum;j++)
       {
          arr[i][j]=arr[i-1][j];
          if(j>a[i])
            arr[i][j]|=arr[i-1][j-a[i]];                             
       }
     }             
     return arr[n-1][sum];                      
}


int main()
{
  int n,sum,i;
  cout<<"\n How many elements do you have : - ";
  cin>>n;  
  int a[n]; 
  for(i=0;i<n;i++)
  {
     cout<<"\n Enter a value : -";
     cin>>a[i];             
  }
  cout<<"\n\n Enter non-negative sum = ";
  cin>>sum;
  if(sum<0)
  {
    cout<<"\n\n\t Sorry !!! This program will not work for negative sum\n\n";
    getchar();
    return getchar();
  }
  
  if( subset_exist_for_sum(a,n,sum))
    cout<<"\n Yes subset of this sum exist";
    else
      cout<<"\n Sorry !!! sum doesnot exist\n\n";
      getchar();
   return getchar();
}  
