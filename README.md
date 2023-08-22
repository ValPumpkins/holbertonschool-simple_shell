# <p align="center">Simple Shell</p>
<p align="center">Our simplified implementation of the simple shell in C language<p>
  <br></br>

## 🏆 Challenge project

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
![](https://cdn.discordapp.com/attachments/1130868842197962864/1143532681271971840/Capture_decran_2023-08-22_a_15.10.15.png)
<br></br>
## 🤨 How to use the Simple shell

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
<br></br>
## 📖 Our man page

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
