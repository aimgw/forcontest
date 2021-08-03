//素数判定するプログラム

bool isprime(int x){
    int i;
    if (x < 2)
        return false;
    else if(x == 2)
        return true;
    if(x % 2 == 0)
        return false;
    for (i = 3; i * i < x; i +=2){
        if(x % i == 0) return false;
    }
    return true;
}