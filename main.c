#include <stdio.h>
#include <string.h>

struct student {
   int ID;
   char name[10];
   double grade;
};

int main(void)
{
   struct student s1 = {24, "Jihyeon", 4.3};

   printf("ID : %d\n", s1.ID);
   printf("name : %s\n", s1.name);
   printf("grade : %f\n", s1.grade);

   s1.ID = 123456;             // 학번, 이름, 학점을 다른 값으로 변경
   strcpy(s1.name, "Juyeop");
   s1.grade = 4.2;

   printf("ID : %d\n", s1.ID);
   printf("name : %s\n", s1.name);
   printf("grade : %f\n", s1.grade);

   return 0;
}
