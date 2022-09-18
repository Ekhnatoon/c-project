#include <stdio.h>

void mainmenu();
void list();
int arrID[10],arrMODEL[10],IDX=0;
void add();
int removemotor();
int main()
{
    mainmenu();
}
void mainmenu()
{
    int x;
    printf("===========================================================\n");
    printf("1)enter\n2)exit\nplease choose an option: \n");
    scanf("%d",&x);
    printf("===========================================================\n");
    if(x==1)
        list();
    if(x==2)
        printf("<==thank you for using our app==>\nMade by: *==*Ezla*==*Nourhan*==*Mariam*==*");
}
void list()
{
    int y;
    printf(" 1)newmotor\n 2)viewlist\n 3)deletemotor\n 4)back to mainmenu\n ");
    scanf("%d",&y);
    printf("===========================================================\n");
    if(y==1)
        add();
    if(y==2)
        view();
    if(y==3)
        removemotor();
     if(y==4)
        mainmenu();
}
void add()
{
    int ID,MODEL,i;
    printf("please enter the ID of the motor: ");
    while(1)
    {
        int z=0;
        scanf("%d",&ID);
        for(i=0; i<IDX; i++)
        {
            if(ID==arrID[i])
            {
                printf("this ID is already taken\n please enter another ID\n");
                printf("===========================================================");
                z++;
                break;
            }

        }
        if(z==0)
            break;

    }
    arrID[IDX]=ID;
    printf("*===*\n");
    printf("please enter the MODEL of the motor\n");
    scanf("%d",&MODEL);
    printf("\n===========================================================\n");
    arrMODEL[IDX]=MODEL;
    IDX++;
    list();

}
void view()
{
    int i;
    for(i=0; i<IDX; i++)
    {
        if(arrID[i]!=-1)
            printf(" ID of motor  :%d\n MODEL of motor:%d\n",arrID[i],arrMODEL[i]);
            printf("\n===========================================================\n");
    }
    list();

}
int removemotor()
{
    int ID,i;
    printf("please enter ID of the motor you want to delete\n");
    scanf("%d",&ID);
    printf("===========================================================\n");
    for(i=0; i<IDX; i++)
    {
        if(arrID[i]==ID)
        {
            arrID[i]=-1;
            break;
        }
    }

    list();

}
