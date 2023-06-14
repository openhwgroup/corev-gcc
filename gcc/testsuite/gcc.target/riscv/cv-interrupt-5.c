/* Verify proper errors are generated for invalid code.  */
int __attribute__ ((interrupt ("corev-fast")))
sub0 (void)
{ /* { dg-error "function cannot return a value" } */
  return 10;
}

void __attribute__ ((interrupt ("corev-fast")))
sub1 (int i)
{ /* { dg-error "function cannot have arguments" } */
}

void __attribute__ ((interrupt ("corev-fast"), naked))
sub2 (void)
{ /* { dg-error "are mutually exclusive" } */
}

void __attribute__ ((interrupt ("corev-fast", "hypervisor")))
sub3 (void)
{ /* { dg-warning "argument 2 is not" } */
}

void __attribute__ ((interrupt ("machine", "corev-fast")))
sub4 (void)
{ /* { dg-warning "unexpected argument to" } */
}

void __attribute__ ((interrupt ("supervisor", "corev-fast")))
sub5 (void)
{ /* { dg-warning "unexpected argument to" } */
}

void __attribute__ ((interrupt ("user", "corev-fast")))
sub6 (void)
{ /* { dg-warning "unexpected argument to" } */
}

void __attribute__ ((interrupt ("", "corev-fast")))
sub7 (void)
{ /* { dg-warning "argument 1 is not" } */
}

void __attribute__ ((interrupt ("corev-fast", "")))
sub8 (void)
{ /* { dg-warning "argument 2 is not" } */
}

void __attribute__ ((interrupt (7)))
sub9 (void)
{ /* { dg-warning "argument 1 is not" } */
}

void __attribute__ ((interrupt ("corev-fast", 8)))
sub10 (void)
{ /* { dg-warning "argument 2 is not" } */
}

void __attribute__ ((interrupt ("corev-fast", "machine", "user")))
sub11 (void)
{ /* { dg-error "wrong number of arguments" } */
}

void __attribute__ ((interrupt ("machine", "user")))
sub12 (void)
{ /* { dg-warning "unexpected argument to" } */
}

void __attribute__ ((interrupt ("machine", "supervisor", "user")))
sub13 (void)
{ /* { dg-error "wrong number of arguments" } */
}
