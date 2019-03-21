// Kernel implementation
/*
* sys_foo – everyone’s favorite system call.
*
* Returns the size of the per-process kernel stack.
*/
asmlinkage long sys_foo(void)
{
return THREAD_SIZE;
}

// C wrapper
#define __NR_foo 283
__syscall0(long, foo)
int main ()
{
  long stack_size;
  stack_size = foo ();
  printf (“The kernel stack size is %ld\n”, stack_size);
  return 0;
}
