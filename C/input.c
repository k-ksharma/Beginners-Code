#incude <stdio.h>

int main()
{
  int a;  //declaring a variable a of integer type
  
  scanf("%d",&a); //input value into variable a
  
  //%d defines that the value being input is of integer type
  //scanf takes two arguments, the types of input and the address of the variable to allocate the input value
  //remember to use '&' as scanf needs address not the variable name to perform allocation
  
  printf("%d",a); //output the value stored in a
  
  //%d defines the value being output is an integer
  //printf does not need address
  
  return 0;
  
}
