#include <stdio.h>

void solve() {
    int n, k;
    scanf("%d%d", &n, &k);

    // count[v] stores the frequency of value v
    int count[105] = {0};
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        if (val <= n) {
            count[val]++;
        }
    }

    int prefix_sum = 0;
    int ans = 0;

    for (int v = 0; v <= n; v++) {
        // Condition 1: Must have at least one copy of v to form group S_v
        if (count[v] == 0) {
            break;
        }

        prefix_sum += count[v];

        // Condition 2: Need at least (v + 1) * k total elements <= v
        if (prefix_sum < (long long)(v + 1) * k) {
            break;
        }

        ans = v + 1;
    }

    printf("%d\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    return 0;
}