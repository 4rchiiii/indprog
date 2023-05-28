#include <set>
#include <exception>

class EmptySetException : public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "Access to an empty set";
    }
};

template <typename T>
class CustomSet
{
private:
    std::set<T> set_;

public:
    void insert(const T& value);
    void erase(const T& value);
    bool contains(const T& value);
};

template <typename T>
void CustomSet<T>::insert(const T& value)
{
    set_.insert(value);
}

template <typename T>
void CustomSet<T>::erase(const T& value)
{
    set_.erase(value);
}

template <typename T>
bool CustomSet<T>::contains(const T& value)
{
    if (set_.empty())
    {
        throw EmptySetException();
    }
    return set_.find(value) != set_.end();
}
