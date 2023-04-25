#include "person.hpp"

void Person::set_name(std::string name) {
     _name = name;
}

std::string Person::get_name () const {
    return _name;
}

void Person::set_age(unsigned int age) {
    _age = age;
}

unsigned int Person::get_age() const {
    return _age;
}

std::string Person::get_job() const {
    return "No information";
}

void Person::set_nationality(std::string nationality) {
    _nationality = nationality;
}

std::string Person::get_nationality() const {
    return _nationality;
}
