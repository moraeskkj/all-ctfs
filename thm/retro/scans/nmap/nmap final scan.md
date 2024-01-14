```bash
$ sudo nmap -p80,3389 -A -Pn -vv 10.10.58.108
Starting Nmap 7.80 ( https://nmap.org ) at 2023-11-19 09:39 PST
NSE: Loaded 151 scripts for scanning.
NSE: Script Pre-scanning.
NSE: Starting runlevel 1 (of 3) scan.
Initiating NSE at 09:39
Completed NSE at 09:39, 0.00s elapsed
NSE: Starting runlevel 2 (of 3) scan.
Initiating NSE at 09:39
Completed NSE at 09:39, 0.00s elapsed
NSE: Starting runlevel 3 (of 3) scan.
Initiating NSE at 09:39
Completed NSE at 09:39, 0.00s elapsed
Initiating Parallel DNS resolution of 1 host. at 09:39
Completed Parallel DNS resolution of 1 host. at 09:39, 0.01s elapsed
Initiating SYN Stealth Scan at 09:39
Scanning 10.10.58.108 [2 ports]
Discovered open port 80/tcp on 10.10.58.108
Discovered open port 3389/tcp on 10.10.58.108
Completed SYN Stealth Scan at 09:39, 0.23s elapsed (2 total ports)
Initiating Service scan at 09:39
Scanning 2 services on 10.10.58.108
Completed Service scan at 09:39, 6.53s elapsed (2 services on 1 host)
Initiating OS detection (try #1) against 10.10.58.108
Retrying OS detection (try #2) against 10.10.58.108
Initiating Traceroute at 09:39
Completed Traceroute at 09:39, 0.22s elapsed
Initiating Parallel DNS resolution of 2 hosts. at 09:39
Completed Parallel DNS resolution of 2 hosts. at 09:39, 0.01s elapsed
NSE: Script scanning 10.10.58.108.
NSE: Starting runlevel 1 (of 3) scan.
Initiating NSE at 09:39
Stats: 0:00:16 elapsed; 0 hosts completed (1 up), 1 undergoing Script Scan
NSE: Active NSE Script Threads: 1 (1 waiting)
NSE Timing: About 99.63% done; ETC: 09:39 (0:00:00 remaining)
Completed NSE at 09:39, 3.87s elapsed
NSE: Starting runlevel 2 (of 3) scan.
Initiating NSE at 09:39
Completed NSE at 09:39, 0.95s elapsed
NSE: Starting runlevel 3 (of 3) scan.
Initiating NSE at 09:39
Completed NSE at 09:39, 0.00s elapsed
Nmap scan report for 10.10.58.108
Host is up, received user-set (0.20s latency).
Scanned at 2023-11-19 09:39:41 PST for 17s

PORT     STATE SERVICE       REASON          VERSION
80/tcp   open  http          syn-ack ttl 127 Microsoft IIS httpd 10.0
| http-methods: 
|   Supported Methods: OPTIONS TRACE GET HEAD POST
|_  Potentially risky methods: TRACE
|_http-server-header: Microsoft-IIS/10.0
|_http-title: IIS Windows Server
3389/tcp open  ms-wbt-server syn-ack ttl 127 Microsoft Terminal Services
| rdp-ntlm-info: 
|   Target_Name: RETROWEB
|   NetBIOS_Domain_Name: RETROWEB
|   NetBIOS_Computer_Name: RETROWEB
|   DNS_Domain_Name: RetroWeb
|   DNS_Computer_Name: RetroWeb
|   Product_Version: 10.0.14393
|_  System_Time: 2023-11-19T17:39:54+00:00
| ssl-cert: Subject: commonName=RetroWeb
| Issuer: commonName=RetroWeb
| Public Key type: rsa
| Public Key bits: 2048
| Signature Algorithm: sha256WithRSAEncryption
| Not valid before: 2023-11-18T17:11:02
| Not valid after:  2024-05-19T17:11:02
| MD5:   598d 8353 6866 4a7e 29c0 19cf dc11 9cef
| SHA-1: 7feb a1b2 95e9 5a9c c5ab 36ae 664d 1c88 8562 a531
| -----BEGIN CERTIFICATE-----
| MIIC1DCCAbygAwIBAgIQahxen6HBkr1LCg/1zyqCsjANBgkqhkiG9w0BAQsFADAT
| MREwDwYDVQQDEwhSZXRyb1dlYjAeFw0yMzExMTgxNzExMDJaFw0yNDA1MTkxNzEx
| MDJaMBMxETAPBgNVBAMTCFJldHJvV2ViMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8A
| MIIBCgKCAQEAtXHT4tdXZFKbYrn5KM63GhpVBrvxYbTgIC8iHMu6TwjK8i/+sW57
| ayKPMWnEBunur4pvTdFRCAHGBXgFthjzy7SQ8jGeQKDAKq991KELX9q9WVUrTdD3
| EwzwSmfM2iS6BJmAxMPjF/gq3Q8g5tZpG7ZoaRtuXmsbqNvUcKchTg0Ks5lKjSHx
| S5c4htFdeUlGF6/nKfbgJ0TpHD9cIQjKPt4OshBvHu51Enw7vZqyId4iwSOqTW+y
| gLjSpsMdjnDZ3eQ9NPRxkXtNP/VxHlxFdEcrUjiwZitHsjyUu+G+bRi/JGrPPp9G
| 1iWHL8E9pyW7jkAIY/Z/HbpUGIBJWAJHhQIDAQABoyQwIjATBgNVHSUEDDAKBggr
| BgEFBQcDATALBgNVHQ8EBAMCBDAwDQYJKoZIhvcNAQELBQADggEBAH2Gmu2QC1LP
| IPC5WBPE422bFz7YsoWsNAJmXPhkGqr3aO8S7UnuJdGaNXbT9v+OZki5ASno8iyE
| yuOyZsDQw/P8Vi8bDMOZhTUCdeqMKTStFp+AiAbGwvji2uOLOsg+FqEM0btAjLBS
| AifKBugaSs71Cmg9DGZsTELDVrwkAeVQzECw7Qacsf42Wcs4g1sOtprOTcTUuqHD
| Q0CTsH2grRO4QkJPg6K+KWQwPNM0ZBeWWEx+8m5e/qWdsiTj8DgTveFYPPP6+7bx
| WmNkWOKUNLGnHsX4XP1RG2E2le6SFjeoTJL6KR87zlFIW2nLf8s4p7kQah9rOs5Y
| +H0VHgO+6Ig=
|_-----END CERTIFICATE-----
|_ssl-date: 2023-11-19T17:39:57+00:00; -1s from scanner time.
Warning: OSScan results may be unreliable because we could not find at least 1 open and 1 closed port
Device type: general purpose
Running (JUST GUESSING): Microsoft Windows 2016 (89%), FreeBSD 6.X (85%)
OS CPE: cpe:/o:microsoft:windows_server_2016 cpe:/o:freebsd:freebsd:6.2
OS fingerprint not ideal because: Missing a closed TCP port so results incomplete
Aggressive OS guesses: Microsoft Windows Server 2016 (89%), FreeBSD 6.2-RELEASE (85%)
No exact OS matches for host (test conditions non-ideal).
TCP/IP fingerprint:
SCAN(V=7.80%E=4%D=11/19%OT=80%CT=%CU=%PV=Y%DS=2%DC=T%G=N%TM=655A486E%P=x86_64-pc-linux-gnu)
SEQ(SP=102%GCD=1%ISR=10E%TI=I%TS=A)
OPS(O1=M508NW8ST11%O2=M508NW8ST11%O3=M508NW8NNT11%O4=M508NW8ST11%O5=M508NW8ST11%O6=M508ST11)
WIN(W1=2000%W2=2000%W3=2000%W4=2000%W5=2000%W6=2000)
ECN(R=Y%DF=Y%TG=80%W=2000%O=M508NW8NNS%CC=Y%Q=)
T1(R=Y%DF=Y%TG=80%S=O%A=S+%F=AS%RD=0%Q=)
T2(R=N)
T3(R=N)
T4(R=N)
U1(R=N)
IE(R=N)

Uptime guess: 0.021 days (since Sun Nov 19 09:10:11 2023)
Network Distance: 2 hops
TCP Sequence Prediction: Difficulty=258 (Good luck!)
IP ID Sequence Generation: Incremental
Service Info: OS: Windows; CPE: cpe:/o:microsoft:windows

Host script results:
|_clock-skew: mean: -1s, deviation: 0s, median: -1s

TRACEROUTE (using port 80/tcp)
HOP RTT       ADDRESS
1   202.66 ms 10.8.0.1
2   203.12 ms 10.10.58.108

NSE: Script Post-scanning.
NSE: Starting runlevel 1 (of 3) scan.
Initiating NSE at 09:39
Completed NSE at 09:39, 0.00s elapsed
NSE: Starting runlevel 2 (of 3) scan.
Initiating NSE at 09:39
Completed NSE at 09:39, 0.00s elapsed
NSE: Starting runlevel 3 (of 3) scan.
Initiating NSE at 09:39
Completed NSE at 09:39, 0.00s elapsed
Read data files from: /usr/bin/../share/nmap
OS and Service detection performed. Please report any incorrect results at https://nmap.org/submit/ .
Nmap done: 1 IP address (1 host up) scanned in 17.77 seconds
           Raw packets sent: 98 (9.448KB) | Rcvd: 29 (1.516KB)
```
