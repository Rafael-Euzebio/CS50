# Mario
## Getting Started
Open <a href="https://code.cs50.io/">VS Code</a>.

Start by clicking inside your terminal window, then execute cd by itself. You should find that its “prompt” resembles the below.

``
$
``

Click inside of that terminal window and then execute

``
wget https://cdn.cs50.net/2021/fall/psets/1/mario-less.zip
``

followed by Enter in order to download a ZIP called mario-less.zip in your codespace. Take care not to overlook the space between wget and the following URL, or any other character for that matter!

Now execute

``
unzip mario-less.zip
``

to create a folder called mario-less. You no longer need the ZIP file, so you can execute

``
rm mario-less.zip
``

and respond with “y” followed by Enter at the prompt to remove the ZIP file you downloaded.

Now type

``
cd mario-less
``

followed by Enter to move yourself into (i.e., open) that directory. Your prompt should now resemble the below.

``
mario-less/ $
``

If all was successful, you should execute

``
ls
``

and see a file named mario.c. Executing code mario.c should open the file where you will type your code for this problem set. If not, retrace your steps and see if you can determine where you went wrong!

## World 1-1
Toward the end of World 1-1 in Nintendo’s Super Mario Brothers, Mario must ascend right-aligned pyramid of blocks, a la the below.
<img src="https://cs50.harvard.edu/x/2022/psets/1/mario/less/pyramid.png"/>
