#define BOOST_TEST_MODULE Config Test

#include <boost/test/included/unit_test.hpp>
#include "config.h"

BOOST_AUTO_TEST_CASE(test_config) {
    BOOST_CHECK(PROJECT_VER == "0.0.1");
}
