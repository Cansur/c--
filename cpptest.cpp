#include <iostream>
#include <optional>

int main()
{
    std::cout << "TEST" << std::endl;
    std::optional<std::string> a("HI");
    std::cout << a.value() << std::endl;
    return 0;
}