// CPP program to count the
// number of numbers in range
// 1-M that are divisible by
// given N prime numbers
#include <bits/stdc++.h>
using namespace std;

// function to count the number
// of numbers in range 1-M that
// are divisible by given N
// prime numbers
int count(int a[], int m, int n)
{
    int odd = 0, even = 0;
    int counter, i, j, p = 1;
    int pow_set_size = (1 << n);

    // Run from counter 000..0 to 111..1
    for (counter = 1; counter < pow_set_size; counter++)
    {
        p = 1;
        for (j = 0; j < n; j++)
        {

            // Check if jth bit in the
            // counter is set If set
            // then print jth element from set
            if (counter & (1 << j))
            {
                p *= a[j];
            }
        }

        // if set bits is odd, then add to
        // the number of multiples
        if (__builtin_popcount(counter) & 1)
            odd += (m / p);
        else
            even += (m / p);
    }

    return odd - even;
}

// Driver Code
int primes[4]  = {2,3,5,7};
int N = 100 ;
int inc_exe(int idx =0, int d = 1, int sign = -1)
{
    if(idx == 4)
    {
        if(d == 1)
            return 0; // nothing selected
        return sign * N / d ;
    }
    return inc_exe(idx+1,d,sign) + inc_exe(idx+1,d*primes[idx],sign*-1);
}
int main()
{
    int a[] = { 2, 3, 5, 7 };
    int m = 100;
    int n = sizeof(a) / sizeof(a[0]);
    cout << count(a, m, n)<<endl;
    // more simpler example
    int cnt2 = 0 ;  // Inclusion-Exclusion approach
    n = 100;
    for(int i2 = 0; i2 < 2; ++i2)
    {
        for(int i3 = 0; i3 < 2; ++i3)
        {
            for(int i5 = 0; i5< 2; ++i5)
            {
                for(int i7 =0; i7< 2; ++i7)
                {
                    int d = 1, elementsCnt = 0 ;
                    if(i2) d*=2, ++elementsCnt;
                    if(i3) d*=3, ++elementsCnt;
                    if(i5) d*=5, ++elementsCnt;
                    if(i7) d*=7, ++elementsCnt;

                    if(elementsCnt == 0)
                        continue;  //nothing selected

                    int sign = elementsCnt % 2 == 1 ? 1 : -1; // odd or even

                    cnt2 += sign * (n / d);

                }
            }
        }
    }
    cout << cnt2 << "\n";
    cout <<inc_exe()<<"\n";
    return 0;
}
