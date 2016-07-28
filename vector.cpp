/* Mohammad Zein El Deen
 * vector library reference
*/

#include <iostream>
#include <algorithm>
#include <vector>

void print(const std::vector<int> &v) {
    for(auto&& x : v)
        std::cout << x << ' ';
    std::cout << '\n';
}

int main() {
    std::vector<int> v = {1, 2, 3, 4};

    /*********************************************************************************/
    /** Element Access **/

    // at(pos) return reference to the element at position "pos"
    // same function as [] operator but this one throws std::out_of_range exception
    int pos1 = 0;
    std::cout << "Element at position " << pos1 << " is: " << v.at(0) << '\n';

    // return the first element
    std::cout << "First element: " << v.front() << '\n';
    std::cout << *v.begin() << '\n';

    // return the last element
    std::cout << "Last element: " << v.back() << '\n';
    std::cout << *(v.end() - 1) << '\n';

    /*********************************************************************************/
    /** Iterators **/

    // return iterator to the first element
    std::cout << *v.begin() << '\n';

    // return iterator to the element following the last one
    std::cout << *(v.end() - 1) << '\n';

    // return a reverse iterator to the first element of the reversed container. It corresponds to the last element.
    std::cout << *v.rbegin() << '\n';

    // same as rbegin() but returns iterator to the element before the first one.
    std::cout << *(v.rend() - 1) << '\n';

    /*********************************************************************************/
    /** Capacity **/

    // check wether the container is empty or not (i.e begin() == end())
    std::cout << "Is vector empty? " << (v.empty() ? "YES" : "NO") << '\n';

    // return the number of elements in the container (i.e std::distance(v.begin(), v.end()))
    std::cout << "Size is: " << v.size() << '\n';

    // return the max number of elements that the container may holds
    std::cout << "Max size: " << v.max_size() << '\n';

    // return the capacity of the allocated storage
    std::cout << "Capacity: " << v.capacity() << '\n';

    /*********************************************************************************/
    /** Modifiers **/

    // remove all the elements from the container
    v.clear();
    std::cout << "Size after clear: " << v.size() << '\n';

    v = {1, 2, 3, 4};

    // insert element at certain pos
    auto pos2 = v.begin() + 1; // 1
    v.insert(pos2, 2, 11); // add 2 11s
    print(v);

    // insert elements of v2 after index 1 in v.
    std::vector<int> v2(2, 100);
    v.insert(v.begin() + 2, v2.begin(), v2.end());
    print(v);

    // remove element at a certain pos
    v.erase(v.begin() + 1);
    print(v);

    // remove range of elements [first, last)
    v.erase(v.begin(), v.begin() + 3);
    print(v);

    // appends the given element to the end of the container
    v.push_back(200);
    print(v);

    // remove the last element
    v.pop_back();
    print(v);

    // resize the container
    v.resize(2);
    print(v);

    // swap the contents of two vectors
    v.swap(v2);
    print(v);

    /*********************************************************************************/
    return 0;
}
