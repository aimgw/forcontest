//素因数分解
template <typename T>
map<T, T> prime_fac(T x){
    map<T, T> res;
    for(T i=2; i*i <= x; i++){
        while(x % i == 0){
            ++res[i];
            x /= i;
        }
    }
    if(x != 1) res[x] = 1;
    return res;
}


//約数の列挙
template <typename T>
vector<T> div(T x){
    vector<T> res;
    for(T i=1; i*i <= x; i++){
        if(x%i == 0){
            res.push_back(i);
            if(i != x / i) res.push_back(x / i);
        }
    }
    return res;
}