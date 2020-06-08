#include <iostream>

class Person {
public:
    Person(const std::string name = "", int age = 0) :
            name_(name), age_(age) {
        std::cout << "Init a Person object" << std::endl;
    }

    ~Person() {
        std::cout << "Destroy a Person object" << std::endl;
    }

    const std::string &getName() const {
        return this->name_;
    }

    int getAge() const {
        return this->age_;
    }

private:
    const std::string name_;
    int age_;
};

int main() {
    Person p;
    return 0;
}
