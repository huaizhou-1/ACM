
//一.找出第一个大于等于 x 的元素
int bsearch_1(int l, int r)
{
    while (l <= r) {
      int x = 0;
      int mid = l + (r - l) / 2;
      //下面两个条件判断，哪个不取等，就输出哪个
      if (mid >= x) r = mid - 1;
      else l = mid + 1;
    }
    return l;
}

//一.找出第一个小于等于 x 的元素
int bsearch_2(int l, int r)
{
    while (l <= r)
    {
      int x = 0;
      int mid = l + (r - l) / 2;
      //下面两个条件判断，哪个不取等，就输出哪个
      if (mid <= x) l = mid + 1;
      else r = mid - 1;
    }
    return r;
}
