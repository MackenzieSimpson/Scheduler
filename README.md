# Henry Holben
Computer Programming
Test of “Test and Project Database”
Dear Mackenzie,
I think your program is very interesting, and well written. 

Bugs:

  Entering most anything other than the integers listed at the case statement ends the program without any results. Fortunately, entering an integer less than 1 or greater than 3 does not end the program- but tells the user to try agai and retries: the program remains functional. You might be able to use cin.fail to direct the program to that loop to stop the program from crashing, however because it did not cause a runtime error, I don’t know if cin is actually failing here. You might need to find a different way to test whether the cin value is an integer. 

  I did not test anything with case 2. I believe case 2 is your output function and uses a file I did not have access to. I may have just missed it in the items list, but I couldn’t find it. To be fair, I don’t think Tim had access to my IO files either. Once you can detect whether a bad input was given, use cin.clear, and, cin.ignore, then direct the program back to the case statement. 

  It was hard to find a run time error in the program- the only one I got was if I entered anything in an incorrect format when it asked for a date. I'm sure your already aware of that and would have fixed that anyway. Interestingly, when I tried entering a number with a decimal point that rounded down to 1, like 1.2, the program complied correctly. Since its impossible to program for every way the user might try to enter a date, you can use cin.clear and a while loop to cycle the user back to the date cin whenever they misuse it
Just to make sure you have it, this is the snippet of code I used to do that at option 1 of my program. 
_________________________________________________________________
 
//But what if the user enters the wrong value type?
if (cin.fail()) //if cin fails
{
cin.clear(); //clears the bad input
cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignores the bad input
cout << "\n Hi Tim. \n";//Sayes hi to Tim
}
 
__________________________________________________________________
 
I think you could use this bellow every cin input to stop the endless rush of text… and say hi to Tim. 

Things I Didn’t Try, But Really Should Have Tried:

One test you might try I did not think of when I was testing would be to try putting in a seemingly valid but impossible date such as 2 30 2020 I noticed you made an array of days for each month, so I suspect there is a safeguard. I would also want to try what happens if two different assignments are entered under the same name- because I did not have the out file I don’t think I could have tested this.
 
Issues:
 
  I think the biggest issue with your program right now is that, aside from your pre/post conditions and header, the code lacks comments to keep it organized. You do a good job keeping sections of code spaced out. It might help someone who is reading your code (or yourself trying to fix a problem) if you use brief comments to name the sections so it is clear what each section accomplishes. There is no limit on comments, so you are free to use them to your heart’s content. 
 
Things you might consider adding:

Your program design is fine. But I want to be thorough so what follows are some ideas on possible features:

  Could there be a way for professors to edit the dates of assignments? What if a professor enters a date incorrectly and the program saves it. Does he have to manipulate the output file itself to correct his mistake?
 
 	Should professors be able to enter the name of the class- or the grade level they are teaching? Different users might not know the names of their colleagues’ assignments, so it could help it might help to show what group of students will be affected by other professors’ assignments.
 
 


Test and Project Database
