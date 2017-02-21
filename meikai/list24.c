/*
文字列連結
文字列リテラルをただ並べるだけで連結される
int main(void)
{
	char str[] = "DRAGON" "QUEST";
	printf("%s\n",str);
	return 0;
}

ただし、配列に記憶された文字列を連結する場合には、配列名を並べても駄目
strcat(元の文字列が記憶された配列,追加する文字列の記憶された配列);

*/
#include <stdio.h>
#include <string.h>

int main(void)
{
  char str1[12] = "NEMUI";
  char str2[] = "AITAI";
  strcat(str1, str2);
  printf("%s\n", str1);
  return 0;
}
/*
この関数を使う時に注意してほしいのは、元の文字列が記憶された配列は、
元の文字列+追加する文字列だけの大きさが必要になることです。
少ない要素数の文字配列に無理矢理詰め込むと暴走につながります。
*/
