// 以下最低位编号为0
// 获得a二进制的第b位
int getBit(int a, int b) { return (a >> b) & 1; }
// 把a二进制的第b位设置为0
int unsetBit(int a, int b) { return a & ~(1 << b); }
// 把a二进制的第b位设置为1
int setBit(int a, int b) { return a | (1 << b); }
// 将 a 的第 b 位取反 ，最低位编号为 0
int flapBit(int a, int b) { return a xor (1 << b); }