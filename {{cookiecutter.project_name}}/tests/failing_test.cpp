#define BOOST_TEST_MODULE failing_test

#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(failing_test)
{
    BOOST_CHECK(false);
}
