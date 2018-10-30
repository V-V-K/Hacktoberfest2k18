#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
 {
	char c;
	 int score=0,i;
	   printf("\n\n*****************************GOOD MORNING FRIENDSSS****************\n\n\n");
	   printf("****************WELCOME YOU ALL IN MY QUIZ****************\n\n");
	   gotoxy(5,5);
	   printf("WANT TO PLAY??????????\n\n\n ");
	   printf("Press yes or no");
	   scanf("%c",&c);
	   if(strcmp(c,yes)==0)
	   	goto start;
	   	else
	   	exit(1);
	   	printf("\n\n\n****************************RULES**************************\n\n");
	   	printf("1.THERE ARE 15 QUESTIONS ON C PROGRAMMING LANGUAGES.\n");
	   	printf("2.AFTER GETTING EACH CORRECT ANSWER FROM QUESTION 1-5 YOU WILL GET 3 POINTS\n");
	   	printf("3.EACH CORRECT ANSWER FROM 6-10 YOU WILL AWARDED 5 POINTS\n");
	   	printf("4.EACH CORRECT ANSWER FROM 11-15 YOU WILL AWARDED 7 POINTS\n");
	   	printf("5.NO NEGATIVE MARKING\n\n\n");
	   	printf("ALL THE BEST!!!!!!!!!!!!!!!!");
	   	
	   start:      
		    printf("\n\n\n\n");
		    printf("Q1.  Who developed C language\n");
		     printf("Option are:\n\n");
		     printf("1.Bjarne Stroustrup              2.Dennis Ritchie      3.Larry Page       4.James Josling\n\n");
		     scanf("%d, &i");
		     if(i==2)
		     {
			 printf("Congratulations correct answer\n\n");
			 score=score+3;
		     }
		     else
		     printf("Oops Wrong Answer\n\n");
		     
		  printf("Q2. Which of the following special symbol allowed in a variable name? \n" );
		  printf("Options are:\n");
		  printf(" 1.* (asterisk)             2.| (pipeline)           3.- (hyphen)    4._ (underscore)\n");
		  scanf("%d", &i);
		  if(i==4)
		  {
		  	printf("Congratulations correct answer\n\n");
		  	score=score+3;
		  }
		  else
		  printf("Oops Wrong Answer\n\n");
		  
		  printf("Q4. How would you round off a value from 1.66 to 2.0?\n");
		  printf("Options are:\n");
		  printf("1. ceil(1.66)       2.	floor(1.66)      3.	roundup(1.66)       4.	roundto(1.66)\n");
		  scanf("%d", &i);
		  if(i==1)
		  {
		  	printf("Congratulations correct answer\n\n");
		  	score=score+3;
		  }
		  else
		  printf("Oops Wrong Answer\n\n");
		  printf("Q5.	When we mention the prototype of a function?\n");
		  printf("Options are:");
		  printf("1.  Defining         2.	Declaring        3.	Prototyping          4.	Calling\n");
		  scanf("%d", &i);
		  if(i==2)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+3;
		  }
		  else
		  printf("Oops Wrong Answer\n\n");
		  printf("Q6.  In C, if you pass an array as an argument to a function, what actually gets passed?");
		  printf("Options are:\n");
		  printf("1.  Value of elements in array    2.First element of the array   3. Base address of the array    4. Address of the last element of array\n");
		   scanf("%d", &i);
		  if(i==3)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+5;
		  }
		  else
		  printf("Oops Wrong Answer\n\n");
		  printf("Q7. What is the index number of the array if it contains 6 elements ? \n");
		  printf("Options are:\n")
		  printf("1.  6         2.	7       3.	5          4. None of these\n");
		  scanf("%d", &i);
		  if(i==3)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+5;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");
		  
		  printf("Q8.  Standard ANSI C recognizes how many number of keywords?.");
		  printf("Options are:");
		  printf("1.  30   2.   32    3.24    4.36\n");
		  scanf("%d", &i);
		  if(i==2)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+5;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");

		  printf("Q9.What is the correct value to return to the operating system upon the successful completion of a program ?\n");
		  printf("Options are:\n");
		  printf("1.  1      2.  -1     3. 0      4.  Program doesnot return any value\n");
		  scanf("%d", &i);
		  if(i==4)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+5;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");
		  printf("Q10.Array with last element 'n' will always have array size equal to ? \n");
		  printf("Option are:\n");
		  printf("1. n       2.  n+n     3. n-1     4.  n+1");
		  scanf("%d", &i);
		  if(i==4)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+5;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");
		  
	     printf("Q11.Why to use fflush() library function?"\n);
		 printf("Options are:\n");
		 printf("1.To flush all streams and specified streams   2.To flush only specified stream  \n   3.To flush input/output buffer   4.Invalid library function");
		 scanf("%d", &i);
		  if(i==1)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+7;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");
		  
		  printf("Q12. In C Programming language array is which kind of datatype ?");
		  printf("Options are:");
		  printf("1.  Custom Datatype    2.  Derived Datatype   3. Primitive Datatype   4. None of these\n ");
		  	 scanf("%d", &i);
		  if(i==2)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+7;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");
		  
		  printf("Q13.  Consider 64 bit compiler , how many bytes int datatype should take?\n");
		  printf("Options are:\n");
		  printf("1.  6 bytes    2.  2 bytes    3. 4 bytes    4. 10 bytes\n  ");
		   scanf("%d", &i);
		  if(i==3)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+7;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");
		  
		  printf("Q14.Which of the following is true about return type of function in C? \n");
		  printf("Options are :\n");
		  printf("1.Functions can return any type   2.Functions can return any type except array and functions \n3.Functions can return any type except array, functions and union    4.  Functions can return any type except array, functions, function pointer and union\n");
		   scanf("%d", &i);
		  if(i==2)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+7;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");
		  printf("	Q15. What is right way to Initialize array?\n");
		  	printf("Options are:\n");
			  printf("1. int num[6] = { 2, 4, 12, 5, 45, 5 }    2.  int n{} = { 2, 4, 12, 5, 45, 5  \n3.  int n{6} = { 2, 4, 12 }   4. int n(6) = { 2, 4, 12, 5, 45, 5 }\n");
			  	scanf("%d", &i);
		  if(i==1)
		  {
		  	printf("\n\nCongratulations correct answer\n\n");
		  	score=score+7;
		  }
		   else
		  printf("Oops Wrong Answer\n\n");
		  printf("Finally You have answered all the questions \n");
		  printf("Your score is=%d", score);
		  printf("\n\n");
		  printf("Want to play again press 1 if not then press 0");
		  scanf("%d", &ans);
		  if(ans==1)
		  goto start;
		  else
		  exit(1);
	return 0;
	getch();
}
