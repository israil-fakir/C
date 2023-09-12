#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
   {
        float *poi, mean = 0, median, sd, var;
        int n, i, j, temp;
        printf("Enter the size of elements:");
        scanf("%d", &n);
        poi   = (float *)malloc(sizeof (float) * n);

        printf("Enter elements:\n");
        for (i = 0; i < n; i++)
                scanf("%f", &poi[i]);
        for (i = 0; i < n; i++)
                mean = mean + poi[i];
        mean = mean / n;
        for (i = 0; i < n; i++)
        var = var + pow((poi[i] - mean) , 2);
        var = var / n;
        sd  = sqrt(var);
        for (i = 0; i < n - 1; i++)
                for (j = i; j < n; j++) {
                        if (poi[i] > poi[j]) {
                                temp = poi[i];
                                poi[i] = poi[j];
                                poi[j] = temp;
                        }
                }

        if ((n + 1) % 2 == 0) {
                median = poi[((n + 1) / 2) - 1];
        } else {
                median = (poi[((n + 1) / 2) - 1] + poi[((n + 2) / 2) - 1]) / 2;
        }
        printf("Standard deviation: %f\n", sd);
        printf("Mean : %f\n", mean);
        printf("Median: %f\n", median);
        return 0;
  }
