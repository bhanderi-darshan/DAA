long long repeatedString(string s, long long n) {
    long long count = 0;
    int size = s.size();

    // Count 'a' in the original string
    for (int i = 0; i < size; i++) {
        if (s[i] == 'a') {
            count++;
        }
    }

    // Count 'a's in full repetitions
    long long total = (n / size) * count;

    // Count 'a's in the remaining part
    long long remainder = n % size;
    for (int i = 0; i < remainder; i++) {
        if (s[i] == 'a') {
            total++;
        }
    }

    return total;
}
