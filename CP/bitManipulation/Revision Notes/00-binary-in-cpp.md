## Binary in C++

```cpp
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    int n = 5;
    cout << "Binary representation of " << n << ": " << bitset<32>(n) << endl;
    return 0;
}
```

**Output**

```
Binary representation of 5: 00000000000000000000000000000101
```

### We can also write bit to decimal as

```cpp
#include <iostream>
#include <bitset>
using namespace std;
int main() {
    cout<<0b101<<endl;
}
```

**Output**

```
5
```

### Note

- `0b` is used to represent binary numbers in C++.
