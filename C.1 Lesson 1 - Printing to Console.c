#include<stdio.h>
#include<stdint.h>

void print_u32i_as_bin(uint32_t i)
{	char ans[2+32+8+1]; 
	ans[0] = '0';	
	ans[1] = 'B'; 
	int i_ans = 2;
	uint32_t mask = 1U << 31;
	for(int i_nibble=7; -1<i_nibble; i_nibble--)
	{	ans[i_ans++] = '_';
		for(int i_bit=3; -1<i_bit; i_bit--)
		{	ans[i_ans++] = 0 < (i & mask) ? '1' : '0';
			mask = mask >> 1;			
		}
	}
	ans[sizeof(ans)-1] = '\0';
	puts(ans);
}


int main()
{	
	printf("---Integers---\n");
	printf("Unsigned Integer: %u\n", 10U);
	printf("Number of People: %d.\n", -10);
	printf("Rows: %d, Columns: %d.\n", 8, 16);
	printf("Hexideciaml Number: %X.\n", 1);
	printf("Decimal Number: %d\n", 0XFF);
	printf("Octal Numbers: %o\n", 10);
	printf("Binary integer: 9 ->");		print_u32i_as_bin(9);  printf("\n");

	printf("\n---Floating Point Number---\n");
	printf("Weight of Tom: %20.4f.\n", 30.12345f);
	printf("Weight of Tom: %.3e.\n", 3000000000000000000.12345f);

	printf("\n---Character---\n");
	printf("Character decimal value of A: %d\n", 'A');
	printf("Charcter: %c\n", 'B');
	printf("Charcter: %c\n", 67);

	printf("\n---Breakout Sequence---\n");
	printf("Double Quotes: \"\n");
	printf("Quote: ' \' \n");
	printf("Question Mark: ? \? \n");
	printf("Percentage %% \n");
	printf("tab: \t\t\tText after tab.\n");
	printf("alert/Bell \a .\n");
	printf("backspace \b\b\b\b\b\b \n.");

	printf("---Tabs---\n");
	printf("tabs: 0\tMore Text\n");
	printf("tabs: 01\tMore Text\n");
	printf("tabs: 012\tMore Text\n");
	printf("tabs: 0123\tMore Text\n");
	printf("tabs: 01234\tMore Text\n");
	printf("tabs: 012345\tMore Text\n");
	printf("tabs: 0123456\tMore Text\n");

	printf("\n---------Table Example----------\n");

	printf("------------------Table------------------\n");
    printf("0         1         2         3         4\n");
    printf("01234567890123456789012345678901234567890\n"); // Character positions.
    printf( "|%-10s|%6s|\n", "Player", "Score" ); // Table headers.
    printf( "-----------------------------------------\n" );
    printf( "|%-10s|%6d|\n", "John", 120 ); // Field widths: 10; 4.
    printf( "|%-10s|%6d|\n", "Mary", 77 );
    printf( "\n" );

    printf("--Pointers--\n");
    int abc = 10;
    printf("Vale of a: %d\n" , abc);
    printf("Vale of a: %p\n" , &abc);

	return 0;
}