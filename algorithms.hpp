
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
    return 0;
}

/*
 * Returns the first element in the given range which compares equal to value,
 * or `last` if no such element exists
 */
template <typename Iter, typename T>
Iter find(Iter first, Iter last, const T& value)
{
    return Iter{};
}

/*
 * Returns the first element in the given range for which pred(element) returns
 * true, or `last` if no such element exists
 */
template <typename Iter, typename UnaryPredicate>
Iter find_if(Iter first, Iter last, UnaryPredicate pred)
{
    return Iter{};
}

/*
 * Returns true if pred(element) is true for any element in the given range,
 * or false otherwise
 */
template <typename Iter, typename UnaryPredicate>
bool any_of(Iter first, Iter last, UnaryPredicate pred)
{
    return false;
}

/*
 * Copies the range [first1, last1) into the range beginning at first2
 *
 * Returns: first2
 */
template <typename Iter1, typename Iter2>
Iter2 copy(Iter1 first1, Iter1 last1, Iter2 first2)
{
    return first2;
};

/*
 * Returns true if the ranges [first1, last1) and [first2, last2)
 * are the same size and every element compares equal
 */
template <typename Iter1, typename Iter2>
bool equal(Iter1 first1, Iter1 last1, Iter2 first2, Iter2 last2)
{
    return false;
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
    return out_iter;
}


#endif

