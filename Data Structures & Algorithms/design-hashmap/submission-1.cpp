class MyHashMap {
public:
    vector<int> values;
    vector<bool> present;

    MyHashMap() {
        values.resize(1000001, -1);
        present.resize(1000001, false);
    }
        
    void put(int key, int value) {
        values[key] = value;
        present[key] = true;
    }

    int get(int key) {
        if (present[key])
            return values[key];

        return -1;
    }

    void remove(int key) {
        present[key] = false;
        values[key] = -1;
    }
};