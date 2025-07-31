vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> arr; 
    int x=0, y=0;
    for (int i=0; i < a.size(); i++) {
        if (a[i] > b[i]) {
            x++;
        } else if (a[i] < b[i]) {
            y++;
        }
    }
    arr.push_back(x); 
    arr.push_back(y);
    return arr;
}
