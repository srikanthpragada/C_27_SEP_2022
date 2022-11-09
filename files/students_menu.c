#include <stdio.h>
#define FILENAME "students.dat"

struct student {
    char name[30];
    int marks;
};

void main()
{
 int choice;

     while(1)
     {
         printf("\n\nStudents Menu\n");
         printf("===================\n");
         printf("1. Write Students\n");
         printf("2. List Students\n");
         printf("3. List Passed\n");
         printf("4. Get Students\n");
         printf("5. Update Marks\n");
         printf("6. Exit\n");
         printf("Choice [1-5] :");
         scanf("%d",&choice);

         switch(choice)
         {
             case 1 : write_students(); break;
             case 2 : list_students(); break;
             case 3 : list_passed(); break;
             case 4 : get_student(); break;
             case 5 : update_marks(); break;
             default : exit(0);
         }
     }
}

void write_students()
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

     printf("\nWrote data about students.\n\nPress any key to continue...");
     getch();
}

void list_students()
{
 FILE * fp;
 struct student s;
 int count;

     fp = fopen(FILENAME, "rb");
     printf("\nStudents\n");
     printf("============\n");
     while(1)
     {
         count = fread(&s, sizeof(struct student), 1, fp);
         if(count == 0) // EOF
            break;

         printf("%-20s %3d\n", s.name, s.marks);
     }

     fclose(fp);
     printf("\nPress any key to continue..");
     getch();
}

void list_passed()
{
 FILE * fp;
 struct student s;
 int count;

     fp = fopen(FILENAME, "rb");
     printf("\nPassed Students\n");
     printf("============\n");
     while(1)
     {
         count = fread(&s, sizeof(struct student), 1, fp);
         if(count == 0) // EOF
            break;
         if(s.marks >= 50)
             printf("%-20s %3d\n", s.name, s.marks);
     }

     fclose(fp);
     printf("\nPress any key to continue..");
     getch();
}


void get_student()
{
 FILE * fp;
 struct student s;
 int count, pos, sno;

     fp = fopen(FILENAME, "rb");
     printf("\nEnter student number : ");
     scanf("%d",&sno);
     pos = sizeof(struct student) * (sno - 1);
     fseek(fp, pos, SEEK_SET); // Move to given pos from the beginning of the file
     count = fread(&s, sizeof(struct student), 1, fp);
     if(count == 1)
        printf("%-20s %3d\n", s.name, s.marks);
     else // not found
        printf("Sorry! Invalid Student Number!");

     fclose(fp);

     printf("\n\nPress any key to continue...");
     getch();

}
void update_marks()
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
        printf("\nUpdated marks successfully!");
     }
     else // not found
        printf("\nSorry! Invalid Student Number!");

     fclose(fp);

     printf("\n\nPress any key to continue...");
     getch();
}
