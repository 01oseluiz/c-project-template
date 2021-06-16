#include <stdlib.h>
#include <stdio.h>

#include <module.h>
#include <console.h>

int main(void) {
	success("main", "A = %d", 10);
	Module_print();
	return 0;
}
