int get_ans(int N, const vector<int>& A, const vector<int>& P) {
    vector<vector<int>> tree(N);
    
    // Build the tree
    for (int i = 1; i < N; ++i) {
        tree[P[i]].push_back(i); // P[i] is the parent of node i
    }
    
    int max_length = 0;
    
    // Perform DFS from each node to find the maximum length of valid subsequences
    for (int i = 0; i < N; ++i) {
        vector<int> subsequence;
        int curr_max_length = 0;
        dfs(A, tree, subsequence, i, curr_max_length);
        max_length = max(max_length, curr_max_length);
    }
    
    return max_length;
}

void dfs(const vector<int>& A, const vector<vector<int>>& tree, vector<int>& subsequence, int node, int& max_length) {
    subsequence.push_back(A[node]);
    
    // Track the maximum length of valid subsequences found
    max_length = max(max_length, (int)subsequence.size());
    
    // Traverse children
    for (int child : tree[node]) {
        dfs(A, tree, subsequence, child, max_length);
    }
    
    // Backtrack: Remove the current node from subsequence
    subsequence.pop_back();
}
int main() {
    int N;
    cin >> N;
    
    vector<int> A(N); // values at each node
    vector<int> P(N); // parent of each node
    
    // Read A array
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    // Read P array and build the tree
    for (int i = 1; i < N; ++i) {
        cin >> P[i];
    }
    
    // Get the maximum length of valid subsequences
    int result = get_ans(N, A, P);
    
    // Output the maximum length found
    cout << result << "\n";
    
    return 0;
}