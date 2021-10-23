#include <stdio.h>
struct Book {
  char title[500];
  int bookId;
} book = {"test", 2};
struct Student {
  int id;
  char name[500];
} studentArray[3] = {{1, "student1"}, {2, "student2"}, {6, "no"}};

int main() {
  printf("bookId->%d  title->%s\n", book.bookId, book.title);
  printf("input student id and name:\n");
  int id;
  char name[500];
  scanf("%d %s", &id, name);
  struct Student *myStudent;
  myStudent = studentArray;
  myStudent = myStudent + 3;
  myStudent->id = id;
  struct Student *student;
  for (student = studentArray; student < studentArray + 3; student ++) {
    printf("id:%d  name:%s\n", student->id, student->name);
  }
}
