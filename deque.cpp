/* Mohammad Zein El Deen
 * deque library reference
*/

#include <iostream>
#include <algorithm>
#include <deque>

void print(const std::deque<int> &d) {
    for(auto x : d) std::cout << x << ' ';
    std::cout << '\n';
}

int main() {
    /* std::deque (double-ended queue) is an indexed sequence container that allows fast insertion and deletion at both
       its beginning and its end. In addition, insertion and deletion at either end of a deque never invalidates pointers
       or references to the rest of the elements. */

    //share functions with vector
    std::deque<int> d = {7, 5, 16, 8};

    //new functions:

    // inserts an element to the beginnig
    d.push_front(1);
    print(d);

    // remove the first element
    d.pop_front();
    print(d);

    return 0;
}
