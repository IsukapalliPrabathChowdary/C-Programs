/*53.	Declare a two dimensional array of elements for sales details of a store, for each item, for each sales man. Take the sales values as input and print the array in matrix form.
Find out and print the following :
a ) Total sales by each sales man
b ) Total sales for a item
c ) Total sales*/

#include<stdio.h>
#define sales_man 2
#define items 4
int main()
{
int store[sales_man][items];
int Salesman=0,itm=0,total_sales=0;

// storing values of sales man and items 
for(int i =0; i<sales_man;++i){

       for(int j =0; j<items;++j){
		printf("Sales_men %d , item %d :",i+1,j+1);
		scanf("%d",&store[i][j]);
 	 }
}


// Displaying values of sales man and items in matrix form

printf("Dispayed rows are sales man & coloumns are items\n");
for(int i =0; i<sales_man;++i){

       for(int j =0; j<items;++j){
		printf("%d  ",store[i][j]);
		
	
 	 }
		printf("\n");
}

//Total sales by each sales man

for(int i =0; i<sales_man;++i){

       for(int j =0; j<items;++j){
		Salesman+=store[i][j];
		
	
 	 }
		printf("\nTotal sales by sales_man%d:%d",i+1,Salesman);
		Salesman=0;
	
}

// Total sales by each item

for(int j =0; j<items;++j){
  
         for(int i =0; i<sales_man;++i){
                  
                  itm+=store[i][j];
  
           }
                  printf("\nTotal sales for  item%d:%d",j+1,itm);
                 itm=0;
                  
 
}

// Total sales

for(int i =0; i<sales_man;++i){
  
         for(int j =0; j<items;++j){
              
                 total_sales+=store[i][j];
           }           
  }
printf("\nTotal sales are:%d",total_sales);
return 0;
}
