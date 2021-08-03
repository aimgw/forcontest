//繰り返し二乗法
template<typename> T pow(int x, int n){
    T res = 1;
    while(n > 0){
        if(n&1 == 1) res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}
