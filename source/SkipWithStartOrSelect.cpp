#include "SM64DS_PI.h"

uint8_t oldHWButtons = 0xff;

asm(R"(
nsub_0202bbd0:
	str     r2, [r1]
	ldr     r1, =oldHWButtons
	ldrb    r0, [r1]
	mvn     r0, r0
	and     r0, r0, #12 @ change 12 to 8 to skip with only start
	cmp     r0, #0
	blne    EndKuppaScript
	ldr     r0, =0x04000130 @ hardware buttons
	ldrb    r0, [r0]
	strb    r0, [r1]
	b       0x0202bbd4
)");
