#include <windows.h>            //This is the header file for windows.
#include <stdio.h>              //C standard library header file.
            //color
void ADMIN();
void ADD();
void VIEW();
void MEMBER();
void shownotice();
void VIEW_SUGGESTION();
void SUGGESTION();
char password(char p);

char password(char p);
struct member{
    char user[20];
    char p[20];
    char number[12];
    int indate[7];
}member;


void main()
{
    int a;
    system("COLOR 3F");

    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("--------------*********************************************---------------------\n");
    printf("\n--------------------WELCOME TO PHONIX FITNESS ZONE------------------------------\n\n");
    printf("--------------*********************************************---------------------");

    printf("\n\n\n\n\n\n\n\n\n\n");

    printf("\n                PRESS ANY KEY TO CONTINUE...      ");

    getch();
    system("cls");
        printf("\n\n\n\n\n\n\n\n");
        printf("\tENTER ANY NUMBER :\n");
        printf("\t1 : ADMIN\n");
        printf("\t2 : MEMBER\n");
        printf("\t3 : SUGGESTION\n\n\n\n");

        scanf("%d",&a);
        system("cls");

        if(a==1)
            ADMIN();
        if(a==2)
            MEMBER();
        if(a==3)
            SUGGESTION();




}


void ADMIN()
{
    system("cls");
    int b,r;
    char pass[25]= "krnpatel";
    char inpass[25];
    printf("\nenter the password\n");
    gets(inpass);

    r=strcmp(inpass,pass);
    if(r!=0)
    {
        printf("password incorrect, please try again");
        ADMIN();
    }
    if(r==0)
    {
        system("cls");
        system("COLOR D7");

        printf("\n\n\n\n\n\n\n");
        x:
        printf("\tPLEASE SELECT THE CHOICE");
        printf("\n\n\n\n");
        printf("\t1 : ADD MEMBER\n");
        printf("\t2 : VIEW MEMBER\n");
        printf("\t3 : NOTICE\n");
        printf("\t4 : VIEW SUGGESTION\n");

        scanf("%d",&b);
        switch(b)
        {
        case 1 :
            ADD();
            break;

        case 2:
            VIEW();
            break;
        case 3 :
            NOTICE();
            break;
        case 4 :
            VIEW_SUGGESTION();
            break;
        default :
            printf("invalid choice");
            goto x;
            break;
        }


    }

}
void NOTICE()
{
    char notice[500];
    FILE *fp;
    fp=fopen("notice.txt","w");
    gets(notice);
    fprintf(fp,"%s",notice);
    fclose(fp);
}
void ADD()
{
    int i;
    FILE *fp;
    fp=fopen("gym.txt","a");
    printf("enter the user name:");
    scanf("%s",&member.user);
    printf("\nenter the starting date:");
    scanf("%s",&member.indate);
    printf("\nenter the emergency mobile number:");
    scanf("%s",&member.number);

    printf("\nenter the password:");
    password(member.p);

    fwrite(&member,sizeof(member),1,fp);
    fclose(fp);


}
char password(char p)
{
    char pass[10];
    int i;
    short c,d;
    pas:
        c=0;
        d=0;
    for(i=0 ; i<10;i++)
        {
        pass[i]=getch();
        printf("*");
        if(pass[i]>=65 && pass[i]<=90) c=1;
        else if(pass[i]>=48 && pass[i]<=57) d=1;
        if(pass[i]==13)
        {
            if(c==0 || d==0)
            {
                printf("\n------------Enter atleast one capital letter and one numerical value-----------\n");
                goto pas;
            }
            else
                printf("\npassword saved successful\n");
                break;
        }

    }
}


void VIEW()
{
    system("cls");
    FILE *p;
    p=fopen("gym.txt","r");
    while(fread(&member,sizeof(member),1,p))
    {

        printf("\n\n\n\n");
        printf("%s\t%s\t%s\t%s",member.user,member.number,member.indate,member.p);
    }
    fclose(p);
}

void SUGGESTION()
{
    char suggestion[500];
    FILE *fp;
    fp=fopen("suggestion.txt","w");
    gets(suggestion);
    fprintf(fp,"%s",suggestion);
    fclose(fp);
}

