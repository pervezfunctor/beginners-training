//
// Created by technoidentity on 21/6/23.
//
//day_of_year and month_day with pointers
#include <stdio.h>
static char daytab[2][13]={
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};
int day_of_year(int year,int month,int day){
    int i,leap;
    char *p;
    leap=(year %4==0 && year %100!=0)|| year %400==0;
    if(year<1){
        return -1;
    }
    if(month<1 || month > 12){
        return -1;
    }
    if(day>daytab[leap][month]){
        return -1;
    }
    p=daytab[leap];
    while(--month){
        day+=*++p;
    }
    return day;
}
void month_day(int year, int yearday, int *pmonth, int *pday)
{
    int i, leap;
    if(year<1){
        *pmonth=-1;
        *pday=-1;
        return;
    }
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for (i = 1; yearday > daytab[leap][i]; i++)
        yearday -= daytab[leap][i];
    *pmonth = i;
    *pday = yearday;
}
int main(void)
{
    int year,month,day;
    printf("enter the year,month and day: ");
    scanf("%d%d%d",&year,&month,&day);
    if(day_of_year(year,month,day)<0){
        printf("error:range exceeded");
    }
    else
        printf("the day of the year is:%d\n",day_of_year(year,month,day));
    return 0;
}
