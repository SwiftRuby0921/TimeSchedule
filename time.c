#include <stdio.h>

int main(void){
  
  int employee;
  int command;
  int status;

  printf("従業員番号(0-3): ");
  scanf("%d",&employee);
  printf("コマンド(出社=1, 退社=2): ");
  scanf("%d",&command);
  
  switch(employee){
    case 0: status=2; break;
    case 1: status=1; break; 
    case 2: status=2; break;
    case 3: status=1; break;
  }
  switch(command){
      case 1:
      {
        if(status==1){
           printf("エラー：従業員%d はすでに就業しています\n",employee);
        }
        else{
          printf("従業員%d は，業務中です\n",employee);
        }
        break;
      }
      case 2:
      {
          if(status==2){
           printf("エラー：従業員%d はすでに就業しています\n",employee);
        }
        else{
          printf("従業員%d はすでに退社しています\n",employee);
        }
        break;
      }
        default: printf("エラー：正しい操作を指定してください\n"); break;
  }


  return 0;
}

