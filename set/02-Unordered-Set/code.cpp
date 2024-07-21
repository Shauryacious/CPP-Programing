#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    // Creating an unordered_set of integers
    unordered_set<int> us;
    // Time complexity: O(1)

    // Inserting elements into the unordered_set
    us.insert(10); // Average time complexity: O(1)
    us.insert(20); // Average time complexity: O(1)
    us.insert(30); // Average time complexity: O(1)
    us.insert(40); // Average time complexity: O(1)
    us.insert(50); // Average time complexity: O(1)

    // Displaying the elements of the unordered_set
    cout << "Elements in the unordered_set: ";
    for (auto ele : us) {
        cout << ele << " ";
    }
    cout << endl;
    // Time complexity: O(n)

    // Trying to insert a duplicate element
    auto result = us.insert(30);  // 30 already exists
    if (result.second == 0) {
        cout << "Element 30 already exists in the unordered_set." << endl;
    }
    // Average time complexity: O(1)

    // Deleting an element from the unordered_set
    us.erase(20);
    cout << "Elements in the unordered_set after deleting 20: ";
    for (auto it = us.begin(); it != us.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    // Average time complexity of erase: O(1)
    // Time complexity of iteration: O(n)

    // Finding an element in the unordered_set
    if (us.find(30) != us.end()) {
        cout << "Element " << 30 << " found in the unordered_set." << endl;
    } else {
        cout << "Element " << 30 << " not found in the unordered_set." << endl;
    }
    // Average time complexity: O(1)
    // Note: In the worst case, the time complexity can degrade to O(n) if there are many hash collisions

    return 0;
}
