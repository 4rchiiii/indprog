#ifndef ARRAY_H
#define ARRAY_H

#include <vector>

class Array {
public:
    Array(size_t size);

    int& operator[](size_t index);

private:
    std::vector<int> data_;
};

#endif // ARRAY_H
