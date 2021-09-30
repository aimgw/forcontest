//最大公約数、最小公倍数を求めるプログラム
template<typename T>
T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
T lcm(T a, T b) { return a / gcd(a, b) * b; }
