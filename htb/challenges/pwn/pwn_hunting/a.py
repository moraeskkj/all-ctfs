from pwn import *

p = remote('206.189.28.151', 31533)

p.interactive()