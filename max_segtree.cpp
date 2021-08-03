//MAX_segtree need INF
//1indexでの入力を想定
template<typename T>
struct segtree
{
    /* data */
    int n; //size
    vector<T> datas;

    void init(int N){
        //Nの値から最下段のデータ数を2のべき乗個に調整
        n = 1;
        while(n < N) n *= 2;
        //n個の要素を初期化
        datas.resize(n, 0);
    }

    void update(int i, T val){
        i -= 1; //0index化
        i += n-1;
        datas[i] = val;
        while(i > 0){
            i = (i - 1) / 2;
            datas[i] = max(datas[2*i+1], datas[2*i+2]);
        }
    }
    
    T getmax(int a, int b, int k=0, int l=0, int r=n){
        if(r <= a || b <= l) return -INF;
        if(a <= l &&  r <= b) return datas[k];

        int resl = getmax(a, b, 2*k+1, l, (l+r)/2);
        int resr = getmax(a, b, 2*k+2, (l+r)/2, r);
        return max(resl, resr);
    }
};
