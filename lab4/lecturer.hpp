#ifndef LECTURER_HPP
#define LECTURER_HPP

#include "person.hpp"

class Lecturer : public Person {
    public:
        virtual std::string get_job() const;
};

#endif