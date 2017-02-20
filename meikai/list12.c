/*
判断力が弱い
番号別に処理する文を分けたい時に使う文

switch文～caseにおいて、caseにおくことができるのは整数値だけです
実数や、変数や、条件式などをおくことはできないのです。
つまり、if文のように、変数同士を比べたり、大小関係の比較などは不可能です。
switch文～caseは、変数と整数値の比較にしか使うことができません。
複雑な判断が必要な場合には、if文を使う以外には方法がありません。
*/

 #include <stdio.h>

 int main(void)
 {
   int no;
   scanf("%d", &no);
   switch(no){
     case 1:
     case 2:
     case 4:
        printf("man\n");
        break;
     case 3:
        printf("女性\n");
        break;
      default:
        printf("その番号を持つ人間は存在しない\n");
        break;
   }
   return 0;
 }
