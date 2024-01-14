well, i haven't done that it in a while but lets go.

this machine has two paths to get the flags, i want to discover boths but if i can't it's ok too.

first i'll start with exporting the ip to my terminal and i'm gonna do a nmap scan too

```bash 
$ export ip=10.10.58.108
$ sudo nmap -sS -p- $ip -vv -Pn
```

i've tried to scan it without the -Pn(no ping) flag but it didn't work, because this machine doesn't respond ICMP requests. And in agreement with the docs of nmap:

	This option skips the Nmap discovery stage altogether. Normally, Nmap uses this stage to determine active machines for heavier scanning. By default, Nmap only performs heavy probing such as port scans, version detection, or OS detection against hosts that are found to be up.


![[Pasted image 20231119093306.png]]

as you can see there, while the scan doesn't finish i'm gonna take a look if this port eighty is a web server  :)

![[Pasted image 20231119093523.png]]

omg this shit again,so we have it and a rdp running in this machine.

nmap got a few informations about netbios so i'm gonna use the enum4linux to see if i get new things :0



locate enum4linux
$ python3 /home/akame/tools/enum4linux-ng/enum4linux-ng.py $ip -vv

python3 /home/akame/tools/enum4linux-ng/enum4linux-ng.py 10.10.71.216 -A -v -R 2000
