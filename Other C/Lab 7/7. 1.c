#include<stdio.h>
int main()
{
	struct students
	{
		char name[20];
		int roll_no;
		float marks;
		char gender;
		long int phone_no;
	};
	struct students s={"Anish Gautam",8,3.36,'M',987654321};
	printf("Name = %s\nRoll No. = %d\nMarks = %.2f\nGender = %c\nPhone No. = %ld",s.name,s.roll_no,s.marks,s.gender,s.phone_no);
}
