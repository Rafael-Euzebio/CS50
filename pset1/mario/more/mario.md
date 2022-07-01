# Mario
## Getting Started

Open <a href=https://code.cs50.io/>VS Code.</a>

Start by clicking inside your terminal window, then execute cd by itself. You should find that its “prompt” resembles the below.

``
$
``

Click inside of that terminal window and then execute

``
wget https://cdn.cs50.net/2021/fall/psets/1/mario-more.zip
``

Now execute

``
unzip mario-more.zip
``

to create a folder called mario-more. You no longer need the ZIP file, so you can execute

``
rm mario-more.zip
``

and respond with “y” followed by Enter at the prompt to remove the ZIP file you downloaded.

Now type

``
cd mario-more
``

followed by Enter to move yourself into (i.e., open) that directory. Your prompt should now resemble the below.

``
mario-more/ $
``

If all was successful, you should execute

``
ls
``

and see a file named mario.c. Executing code mario.c should open the file where you will type your code for this problem set. If not, retrace your steps and see if you can determine where you went wrong!

## World 1-1
Toward the beginning of World 1-1 in Nintendo’s Super Mario Brothers, Mario must hop over adjacent pyramids of blocks, per the below.

<img href="https://cs50.harvard.edu/x/2022/psets/1/mario/more/pyramids.png"></a>

Let’s recreate those pyramids in C, albeit in text, using hashes (#) for bricks, a la the below. Each hash is a bit taller than it is wide, so the pyramids themselves will also be taller than they are wide.

If the user doesn’t, in fact, input a positive integer between 1 and 8, inclusive, when prompted, the program should re-prompt the user until they cooperate:

```
$ ./mario
Height: -1
Height: 0
Height: 42
Height: 50
Height: 4
```
