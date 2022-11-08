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
 int i;

     fp = fopen(FILENAME, "wb");

     srand(time(0));
     for(i = 1; i <= 20; i ++)
     {
       sprintf(s.name, "Student%d",i);  // write to string
       s.marks = rand() % 100;
       fwrite(&s, sizeof(struct student),1, fp);
     }

     fclose(fp);
}
