#ifndef UTIL_H
#define UTIL_H
void fatal(char *);
void error(char *);
void errors(char *, char *);
void warn(char *);
int delim(char);
char *skip_white(char *);
void eword(int);
int emit(int);
void f_record();
char *hexstr;
void hexout(int);
void binout(int);
void print_line();
int any(char, char *);
char mapdn(char);
int lobyte(int);
int hibyte(int);
int head(char *, char *);
int alpha(char);
int alphan(char);
int white(char);
char *alloc(int);
#endif
