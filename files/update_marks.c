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
 int count, pos, sno, newmarks;

     fp = fopen(FILENAME, "r+b"); // read write mode

     printf("Enter student number : ");
     scanf("%d",&sno);

     pos = sizeof(struct student) * (sno - 1);
     fseek(fp, pos, SEEK_SET); // Move to given pos from the beginning of the file
     count = fread(&s, sizeof(struct student), 1, fp);
     if(count == 1) {
        printf("Enter new marks : ");
        scanf("%d",&newmarks);
        s.marks = newmarks;
        fseek(fp, pos, SEEK_SET); // Move back to correct position and then write
        fwrite(&s, sizeof(struct student), 1, fp);
     }
     else // not found
        printf("Sorry! Invalid Student Number!");

     fclose(fp);
}
