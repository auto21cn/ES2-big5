/*  blade.c

    Copyright (C) 1994-2000 Annihilator <annihilator@muds.net>

    This program is a part of ES2 mudlib. Permission is granted to use,
    modify, copy or distribute this program provided this copyright notice
    remains intact and subject to the restriction that this program MAY
    NOT be used in any way for monetary gain.

    Details of terms and conditions is available in the Copyright.ES2 file.
    If you don't receive this file along with this program, write to the
    primary author of ES2 mudlib: Annihilator <annihilator@muds.net>
*/

varargs void init_damage(int, int, int, int, mixed...);

void
setup_blade(int x, int y, int z, int r)
{
	if( x < 1 || x > 4 )
		error("damage multiplier out of range.\n");
	if( y < 1 || y > 25 )
		error("damage range out of range.\n");
	if( z < 1 || z > 200 )
		error("damage strength bonus out of range.\n");
	if( r < -x || r > 10 )
		error("damage roll out of range.\n");

	init_damage(x, y, z, r, "blade");
	init_damage(x, y/2, z, r, "secondhand blade");
	init_damage(x, y*4/3, z*3/2, r, "twohanded blade");
}
