#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>
#include <string_essentials/string_essentials.hpp>


TEST_CASE("string_essentials")
{
    REQUIRE(string_essentials::utf8::encode(U"Проверка123") == "Проверка123");
    REQUIRE(string_essentials::utf8::decode("Проверка123") == U"Проверка123");
}
