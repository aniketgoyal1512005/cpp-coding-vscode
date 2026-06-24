#include<stdio.h>
struct student {
        char name[100];
        int rollnumber;
        float marks;
    };

int main ( ) {
    int n;
   printf("enter number of students: ");
   scanf("%d", &n);

   struct student students[n];
   int i ;
   for(i = 0 ;i < n; i++){
    printf("enter details for student number %d\n",i+1);
    printf("enter name \n");
    scanf(" %[^\n]",students[i].name);
    printf("enter roll number  \n");
    scanf("%d",&students[i].rollnumber);
    printf("enter marks  \n");
    scanf("%f", &students[i].marks);
   }

   for(i = 0;i < n; i++){
    printf("the details for student number %d\n",i+1);
    printf("name: %s\n",students[i].name);
    printf("roll number: %d\n",students[i].rollnumber);
    printf("marks: %f\n",students[i].marks);

   }
}