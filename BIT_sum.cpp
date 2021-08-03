//binary indexed tree
//1indexでの入力を想定
template<typename T>
struct BIT
{
    /* data */
    int n;
    vector<T> datas;

    /*functions*/
    void init(int N){
        n = N;
        datas.resize(N+1, 0); //BITは1index
    }

    void add(int i, T val){
        for(; i <= n; i += i&-i){
            datas[i] += val;
        }
    }

    T sum(int i){
        //1番目の要素からi番目の要素までの和
        T ans = 0;
        for(; i > 0; i -= i&-i){
            ans += datas[i];
        }
        return ans;
    }

    T part_sum(int l, int r){
        return sum(r) - sum(l);
    }
};
