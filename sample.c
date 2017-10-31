#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
 
  /* request auto detection */
  int gdriver = DETECT, gmode, errorcode;
  
  /* initialize graphics mode */
  initgraph(&gdriver, &gmode, "NULL");
  
  /* read result of initialization */
 
  

for(int i=0;i<300;i++)
{

line(100+i,15000+i,100);
delay(100;
cleardevice();
}
  

getch();
closegraph();
  return 0;
}

