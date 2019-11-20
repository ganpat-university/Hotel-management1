/*
Objectives: A (Hotel Reservation MS) Hotel Reservation system takes following input
1) Booking_id
2) Type of visitor (Adults, Children)
3) Room_type
4) Contact Number
5) Address
6) Start_date
7) End_Date
8) No of days booked for
9) Booked_on
10) Pass Status
11) Service charge
12) Fooding status
13) Room_service status
14) Fooding status
15) Tea Service status
Based on above inputs it will display the total bill along with following
condition
 On booking a room for more than 2 days, 10% discount will
be applicable on the total bill.
 No service charge is charged on the children booking.
 5% service charge is charged on the Adults booking.
 Extra 2000 is charged if fooding is also needed.
 10% is added on daily basis for room_service.
 3% is charged extra for serving tea in the room itself.
*/
#include<stdio.h>
struct hotel_reservation
{
 int id[3];
 char room_type[10];
 int adult[10];
 int children[10];
 int contact_no;
 char Address[10];
 int start_date;
 int end_date;
 int days;
 int booked_on;
 char pass_status[10];
 double service;
 float food_status;
 double room_service;
 double tea_service;
 float Discount;
 float bill;
} s[3];
void main()
{
 int i;
 {
 for(i=0;i<=2;i++)
 {
  printf("Booking_id\n");
  scanf("%d",&s[i].id);
  printf("Adult\n");
  scanf("%d",&s[i].Adult);
  printf("children\n");
  scanf("%d",&s[i].children);
  printf("Room_type\n");
  scanf("%s",&s[i].Rtype);
  printf("Contact number\n");
  scanf("%d",&s[i].cno);
  printf("Address\n");
  scanf("%s",&s[i].Address);
  printf("start_date\n");
  scanf("%d",&s[i].sdate);
  printf("end_date\n");
  scanf("%d",&s[i].edate);
  printf("No of days booked for\n");
  scanf("%d",&s[i].days);
  printf("Booked_on\n");
  scanf("%d",&s[i].Booked_on);
  printf("Pass status\n");
  scanf("%s",&s[i].Pstatus);
  printf("Service charge\n");
  scanf("%d",&s[i].service);
  printf("Fooding status\n");
  scanf("%d",&s[i].Fstatus);
  printf("Room_service status\n");
  scanf("%d",&s[i].Rservice);
  printf("Tea service status\n");
  scanf("%d",&s[i].Tservice);
  printf("Discount offered\n");
  scanf("%d",&s[i].Discount);
  printf("Total bill to be payed\n");
  scanf("%d",&s[i].bill);
 }
 
 }
 
 {
 if(s[i].days>2)
{
 s[i].Discount=0.01*+s[i].bill;
}
  if(s[i].children<=0)
{
s[i].service=0;
}
 
 if(s[i].Adult>=1)
{
s[i].service=0.05*+s[i].bill;
 }

 if(s[i].Fstatus>0)
{
s[i].Fstatus=2000+s[i].bill;
 }

 if(s[i].Rservice>0)
{
s[i].Rservice=0.01*+s[i].bill;
}

 if(s[i].Tservice>0)
{
 s[i].Tservice=0.03*+s[i].bill;
}


}
 printf("DATABASE\n");

 printf("Booking_id | Contact number | Adults imformation  | Address | Room_service | children imformation\n");

 for(i=0;i<=2;i++)
 {
  printf("%d\t\t%d\t\t%d\t\t%s\t\t%d\t\t%d\n",s[i].id,s[i].cno,s[i].Adult,s[i].Address,s[i].Rservice,s[i].children);    
 }


printf("DATABASE\n"); 
 printf("start_date | end_date | Booked_on | Discount offered | Total bill to be payed\n");
 for(i=0;i<=2;i++)
 {
  printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n",s[i].sdate,s[i].edate,s[i].Booked_on,s[i].Discount,s[i].bill);
 }

}