#timework - very easy

In this challenge you can download the source files of the web page, so it's easier.

taking a look at the files:

![](attachments/Pasted%20image%2020240309224720.png)

is possible to see that the flag is a file and the language running is php.

![](attachments/Pasted%20image%2020240309224826.png)

looking at the web page, i see this timer page that takes a input format from the url. Let me try to see how this format is used in the source code.

![](attachments/Pasted%20image%2020240309224937.png)

this TimeController class takes my input and create a new TimeModel class passing it as argument, let's take a look what the TimeModel class do with it.

![](attachments/Pasted%20image%2020240309225045.png)

as you can see it just inset our input $format into a date command and use the exec function to execute this, without sanitize it.

so you can simple using add a semicolon and execute your own commands, i struggle a little to retrieve a flag because i didn't figure out that i needed the single quotes to my payload works.
![](attachments/Pasted%20image%2020240309225330.png)
