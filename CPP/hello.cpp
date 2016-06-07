//header file to include input/output stream

#include<iostream>

using namespace std;

//namespace is a fumction and std "standard" is a library that reduces thway we will havr to write cout/cin

int main()
//function from where the execution will start and its type(int) tells its return typ, what value function will return
{
  //console output: prints on the screen
  
  cout<<"Hello world";
  
  //if we hadn't used "using namespace std" the syntax would have been
  //std::cout<<"hello World";
  //comment the using... statement and uncomment this statement and prev cout
  
  return 0;
  
  //since the function should return a value
}
