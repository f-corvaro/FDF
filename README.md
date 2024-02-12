<h1 align="center">FDF - In developtment</h1>

<p align="center">
  <a href="https://github.com/f-corvaro/FDF">
	<img src="https://github.com/f-corvaro/FDF/blob/main/.extra/FDF.png" alt="fdf">
  </a>
</p>

<p align="center">
	<b><i>"Navigate the third dimension with FDF, your toolkit for wireframe modeling."</i></b><br>
</p>
<p align="center" style="text-decoration: none;">
    <a href="https://github.com/f-corvaro/FDF/blob/main/.extra/en.subject.pdf"><img alt="subject" src="https://img.shields.io/badge/subject-FDF-yellow" /></a>
    <a href="https://github.com/f-corvaro/FDF"><img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/f-corvaro/FDF?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/FDF"><img alt="Code language count" src="https://img.shields.io/github/languages/count/f-corvaro/FDF?color=yellow" /></a>
    <a href="https://github.com/f-corvaro/FDF"><img alt="GitHub top language" src="https://img.shields.io/github/languages/top/f-corvaro/FDF?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/FDF"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/FDF?color=yellow" /></a>
</p>

<h3 align="center">Index</h3>

<p align="center">
  <a href="#folder-structure">1 - Folder Structure</a><br>
  <a href="#about">2 - About</a><br>
<a href="#provided-resources-and-library-differences">3 - Provided Resources and Library Differences</a><br>
  <a href="#bonus-part">4 - Bonus Part</a><br>
  <a href="#evaluation">5 - Evaluation</a><br>
  <a href="#correction-sheet">6 - Correction Sheet</a><br>
  <a href="#support-me">7 - Support Me</a><br>
  <a href="#skills-developed">8 - Skills Developed</a><br>
  <a href="#sources">9 - Sources</a><br>
  <a href="#license">10 - License</a><br>
  <a href="#author">11 - Author</a><br>
</p>


## Folder Structure

<p align="justify">

```
```
</p>

## About

<p align="justify">
The FDF project is a 3D Wireframe Viewer. It's a software development project that focuses on graphics programming, specifically in the field of rendering. The main goal of the project is to create a simplified 3D graphic representation of a relief landscape.
The project takes a file as input, which contains a set of coordinates. Each coordinate represents a point in space (X, Y, Z) and corresponds to a pixel on the screen. The X and Y values are the coordinates on the screen, and the Z value will be represented by the color of the pixel.
The FDF project is written in C, using the miniLibX, a simple graphics library provided for the project. It includes features like rotation, zooming, and changing the color gradient.
This project is a great opportunity to learn about 3D projections, event-driven programming, and how to use graphics libraries. It's a challenging project that requires a good understanding of mathematics, particularly matrix and vector operations.
Please note that the FDF project is part of the graphics branch of the 42 School curriculum. It's a great way to dive into graphics programming and start building more complex projects.
</p>

**Common Instructions:**

<p align="justify">
- The project must be written in C (in accordance with the Norm).

- Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors.

- All heap allocated memory space must be properly freed when necessary.

- You must submit a Makefile which will compile your source files to the required output with the flags -Wall, -Wextra and -Werror, use cc, and your Makefile must not relink. And the Makefile must at least contain the rules $(NAME), all, clean, fclean and re (bonus if you want maximum score).

- Bonuses must be in a different file _bonus.{c/h} if
the subject does not specify anything else.

- If your project allows you to use your libft, you must copy its sources and its associated Makefile in a libft folder with its associated Makefile. Your project’s Makefile must compile the library by using its Makefile, then compile the project.

- Global variables are forbidden.

</p>

**Program name**

```fdf```

**Files to turn in**

```Makefile, *.h, *.c```

**Syntax of the program**

```bash
./fdf *.fdf
```
**External functs. allowed**

- open, close, read, write,
malloc, free, perror,
strerror, exit.

- All functions of the math
library (-lm compiler option,
man man 3 math).

- All functions of the MiniLibX.

- ft_printf and any equivalent
YOU coded.

**You must use the MiniLibX in the version available on the school machines.**

**What does it do the program?**

The program has to represent the model in isometric projection. The coordinates of the landscape are stored in a .fdf file passed as a parameter to your program. An example is:

```
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0 10 10  0  0 10 10  0  0  0 10 10 10 10 10  0  0  0
0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
0  0 10 10 10 10 10 10  0  0  0  0 10 10 10 10  0  0  0
0  0  0 10 10 10 10 10  0  0  0 10 10  0  0  0  0  0  0
0  0  0  0  0  0 10 10  0  0  0 10 10  0  0  0  0  0  0
0  0  0  0  0  0 10 10  0  0  0 10 10 10 10 10 10  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
```

