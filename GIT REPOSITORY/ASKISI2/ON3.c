

//o(n^3)
maxsofar = 0;
for (i = 0; i < n; i++)
    for (j = i; j < n; j++) {
        sum = 0;
        for (k = i; k <= j; k++)
            sum += A[k];
            if (sum > maxsofar)
                maxsofar = sum;
    }