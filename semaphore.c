struct semaphore mr_sem;
sema_init(&mr_sem, 1);      /* usage count is 1 */
if (down_interruptible(&mr_sem))
  /* semaphore not acquired; received a signal ... */
/* critical region (semaphore acquired) ... */
up(&mr_sem);
