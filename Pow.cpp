//繰り返し二乗法
const int M = 1000000007;

ll pow(int x, int n){
    if(n == 0)
        return 1;
    ll res = pow(x * x % M, n / 2);
    if(n % 2 == 1){
        res = res * x % M;
    }
    return res;
}
