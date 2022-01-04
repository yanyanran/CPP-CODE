/*编写一个函数，以两个指向字符串的指针作为参数。
  如果第2个字符串包含在第1个字符串中，那么函数
  返回第1个字符串开始的地址。否则返回空指针。*/

  char* string(char *str,char *strr)
  {
      int count=0;
      int sum=strlen(strr);//被包含字符串的长度（count需要达到才为包含）

      while(*str!='\0' && count<sum)
      {
          if(*(str+count)==*(strr+count))
          {
              count++; //相同就让count++逼近sum
          }else
          {
              count=0;
              str++; //不相等就指针后移到下一字符对比是否相同
          }
      }

      if(count==sum)
      {
          return str;
      }else
          return 0;//NULL
  }