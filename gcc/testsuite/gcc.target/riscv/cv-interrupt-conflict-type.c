/* Verify proper errors are generated for conflicting interrupt type.  */
/* { dg-do compile } */
/* { dg-options "" } */
void __attribute__ ((interrupt ("corev-fast", "user")))
foo(void);

void __attribute__ ((interrupt ("corev-fast", "machine")))
foo (void)
{ /* { dg-error "function cannot have different interrupt type" } */
}

void __attribute__ ((interrupt))
bar(void);

void __attribute__ ((interrupt ("corev-fast")))
bar (void)
{ /* { dg-error "function cannot have different interrupt type" } */
}
