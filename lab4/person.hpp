#ifndef PERSON_HPP
#define PERSON_HPP

#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Person {
    public:
        void set_name(std::string name);
        std::string get_name() const;

        void set_age(unsigned int age);
        unsigned int get_age() const;

        void set_nationality(std::string nationality);
        std::string get_nationality() const;

        virtual std::string get_job() const;

        virtual ~Person() {}

    private:
        std::string _name = "No information";
        unsigned int _age  = 0;
        std::string _nationality = "No information";
};

#endif