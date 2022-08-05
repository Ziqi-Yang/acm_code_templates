#include <string>
string a = "abcdef123456";
printf("%s\n", a.c_str()); // for printf
a.length(); // a.size();
a.find('c'); // return position number, unfind: -1
a.find('c', 4); // start find from position 4
a.substr(0, 2); // "ab"
a.erase(2); // delete all from pos 2
a.erase(0, 2); // delete 2 characters from pos 0
a.insert(0, "hello");
a.insert(2, 3, 'u'); // insert char 'u' 3 times
a.replace(2, 5, " "); // replace whole 5 characters with a string " "
string s1 = to_string(12.05); // Converts number to string
string s;
getline(cin, s); // Read line ending in '\n'(not include)