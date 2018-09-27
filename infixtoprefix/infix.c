#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>

#define size 50
typedef struct 
{
	int top;
	char ele[size];
}stack;

void push(stack *,char);
char pop(stack *);

int prece (char);
bool validity(char *);

int main()
{
		int i,k=0,j=0,p=0;
	char ch,prefix[100],infix[100],str[100],str2[100];
	stack s;
	s.top=-1;
	push(&s,'#');
	printf("\nENTER THE INFIX EXPRESSION\n");
	scanf("%s",infix);
		if(!validity(infix))
	{
		printf("Invalid expression\n");
		return 0;
	}
	printf("\nvalid expression\n");
	for( i=strlen(infix)-1;i>=0;i--)
		str[j++]=infix[i];
	str[j]='\0';
	for( i=0;str[i]!='\0';i++)
	{
		ch=str[i];
		if(ch==')')
		push(&s,ch);
		else if(isdigit(ch))
		prefix[k++]=ch;
		else if(ch=='(')
		{
			while(s.ele[s.top]!=')')
				prefix[k++]=pop(&s);
			pop(&s);
		}
		else
		{
			while(prece(s.ele[s.top])>=prece(ch))
				prefix[k++]=pop(&s);
			push(&s,ch);
		}
	}
	while(s.ele[s.top]!='#')
		prefix[k++]=pop(&s);
	for(i=strlen(prefix)-1;i>=0;i--)
		str2[p++]=prefix[i];
		
	str2[p]='\0';
	printf("THE PREFIX EXPRESSION:%s\n",str2);

	
	/*printf("Enter your choice :\n1: convert into prefix\n2:convert into postfix\n3: convert into prefix and validate\n4: convert into postfix and validate\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: 
	}*/
	
	return 0;
}

bool validity(char s[])
{
	int i,count=0;
	char ch,prev;
	
	if(!(isalnum(s[0])||s[0]=='('))
		return false;
		
	if(s[0]=='(')
		count++;
	
	for(i=1;s[i]!='\0';i++)
	{
		ch=s[i];
		prev=s[i-1];
		switch(ch)
		{
			case '(':	count++;
					//	if(!(prev=='('||prev=='+'||prev=='-'||prev=='*'||prev=='/'))
												if(!(prev=='('||'-'||'*'||'/'||'+'))	return false;
						break;
			
			case ')':   count--;
						if(count<0) return false;
						if(!(prev==')'||isalnum(prev)))
							return false;
						break;
			case '+':
			case '-':
			case '*':
			case '/': if(!(prev==')'||isalnum(prev)))
							return false;
						break;
							
			default :if(isalnum(ch))
					{
						if(!(prev=='('||prev=='+'||prev=='-'||prev=='*'||prev=='/'))
							return false;
					}
					else
					{
						printf("unidentified characters are entered\n");
						return false;
					}
					break;
		}	
	}
	if(count!=0)
		return false;
	return true;
}

void push(stack *s, char x)
{
	s->top++;
	s->ele[s->top]=x;
}

char pop(stack *s)
{	char x;
	x=s->ele[s->top];
	s->top--;
	return x;
}
int prece(char x)
{
	switch(x)
	{
		case '#':return 0;
		case ')':return 1;
		case '+':return 2;
		case '-':return 2;
		case '*':return 3;
		case '/':return 3;		
	}
}
