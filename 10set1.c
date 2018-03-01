#include<stdio.h>
#include<string.h>
int main()
{
  float l,b,h;
  int tsa,v;
  scanf("%f\t%f\t%f",&l,&b,&h);
  tsa=2*(l*b+b*h+h*l);
  v=l*b*h;
  printf("%d\n%d",tsa,v);
}
