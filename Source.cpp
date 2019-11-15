#include<stdio.h>
using namespace std;
int main(){
	int Amazing = 0;
	char input;
	//question 1:
	printf("What school do all police detectives attend at the beginning of their career?");
	printf( "A: Ivy league schools" );
	printf( "B: 4 year college" );
	printf( "C: Police Academy" );
	printf( "D: 2 year college" );
	scanf_s("d", & input);//allows for user input
	if (input == 'A')//checks input and runs a section of cade based on answer
	{
		Amazing-0;
	}
	else if (input == 'B')
	{
		Amazing-0;
	}
	else if (input == 'C')
	{
		Amazing++;
	}
	else {
		Amazing-0;
	}
	//question 2:
	printf("Detectives who specialize in white-collar crime usually investigate cases of:");
	printf( "A: Sexual Assualt" );
	printf( "B: Embezzlement" );
	printf( "C: Murder" );
	printf( "D: Drugs" );
	scanf_s("d", & input);
	if (input == 'A')
	{
		Amazing-0;
	}
	else if (input == 'B')
	{
		Amazing++;
	}
	else if (input == 'C')
	{
		Amazing-0;
	}
	else {
		Amazing-0;
	}
	//question 3:
	printf( "Which of these has to do with criminalistics?" );
	printf( "A: Forensics" );
	printf( "B: Archaeology" );
	printf( "C: Psychology" );
	printf( "D: Calumny" );
	scanf_s("d", & input);
	if (input == 'A')
	{
		Amazing++;
	}
	else if (input == 'B')
	{
		Amazing-0;
	}
	else if (input == 'C')
	{
		Amazing-0;
	}

	else {
		Amazing-0;
	}
	//question 4:
	printf("Which direction to right-handed people generally look in when lying?");
	printf( "A: Down" );
	printf( "B: Up" );
	printf( "C: Left" );
	printf( "D: Right" );
	scanf_s("d", & input);
	if (input == 'A')
	{
		Amazing-0;
	}
	else if (input == 'B')
	{
		Amazing-0;
	}
	else if (input == 'C')
	{
		Amazing-0;
	}
	else
	{
		Amazing++;
	}
	//question 5:
	printf( "Why is it important to examine victims of physical trauma two days later?" );
	printf( "A: Check their story" );
	printf( "B: Deep Bruises take time to appear" );
	printf( "C: Give them Time to process" );
	printf( "D: It's not" );
	scanf_s("d", & input);
	if (input == 'A')
	{
		Amazing-0;
	}
	else if (input == 'B')
	{
		Amazing++;
	}
	else if (input == 'C')
	{
		Amazing-0;
	}
	else
	{
		Amazing-0;
	}
	if (Amazing == 5) {//checks if score is equal to a select number and will run a section depending on score
		printf( "Wow you got 5/5! You would be a great detective." );
	}
	else if (Amazing == 4) {
		printf( "You got 4/5! You know quite a bit." );
	}
	else if (Amazing == 3) {
		printf( "You got 3/5! You have a basic understanding." );
	}
	else if (Amazing == 2) {
		printf( "You got 3/5! Might want to work a bit harder." );
	}
	else {
		printf( "Umm I think you should have your eyes set on something else..." );
	}
}