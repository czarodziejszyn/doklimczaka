Program concepts :
    Program is designed to create list of people with some information about them.
    It has person class and 2 classes that inherit from that class.
    display.cpp file displays information on console using 2 different functions,
    one of them is used for unique pointer and second for share pointer elements.
    Program in main.cpp shows different ways of creating different class objects.
    File factory.cpp has factory class that creates 'users' and returns pointers
    to those objects.

    -Polymorphism :
        -Classes lecturer and student inherit from a person class.
        Virtual function get_job() returns differend value for each of theese 3 classes.

    -std::unique_ptr :
        -Unique pointers are used in both main.cpp and factory files.
        create_person_unique() return unique pointer to object person ot to its inheritance.

    -std::shared_ptr :
        -Shared pointers are used in both main.cpp and factory files.
        create_person_shared() returns shared pointer to object person or to its inheritance which is later duplicated.

    -Fabric :
        -Design pattern used in program is fabric.
        Fabric class functions return pointer to person class object or its inheritance which are not in objects of fabtic class.