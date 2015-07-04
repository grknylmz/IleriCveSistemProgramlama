#include <stdio.h>
#include <Windows.h>

int main(void){
	char cwd[1024];

	GetCurrentDirectory(1024, cwd);
	printf("%s\n" , cwd);

	return 0;
}
