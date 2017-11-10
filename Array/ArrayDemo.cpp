// std::array Demo

#include <algorithm>    // for std::find
#include <array>        // for std::array
#include <iostream>     // for std::cin, std::cout
using namespace std;

int main() {
    array a{11, 22, 33, 44, 55, 66};    // <== std::array<int, 6>

    cout << " std::array's elements: \n";
    for (auto x : a) {
        cout << ' ' << x;
    }
    cout << "\n\n";

    cout << " The array contains " << a.size() << " elements. \n\n";
    
    cout << " Please enter a number to search for : ";
    int n{};
    cin >> n;

    auto it = find(begin(a), end(a), n);
    if (it != end(a)) {
        cout << ' '  << n << " was found in the array. \n";
    } else {
        cout << ' '  << n << " not found. \n";
    }
}

