#include "SM64DS_2\SM64DS_2.h"

uint8_t oldHWButtons = 0xff;

void hook_0202bbcc()
{
	asm
	(
		"ldr 	r4, =oldHWButtons	\n\t"
		"ldrb	r0, [r4]			\n\t"
		"mvn	r0, r0				\n\t"
		"and	r0, r0, #12			\n\t" // change 12 to 8 to skip with only start
		"cmp	r0, #0				\n\t"
		"mov	r5, r14				\n\t"
		"blne	EndKuppaScript		\n\t"
		"ldr	r0, =0x04000130 	\n\t" // hardware buttons
		"ldrb	r0, [r0]		 	\n\t"
		"strb 	r0, [r4]		 	\n\t"
		"bx		r5					\n\t"
	);
}
