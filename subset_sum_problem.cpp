#include<stdio.h>
#include<iostream>
using namespace std;

char chararr[40];
int intarr[40],sum;
unsigned int no_of_element;
int flag; //to check output exist or not

void print_output()
{
   printf("\n\t");
      for(int i=0;i<no_of_element;i++)
         {
	       if(chararr[i]=='1')
	                printf(" %d +",intarr[i]);        
			   }  
			      printf("\b= %d",sum);
			      }

			      void subset_sum(int n)
			      {
			          
				    if(n<1)
				      {      int rsum=0;
				               for(int i=0;i<no_of_element;i++)
					                { 
							            if(chararr[i]=='1')
								                rsum+=intarr[i];
										         } 
											          if(rsum==sum)
												           { flag=1;
													                print_output();
															         }   
																   }
																     else
																       {
																             chararr[n-1]='0';
																	           subset_sum(n-1);
																		         chararr[n-1]='1';
																			       subset_sum(n-1);
																			         }       
																				 }

																				 int main()
																				 {
																				     int i;
																				         cout<<"\n How many elements do u want in array : - ";
																					     cin>>no_of_element;
																					         for(i=0;i<no_of_element;i++)
																						     cin>>intarr[i];
																						         cout<<"\n Enter sum equivalent : - ";
																							     cin>>sum;
																							         flag=0;
																								     subset_sum(no_of_element);
																								         if(flag==0)
																									     printf("\n\n\t Sorry No output  exist\n\n");
																									         getchar();
																										     return getchar();
																										     }    

