#ifndef DO9_H
#define DO9_H
void localinit();
void do_op(int opcode, int class);
void do_gen(int op, int mode);
void do_indexed(int op);
void abd_index(int pbyte);
int rtype(int r);
int set_mode();
int regnum();
#endif
