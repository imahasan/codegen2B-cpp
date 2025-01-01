#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Student {
  int age;
  char name[20];
};

void get_data(Student student);

void get_data(Student student) {
  cout << "Enter student's age: ";
  cin >> student.age;
  cout << "Enter student's name: ";
  cin.getline(student.name, 20);
}

void print_data(Student student);

void print_data(Student student) {
  cout << "Student's age is " << student.age << endl;
  cout << "Student's name is " << student.name << endl;
}

int main() {
  Student student;
  get_data(student);
  print_data(student);
  return 0;
}