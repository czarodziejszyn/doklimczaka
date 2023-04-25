#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "person.hpp"

class Student : public Person {
    public:
        virtual std::string get_job() const;
};

#endif