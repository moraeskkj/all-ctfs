# static-file-server


there is the description of the challenge:

Here's a simple Python app that lets you view some files on the server.

Author: joseph
https://web-static-file-server-9af22c2b5640.2023.ductf.dev 

when you enter in the web server,you can view a png file and a .txt file called by not_a_real_flag.txt or something like this, in this file contains an text "the real flag is at /flag.txt"

but i couldn't find it,so i opened burpsuit and send the request to Repeater and try different transversals to get the flag.

/files/../../flag.txt 

and i got the flag :D