#include <iostream>
#include <set>

using namespace std;

int main() {
    // Creating a set of integers
    set<int> s;
    // Time complexity: O(1)

    // Inserting elements into the set
    s.insert(10); // O(log n)
    s.insert(20); // O(log n)
    s.insert(30); // O(log n)
    s.insert(40); // O(log n)
    s.insert(50); // O(log n)

    // Displaying the elements of the set
    cout << "Elements in the set: ";
    for (auto ele : s) {
        cout << ele << " ";
    }
    cout << endl;
    // Time complexity: O(n)

    // Trying to insert a duplicate element
    auto result = s.insert(30);  // 30 already exists
    if (result.second == 0) {
        cout << "Element 30 already exists in the set." << endl;
    }
    // Time complexity: O(log n)

    // Deleting an element from the set
    s.erase(20);
    cout << "Elements in the set after deleting 20: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    // Time complexity of erase: O(log n)
    // Time complexity of iteration: O(n)

    // Finding an element in the set
    if (s.find(30) != s.end()) {
        cout << "Element " << 30 << " found in the set." << endl;
    } else {
        cout << "Element " << 30 << " not found in the set." << endl;
    }
    // Time complexity: O(log n) for set (ordered_set) because it uses binary search in a balanced binary search tree called Red-Black Tree
    // It is called set (Ordered Set) because the elements are stored in sorted order
    // while the time complexity for unordered_set (unordered_set) would be O(1) because it uses hashing
    // however, the elements are not stored in sorted order in unordered_set
    // Note: If we were using unordered_set, the average time complexity for find would be O(1)

    return 0;
}
