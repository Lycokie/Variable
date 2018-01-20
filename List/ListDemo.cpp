// std::list Demo

#include <algorithm>    // For std::find
#include <iostream>     // For std::cout
#include <list>         // For std::list
#include <string>       // For std::string
using namespace std;

int main() {
    list<string> planets{
        "Venus", "Mars", "Jupiter", "Saturn", "Uranus"
    };

    // Insert Mercury at the beginning
    planets.push_front("Mercury");

    // Insert Neptune at the end
    planets.push_back("Neptune");
    
    // Insert Earth before Mars
    auto pos = find(begin(planets), end(planets), "Mars");
    planets.insert(pos, "Earth");

    cout << " List of planets: \n  ";
    for (auto const& name : planets) {
        cout << ' ' << name;
    }
    cout << '\n';
}

