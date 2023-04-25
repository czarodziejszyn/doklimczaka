#include "factory.hpp"

std::unique_ptr<Person> Factory::create_person_unique(const std::string& person_type){
    if (person_type == "student") {
        return std::make_unique<Student>();
    } else if (person_type == "lecturer") {
        return std::make_unique<Lecturer>();
    } else {
        return std::make_unique<Person>();;
    }
}

std::shared_ptr<Person> Factory::create_person_shared(const std::string& person_type){
    if (person_type == "student") {
        return std::make_shared<Student>();
    } else if (person_type == "lecturer") {
        return std::make_shared<Lecturer>();
    } else {
        return std::make_shared<Person>();
    }
}