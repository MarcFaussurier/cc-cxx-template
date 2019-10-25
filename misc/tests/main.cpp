#ifndef CATCH_CONFIG_MAIN
# define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
# include "./../deps/catch2/single_include/catch2/catch.hpp"
# include "./../ft.hpp"
#endif


TEST_CASE( "ft_strlen") {
    REQUIRE(ft_strlen("avion") == 5);
}
