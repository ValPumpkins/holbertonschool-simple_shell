# <p align="center">🐚 Simple Shell 🐚</p>
<p align="center">Our simplified implementation of the simple shell in C language<p>
  <br></br>

## 🏆 Challenge Project

The project was to write a simple UNIX command interpreter as part of the HolbertonSchool training course. 

Our simple shell should behave like the original, with a few less features that can be added later to complete it.

This project brings together a large part of the knowledge acquired in order to succeed in making a simple shell as close as possible to the original.
<br></br>
## ✅ Project Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
<br></br>
## 📊 Flowchart
![](https://cdn.discordapp.com/attachments/1130868842197962864/1143963790002626681/Capture_decran_2023-08-23_a_19.43.04.png)
<br></br>
## 🤨 How to use the Simple Shell

This simple shell project uses several standard libraries contained in C. So you will need:
- `<stdio.h>`
- `<stdlib.h>`
- `<string.h>`
- `<unistd.h>`
- `<sys/wait.h>`
- `<sys/types.h>`
- `<ctype.h>`

You'll find all these libraries contained in `main.h` if you want to use it.

Here is the function prototype:
```c
int main(int argc, char **argv);
```
`argc` is the argument count.\
`argv`is the argument vector.

You can compile all `.c` files with the following `gcc`:

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
This will give you the executable file `hsh`.

Then type the command:

```
./hsh
```
To see the simple shell prompt appear.

```
Shell 🎈
```
You can now type in the commands you want to execute, like the one below
<br></br>
## ⌨️ How Simple Shell Works

After receiving a command, our Simple Shell tokenizes it into words using a space " ", a tabulation " \t ", or a new line " \n ", as a delimiter. The first word is considered the command, and all remaining words are considered arguments for that command. The Simple Shell then proceeds with the following actions:
If the first character is a forward slash " / ", the Simple Shell will recognize it as a path and will execute the command without further actions.
If the first character is not a forward slash " / ", the Simple Shell will check if the input is a built-in command; if it is, the shell will execute it. If it's not a built-in command, the shell will proceed to search each element of the PATH environmental variable for a directory containing an executable file with that name.

For example, with the `ls` command which displays the list of files in the current directory:\
If the user knows the path of the command:
```
 Shell 🎈 /bin/ls
```
The simple shell will execute it directly.

On the other hand, if the user does not know the path, they can type the command directly:
```
Shell 🎈 ls
```
In this case, the simple shell will look for the address of the command in the environment so that it can be executed correctly.
<br></br>
## 🗂️ File Details

| Filename| Summary| 
| -------- | -------- |
| main.h   | Header |
| shell.c   | Simple Shell programm |
| trimInput.c   | Remove unnecessary spaces and tabs around user input |
| tokenize.c   | Split an input line into an array of arguments for execution |
| execute.c   | Execute the provided command. Manages the creation of child processes, command execution,and waiting for execution to complete |
| getEnv.c   | Retrieve the full path of a command by searching through directories specified by the PATH environment variable |   

<br></br>
## 🪄 Testing


<br></br>     
## 🐞 Bugs

Exit return error don't always have the good status number.
<br></br>
## 📖 Our Man Page

We have also created a corresponding man page for the Simple shell providing detailed information about its usage and available format specifiers. To access the man page, run the following command in your terminal:
```
man ./man_1_simple_shell.1
```
<br></br>
## ⚒️ Tools

- [Github](https://github.com/)
- [Readmi](https://readmi.xyz/)
- [Flowchart](https://app.diagrams.net/)
<br></br>
## 👥 Team

🥦 Valentine Quignon *aka* [ValentinePumpkins](https://github.com/ValPumpkins)\
🐈‍⬛ Lucie Ruin *aka* [lucieruin](https://github.com/lucieruin)
<br></br>
## 🙏 Acknowledgments

- The entire Cohort 21, for their help, psychological and technical support
- All the team of Holberton school Lille, FRANCE
- Deepl, for all the free translation
<br></br>
## ©️ License

This project is licensed under the MIT License - see the LICENSE file for details.
