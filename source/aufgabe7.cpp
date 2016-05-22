#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>
#include "vec2.hpp"
#include "circle.hpp"
#include "color.hpp"

bool operator==(Circle const& c1, Circle const& c2){
	if (c1.get_radius()==c2.get_radius()){
		return true;
	}
	else{
		return false;
	}
}

bool operator<(Circle const& c1, Circle const& c2){
	if (c1.get_radius()<c2.get_radius()){
		return true;
	}
	else{
		return false;
	}
}

bool operator>(Circle const& c1, Circle const& c2){
	if (c1.get_radius()>c2.get_radius()){
		return true;
	}
	else{
		return false;
	}
}

bool is_odd(int i){
	return (i % 2) != 0;
}

bool is_even(int i){
  return (i % 2) == 0;  
}

template <typename T> 
	void both_swap(T& obj1, T& obj2) { // Es wird direkt mit den eingegebenen Paramtern gearbeitet; Veraenderung erlaubt 
    	T temp = obj1; // temp wird obj1 zugewiesen
    	obj1 = obj2; // obj1 uebernimmt Wert von obj2
    	obj2 = temp; // obj2 uebernimmt Wert von temp (obj1)
	}

TEST_CASE("describe_factorial", "[aufgabe3]"){
	// ihre Loesung :
	std::vector<Circle> v(20);
	for (std::vector<Circle>::iterator i = v.begin(); i != v.end(); ++i) {
		*i = Circle{Vec2{0,0}, float(std::rand()%11), Color{0.5,0.5,0.5}};
	}
	std::sort(v.begin(), v.end());

	REQUIRE(std::is_sorted(v.begin(), v.end()) == true);
}

TEST_CASE("swap", "[aufgabe8]"){
	std::vector<int> v1(3);
	for (int i = 0; i <= 2; ++i) {
		v1[i] = 4 + i;
	}
	REQUIRE(v1[0]==4);
	REQUIRE(v1[1]==5);
	REQUIRE(v1[2]==6);
	
	both_swap(v1[0], v1[2]);
	
	REQUIRE(v1[0]==6);
	REQUIRE(v1[1]==5);
	REQUIRE(v1[2]==4);
}

int main(int argc, char* argv[]){

	return Catch::Session().run(argc, argv);
}