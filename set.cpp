/* Mohammad Zein El Deen
 * set library reference
*/

#include <iostream>
#include <algorithm>
#include <set>

void print(const std::set<int> &set) {
    for(auto x: set) std::cout << x << ' ';
    std::cout << '\n';
}

int main() {
    /* std::set is an associative container that contains a sorted set of unique objects of type Key.
    Sorting is done using the key comparison function Compare. Search, removal, and insertion operations
    have logarithmic complexity. Sets are usually implemented as red-black trees. */

    std::set<int> set{1, 2, 3, 4};

    /*********************************************************************************/
    /** Modifiers **/

    // insert an element to the set.
    set.insert(5);
    print(set);

    // remove element at some pos(iterator to the element to remove).
    // return an iterator following the last removed element.
    set.erase(*set.begin() + 1);
    print(set); std::cout << '\n';

    /*********************************************************************************/
    /** Look up **/

    // return the number of elements matching specific key
    std::cout << "# of 1 in the set: " << set.count(1) << '\n';
    std::cout << "# of 2 in the set: " << set.count(2) << "\n\n";

    // find element according to the given key and return an iterator to this element
    if(set.find(2) != set.end()) std::cout << "2 is found" << '\n';
    else                         std::cout << "2 is not found" << '\n';

    // return the range(std::pair<iterator, iterator>) of element matching a specific key.
    // The range is defined by two iterators, one pointing to the first element that is not less than key
    // and another pointing to the first element greater than key.
    auto p = set.equal_range(1);
    std::cout << *p.first << ' ' << *p.second << "\n\n";

    // returns an iterator to the first element not less than the given key.
    auto it1 = set.lower_bound(1);
    std::cout << *it1 << '\n';

    // returns an iterator to the first element greater than the given key.
    auto it2 = set.upper_bound(1);
    std::cout << *it2 << '\n';

    return 0;
}
