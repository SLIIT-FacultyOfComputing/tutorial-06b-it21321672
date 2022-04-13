#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
Student::assignDetails() {
void Student::assignDetails(int StudentId, char Name[]) {
  studentId=StudentId; 
    strcpy(name,Name);

}

// Display StudentId and Name
Student::display() {
void Student::display() {

  cout<< studentId<<" "<<name;

}