
```bash
$ sudo nmap -sS $ip -vv 

Starting Nmap 7.80 ( https://nmap.org ) at 2023-11-19 09:27 PST
Initiating Parallel DNS resolution of 1 host. at 09:27
Completed Parallel DNS resolution of 1 host. at 09:27, 0.01s elapsed
Initiating SYN Stealth Scan at 09:27
Scanning 10.10.58.108 [65535 ports]
Discovered open port 3389/tcp on 10.10.58.108
Discovered open port 80/tcp on 10.10.58.108
SYN Stealth Scan Timing: About 5.34% done; ETC: 09:37 (0:09:10 remaining)
SYN Stealth Scan Timing: About 14.99% done; ETC: 09:34 (0:05:46 remaining)
SYN Stealth Scan Timing: About 26.88% done; ETC: 09:33 (0:04:08 remaining)
SYN Stealth Scan Timing: About 34.68% done; ETC: 09:33 (0:03:48 remaining)
SYN Stealth Scan Timing: About 43.94% done; ETC: 09:33 (0:03:13 remaining)
SYN Stealth Scan Timing: About 55.33% done; ETC: 09:33 (0:02:26 remaining)
SYN Stealth Scan Timing: About 65.11% done; ETC: 09:33 (0:01:53 remaining)
SYN Stealth Scan Timing: About 72.34% done; ETC: 09:33 (0:01:32 remaining)
Stats: 0:04:13 elapsed; 0 hosts completed (1 up), 1 undergoing SYN Stealth Scan
SYN Stealth Scan Timing: About 75.36% done; ETC: 09:33 (0:01:23 remaining)
SYN Stealth Scan Timing: About 83.03% done; ETC: 09:33 (0:00:58 remaining)
Completed SYN Stealth Scan at 09:33, 326.43s elapsed (65535 total ports)
Nmap scan report for 10.10.58.108
Host is up, received user-set (0.20s latency).
Scanned at 2023-11-19 09:27:57 PST for 327s
Not shown: 65533 filtered ports
Reason: 65533 no-responses
PORT     STATE SERVICE       REASON
80/tcp   open  http          syn-ack ttl 127
3389/tcp open  ms-wbt-server syn-ack ttl 127

Read data files from: /usr/bin/../share/nmap
Nmap done: 1 IP address (1 host up) scanned in 326.52 seconds
           Raw packets sent: 131287 (5.777MB) | Rcvd: 221 (9.724KB)
```