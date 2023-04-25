#include "person.hpp"
#include <sstream>

void display (std::unique_ptr<Person> person){
    std::string output = "--------------------\nName : ";
    output += person->get_name();
    output += "\nAge : ";
    std::stringstream ss;
    ss << person->get_age();
    auto age_as_string = ss.str();
    if (age_as_string == "0"){
        age_as_string = "No information";
    }
    output += age_as_string;
    output += "\nJob : ";
    output += person->get_job();
    output += "\nCountry of birth : ";
    output += person->get_nationality();
    std::cout << output << "\n";
}

void display (std::shared_ptr<Person> person){
    std::string output = "--------------------\nName : ";
    output += person->get_name();
    output += "\nAge : ";
    std::stringstream ss;
    ss << person->get_age();
    auto age_as_string = ss.str();
    if (age_as_string == "0"){
        age_as_string = "No information";
    }
    output += age_as_string;
    output += "\nJob : ";
    output += person->get_job();
    output += "\nCountry of birth : ";
    output += person->get_nationality();
    std::cout << output << "\n";
}

// void display(const Person& person) {
//     std::string output = "";
//     output += person.get_name();
//     output += ", ";
//     std::stringstream ss;
//     ss << person.get_age();
//     auto age_as_string = ss.str();
//     output += age_as_string;
//     output += "\njob : ";
//     output += person.get_job();
//     std::cout << output << "\n";
// }