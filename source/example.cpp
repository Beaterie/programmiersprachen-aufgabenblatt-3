#include <cstdlib>		// std::rand()
#include <vector>		// std::vector<>
#include <list>			// std::list<>
#include <iostream>		// std::cout
#include <iterator>		// std::ostream_iterator<>
#include <algorithm>	// std::reverse, std::generate


int main () {

	// Erstellt Vektor v0 mit 10 Plätzen für int-Werte.
	std::vector<int> v0(10);
	// Belegt jeden der 10 Plätze mit einer Zufallszahl.
	for (std::vector<int>::iterator it = v0.begin(); it != v0.end(); ++it) {
		*it = std::rand();
	}
	// oder
	//for (auto& v : v0) {
	// v = std::rand();
	//}

	// Übergibt alle Werte von v0 an einen Iterator,
	// der diese in der Konsole ausgibt.
	std::copy(	std::begin(v0), std::end(v0),
				std::ostream_iterator<int>(std::cout, " (von v0)\n"));

	// Legt neue Liste l0 mit der Größe des Vektors v0 an.
	std::list<int> l0(v0.size());
	// Übergibt alle Werte von v0 an l0 beginnend beim jeweils ersten Platz.
	std::copy(std::begin(v0), std::end(v0), std::begin(l0));

	// Legt neue Liste l1 mit den Werten aus l0 an.
	std::list<int> l1(std::begin(l0), std::end(l0));
	// Dreht die gesamte Liste l1 um.
	std::reverse(std::begin(l1), std::end(l1));
	// Übergibt alle Werte von l1 an einen Iterator,
	// der diese in der Konsole ausgibt.
	std::copy(	std::begin(l1), std::end(l1),
				std::ostream_iterator<int>(std::cout, " (von l1, reverse)\n"));

	// Sortiert die Liste l1 aufsteigend.
	l1.sort();
	// Übergibt alle Werte von l1 an einen Iterator,
	// der diese in der Konsole ausgibt.
	std::copy(	l1.begin(), l1.end(),
				std::ostream_iterator<int>(std::cout, " (von l1, sort)\n"));

	// Belegt den Vektor v0 mit Zufallszahlen über die Methode an dritter Stelle.
	std::generate(std::begin(v0), std::end(v0), std::rand);
	// Übergibt alle Werte von v0 in umgekehrter Reihenfolge an einen Iterator,
	// der diese in der Konsole ausgibt.
	std::copy(	v0.rbegin(), v0.rend(),
				std::ostream_iterator<int>(std::cout, " (von v0, reverse)\n"));

	return 0;
}