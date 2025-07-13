class Path {

    public:

    int *path;
    int *cost;

    Path(int& size){
        path = new int[size];
        cost = new int[size];
        for (int i = 0; i < size; i++) {
            path[i] = -1; // Initialize path with -1 which is null value 
            cost[i] = 2147483647; // Initialize cost with maximum integer value
        }
    }

    ~Path() {
        delete[] path;
        delete[] cost;
    }

};
