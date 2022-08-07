#include <bitset>
bitset<3> a; //  000
bitset<3> b(14); // 14->1(110) lower 3 bits
bitset<4> c("1010"); // 1010
string astr = "10101";
bitset<4> d(astr, 1, 4); // astr must be a string(not char[] "10101"), from pos 1, length 4
d.any(); // exists 1 ?
d.none(); // doesn't exists 1 ?
d.count(); // count of 1
d.size(); // size
d[0];
d.test(0); // 1 at pos 0?
d.set(); // set all to 1
d.set(2); // set 1 to pos 2
d.set(2, 0); // set 0 to pos 2
d.reset(); // set all to 0;
d.reset(2); // set 0 to pos 2
d.flip(); // flip all pos
d.flip(2);
d[0].flip();
d.to_string();
d.to_ulong();
d.to_ullong();
cout << d._Find_first(); // the pos of the first true (start from 1); if all false, return the size;
cout << d._Find_next(1); // the pos of the next true ...