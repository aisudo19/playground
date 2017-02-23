/*
3人分の、名前、年齢、性別、を入力して表示するプログラムを作りなさい。
ただし、データは構造体で記憶することとし、
また、データの入力と表示はそれぞれ専用の関数を作って行うこととする。
*/

#include <stdio.h>
#include <string.h>

typedef struct{
  char name[256];
  int age;
  int sex;
}People;

void InputPeople(People *data);
void ShowPeople(People data);

int main(void)
{
  People data[3];
  int i;

  for(i = 0; i < 3; i++){
    InputPeople(&data[i]);
  }

  for(i = 0; i < 3; i++){
    ShowPeople(data[i]);
  }

  return 0;
}

void InputPeople(People *data)
{
  printf("名前:");
	scanf("%s",data->name);
  printf("年齢:");
  scanf("%d",&data->age);
  printf("性別(1-男性、2-女性):");
  scanf("%d",&data->sex);
  printf("\n");
}

void ShowPeople(People data){
  char sex[16];

  printf("名前:%s\n",data.name);
  printf("年齢:%d\n",data.age);

  if(data.sex == 1){
    strcpy(sex, "男性");
  }else{
    strcpy(sex, "女性");
  }

  printf("性別:%s\n",sex);
  printf("\n");
}
