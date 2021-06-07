#include <iostream>  
int main()  
{  
    int a=1;  
    int *const ptr=&a;  //declaring a Constant pointer
    //can't change the address of the value which it is pointing to
    printf("Value of ptr is :%d",*ptr); 
    *ptr=300;//but able to change the value , it will store the new variable in that location
    printf("Value of ptr is :%d",*ptr);  
    a=400; //can able to change value using that variable 
    printf("Value of ptr is :%d",*ptr);
    return 0;  
}  
