#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include "Person.h"
#include <string>
using namespace std;

    class Instructor : public Person{
        private:
        string department;
        int experienceYears;

        public:
        Instructor(string department, int experienceYears);
        Instructor();
        void display();
    }











#endif
