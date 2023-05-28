#include "Array.h"
#include <stdexcept>

Array::Array(size_t size) : data_(size) {}

int& Array::operator[](size_t index) {
    if (index >= data_.size()) {
        throw std::out_of_range("Индекс массива вне границ");
    }
    return data_[index];
}
