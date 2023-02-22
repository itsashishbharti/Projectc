#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char name[25];
int readkey()
{
    char c;
    c=_getch();
    if(c==-32)
    {
        c==_getch();
    }
    return c;
}
int main()
{
    printf("\nEnter Player Name:  ");
    scanf("%[^\n]*c ",name);
    printf("\n\t\t\t\t\t\t\t\tRULE OF THIS GAME\n 1. You can move only 1 step at a time by arrow key \n    Move Up: by Up arrow key\n    Move Down: by Down arrow key \n    Move Right: by Right arrow key\n    Move Left: by Left arrow key\n");
    printf("2. You can move number at empty position only\n\n\n");
    printf("3. For each valid move : your total number of move decrease by 1\n");
    printf("4. Wining situation : Numberin 4*4 Matrix should be in order from 1 to 15\n\n\n ");
    printf("\t\t\t\t\t\t\t\tWinning Situation\n\n");
    printf("-----------------\n");
    printf("| 1 | 2 | 3 | 4 |\n| 5 | 6 | 7 | 8 |\n| 9 |10 |11 |12 |\n|13 |14 |15 |   |\n");
    printf("-----------------\n\n\n");
    printf("5. You can exit the game any time by pressing 'E' or 'e'\n");
    printf("\t\t\t Happy Gaming : good Luck\n\n\n");
    printf("Press any key to start.............");
    getch();
    system("cls");
    int count=100;
    int flag = 0;
    int mat[4][4]={6,2,5,1,3,9,10,11,15,12,14,4,7,8,13,0};
         while(count>0)
         {
         printf("Player Name : %s Moves : %d",name,count);
         printf("\n-----------------\n");
         
         for(int i=0;i<4;i++)
         {
             for(int j=0;j<4;j++)
             {
          
                 printf("| %d",mat[i][j]);
             }
             printf("|\n");
         }
         printf("-----------------\n");
            int key=readkey();
             int temp=0;
             switch(key)
             {
                 case 72://up Arrow
                      for(int i=0;i<4;i++)
                          {       
                           for(int j=0;j<4;j++)
                           {
                               if(mat[i][j]== 0)
                               {
                                 if(i!=0)
                                 {
                                     temp=mat[i-1][j];
                                     mat[i-1][j]=mat[i][j];
                                     mat[i][j]=temp;
                                     count--;
                                     break;
                                 }
                               }
                           }
                          }
                     system("cls");
                     break;
                 case 80://Down Arrow

                         for(int i=0;i<3;i++)
                         {
                             for(int j=0;j<4;j++)
                             {
                                 if(mat[i][j]==0)
                                 {
                                     temp=mat[i+1][j];
                                     mat[i+1][j]=mat[i][j];
                                     mat[i][j]=temp;
                                     count--;
                                     flag =1;
                                     break;
                             	}
                             }
                             if(flag==1)
                             {
	        					flag = 0;
                             break;
                         }
                         }
                     system("cls");
                     break;
                 case 77://Right Sift
                    for(int i=0;i<4;i++)
                    {
                     for(int j=0;j<4;j++)
                     {
                         if(mat[i][j]==0 && j<3)
                         {
                             temp=mat[i][j+1];
                             mat[i][j+1]=mat[i][j];
                             mat[i][j]=temp;
                             count--;
                             break;

                         }
                     }
                    }
                     system("cls");
                     break;
                 case 75://Left shift
                     for(int i=0;i<4;i++)
                     {
                         for(int j=0;j<4;j++)
                         {
                             if(mat[i][j]==0 && j!=0)
                             {
                                 temp=mat[i][j-1];
                                 mat[i][j-1]=mat[i][j];
                                 mat[i][j]=temp;
                                 count--;
                                 break;
                             }
                         }
                     }
                     system("cls");
                     break;
                 case 'e': //For exit

                     exit(0);
                default:
                    system("cls");
                    break;
             }
             int jat[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
             int k=0;
             for(int i=0;i<4;i++)
             {
                 for(int j=0;j<4;j++)
                 {
                     if(jat[i][j]==mat[i][j])
                     {
                         k=1;
                     }
                     else
                     {
                         k=0;
                         break;
                     }
                 }
             }
             if(k==1)
             {
                 printf("\n Congratulation You Won  In %d Moves",count);
             }
         }
             printf("\n You Lost all Moves \n! lost Game!\n");
         getch();
    return 0;
}       