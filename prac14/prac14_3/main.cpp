#include <iostream>
#include "CustomSet.h"

int main()
{
    CustomSet<int> customSet;
    try {
        customSet.contains(10);
    }
    catch (const EmptySetException& e) {
        std::cerr << e.what() << std::endl;
    }

    customSet.insert(10);
    try {
        bool found = customSet.contains(10);
        std::cout << "10 is " << (found ? "" : "not ") << "in the set" << std::endl;
    }
    catch (const EmptySetException& e) {
        std::cerr << e.what() << std::endl;
    }

    customSet.erase(10);
    try {
        bool found = customSet.contains(10);
        std::cout << "10 is " << (found ? "" : "not ") << "in the set" << std::endl;
    }
    catch (const EmptySetException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
