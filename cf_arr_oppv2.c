#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, n, m, s, l;
    scanf("%d %d", &n, &m);
    int a[n];
    int sum_of_type2 = 0;
    int last_value_for_index[n]; // Stores the last value for each index
    for (i = 0; i < n; i++) {
        last_value_for_index[i] = -1; // Initialize to -1 (no updates yet)
    }

    struct d {
        int t;
        int q, r;
    } h[m];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < m; i++) {
        scanf("%d %d", &h[i].t, &h[i].q);
        if (h[i].t == 1) {
            scanf("%d", &h[i].r); // Type 1, set new value
        }
    }

    // Process the operations
    for (i = 0; i < m; i++) {
        if (h[i].t == 1) {
            // Type 1 operation: Set the value
            last_value_for_index[h[i].q - 1] = h[i].r;
        } else if (h[i].t == 2) {
            // Type 2 operation: Update cumulative sum
            sum_of_type2 += h[i].q;
        } else if (h[i].t == 3) {
            // Type 3 operation: Compute result
            s = sum_of_type2; // Start with the sum of type 2 operations

            // Look up the most recent value for this index (q)
            l = last_value_for_index[h[i].q - 1];
            if (l != -1) {
                s += l;
            } else {
                s += a[h[i].q - 1];
            }

            printf("%d\n", s);
        }
    }

    return 0;
}

