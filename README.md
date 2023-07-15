# 简介

记录了刷题时遇到的一些bug，需要本地debug的case，包含leetcode主题库和剑指offer题库，每个算法题都是一个单独的cpp project，只需简单的操作就能编译算法

```shell
cd algorithmsDir/
mkdir -p build
cd build
cmake ..
make
```

## 运行&DEBUG

可以直接执行可执行文件运行算法

```shell
#current dir:algorithmsDir/build
./excutableFile
```

如果程序运行出现了问题，比如段错误或者输出不符合预期，可以尝试使用debugTools中的一些打印函数，或者使用gdb进行debug，

```shell
#used gdb
gdb ./excutableFile
```

gdb在调试段错误的时候可以通过bt跟踪栈快速定位bug，强烈推荐！！！更多gdb的用法可以参考  [GDB调试](https://subingwen.cn/linux/gdb/)

# 排序算法

repo中除了leetcode主站的算法题还有比较常用的排序算法

```c++
enum SORTMETHOD{
    BubbleSortPlus = 0,
    SelectSort,
    InsertSort,
    ShellSort,
    HeapSort,
    MergeSort,
    QuickSort
};
```

主要学习参考来源[B站排序算法教程](https://space.bilibili.com/95715842/channel/collectiondetail?sid=41092)与大话数据结构，B站教程使用C语言配合视频讲解，比较快速明白算法逻辑，但是代码实现上偶尔会有一些小问题，比如快排的核心partition函数，所以部分算法我又参考学习了大话数据结构，全都使用C++进行的编写，支持命令行指定排序方法与数组输入，具体usage可以参考  [main.cpp](./sort/src/main.cpp)

关于排序算法这边后期有时间会研究下用python写一些脚本随机给一些数组，横向量化分析对比算法效率，待更新。。。
