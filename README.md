# C语言学习笔记-这是一个伟大的学习路线

# C Learning Note - This is a master piece.

![image-20250401230248435](https://raw.gitmirror.com/Withnoidea/PicGoDemo/blog/img/202504012302504.png)

## C入门介绍

### 操作运算符

单目运算符

```
! 逻辑反操作
- 负值
+ 正值
& 取地址
sizeof 操作数的类型长度（以字节为单位）
~ 对一个数的二进制按位取反
-- 前置、后置--
++ 前置、后置++
* 间接访问操作符(解引用操作符)
(类型) 强制类型转换
```

### 指针

内存是电脑上特别重要的存储器，计算机中程序的运行都是在**内存**中进行的 。
所以为了有效的使用内存，就把内存划分成一个个小的内存单元，**每个内存单元的大小是1个字节。**
为了能够有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号被称为该内存单元的地
址。

![image-20250401231011127](https://raw.gitmirror.com/Withnoidea/PicGoDemo/blog/img/202504012310184.png)

```c++
#include <stdio.h>
int main()
{
	int num = 10;
	&num;
	//int num有四个字节，每个字节都有地址，取出的是第一个字节的地址
	printf("%p\n", &num);//%p以地址形式打印
}
```

指针的使用实例

```c++
#include <stdio.h>
int main()
{
	int num = 10;
	int *p;
	p = &num;
	*p = 20;
	printf("%p\n", &num);//num地址
	printf("%p\n", p);//p指针存放的地址
	printf("%d\n", *p);//20
	printf("%d\n", num);//20
	
	return 0;
}
```

推广到其他类型

```c++
#include <stdio.h>
int main()
{
	char ch = 'w';
	char *p = &ch;
	*p = 'q';
	printf("%c\n", ch);//q
	
	return 0;
}
```

### 指针变量的大小

```
#include <stdio.h>
int main()
{
//指针变量的大小取决于地址的大小
//32位平台下地址是32个bit位（即4个字节）
//64位平台下地址是64个bit位（即8个字节）

	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(short *));
	printf("%d\n", sizeof(int *));
	printf("%d\n", sizeof(float *));
	printf("%d\n", sizeof(double *));
	printf("%d\n", sizeof(long *));
	printf("%d\n", sizeof(long long *));
	
	return 0;
}
```

在32位平台是4个字节

在64位平台是8个字节

### 结构体

```
struct Stu{
	char name[20];
	int age;
	char sex[15];
	char id[15];
};
```

结构体初始化

```
struct Stu s = {"张三", 19, "男", "2109200133"}；

//.为结构成员访问操作符
printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);
//->操作符
struct Stu *ps = &s;
printf("name = %s age = %d sex = %s id = %s\n", ps->name, ps->age, ps->sex, ps-
>id);
```

## 分支结构循环语句

### switch

switch语句中，没有办法直接实现分支，搭配break才能实现真正的分支。

### while

#### while语句的执行流程

![image-20250405003343357](https://raw.gitmirror.com/Withnoidea/PicGoDemo/blog/img/202504050033463.png)

#### break和continue

1. continue在while循环中的作用：
   1. continue是用于终止本次循环的，也就是本次循环中continue后边的代码不会再执行，
      而是直接跳转到while语句的判断部分。进行下一次循环的入口判断。	
2. break在while循环中的作用：
   1. 其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。
      所以：while中的break是用于永久终止循环的。

### for循环

```c++
for(表达式1; 表达式2; 表达式3)
循环语句;
```

#### 表达式1

表达式1为初始化部分，用于初始化循环变量的。

#### 表达式2

表达式2为条件判断部分，用于判断循环时候终止。

#### 表达式3

表达式3为调整部分，用于循环条件的调整。

#### for循环的流程

![image-20250405003650573](https://raw.gitmirror.com/Withnoidea/PicGoDemo/blog/img/202504050036624.png)

### do while

循环至少执行一次，使用的场景有限，所以不是经常使用。

![image-20250405004356310](https://raw.gitmirror.com/Withnoidea/PicGoDemo/blog/img/202504050043354.png)
