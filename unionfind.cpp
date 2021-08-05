struct unionfind{
    vector<int> v;

    unionfind(int n) {
        v.resize(n, -1);
    }

    int find(int a){
        if(v[a] < 0) return a;
        return v[a] = find(v[a]);
    }

    bool unite(int a, int b){
        a = find(a);
        b = find(b);
        if(a == b) return false;
        if(v[a] > v[b]) swap(a, b);
        v[a] += v[b];
        v[b] = a;
        return true;
    }

    int size(int a){
        return -(v[find(a)]);
    }

    bool same(int a, int b){
        return (find(a) == find(b));
    }
};