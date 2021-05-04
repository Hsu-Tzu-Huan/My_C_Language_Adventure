#include <stdio.h> 
// include 類似 import in python
int main()
{
// C程式的進入點是main，整支程式會從main開始執行
// 有main的程式是executable，沒有的是 library
// int 指的是 function return 的 type
	int num;
// 跟記憶體要一塊integer 大小的空間
	scanf("%d",&num);
// scanf 是 scan 標準輸入（通常指的是鍵盤輸入，標準輸出是螢幕輸出。）
// scanf 的第一個引數是格式化字串（formatted string），裡面包含格式指定符（format specifier）
// d 代表的是 integer，c 是 character (字元）， f is float。
// 第二個之後的引數是 specify scan 進來的東西要存在哪
// &是取址運算子，取的變數在記憶體空間的地址 or 位址

	printf("Hello World\n, %d %d", num, num);
	return 0;
// return 0 代表著成功結束，程式正常運行
}			   

