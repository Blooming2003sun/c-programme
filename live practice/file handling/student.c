/*Topic:-student databaseusing  structure and file
Author-Rudreswar_Pal*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
    char name[30];
    char mob_no[12];
    char home_town[30];
} student;
void read_data(student *, int);
void show_data(student *, int);

int main(void)
{
    char class_name[30];
    FILE *fp = NULL;
    char str[50], file_name[20];
    int student_no, ctrl, swctrl;
    printf("this is student database\n");
    printf("enter name of the class\n");
    fgets(class_name, 29, stdin);
    printf("enter no of student in the class\n");
    scanf("%d", &student_no);
    student sarr[student_no], *sptr = sarr;
    printf("enter your input: read(1) write(2) show(3) exit(0)\n");
    scanf("%d", &ctrl);
    while (ctrl)
    {
        swctrl = ctrl;
        switch (swctrl)
        {
        case 1:
            for (int i = 0; i < student_no; i++)
            {
                read_data(sarr, i);
            }
            break;
        case 2:
        //write data
            printf("enter the file name\n");
            scanf("%19s", file_name);
            fp = fopen(file_name, "w");
            if (fp == NULL)
            {
                printf("file not found");
                exit(1);
            }
            fflush(stdin);
            fputs("class name - ",fp);
            fputs(class_name,fp);
            fputc('\n',fp);
            for (int i = 0; i < student_no; i++)
            {
                fflush(stdin);
                fputs(sarr[i].name, fp);
                fputs(sarr[i].mob_no, fp);
                fputs(sarr[i].home_town, fp);
                fputc('\n', fp);
            }

            break;
        case 3:
            printf("\n\nstudent data of class-%s===============\n", class_name);
            for (int i = 0; i < student_no; i++)
            {
                show_data(sarr, i);
            }
            break;
        default:
            printf("invalid input\n");
        }
        printf("enter your input: read(1) write(2) show(3) exit(0)\n");
        scanf("%d", &ctrl);
    }
    printf("interface closed");
    return 0;
}
void read_data(student *sarr, int n)
{
    fflush(stdin);
    printf("enter name of student%d\n", n + 1);
    fgets(sarr[n].name, 29, stdin);
    printf("enter mobile no of student%d\n", n + 1);
    fgets(sarr[n].mob_no, 12, stdin);
    printf("enter hometown of student%d\n", n + 1);
    fgets(sarr[n].home_town, 29, stdin);
}
void show_data(student *sptr, int n)
{
    printf("name of student%d is %s", n + 1, sptr[n].name);
    printf("mobile no of student%d %s", n + 1, sptr[n].mob_no);
    printf("hometown - %s", sptr[n].home_town);
    printf("----------------\n");
}