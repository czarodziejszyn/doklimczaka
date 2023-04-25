#include "display.cpp"
#include "student.hpp"
#include "lecturer.hpp"
#include "factory.hpp"

int main() {
    std::unique_ptr<Person> person = std::make_unique<Person>();
    person->set_age(50);
    person->set_name("Sebastian");
    person->set_nationality("Poland");

    std::shared_ptr<Student> student = std::make_shared<Student>();
    auto student_ptr1 = student;
    student->set_age(20);
    student_ptr1->set_name("Szymon");

    Factory factory = Factory();
    auto lecturer = factory.create_person_unique("lecturer");
    lecturer->set_age(35);
    lecturer->set_name("Lecturer name");
    lecturer->set_nationality("Lecturer nationality");

    auto person_shared = factory.create_person_shared("person");
    auto person_shared_ptr = person_shared;
    person_shared->set_name("Shared person");
    person_shared_ptr->set_age(100);
    person_shared->set_nationality("Shared person nationality");

    display(std::move(person));
    display(std::move(student));
    display(std::move(lecturer));
    display(std::move(person_shared_ptr));

    return 0;
}