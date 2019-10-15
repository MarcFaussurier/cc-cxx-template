#include <ft_string.h>

#include "./../deps/catch2/single_include/catch2/catch.hpp"

TEST_CASE( "test", "[factorial]" ) {
    REQUIRE( ft_strlen("avion") == 5 );
    REQUIRE( ft_strlen("pomme") == 5 );
    REQUIRE( ft_strlen("0123456789") == 10);
    REQUIRE( ft_strlen("\0") == 0);
}
