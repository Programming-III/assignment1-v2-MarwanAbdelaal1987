#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
using namespace std;

    class Student : public Person{
        private:
            string major;
            int yearLevel;
            void display();

        public:
            Student(string major, int yearLevel);
            Student();
            void display();
    };













#endif;
