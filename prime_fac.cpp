//素因数分解
map<int, int> prime_fac(int x){
    map<int, int> res;
    for(int i=2; i*i <= x; i++){
        while(x % i == 0){
            ++res[i];
            x /= i;
        }
    }
    if(x != 1) res[x] = 1;
    return res;
}


//約数の列挙
vector<int> div(int x){
    vector<int> res;
    for(int i=1; i*i <= x; i++){
        if(x%i == 0){
            res.push_back(i);
            if(i != x / i) res.push_back(x / i);
        }
    }
    return res;
}