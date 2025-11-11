#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person(string name, int id){
            this->name = name;
            this->id = id;
        }
        Person(){
            this->name = "Marwan";
            this->id = 1987;
        }
        void display(){
            cout << "Name: " << this->name << ", ID: " << this->id << endl;
        }







// ==================== Student Class Implementation ====================
Student(string major, int yearLevel){
            this->major = major;
            this->yearLevel = yearLevel;
            }
            Student(){
            this->major = "Computer Science";
            this->yearLevel = 2;
            }
            void display(){
                cout << "Major: " << this->major << ", Year Level: " << this->yearLevel << endl;
            }





// ==================== Instructor Class Implementation ====================
Instructor(string department, int experienceYears){
            this->department = department;
            this->experienceYears = experienceYears;
        }
        Instructor(){
            this->department = "Computer Science";
            this->experienceYears = 5;
        }
        void display(){
            cout << "Department: " << this->department << ", Experience Years: " << this->experienceYears << endl;
        }






// ==================== Course Class Implementation ====================
Course(string courseCode, string CourseName, int maxStudents){
                this->courseCode = courseCode;
                this->courseName = courseName;
                this->maxStudents = maxStudents;
                this->students = new Student[maxStudents];
                this->currentStudents = 0;
            }
            ~Course(){
                delete[] students;
            }
            Course(){
                this->courseCode = "CS101";
                this->courseName = "Computer Science";
                this->maxStudents = 10;
                this->students = new Student[maxStudents];
                this->currentStudents = 0;            
            }
            void addStudent(const Student& s){
                if(this->currentStudents < this->maxStudents){
                    this->students[this->currentStudents] = s;
                    this->currentStudents++;
                } else {
                    cout << "Cannot add more students, course is full." << endl;
                }
            }
            void displayCourseInfo(){
                cout << "Course: " << this->courseCode << " - " << this->courseName << ", Max Students: " << this->maxStudents << ",Currently Enrolled: " << this->currentStudents << endl;
            }
    







// ==================== Main Function ====================
int main() {
    Person studentPerson("Omar Nabil", 2202);
    Student student("Informatics", 2);
    Instructor instructor("Computer Science", 5);
    Person instructorPerson("Dr. Lina Khaled", 0);
    Course course("CS101", "Introduction to Programming", 3);
    course.addStudent(student);
    studentPerson.display();
    student.display();
    instructor.display();
    instructorPerson.display();
    course.displayCourseInfo();
    return 0;
}
