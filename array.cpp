/* Mohammad Zein El Deen
 * array as container library reference
*/

#include <iostream>
#include <algorithm>
#include <array>

int main() {
    //same as vector
    std::array<int, 4> a = {1, 2, 3, 4}; // array container contructor

    // Assigns the given value to all elements of the container
    a.fill(10);
    for(int i = 0; i < a.size(); i++) std::cout << a[i] << ' ';
    std::cout << '\n';

    // return a referece to the ith element
    std::cout << std::get<0>(a) << '\n';
    return 0;
}
