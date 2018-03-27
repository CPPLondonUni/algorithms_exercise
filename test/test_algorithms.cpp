
#include "catch.hpp"

#include "../algorithms.hpp"

#include <algorithm>

#include <vector>

TEST_CASE("count()")
{
    std::vector<int> vec{1, 2, 2, 2, 3, 4};

    REQUIRE(::count(vec.begin(), vec.end(), 2) == 3);
    REQUIRE(::count(vec.begin(), vec.end(), 42) == 0);
}

TEST_CASE("find()")
{
    std::vector<int> vec{1, 2, 3, 4};

    REQUIRE(::find(vec.begin(), vec.end(), 1) == vec.begin());
    REQUIRE(::find(vec.begin(), vec.end(), 42) == vec.end());
}

TEST_CASE("find_if()")
{
    std::vector<int> vec{1, 2, 3, 4};

    auto pred = [] (int i) { return i == 2; };

    REQUIRE(::find_if(vec.begin(), vec.end(), pred) == vec.begin() + 1);
}

TEST_CASE("any_of()")
{
    std::vector<int> vec{1, 2, 3, 4};

    auto pred = [] (int i) { return i == 2; };

    REQUIRE(::any_of(vec.begin(), vec.end(), pred) == true);
}

TEST_CASE("copy()")
{
    const std::vector<int> vec1{1, 2, 3, 4};
    std::vector<int> vec2{};

    ::copy(vec1.begin(), vec1.end(), std::back_inserter(vec2));

    REQUIRE(vec1 == vec2);
}

TEST_CASE("equal()")
{
    const std::vector<int> vec1{1, 2, 3, 4};
    const std::vector<float> vec2{1.0f, 2.0f, 3.0f, 4.0f};
    const std::vector<int> vec3{};

    REQUIRE(::equal(vec1.begin(), vec1.end(), vec2.begin(), vec2.end()));
    REQUIRE_FALSE(::equal(vec1.begin(), vec1.end(), vec3.begin(), vec3.end()));
}

TEST_CASE("transform()")
{
    const std::vector<int> vec1{1, 2, 3, 4};
    const std::vector<int> vec2{5, 6, 7, 8};
    std::vector<float> out;
    const std::vector<float> out_test{6.0f, 8.0f, 10.0f, 12.0f};

    ::transform(vec1.begin(), vec1.end(),
                        vec2.begin(), vec2.end(),
                        std::back_inserter(out), std::plus<int>{});

    REQUIRE(out == out_test);

}