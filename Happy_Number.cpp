#include<map>
#include<iostream>
using namespace std;

int happy_number(int n)
{
	int res;
   map<int,char> ht;
   if(n==1)
      return 1;
      else
      {
      	while(2)
      	{
      	 res=0;
      	 while(n>0)
      	 {
      	     res+=(n%10)*(n%10);
			   n=n/10;	
		 }
		   if(res==1)
		    return 1;
		    else
		    {
		    	if(ht[res]!='1')
		    	   ht[res]='1';
		    	  else
				    return 0;
					n=res; 
			}
	    }
		 
	  }
   
}

int main()
{
	int n,output;
	cout<<"\n\n\t Enter a number which you want to test happy no : - ";
	cin>>n;
	output=happy_number(n);
	if(output==1)
	   cout<<"\n\n\t Yes "<<n<<" is happy number"<<endl;
	   else
	     cout<<"\n\n\t "<<n<<" is not happy number"<<endl;
	getchar();
	return getchar();
}
