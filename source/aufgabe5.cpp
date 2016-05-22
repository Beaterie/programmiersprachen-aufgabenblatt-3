#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <algorithm>
#include <vector>

bool is_odd(const int i){
	return (i % 2) != 0;
}

bool is_even(const int i){
  return (i % 2) == 0;  
}

TEST_CASE("describe_factorial", "[aufgabe3]"){
	// ihre Loesung :
	std::vector<int> v(100);
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
		*i = rand()%101;
	}
	v.erase( std::remove_if(v.begin(), v.end(), is_odd), v.end() );

	REQUIRE(std::all_of(v.begin(), v.end(), is_even) == true);
}

int main(int argc, char* argv[]){

	return Catch::Session().run(argc, argv);
}