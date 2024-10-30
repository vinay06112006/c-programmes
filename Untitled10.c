#include <stdio.h>
#include <stdlib.h>
int main()
{ int a,b,c,n;
a = (rand()%9)+1;
b = (rand()%9)+1;
while(1)
{
switch(rand()%4)
	{
	case 0:
		{
			c=a+b;
			printf("%d + %d =",a,b);
			scanf("%d",&n);
			if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good \n");
						break;
				case 1 :printf("excellent \n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
				}
				
			}
			else
			{switch(rand()%4)
				{
				case 0 :{printf("try again");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good \n");
						break;
				case 1 :printf("excellent \n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
				}
				
			}
						break;}
				case 1 :{printf("wrong");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good \n");
						break;
				case 1 :printf("excellent \n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
				}
				
			}
						break;}
				case 2 :{printf("better luck next time");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good \n");
						break;
				case 1 :printf("excellent \n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
				}
				
			}
						break;}
				case 3 :{printf("its wrong");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good \n");
						break;
				case 1 :printf("excellent \n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
				}
				
			}
						break;}
				}
			}
	 	}
	case 1:
		{c=a-b;
			printf("%d - %d =",a,b);
			scanf("%d",&n);
			if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
			else
			{switch(rand()%4)
				{
				case 0 :{printf("try again");
						scanf("%d",&n);
						if(n == c)
						{switch(rand()%4)
							{
							case 0 :printf("good\n");
						break;
						case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 1 :{printf("wrong");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 2 :{printf("better luck next time");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 3 :{printf("its wrong");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				}
			}
		}
	case 2:
		{c=a*b;
			printf("%d * %d =",a,b);
			scanf("%d",&n);
			if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
			else
			{switch(rand()%4)
				{
				case 0 :{printf("try again");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 1 :{printf("wrong");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 2 :{printf("better luck next time");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 3 :{printf("its wrong");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
					}
			}
		}
	case 3:
		{c=a/b;
			printf("%d / %d =",a,b);
			scanf("%d",&n);
			if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
				}
			}
			else
			{switch(rand()%4)
				{
				case 0 :{printf("try again");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 1 :{printf("wrong");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 2 :{printf("better luck next time");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				case 3 :{printf("its wrong");
						scanf("%d",&n);
						if(n == c)
			{switch(rand()%4)
				{
				case 0 :printf("good\n");
						break;
				case 1 :printf("excellent\n");
						break;
				case 2 :printf("very good\n");
						break;
				case 3 :printf("correct\n");
						break;
			    }
			}
						break;}
				}
			}
		} 

	}
}
}
