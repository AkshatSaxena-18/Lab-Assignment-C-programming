#include <stdio.h>

struct Person {
   char name[50];
   int age;
   float salary;
};

void copy(struct Person *dest, struct Person *src) {
   *dest = *src;  
}

int main() {
   struct Person person1 = {"Akshat",30,50000.0};
   struct Person person2;

   copy(&person2, &person1);

   printf("Person 2 details:\n");
   printf("Name: %s\n", person2.name);
   printf("Age: %d\n", person2.age);
   printf("Salary: %.2f\n", person2.salary);

   return 0;
}
