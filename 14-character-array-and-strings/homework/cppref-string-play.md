# 03. cppref string play

```cpp
#include <bits/stdc++.h>
using namespace std;

int main()
{
  // string constructor
  string str1("Abhyas");
  cout << "Created using constructor: " << str1 << endl;

  // string assignment
  string str2;
  str2 = str1;
  cout << "Assigned using assignment: " << str2 << endl;

  // check if assignment is deep copy or shallow
  str2[0] = 'K';
  cout << "String 2 after modifition: " << str2 << endl;
  cout << "String 1 after modifying string 2: " << str1 << endl;
  // => deep copy!! safe to use assignment operator

  // at operator
  cout << "str1.at(3): " << str1.at(3) << endl;
  // better to use square bracket syntax
  cout << "str1[3]: " << str1[3] << endl;

  // front and back
  cout << "str1.front(): " << str1.front() << endl;
  cout << "str1.back(): " << str1.back() << endl;
  // get first and last character

  // data
  cout << "str1.data(): " << str1.data() << endl;
  // get a pointer to the first character. That's why cout prints normally

  // c_str()
  cout << "str1.c_str(): " << str1.c_str() << endl;
  // get a basic c style string. THIS IS IMMUTABLE.

  // ITERATORS: works just like a pointer
  // begin
  cout << "str1.begin(): " << *str1.begin() << endl;
  // end
  cout << "str1.end(): " << *str1.end() << endl;
  // POINTS TO THE CHARACTER AFTER THE LAST ONE.

  // CAPACITY
  // empty(): check if string is empty
  cout << "str1.empty(): " << boolalpha << str1.empty() << endl;

  // size(): get size of string aka length()
  cout << "str1.size(): " << str1.size() << endl;
  // length(): get size of string aka size()
  cout << "str1.length(): " << str1.length() << endl;
  // size and length works the same

  // max_size(): get max size of string
  cout << "str1.max_size(): " << str1.max_size() << endl;

  // OPERATIONS
  // clear(): clear string
  str1.clear();
  cout << "str1 after clear(): " << str1 << endl;
  // insert(pos, str): insert string at pos
  str1.insert(0, "Kavya");
  cout << "str1 after insert(): " << str1 << endl;
  // erase(pos, len): erase len characters starting at pos
  str1.erase(4, 1);
  cout << "str1 after erase(): " << str1 << endl;

  // PUSH_BACK(): add character at the end VERY IMPORTANT
  str1.push_back('a');
  cout << "str1 after push_back(): " << str1 << endl;
  // can only push back a sing character.
  // To add a string, use insert() or append()

  // POP_BACK(): remove character at the end
  str1.pop_back();
  cout << "str1 after pop_back(): " << str1 << endl;

  // append(str): add string at the end
  str1.append("aaa");
  cout << "str1 after append(): " << str1 << endl;
  // better use += operator overload
  str2 += "sss";
  cout << "str2 after +=: " << str2 << endl;

  // compare()
  cout << "str1.compare(str2): " << str1.compare(str2) << endl;
  // returns result based on lexicographical order
  // not important according to Love Bhaiya.
  // str1.compare(str2) == 0 => str1 == str2
  // else not

  // only works with latest C++20.
  // starts_with(str): check if string starts with str
  // cout << "str1.starts_with(\"Kav\"): " << boolalpha << str1.starts_with("Kav") << endl;
  // also ends_with(str): check if string ends with str

  // only works with latest C++23.
  // contains(str): check if string contains str

  // replace(pos, len, str): replace len characters starting at pos with str
  str2.replace(0, 1, "A");
  cout << "str2 after replace(): " << str2 << endl;

  // VERY IMPORTANT:
  // substr(pos, len): get substring starting at pos and of len characters
  cout << "str1.substr(0, 4): " << str1.substr(0, 4) << endl;

  // SEARCH
  // find(str): find first occurrence of str
  cout << "str1.find(\"a\"): " << str1.find("a") << endl;
  // return string::npos if not found

  // rfind(str): find last occurrence of str
  cout << "str1.rfind(\"a\"): " << str1.rfind("a") << endl;
  // return string::npos if not found

  // lexicographical comparison
  // all symbols < > etc allowed

  // VERY IMPORTANT:
  // Numeric Conversions
  // stoi(str): convert string to int
  // stod(str): convert string to double

  // to_string(int): convert int to string

  return 0;
}
```

Output:

```
Created using constructor: Abhyas
Assigned using assignment: Abhyas
String 2 after modifition: Kbhyas
String 1 after modifying string 2: Abhyas
str1.at(3): y
str1[3]: y
str1.front(): A
str1.back(): s
str1.data(): Abhyas
str1.c_str(): Abhyas
str1.begin(): A
str1.end():
str1.empty(): false
str1.size(): 6
str1.length(): 6
str1.max_size(): 2147483647
str1 after clear():
str1 after insert(): Kavya
str1 after erase(): Kavy
str1 after push_back(): Kavya
str1 after pop_back(): Kavy
str1 after append(): Kavyaaa
str2 after +=: Kbhyassss
str1.compare(str2): -1
str2 after replace(): Abhyassss
str1.substr(0, 4): Kavy
str1.find("a"): 1
str1.rfind("a"): 6
```
