# C-Note

  ```shell
  #include<studio.h>
  int main()
  {
    printf("Test Code");
    return 0;
  }
  ```
  
  * C语言的函数指的i完成某一功能的程序，那么要完成功能就需要操作对象和数据
  * 一个C语言至少包含一个 main() 函数, 任何一个C语言的 main 函数尤其只有一个
  * 主函数 main() 只是为了完成一个主功能，输出一句话，但是会产生垃圾数，为了规范对象，消除隐患，怎么处理呢
    在main 前面添加int（）integer整数，告诉计算机main是有一个整型数值，值为几呢
    return 0，代表main的值为0，请你把0作为main的值返回
    之所以是0，而不是别的，C语言中程序正确就返回0， 运行错误，则返回非0
  *   