#define CATCH_CONFIG_MAIN
#include "./../deps/catch2/single_include/catch2/catch.hpp"


TEST_CASE( "test", "[factorial]" ) {
    REQUIRE( 1 == 1 );
    REQUIRE( 2 == 2 );
    REQUIRE( 3 == 6 );
    REQUIRE( 10 == 3628800 );
}
