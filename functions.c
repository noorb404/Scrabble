/*
 * functions.c
 *
 *  Created on: Jan 18, 2016
 *      Author: nor
 */
#include "functions.h"
tile V,S;
char array[][MAX_SIZE];
int FLAG3=0;// FOR THE FIRST INPUT WORD PUT IT IN FREE PLACE ( USING IN check_connection FUNCTION)
void FILL_VALUE(tile *V)
{
	V->A=1;V->B=3;V->C=3;V->D=2;V->E=1;V->F=4;V->G=2;V->H=4;V->I=1;V->J=8;V->K=5;V->L=1;
	V->M=3;V->N=1;V->O=1;V->P=3;V->Q=10;V->R=1;V->S=1;V->T=1;V->U=1;V->V=4;V->W=4;V->X=8;
	V->Y=4;V->Z=10;
}
void FILL_QUANTITY(tile *S)
{
	S->A=9;S->B=2;S->C=2;S->D=4;S->E=12;S->F=2;S->G=3;S->H=2;S->I=9;S->J=1;S->K=1;S->L=4;
	S->M=2;S->N=6;S->O=8;S->P=2;S->Q=1;S->R=6;S->S=4;S->T=6;S->U=4;S->V=2;S->W=2;S->X=8;
	S->Y=1;S->Z=1;
}
int check_ch(char c,tile t)
{
	switch (c)
	{
	case 'A':
		  return (t.A);
		  break;
	case 'B':
		  return (t.B);
		  break;
	case 'C':
		  return (t.C);
		  break;
	case 'D':
		  return (t.D);
		  break;
	case 'E':
		  return (t.E);
          break;
	case 'F':
		  return (t.F);
		  break;
	case 'G':
		  return (t.G);
		  break;
	case 'H':
		  return (t.H);
		  break;
	case 'I':
		  return (t.I);
		  break;
	case 'J':
		  return (t.J);
		  break;
	case 'K':
		  return (t.K);
		  break;
	case 'L':
		  return (t.L);
		  break;
	case 'M':
		  return (t.M);
		  break;
	case 'N':
		  return (t.N);
		  break;
	case 'O':
		  return (t.O);
		  break;
	case 'P':
		  return (t.P);
		  break;
	case 'Q':
		  return (t.Q);
		  break;
	case 'R':
		  return (t.R);
		  break;
	case 'S':
		  return (t.S);
	      break;
	case 'T':
		  return (t.T);
	      break;
	case 'U':
		  return (t.U);
	      break;
	case 'V':
		  return (t.V);
	      break;
	case 'W':
		  return (t.W);
	      break;
	case 'X':
		  return (t.X);
	      break;
	case 'Y':
		  return (t.Y);
	      break;
	case 'Z':
		  return (t.Z);
	      break;
	}
	return 0;
}
int check_quantity(char ch,tile *S)
{
	switch (ch)
	{
	case 'A':
		  if(S->A==0)
			  return 1;
		  else
			  S->A--;
		  break;
	case 'B':
		  if(S->B==0)
			  return 1;
		  else
			  S->B--;
		  break;
	case 'C':
		  if(S->C==0)
			  return 1;
		  else
			  S->C--;
		  break;
	case 'D':
		  if(S->D==0)
			  return 1;
		  else
			  S->D--;
		  break;
	case 'E':
		  if(S->E==0)
			  return 1;
		  else
			  S->E--;
          break;
	case 'F':
		  if(S->F==0)
			  return 1;
		  else
			  S->F--;
		  break;
	case 'G':
		  if(S->G==0)
			  return 1;
		  else
			  S->G--;
		  break;
	case 'H':
		  if(S->H==0)
			  return 1;
		  else
			  S->H--;
		  break;
	case 'I':
		  if(S->I==0)
			  return 1;
		  else
			  S->I--;
		  break;
	case 'J':
		  if(S->J==0)
			  return 1;
		  else
			  S->J--;
		  break;
	case 'K':
		  if(S->K==0)
			  return 1;
		  else
			  S->K--;
		  break;
	case 'L':
		  if(S->L==0)
			  return 1;
		  else
			  S->L--;
		  break;
	case 'M':
		  if(S->M==0)
			  return 1;
		  else
			  S->M--;
		  break;
	case 'N':
		  if(S->N==0)
			  return 1;
		  else
			  S->N--;
		  break;
	case 'O':
		  if(S->O==0)
			  return 1;
		  else
			  S->O--;
		  break;
	case 'P':
		  if(S->P==0)
			  return 1;
		  else
			  S->P--;
		  break;
	case 'Q':
		  if(S->Q==0)
			  return 1;
		  else
			  S->Q--;
		  break;
	case 'R':
		  if(S->R==0)
			  return 1;
		  else
			  S->R--;
		  break;
	case 'S':
		  if(S->S==0)
			  return 1;
		  else
			  S->S--;
	      break;
	case 'T':
		  if(S->T==0)
			  return 1;
		  else
			  S->T--;
	      break;
	case 'U':
		  if(S->U==0)
			  return 1;
		  else
			  S->U--;
	      break;
	case 'V':
		  if(S->V==0)
			  return 1;
		  else
			  S->V--;
	      break;
	case 'W':
		  if(S->W==0)
			  return 1;
		  else
			  S->W--;
	      break;
	case 'X':
		  if(S->X==0)
			  return 1;
		  else
			  S->X--;
	      break;
	case 'Y':
		  if(S->Y==0)
			  return 1;
		  else
			  S->Y--;
	      break;
	case 'Z':
		  if(S->Z==0)
			  return 1;
		  else
			  S->Z--;
	      break;
	}
	return 0;
}
int end_quantity(tile *S)//USING THIS FUNCTION IN printf_random FUNCTION
{
	if(S->A==0&&S->B==0&&S->C==0&&S->D==0&&S->E==0&&S->F==0&&S->G==0&&S->H==0&&S->I==0&&S->J==0
			&&S->K==0&&S->L==0&&S->M==0&&S->N==0&&S->O==0&&S->P==0&&S->Q==0&&S->R==0&&S->S==0
			&&S->T==0&&S->U==0&&S->V==0&&S->W==0&&S->X==0&&S->Y==0&&S->Z==0)
	{
		return 1;
	}
	return 0;
}
int is_exist(int size,char temp[],char str[7])
{
	int i=0,j=0,FLAG=0;
	for(i=0;i<size;i++)
	{
		FLAG=0;
	  for(j=0;j<8;j++)
	  {
		if(tolower(temp[i])==tolower(str[j]))
		{
			FLAG=1;
			break;
		}
	  }
	  if(FLAG==0)
		  return 1;
	}
	return 0;
}
int print_random(char str[6])
{
	srand(time(0));
	int i=0;
	char ch;
	while(i<7)
	{
		ch=(random()%(26))+'A';
		while(check_quantity(ch,&S)==1)
		{
			ch=(random()%(26))+'A';
			if(end_quantity(&S)==1)
				return 1;
		}
		str[i]=ch;
		printf("%c=%d ",str[i],check_ch(str[i],V));
		i++;
	}
	return 0;
}
int check_pos(char ch,char temp[MAX_SIZE],int row,int column)
{
	int j=0,i,size;
	char *a,*t;
	size=strlen(temp);
	a=(char *)malloc(1*sizeof(char));
	t=(char *)malloc(1*sizeof(char));
    if(ch=='h' || ch=='H')
    {
    	for(i=column;i<size;i++,j++)
    		if(isalpha(array[row][i]))
    		{
    			*a=tolower(array[row][i]);
    			*t=tolower(temp[j]);
    			if(strncmp(a,t,1)!=0)
    				return 1;
    		}
    }
    else if(ch=='v' || ch=='V')
    {
    	for(i=row;i<size;i++,j++)
    		if(isalpha(array[i][column]))
    		{
    			*a=tolower(array[i][column]);
    			*t=tolower(temp[j]);
    			if(strncmp(a,t,1)!=0)
    				return 1;
    		}
    }
	return 0;
}
int check_room(char ch,int row,int column,int size)
{
	if(tolower(ch)=='h' && size>MAX_SIZE-column)
		return 1;
	if(tolower(ch)=='v' && size>MAX_SIZE-row)
		return 1;
	return 0;
}
int is_end(char temp[MAX_SIZE])
{
	if(strcmp("QUIT",temp)==0)
		return 1;
	return 0;
}
int check_connection(char ch,int size,int row,int column)
{
	int i;
	if(tolower(ch)=='h')
		for(i=column-1;i<size+1;i++)
			if(isalpha(array[row][i]))
					return 0;
	if(tolower(ch)=='v')
		for(i=row-1;i<size+1;i++)
			if(isalpha(array[i][column]))
					return 0;
	if(FLAG3==0)
	{
		FLAG3=1;
		return 0;
	}
	return 1;

}
void get_info()
{
	static int FLAG=1;    //
	if(FLAG==1)           //
	{                     //
	  FILL_QUANTITY(&S);  //
	  FILL_VALUE(&V);     //   FILL THE STRUCT ONE TIME.
	  FLAG=0;             //
	}                     //
	static char temp[MAX_SIZE]={0};
	char str[6],ch,c;
    int check=0,i=0,Ccount=0,sum=0,row,column,end;
	printf("Please Enter a Word and where to start with :\n");
	printf("You have this characters in your hand to use:\n");
	printf("-----------------------------\n");
	end=print_random(str);puts("");//Random Print. Design
	printf("-----------------------------\n");
	if(end==1)
	{
		printf("\nEnd of characters! You did Great :)\n");
		exit(1);
	}
	puts("");//DESIGN
	static int FLAG2=0;   //
	if(FLAG2==1)          //
	{                     //
		getchar();        //  DONT ENTER FIRST TIME!
		FLAG2--;          //  (FOR THE \n AT THE OF EACH SENTESE)
	}                     //
	FLAG2++;              //
    printf("INPUT: ");
	c=getchar();
    while(c!=' ')
	  {
		 sum+=check_ch(toupper(c),V);//SUM FOR THE POINTS
		 temp[Ccount]=c; Ccount++;
	     c=getchar();
	  }
    scanf("%d",&row);
    scanf("%d",&column);
    getchar();             // THIS FOR THE SPACE BETWEN THE COLUMN AND THE CH
    ch=getchar();          // V/H
    if(is_end(temp)==1)                //
    {                                  //
    	puts("Hope you enjoyed :)!");  //  IF HE ENTERED QUIT WORD
    	exit(1);                       //
    }                                  //
    if(is_exist(strlen(temp),temp,str)==1)//IF CHOOSE CHARACTER THAT ISNT IN THE RANDOM.
    {
    	printf("\nThis word is illegal try to choose from your options(in Capital)\n");
        get_info();
    }
      if(check_connection(ch,strlen(temp),row,column)==1)//IF ENTERED A WORD THAT ITS NOT CONNECTED
        {
          printf("\nYou have to connect your words\n");
    	  get_info();
        }
    if(check_pos(ch,temp,row,column)==1)//IF HE CONNECT THE WORD IN THE WRONG PLACE
    {
    	printf("\nWrong place..Try again!\n");
    	get_info();
    }
    if(check_room(ch,row,column,strlen(temp))==1)//CHECK IF THERE IS A SPACE
    {
    	printf("\nThere is no place for your word\n");
    	get_info();
    }
    while(i<Ccount)
    {
    	if(tolower(ch)=='h')
    	    array[row][column+i]=temp[i];
    	if(tolower(ch)=='v')
    		array[row+i][column]=temp[i];
    	i++;
    }
    print_board((ch),row,column,sum,Ccount);
}
void print_board(char ch,int row,int column,int sum,int Ccount)
{
	static sum2;//FINAL POINTS
	int w=0,k=3;
	int i=0,j=0,t=0,b=0,x=0;
	sum2+=sum;
	printf("\n  ");
	for(i=0;i<MAX_SIZE;i++)      //
	{                            //
		if(i<9)                  //
		 printf("   %d",i+1);    //  DESING
		if(i>=9)                 //  NUMBER OF COLUMNS..
			printf("  %d",i+1);  //
	}                            //
	i=0;
	for(i=0;i<MAX_SIZE;i++)
	{
		printf("\n   +");
		for(j=0;j<MAX_SIZE;j++)
			printf("---+");
		printf("\n   |");
		  for(t=0;t<MAX_SIZE;t++)
		   {
			    if(array[i+1][t+1])
			      printf("%3c|",array[i+1][t+1]);
			    else
			      printf("   |");
		   }
		  printf(" %d",i+1);     // NUMBER OF ROWS..
	}
	i=0;
	printf("\n   +");
	for(i=0;i<MAX_SIZE;i++)
	 printf("---+");
	printf("\n");
	printf("Great! %d points for this word!\n",sum);
	printf("You got %d points until now!\n",sum2);
	get_info();// KEEP PLAYING UNTIL HE ENTER "QUIT" OR END OF CHARACTERS
}
