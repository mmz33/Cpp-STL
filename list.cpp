/* Mohammad Zein El Deen
 * list library reference
*/

#include <iostream>
#include <algorithm>
#include <list>

void print(const std::list<int> &l) {
    for(auto x : l) std::cout << x << ' ';
    std::cout << '\n';
}

int main() {
    /* std::list is a container that supports constant time insertion and removal of elements from anywhere in the container.
    Fast random access is not supported. It is usually implemented as a doubly-linked list. */

    //no access using [] operator

    //share functions with vector
    std::list<int> l = {8, 7, 5, 9};
    std::list<int> l2 = {4, 2, 3, 1};
    std::list<int> l3 = {100, 200, 300, 400};

    // sort the list in increasing order
    std::cout << "Before: "; print(l);
    l.sort();
    std::cout << "After : ";  print(l);
    std::cout << '\n';

    // merge two sorted lists, and the second one becomes empty (l2 in this example becomes empty)
    l2.sort();
    l.merge(l2);
    std::cout << "After merging: "; print(l);
    std::cout << "List 2 size: " << l2.size() << "\n\n";

    // transfers elements from one list to another
    l.splice(l.begin(), l3);
    print(l); std::cout << '\n';

    // remove all elements of a certain value
    l.remove(200);
    std::cout << "After removing 200: "; print(l);
    std::cout << '\n';

    // remove all elements satisfying specific criteria
    l.remove_if([](int n) {
        return n > 10;
    });
    print(l); std::cout << '\n';

    l.reverse();
    std::cout << "After reversing: "; print(l);
    std::cout << '\n';

    // remove consecutive duplicates and keep the first element of the group only
    l.unique();

    return 0;
}
