#include <stdio.h>
#define FILENAME "students.dat"

struct student {
    char name[30];
    int marks;
};

void main()
{
 FILE * fp;
 struct student s;
 int count, pos, sno;

     fp = fopen(FILENAME, "rb");
     printf("Enter student number : ");
     scanf("%d",&sno);
     pos = sizeof(struct student) * (sno - 1);
     fseek(fp, pos, SEEK_SET); // Move to given pos from the beginning of the file
     count = fread(&s, sizeof(struct student), 1, fp);
     if(count == 1)
        printf("%-20s %3d\n", s.name, s.marks);
     else // not found
        printf("Sorry! Invalid Student Number!");

     fclose(fp);
}
