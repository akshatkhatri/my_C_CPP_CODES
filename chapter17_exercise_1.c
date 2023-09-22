// author-akshat khatri//
// date-28-06-2023//
//  structure for data of students of a college//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
    int roll_no;
    int join;
    char name[20];
    char dept[30];
    char course[30];

} student;

void print_data(struct student *);
int main()
{
    student student_college[50] = {
        {154, 2022, "technology", "b.tech computer science"},
        {163, 2021, "law", "llb corporate"},
        {123, 2023, "managment", "bba hotel managment"},
        {169, 2019, "nusring", "b.pharma in medicines"},
        {101, 2022, "John Smith", "Computer Science", "B.Tech"},
        {102, 2021, "Emily Johnson", "Electrical Engineering", "B.Tech"},
        {103, 2023, "Michael Williams", "Mechanical Engineering", "B.Tech"},
        {104, 2021, "Emma Brown", "Civil Engineering", "B.Tech"},
        {105, 2022, "Daniel Davis", "Business Administration", "BBA"},
        {106, 2023, "Sophia Wilson", "Finance", "BBA"},
        {107, 2022, "William Martinez", "Marketing", "BBA"},
        {108, 2023, "Olivia Anderson", "Human Resource Management", "BBA"},
        {109, 2022, "James Taylor", "English Literature", "BA"},
        {110, 2023, "Mia Thomas", "Psychology", "BA"},
        {201, 2022, "Liam Rodriguez", "Information Technology", "B.Tech"},
        {202, 2023, "Noah Lee", "Data Science", "B.Tech"},
        {203, 2022, "Ava Garcia", "Biotechnology", "B.Tech"},
        {204, 2021, "Emma Davis", "Chemical Engineering", "B.Tech"},
        {205, 2022, "Sophia Johnson", "Business Administration", "BBA"},
        {206, 2023, "Daniel Martinez", "Finance", "BBA"},
        {207, 2022, "Olivia Wilson", "Marketing", "BBA"},
        {208, 2023, "William Thompson", "Human Resource Management", "BBA"},
        {209, 2022, "James Davis", "English Literature", "BA"},
        {210, 2023, "Mia Anderson", "Psychology", "BA"},

    };

    printf("enter the roll number of the student\n");
    int roll_number;
    scanf("%d", &roll_number);
    int found = 0;
    for (int i = 0; i < 50; i++)
    {
        if (student_college[i].roll_no == roll_number)
        {
            found = 1;
            print_data(&student_college[i]);
            break;
        }
    }
    if (found != 1)
    {
        printf("no such record found");
    }
    return 0;
}

void print_data(student *stu)
{
    printf("roll no.=%d\n", stu->roll_no);
    printf("joining year=%d\n",stu->join);
    printf("name-%s\n",stu->name);
    printf("department=%s\n",stu->dept);
    printf("course-%s\n",stu->course);
}
