
#ifndef CPP_LONDON_UNI_ALGORITHMS_EXERCISE_HPP
#define CPP_LONDON_UNI_ALGORITHMS_EXERCISE_HPP

#include <iterator>

/*
 * For the given range [first, last), returns the number of elements which
 * compare equal to the given value
 */
template <typename Iter, typename T>
std::size_t count(Iter first, Iter last, const T& value)
{
    std::size_t n = 0;
    for (; first != last; ++first) {
        if (*first == value) {
            ++n;
        }
    }
    return n;
}

/*
 * Returns the first element in the given range which compares equal to value,
 * or `last` if no such element exists
 */
template <typename Iter, typename T>
Iter find(Iter first, Iter last, const T& value)
{
    for (; first != last; ++first) {
        if (*first == value) {
            return first;
        }
    }
    return last;
}

/*
 * Returns the first element in the given range for which pred(element) returns
 * true, or `last` if no such element exists
 */
template <typename Iter, typename UnaryPredicate>
Iter find_if(Iter first, Iter last, UnaryPredicate pred)
{
    for (; first != last; ++first) {
        if (pred(*first)) {
            return first;
        }
    }
    return last;
}

/*
 * Returns true if pred(element) is true for any element in the given range,
 * or false otherwise
 */
template <typename Iter, typename UnaryPredicate>
bool any_of(Iter first, Iter last, UnaryPredicate pred)
{
    return ::find_if(first, last, pred) != last;
}

/*
 * Copies the range [first1, last1) into the range beginning at first2
 *
 * Returns: first2
 */
template <typename Iter1, typename Iter2>
Iter2 copy(Iter1 first1, Iter1 last1, Iter2 first2)
{
    for (; first1 != last1; ++first1, ++first2) {
        *first2 = *first1;
    };
    return first2;
};

/*
 * Returns true if the ranges [first1, last1) and [first2, last2)
 * are the same size and every element compares equal
 */
template <typename Iter1, typename Iter2>
bool equal(Iter1 first1, Iter1 last1, Iter2 first2, Iter2 last2)
{
    while (first1 != last1 && first2 != last2) {
        if (*first1 != *first2) {
            return false;
        }
        ++first1; ++first2;
    }

    return first1 == last1 && first2 == last2;
}

/*
 * Applies the given function to a pair of ranges, and stores the result
 * in out_iter
 */
template <typename Iter1, typename Iter2, typename Iter3, typename Func>
Iter3 transform(Iter1 first1, Iter1 last1,
                Iter2 first2, Iter2 last2,
                Iter3 out_iter, Func func)
{
    while (first1 != last1 && first2 != last2) {
        *out_iter = func(*first1, *first2);
        ++first1; ++first2;
    }
    return out_iter;
}


#endif

