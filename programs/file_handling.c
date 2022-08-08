/* This program is written by Vishal Das
(2K21/A8/24) on July 21, 2022 03:15 PM
for Lab File of course CO102
*/

#include <stdio.h>

int main(){
    char name[20];
    int age;
    float salary;

    FILE *emp;
    emp=fopen("emp.txt","w+");

    printf("Enter name : ");
    gets(name);
    printf("Enter age : ");
    scanf("%d",&age);
    printf("Enter salary : ");
    scanf("%f",&salary);
    fprintf(emp,"%s %d %f",name,age,salary);
    printf("\nFile saved as emp.txt!\n");

    return 0;
}
