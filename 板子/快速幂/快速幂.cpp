int ksm(int m, int k, int p)
{
    int res = 1;
    while (k)
    {
        if (k & 1) res = res * m % p;
        m = m * m % p;
        k >>= 1;
    }
    return res;
}
//求m的k次方