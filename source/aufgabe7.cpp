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

template <typename C, typename P>
	C filter(C const& container, P const& praedikat){
		C result;
  		for (auto &i : container) {
  			if (praedikat(i)) {
  				result.push_back(i);
  			}
  		}
    return result;
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

	std::vector<Circle> v2(3);
	for (int i = 0; i <= 2; ++i) {
		v2[i].set_radius(4+i);
	}
	REQUIRE(v2[0].get_radius()==4);
	REQUIRE(v2[1].get_radius()==5);
	REQUIRE(v2[2].get_radius()==6);
	
	both_swap(v2[0], v2[2]);
	
	REQUIRE(v2[0].get_radius()==6);
	REQUIRE(v2[1].get_radius()==5);
	REQUIRE(v2[2].get_radius()==4);
}

TEST_CASE("sort", "[aufgabe9]"){
	std::vector<Circle> v3(3);
	for (int i = 0; i <= 2; ++i) {
		v3[i].set_radius(4+i);
	}
	REQUIRE(v3[0].get_radius()==4);
	REQUIRE(v3[1].get_radius()==5);
	REQUIRE(v3[2].get_radius()==6);

	std::sort(std::begin(v3), std::end(v3),
        // Lambda expression begins
    [] (Circle const& c1, Circle const& c2) {
      return (c1.get_radius() < c2.get_radius());
      } // end of lambda expression
    );

    REQUIRE(v3[0].get_radius()==4);
	REQUIRE(v3[1].get_radius()==5);
	REQUIRE(v3[2].get_radius()==6);
	REQUIRE(std::is_sorted(v3.begin(), v3.end()) == true);
}

TEST_CASE("lambda", "[aufgabe10]"){
	std::vector<int> v1{1,2,3,4,5,6,7,8,9};
	std::vector<int> v2{9,8,7,6,5,4,3,2,1};
	std::vector<int> v3(9);

	std::transform(std::begin(v1), std::end(v1), std::begin(v2), std::begin(v3),
		[] (int a, int b){
			return a+b;
		}
	);
	REQUIRE(std::all_of(std::begin(v3), std::end(v3),
		[] (int a){
			return a == 10;
		}
	) == true);
}

TEST_CASE("filter","[aufgabe11]"){
	std::vector<int> v{1,2,3,4,5,6};
	std::vector<int> alleven = filter(v, is_even);
	REQUIRE(alleven[0]==2);
	REQUIRE(alleven[1]==4);
	REQUIRE(alleven[2]==6);
}

TEST_CASE("[aufgabe12]"){
	std::vector<Circle> v1(4); //3, 4, 5, 6
	for (int i = 0; i <= 3; ++i) {
		v1[i].set_radius(3+i);
	}
	std::vector<Circle> v2(2);
	std::copy_if(v1.begin(), v1.end(), v2.begin(),
		[] (Circle const& c){
			return c.get_radius() > 4.0f;
		}
	);
	REQUIRE(v2[0].get_radius() == 5);
	REQUIRE(v2[1].get_radius() == 6);
	std::cout << v2[0].get_radius() << " " << v2[1].get_radius() << std::endl;
	REQUIRE(
		std::all_of(v2.begin(), v2.end(),
			[] (Circle const& c){
				return c.get_radius() > 3;
			}
		)
	== true);
}

int main(int argc, char* argv[]){

	return Catch::Session().run(argc, argv);
}