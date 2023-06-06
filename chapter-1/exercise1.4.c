#include <stdio.h>
int main()
{
  float f,c;
  for(c=0;c<=300;c+=20)
  {
      f=(c*9/5)+32;
      printf("%3.0f %6.1f\n",c,f);
  }
}