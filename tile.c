#include<stdio.h>

void print(int arr[3][3])//works
  {
   int i=0,j=0;
   while(i<3)
    {
     j=0;
     while(j<3)
      {
       if(arr[i][j]==0)
        printf("| |");
       else
        printf("|%d|",arr[i][j]);
       j++;
      }
     printf("\n");
     i++;
    }
  }

int check_free(int arr[3][3], int num)
  {
   int i=0,j=0;
   while(i<3)//works
     {
      j=0;
      while(j<3)
       {
        if(arr[i][j]==num)
          break;
        j++;
       }
      if(j<3)
        break;
      i++;
     }
  //printf("%d",j);
  
  while(1) //works
   {
   if(arr[i-1][j]==0)
    {
     arr[i-1][j]=arr[i][j];
     arr[i][j]=0;
     break;
    }
   else if(arr[i+1][j]==0)
    {
     arr[i+1][j]=arr[i][j];
     arr[i][j]=0;
     break;
    }
   else if(arr[i][j-1]==0 && j!=0)
    {
     arr[i][j-1]=arr[i][j];
     arr[i][j]=0;
     break;
    }
   else if(arr[i][j+1]==0)
    {
     arr[i][j+1]=arr[i][j];
     arr[i][j]=0;
     break;
    }
   else//This part works for sure
    { printf("Enter another number: ");
      scanf("%d",&num);
      check_free(arr,num);
      break;
    }
   }
  }
int check_win(int arr[3][3])//works... i guess
  {
   int i=0,j=0;
   while(i<3)
    {
     j=0;
     if(i>0 && j==0 &&(arr[i][j]<arr[i-1][2]))
      break;
     
     while(j<2)
      { if((arr[i][j]!=0 &&(arr[i][j]<arr[i][j+1])) ||(arr[i][j+1]==0))
          j++;
       else
        break;
      }
     if(j<2)
      break;
     i++;
    }
   if(i==3)
    {if(arr[2][2]==0)
      return 0;
    else
      return 1;}
   else
    return 1;
  }
int valid_check(int num)//works
  {
   while(num>8||num<1)
    {
     printf("Enter a number between 1 and 8: ");
     scanf("%d",&num);
     valid_check(num);
     break;
    }
   return num;
  }
int main()//not sure if it works properly
  {
   int arr[3][3]={{1,2,4},{3,7,5},{8,6,0}},num=0,moves=1;
   int game_on=0;
   while(1)
    {
     game_on=check_win(arr);//1,2,3 4,5,6 7,8,0
     print(arr);
      if(game_on==0)
      {
        printf("Congrats you solved the puzzle\n");
        break;
      }
     printf("move %d\n",moves);
     printf("Enter the number that you want to move: ");
     scanf("%d",&num);
     num=valid_check(num);
     check_free(arr,num);
     moves++;
    }
   return 0;
  }
