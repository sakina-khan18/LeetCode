class SnapshotArray {
public:
    int snap_id = 0;
    vector<vector<pair<int, int>>> arr;

    SnapshotArray(int length) {
        arr.resize(length);
        for (int i = 0; i < length; i++) {
            arr[i].push_back({0, 0});
        }
    }
    
    void set(int index, int val) {
        if (arr[index].back().first == snap_id) {
            arr[index].back().second = val;
        } else {
            arr[index].push_back({snap_id, val});
        }
    }
    
    int snap() {
        return snap_id++;
    }
    
    int get(int index, int id) {
        auto &vec = arr[index];
        int l = 0, r = vec.size() - 1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (vec[m].first <= id) l = m + 1;
            else r = m - 1;
        }
        return vec[r].second;
    }
};
