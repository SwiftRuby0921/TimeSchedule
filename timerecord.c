#include <stdio.h>

#define START_TIME (1) /* 始業時刻の登録 */
#define END_TIME (2) /* 退社時刻の登録 */

/* 就業状態 */
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

#define  ENGAGING 'e' /* 就業中 */
#define  NON_ENGAGING 'n' /* 非就業 */

int
main(void)
{
  int command; /* タイムレコーダへのコマンド */
  int employee; /* 従業員番号(管理者は0) */
  int status; /* 就業状態 */

    printf("従業員番号(0-3): ");
      scanf("%d",&employee);//ユーザから従業員番号を入力しemployeeに設定;
    
  switch(employee) {
    case 0: status=2; break;
    case 1: status=1; break;
    case 2: status=2; break;
    case 3: status=1; break;
    default:
    printf("エラー：正しい従業員を指定してください\n");
    return 0;
    break;
  }
    printf("コマンド(出社=1, 退社=2): ");
      scanf("%d",&command);
 // ユーザからコマンドを入力しcommandに設定;
  switch(command) {
  case START_TIME:
    if(status==2)
        printf("従業員%d は，業務中です\n",employee);
    else {
      printf("エラー：従業員%dはすでに就業しています\n", employee);
      return 0;
    }
    break;
  case END_TIME:
    if(status==1)
        printf("エラー：従業員%d はすでに就業しています\n",employee);
    else {
      printf("エラー：従業員%dはすでに退社しています\n", employee);
      return 0;
    }
    break;
  default:
    printf("エラー：正しい操作を指定してください\n");
    return 0;
    break;
  }

  printf("従業員%dは，", employee);
  if(就業中)
    printf("業務中です\n");
  else
    printf("業務を終えました\n");

  return 0;
}
