# Flag Command challenge - Very Easy 

In this challenge you have a prompt to insert some commands and play a game to scape to a forest, you have four options in each step and if you choose the correct one, you gonna to next step. First i was think that i just needed to find the correct "sequence" to retrieve the flag but i was wrong, when you reach the fourth step, any of chooses that you have are the correct. So i went to developers tools to read js files and see if i could figure out some logic.

![[attachments/Pasted image 20240309190502.png]]

This CheckMessage() function checks if the command I've inserted is available on the option in the currentStep or the 'secret' options, then send my command in a post request to '/api/monitor'. That API is responsible to return the flag to me, as you can see above how it checks if the response has 'HTB{' to show to me a congratulations message or something that PlayerWon() function loads.

So in this state i was thinking how can i find out the all command available, doing a check in where the code sets the availableOptions variable i found this:

![[attachments/Pasted image 20240309191030.png]]

So what i did was go to 'api/monitor' 

![[attachments/Pasted image 20240309191339.png]]

There was secret command :) Now you just to copy paste and go to next one. 

![[Pasted image 20240309183737.png]]