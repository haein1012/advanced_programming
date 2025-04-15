#include <iostream>
#include <string>

class Person {
public:
    std::string name;
    int age;
    std::string address;
};

class PersonBuilder {
private:
    Person person;

public:
    PersonBuilder& withName(const std::string& name) {
        person.name = name;
        return *this;
    }

    PersonBuilder& withAge(int age) {
        person.age = age;
        return *this;
    }

    PersonBuilder& withAddress(const std::string& address) {
        person.address = address;
        return *this;
    }

    Person build() {
        return person;
    }
};

void runBuilder() {
    std::cout << "=== Builder Pattern ===" << std::endl;
    Person person = PersonBuilder()
                        .withName("홍길동")
                        .withAge(20)
                        .withAddress("부산대학교 양산캠퍼스")
                        .build();
    std::cout << "Name: " << person.name << std::endl;
    std::cout << "Age: " << person.age << std::endl;
    std::cout << "Address: " << person.address << std::endl;
}
