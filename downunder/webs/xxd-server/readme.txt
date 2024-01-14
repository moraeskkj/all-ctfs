# xxd-server


this web server is a hex dump parsers(descriptions say this), so the page has a upload file that makes possible to access after.

first a try a reverse shell.php from pentest monkey but doesn't work because of a syntax error, so i think that the code was being executed.

i tried so many diferent codes but what i just have was a same parse or syntax error, but i don't stop to try different codes because i was some sure that the php code was being executed. 

finally i got some code that finally work.

<?=`$_GET'[0]`;?>

after this i was able to execute commands with url/uploads/payload.php?0=ls

i tried different commands but i was could use commands like "ls,whereis,cat,id".

i can't make a pharaversal directory to find flag or something like this too, but i don't try with encode code so i dont know if this works or not.

after a so many tries again i just type a "cat /*" and i got the flag ;D i love ctf's
