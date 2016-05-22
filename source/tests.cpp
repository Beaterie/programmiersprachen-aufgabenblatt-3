#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <math.h>
#include "Vec2.hpp"
#include "color.hpp"
#include "circle.hpp"

TEST_CASE("test_of_Vektor", "[Vec2]"){
	Vec2 vc1{};
	REQUIRE(vc1.x == Approx(0.0f));
	REQUIRE(vc1.y == Approx(0.0f));
	Vec2 vc2{-999,0.0005};
	REQUIRE(vc2.x == Approx(-999));
	REQUIRE(vc2.y == Approx(0.0005));
}

TEST_CASE("test_of_vektorplus", "[+=]"){
	Vec2 vc1(2.0,4.0);
	Vec2 vc2(1.0,1.0);
	vc1 += vc2;
	REQUIRE(vc1.x == Approx(3.0));
	REQUIRE(vc1.y == Approx(5.0));
	vc1 += vc1;
	REQUIRE(vc1.x == Approx(6));
	REQUIRE(vc1.y == Approx(10));
}

TEST_CASE("test_of_vektorminus", "[-=]"){
	Vec2 vc1(2.0,4.0);
	Vec2 vc2(1.0,1.0);
	Vec2 vc3(-20,9999);
	vc1 -= vc2;
	REQUIRE(vc1.x == Approx(1.0));
	REQUIRE(vc1.y == Approx(3.0));
	vc2 -= vc3;
	REQUIRE(vc2.x == Approx(21));
	REQUIRE(vc2.y == Approx(-9998));
}

TEST_CASE("test_of_vektormultiplikation", "[*=]"){
	Vec2 vc1(2.0,4.0);
	Vec2 vc3(-20,60);
	vc1 *= 2.0;
	REQUIRE(vc1.x == Approx(4.0));
	REQUIRE(vc1.y == Approx(8.0));
	vc3 *= 1.5;
	REQUIRE(vc3.x == Approx(-30));
	REQUIRE(vc3.y == Approx(90));	
}

TEST_CASE("test_of_vektordivision", "[/=]"){
	Vec2 vc1(2.0,4.0);
	vc1 /= 2.0;
	REQUIRE(vc1.x == Approx(1.0));
	REQUIRE(vc1.y == Approx(2.0));
	Vec2 vc2(2.0,4.0);
	vc2 /= 0;
	REQUIRE(vc2.x == Approx(2.0));
	REQUIRE(vc2.y == Approx(4.0));
}

TEST_CASE("test_of_Addition", "[+]"){
	Vec2 vc1(2.0,4.0);
	Vec2 vc2(5.0,6.0);
	Vec2 vc3{};
	vc3 = vc1 + vc2;
	REQUIRE(vc3.x == Approx(7.0));
	REQUIRE(vc3.y == Approx(10.0));
	vc1 = vc3 + vc2;
	REQUIRE(vc1.x == Approx(12));
	REQUIRE(vc1.y == Approx(16));
}

TEST_CASE("test_of_Subtraktion", "[-]"){
	Vec2 vc1(2.0,4.0);
	Vec2 vc2(5.0,6.0);
	Vec2 vc3;
	vc3 = vc1 - vc2;
	REQUIRE(vc3.x == Approx(-3.0));
	REQUIRE(vc3.y == Approx(-2.0));
}

TEST_CASE("test_of_Multiplikation1", "[*1]"){
	Vec2 vc1(2.0,4.0);
	Vec2 vc3;
	vc3 = vc1 * 3.0f;
	REQUIRE(vc3.x == Approx(6.0));
	REQUIRE(vc3.y == Approx(12.0));
}

TEST_CASE("test_of_Multiplikation2", "[*2]"){
	Vec2 vc1(2.0,4.0);
	Vec2 vc3;
	vc3 = 3.0f * vc1;
	REQUIRE(vc3.x == Approx(6.0));
	REQUIRE(vc3.y == Approx(12.0));
}

TEST_CASE("test_of_Division", "[/]"){
	Vec2 vc1(2.0,4.0);
	Vec2 vc3;
	vc3 = vc1 / 3.0f;
	REQUIRE(vc3.x == Approx(0.66667f));
	REQUIRE(vc3.y == Approx(1.33334f));
	vc3 = vc1 / 0.0f;
	REQUIRE(vc3.x == Approx(0));
	REQUIRE(vc3.y == Approx(0));
}


int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}