
#include<stdio.h>
#include<math.h>
struct Student
{
   int id;
   int marks1,marks2;
   char grade1,grade2;
};

char showGrade(int m)
{
    char g;

    if(m>=90){
        g='A';
    }
    else if(m>=80 && m<90){
        g='B';
    }
    else if(m>=70 && m<80){
        g='C';
    }
    else if(m>=60 && m<70){
        g='D';
    }
    else{
        g='F';
    }

    return g;
}

int main()
{
    struct Student s;
    char g1,g2;

    printf("Enter the student id:");
    scanf("%d",&s.id);
    printf("Enter the marks1:");
    scanf("%d",&s.marks1);
    printf("Enter the marks2:");
    scanf("%d",&s.marks2);


    g1=showGrade(s.marks1);
    g2=showGrade(s.marks2);


    printf("The grade of the first subject is %c\n",g1);

    printf("The grade of the second subject is %c\n",g2);



}



