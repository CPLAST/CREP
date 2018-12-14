

//o(n^2)
maxsofar = 0;
for (i = 0; i < n; i++) {
    sum = 0;
    for (j = i; j < n; j++) {
        sum += A[j];   // sum is that of A[i..j]
        if (sum > maxsofar)
            maxsofar = sum;
    }
}