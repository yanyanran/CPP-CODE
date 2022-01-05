/*转化指针计算*/

//可将二维数组rain[year][month]设置为：
//const float (*ptr)[month] = rain;
//即可将数组rain[year][month]转化为 *(*(ptr+year)+month)