#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "person.hpp"
#include "student.hpp"
#include "lecturer.hpp"

class Factory {
    public:
        std::unique_ptr<Person> create_person_unique(const std::string& person_type);
        
        std::shared_ptr<Person> create_person_shared(const std::string& person_type);
};
#endif