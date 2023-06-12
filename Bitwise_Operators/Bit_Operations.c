#include <stdio.h>
//Macros to perform Bit Operations
#define SETBIT(value,position)   value|=1<<position   //To set a bit 

#define CLEARBIT(value,position) value &= ~(1<<position)   //To clear a bit

#define BITCHECK(value,position) value&(1<<position)    //To check a bit

#define BIT_SWAP(value)          ((value & 0x0F)<<4 | (value &0xF0)>>4)  //to swap a bit

#define BIT_TOOGLE(value,position) value^=1<<pos    //to toggle a bit

//Main function
int main()
{
    unsigned int n,pos,check;
    printf("Enter a number:");
    scanf("0x%x",&n);
    printf("Enter nth position of bit to set:");
    scanf("%d",&pos);
    
    
    SETBIT(n,pos);
    printf("After %d bit set the value is 0x%x\n",pos,n);
   
    check=BITCHECK(n,pos);
 
    if(check){
     CLEARBIT(n,pos);
    printf("After %d bit clear the value is 0x%x\n",pos,n);
    }
    n=BIT_SWAP(n);
    printf("After bit swap value is 0x%x\n",n);
    
    BIT_TOOGLE(n,pos);
    printf("After toogle bit is 0x%x\n",n);
    BIT_TOOGLE(n,pos);
    printf("After toogle bit is 0x%x",n);
    return 0;
}
