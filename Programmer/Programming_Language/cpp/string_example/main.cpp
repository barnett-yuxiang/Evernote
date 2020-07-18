#include <iostream>
#include <string>

std::string GetPackageName() {
    std::string pkg("system_server");
    return pkg;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << ("system_server" == GetPackageName()) << std::endl;
    std::cout << (GetPackageName().compare("system_server")) << std::endl;
    return 0;
}
