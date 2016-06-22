#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{

   int hour,minute,i;
   double angle_hour,angle_minute,angle;
   char time[6];
    while( gets(time))
    {
    if ((time[0]=='0')&&(time[2]=='0')&&(time[3]=='0')) {break;}
   if(time[2]==':')
   {
        hour=((time[0]-'0')*10)+time[1]-'0';
        minute=((time[3]-'0')*10)+time[4]-'0';
   }
   if (time[1]==':')
   {
       hour=time[0]-'0';
       minute=((time[2]-'0')*10)+time[3]-'0';
   }

    angle_hour=.5*((60*hour)+minute);
    angle_minute=6*minute;
    angle=angle_hour-angle_minute;
    angle=fabs(angle);
    if(angle>180)
    {
        angle=360-angle;
    }
    printf("%.3lf\n",angle);


}
  return 0;
}