void VIEW_SUGGESTION(){
    FILE *fp;
    char suggestion[20];
    fp=fopen("suggestion.txt","r");
    fscanf(fp,"%s",suggestion);
    printf("%s",suggestion);
    fclose(fp);
}






void MEMBER()
{
    void shownotice(){
    FILE *fp;
    char notice[20];
    fp=fopen("notice.txt","r");
    fscanf(fp,"%s",notice);
    printf("%s",notice);
    fclose(fp);
}

    int c,u;
    printf("\n\n\n\n");
    printf("\t ******  BE THE BEAST AND WORK HARD   *******\n\n\n");
    printf("\t ******  ALWAYS HEALTH COMES FIRST   *******\n\n\n");
    printf("\t ******  PRESS ANY KEY TO SELECT THE WORK OUT  *******\n\n\n");
    getch();
    system("cls");

    z:
    printf("\n\n\n\n\n\n");
    printf("\tPRE-WORKOUT EXERCISE ARE COMPLUSORY\n\n\n");
    printf("\t1 : CHEST WORKOUT\n\n");
    printf("\t2 : BACK WORKOUT\n\n");
    printf("\t3 : BICEPS WORKOUT\n\n");
    printf("\t4 : TRICEPS WORKOUT\n\n");
    printf("\t5 : ABS WORKOUT\n\n");
    printf("\t6 : SHOULDER WORKOUT\n\n");
    printf("\t7 : LEGS\n\n");
    printf("\t8 : ADD SUGGESTION\n\n");
    printf("\t");
    scanf("%d",&c);
    getch();
    system("cls");
    switch(c)
    {
    case 1 :
        printf("\n");
        printf("\t PUSH UP:                 3 SETS;       15,12,10 REPS\n\n");
        printf("\t INCLINED BENCH-PRESS:    3 SETS;       15,12,10 REPS\n\n");
        printf("\t FLAT BENCH-PRESS:        3 SETS;       15,12,10 REPS\n\n");
        printf("\t DECLINED BENCH-PRESS:    3 SETS;       15,12,10 REPS\n\n");
        printf("\t INCLIDE DUMBBELL-PRESS:  3 SETS;       15,12,10 REPS\n\n");
        printf("\t FLAT DUMBELL-PRESS:      3 SETS;       15,12,10 REPS\n\n");
        printf("\t DECLINED DUMBELL-PRESS:  3 SETS;       15,12,10 REPS\n\n");
        printf("\t CABLE CROSS:             3 SETS;       15,12,10 REPS\n\n");
        printf("\t SEATED MACHINE FLY:      3 SETS;       15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d",&u);
        if(u==2)
        {


            system("cls");
            goto z;
        }
        else
            break;

    case 2 :
        printf("\n");
        printf("\t WIDE GRIP PULL-UP:       3 SETS;        15,12,10 REPS\n\n");
        printf("\t LAT PULL DOWN BACK:      3 SETS;        15,12,10 REPS\n\n");
        printf("\t T-BAR:                   3 SETS;        15,12,10 REPS\n\n");
        printf("\t SEATED RAW:              3 SETS;        15,12,10 REPS\n\n");
        printf("\t PULL DOWN ROW:           3 SETS;        15,12,10 REPS\n\n");
        printf("\t ONR ARM DUMBBELL ROWS:   3 SETS;        15,12,10 REPS\n\n");
        printf("\t BARBELL BENT OVER:       3 SETS;        15,12,10 REPS\n\n");
        printf("\t DEAD LIFT:               3 SETS;        15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d",&u);
        if(u==2){
            system("cls");
            goto z;
        }
        else
            break;


    case 3:
        printf("\n");
        printf("\t SMALL GRIP PULL-UP:       3 SETS;        15,12,10 REPS\n\n");
        printf("\t PREACHER CURLS:           3 SETS;        15,12,10 REPS\n\n");
        printf("\t BARBELL CURLS:            3 SETS;        15,12,10 REPS\n\n");
        printf("\t ONE BY ONE DUMBELL CURL:  3 SETS;        15,12,10 REPS\n\n");
        printf("\t CONCENTRATION CURLS:      3 SETS;        15,12,10 REPS\n\n");
        printf("\t CABLE BICEPS CURLS:       3 SETS;        15,12,10 REPS\n\n");
        printf("\t INCLINED DUMBELL CURLS:   3 SETS;        15,12,10 REPS\n\n");
        printf("\t REVERSE CURLS:            3 SETS;        15,12,10 REPS\n\n");
        printf("\t HAMMER CURLS:             3 SETS;        15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d",&u);
        if(u==2){
            system("cls");
            goto z;
        }
        else
            break;


    case 4 :
        printf("\n");
        printf("\t DIAMOND PUSH-UP:               3 SETS;     15,12,10 REPS\n\n");
        printf("\t FLAT BAR TRICEPS EXTENSION:    3 SETS;     15,12,10 REPS\n\n");
        printf("\t BAR TRICEPS EXTENSION:         3 SETS;     15,12,10 REPS\n\n");
        printf("\t ONE ARM DUMBELL PRESS:         3 SETS;     15,12,10 REPS\n\n");
        printf("\t BOTH ARM DUMBELL PRESS:        3 SETS;     15,12,10 REPS\n\n");
        printf("\t KICKBACK:                      3 SETS;     15,12,10 REPS\n\n");
        printf("\t CABLE PUSH DOWN:               3 SETS;     15,12,10 REPS\n\n");
        printf("\t CABLE PUSH OVERHEAD:           3 SETS;     15,12,10 REPS\n\n");
        printf("\t TRICEPS DIPS:                  3 SETS;     15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d",&u);
        if(u==2){
            system("cls");
            goto z;
        }
        else
            break;


    case 5:
        printf("\n");
        printf("\t HANGING LEG RAISE:                             3 SETS;     15,12,10 REPS\n\n");
        printf("\t MACHINE CRUNCH:                                3 SETS;     15,12,10 REPS\n\n");
        printf("\t CABLE PALLOF PRESS:                            3 SETS;     15,12,10 REPS\n\n");
        printf("\t KNEELING CABLE CRUNCH:                         3 SETS;     15,12,10 REPS\n\n");
        printf("\t DECLINE-BENCH CRUNCH WITH MEDICINE BALL:       3 SETS;     15,12,10 REPS\n\n");
        printf("\t EXERCISE BALL PIKE:                            3 SETS;     15,12,10 REPS\n\n");
        printf("\t PLANK:                                                     7,5,3 MINUTES\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d",&u);
        if(u==2){
            system("cls");
            goto z;
        }
        else
            break;

    case 6 :
        printf("\n");
        printf("\t BAREBELL FRONT PRESS:           3 SETS;     15,12,10 REPS\n\n");
        printf("\t DUMBELL PRESS:                  3 SETS;     15,12,10 REPS\n\n");
        printf("\t LATERAL RAISES:                 3 SETS;     15,12,10 REPS\n\n");
        printf("\t FRONT PRESS:                    3 SETS;     15,12,10 REPS\n\n");
        printf("\t DUMBELL BENT OVER:              3 SETS;     15,12,10 REPS\n\n");
        printf("\t UPRIGHT ROW:                    3 SETS;     15,12,10 REPS\n\n");
        printf("\t SHRUG:                          3 SETS;     15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d",&u);
        if(u==2){
            system("cls");
            goto z;
        }
        else
            break;

    case 7 :
        printf("\n");
        printf("\t SET-UPS:                      3 SETS;      15,12,10 REPS\n\n");
        printf("\t SUMO DUMBELL SQUATS:          3 SETS;      15,12,10 REPS\n\n");
        printf("\t LUNGES DUMBELLS:              3 SETS;      15,12,10 REPS\n\n");
        printf("\t SEATED LEGS CRULS:            3 SETS;      15,12,10 REPS\n\n");
        printf("\t SEATED MACHINE EXTENSIONS:    3 SETS;      15,12,10 REPS\n\n");
        printf("\t STANDING DUMBELL CALF:        3 SETS;      15,12,10 REPS\n\n");
        printf("\t REVERSE LEGS CRULS:           3 SETS;      15,12,10 REPS\n\n");
        printf("\t HEAVY LEG PRESS:              3 SETS;      15,12,10 REPS\n\n");
        printf("\t PLEASE DONT LIFT OVER-WEIGHT\n\n");
        printf("\t TO RETURN TO WORKOUT LIST PLEASE PRESS '2' ");
        scanf("%d",&u);
        if(u==2){
            system("cls");
            goto z;
        }
        else
            break;

    case 8 :
        SUGGESTION();
        break;

    }





}
