#include <cstdlib>		// std::rand()
#include <vector>		// std::vector<>
#include <list>			// std::list<>
#include <iostream>		// std::cout
#include <iterator>		// std::ostream_iterator<>
#include <algorithm>	// std::reverse, std::generate
#include <set>
#include <map>


int main () {
	std::list<int> l1(100);
	// Belegt jeden der 10 Plätze mit einer Zufallszahl.
	for (std::list<int>::iterator it = l1.begin(); it != l1.end(); ++it) {
		*it = rand()%101;
	}

	std::copy(	std::begin(l1), std::end(l1),
				std::ostream_iterator<int>(std::cout, " (von l1)\n"));
	
	std::cout << "" << std::endl;
	
	std::vector<int> v1(l1.size());
	// Übergibt alle Werte von v0 an l0 beginnend beim jeweils ersten Platz.
	std::copy(std::begin(l1), std::end(l1), std::begin(v1));

	std::copy(	std::begin(v1), std::end(v1),
				std::ostream_iterator<int>(std::cout, " (von v1)\n"));

	std::cout << "" << std::endl;

	std::set<unsigned int> dif_zahlen(std::begin(l1), std::end(l1));
	std::cout << "Anzahl unterschiedlicher Zahlen: " << dif_zahlen.size() << std::endl;

	std::cout << "" << std::endl;

	for (int i = 0; i <= 100; ++i){
		if (dif_zahlen.count(i) == false){
			std::cout << i << std::endl;
		}
	}

	// Map: typdef pair<const key, T>, Elemente einer Liste sind immer sortiert nach dem "key"
  	// Erstellt Map und zaehlt die Haeufigkeit der Werte an Stelle i
  	std::map<unsigned int, unsigned int> my_map_list;
  	for (std::list<int>::iterator i = l1.begin(); i != l1.end(); ++i) {
    	++my_map_list[*i];
  	}
  	// Ausgabe der Haeufigkeiten 
  	std::cout << "Wert : Häufigkeit" << std::endl;
  	for (int i = 0; i <= 100; ++i) {
	    std::cout << i << " : " << my_map_list[i] << std::endl;
  	}


	return 0;
}