- The horizontal position corresponds to its axis.
- The vertical position corresponds to its ordinate.
- The value corresponds to its altitude.

You need to use the right functions to be able to read data from the file in a quick and simple way. The program should not crash when run the maps.

**Graphic Management**

- The program has to display the image in a window.

- The management of your window must remain smooth (changing to another window, minimizing and so forth).

- Pressing ESC must close the window and quit the program in a clean way.

- The use of the images of the MiniLibX is mandatory

- Clicking on the cross on the window’s frame must close the window and quit the program in a clean way.

## Provided Resources and Library Differences

[macOS v.](https://github.com/f-corvaro/FDF/tree/main/rescources_macos)

[linux v.](https://github.com/f-corvaro/FDF/tree/main/resources_linux)

You can find the resources provided by my 42School for this project in both folders. These resources include:
- The maps;
- A binary file to test the maps;
- Different versions of the MinilibX library: I would use the Sierra version for macOS and the MinilibX-Linux for Linux.

The macOS version includes files with the *.m extension in the folder. The Linux version doesn't have these *.m files as Linux doesn't natively support Objective-C. Instead, it uses C files for the implementation. This is one of the main differences between the two versions of the library.

## Bonus Part

You will get some extra points if you can:

- Include one extra projection (such as parallel or conic)!
- Zoom in and out.
- Translate your model.
- Rotate your model.
- Add one more bonus of your choice.

## MiniLibX


First of all, you need to choose the version suitable for your system. Secondly, extract the library and rename it to ```mlx``` for macOS and to ```mlx_linux``` for Linux.

MiniLibX for Linux requires xorg, x11 and zlib, therefore you will need to install the following dependencies: xorg, libxext-dev and zlib1g-dev. Installing these dependencies on Ubuntu can be done as follows:

```bash
sudo apt-get update && sudo apt-get install xorg libxext-dev zlib1g-dev libbsd-dev
```

Now, all that's left is to configure MLX. Just run the configure script in the root of the given repository, and you are good to go.

```bash
./configure
```

You will receive this message:

```bash
configure [info] : Execute "make all" from file "test/makefile.gen"
gcc -I/usr/include -O3 -I.. -g   -c -o main.o main.c
gcc -o mlx-test main.o -L.. -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
```


## Evaluation

### Correction sheet
<a href="https://github.com/f-corvaro/FDF"><img width="650" src="https://github.com/f-corvaro/FDF/blob/main/.extra/.cs/fdf1.png">

<a href="https://github.com/f-corvaro/FDF"><img width="650" src="https://github.com/f-corvaro/FDF/blob/main/.extra/.cs/fdf2.png">

<a href="https://github.com/f-corvaro/FDF"><img width="650" src="https://github.com/f-corvaro/FDF/blob/main/.extra/.cs/fdf3.png">

<a href="https://github.com/f-corvaro/FDF"><img width="650" src="https://github.com/f-corvaro/FDF/blob/main/.extra/.cs/fdf4.png">

</p>
<br>


## Support Me

<p align="justify">
Remember to ⭐ the repository.
If you want to support me:</p>

<p align="center">
<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg"><alt=""></a>
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg"><alt=""></a>

<br>

## Skills developed

<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,c,vim,vscode" />
  </a>
</p><br>

## Sources

- [minilibx doc](https://harm-smits.github.io/42docs/libs/minilibx)

<br>

## License
<p align="center">
<a href="https://choosealicense.com/licenses/mit/"><img src="https://img.shields.io/badge/License-MIT-green.svg" alt="MIT License"></a>
<a href="https://opensource.org/licenses/"><img src="https://img.shields.io/badge/License-GPL%20v3-yellow.svg" alt="GPLv3 License"></a>
<a href="http://www.gnu.org/licenses/agpl-3.0"><img src="https://img.shields.io/badge/license-AGPL-blue.svg" alt="AGPL License"></a>
<br>

## Author

<p align="center"><a href="https://profile.intra.42.fr/users/fcorvaro"><img style="height:auto;" src="https://avatars.githubusercontent.com/u/102758065?v=4" width="100" height="100"alt=""></a>
<p align="center">
<a href="mailto:fcorvaro@student.42roma.it"><kbd>Email</kbd><alt=""></a>
<a href="https://github.com/f-corvaro"><kbd>Github</kbd><alt=""></a>
<a href="https://www.linkedin.com/in/f-corvaro/"><kbd>Linkedin</kbd><alt=""></a>
<a href="https://42born2code.slack.com/team/U050L8XAFLK"><kbd>Slack</kbd><alt=""></a>

<hr/>