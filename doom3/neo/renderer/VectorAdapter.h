#ifndef VECTOR_ADAPTER_H
#define VECTOR_ADAPTER_H

#include <vector>

#ifdef max
#undef max
#endif
#ifdef min
#undef min
#endif

#include <algorithm>
#include <iterator>

template<typename T>
class VectorAdapter {
public:
    void Append(const T &v) { v_.push_back(v); }
    void Clear() { v_.clear(); }
    size_t Num() const { return v_.size(); }
    int FindIndex(const T &v) const {
        auto it = std::find(v_.begin(), v_.end(), v);
        return (it == v_.end()) ? -1 : static_cast<int>(std::distance(v_.begin(), it));
    }
    T& operator[](size_t i) { return v_[i]; }
    const T& operator[](size_t i) const { return v_[i]; }
private:
    std::vector<T> v_;
};

#endif // VECTOR_ADAPTER_H
