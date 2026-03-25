#include <stdio.h>
int main()
{
int roll, choice;
char name[30];
char attendance;
while(1)
{
printf("\nSTUDENT ATTENDANCE MANAGEMENT SYSTEM\n");
printf("1. Add Student Attendance\n");
printf("2. Exit\n");
printf("Enter your choice: ");
scanf("%d",&choice);
if(choice==1)
{
printf("Enter Roll Number: ");
scanf("%d",&roll);
printf("Enter Student Name: ");
scanf("%s",name);
printf("Enter Attendance (P for Present / A for Absent): ");
scanf(" %c",&attendance);
printf("\nAttendance Recorded Successfully!\n");
printf("Roll No: %d\n",roll);
printf("Name: %s\n",name);
printf("Attendance: %c\n",attendance); 
}
else if(choice==2)
{
printf("Program Ended\n");
break;
}
else
{
printf("Invalid Choice\n");
}
}
return 0;
}
