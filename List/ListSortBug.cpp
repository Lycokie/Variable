// std::list Sorting ** BUG ** Demo

#include <algorithm>    // For std::sort
#include <iostream>     // For std::cout
#include <list>         // For std::list
#include <string>       // For std::string
using namespace std;

int main() {
    list<string> planets{
        "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"
    };
    
    cout << " Initial list of planets: \n";
    for (auto const& name : planets) {
        cout << ' ' << name;
    }
    cout << "\n\n";

    cout << " Sorting the list... \n\n";
    sort(begin(planets), end(planets));

    cout << " Sorted list of planets (alphabetical order): \n";
    for (auto const& name : planets) {
        cout << ' ' << name;
    }
    cout << '\n';
}

