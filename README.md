<h1 align="center"><a href="https://github.com/f-corvaro/FDF">
	<img src="https://github.com/f-corvaro/FDF/blob/main/.extra/FDF.png" alt="fdf">
  </a></h1>

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

- [Folder Structure](#folder-structure)
- [About](#about)
- [Provided Resources and Library Differences](#provided-resources-and-library-differences)
- [Bonus Part](#bonus-part)
- [Overview](#overview)
- [MiniLibX](#minilibx)
  - [Setting Up MiniLibX](#setting-up-minilibx)
  - [Understanding MiniLibX](#understanding-minilibx)
  - [Including MiniLibX in Your Project](#including-minilibx-in-your-project)
  - [Getting Started with MiniLibX](#getting-started-with-minilibx)
  - [Image Manipulation with MiniLibX](#image-manipulation-with-minilibx)
  - [Event Handling in MiniLibX](#event-handling-in-minilibx)
  - [Window handling in MiniLibX](#window-handling-in-minilibx)
  - [Drawing and Displaying Content in MiniLibX](#drawing-and-displaying-content-in-minilibx)
- [Background Knowledge](#background-knowledge)
- [Tester](#tester)
  - [run\_fdf\_tests.sh](#run_fdf_testssh)
  - [Usage](#usage)
- [Evaluation](#evaluation)
  - [Correction sheet](#correction-sheet)
- [Support Me](#support-me)
- [Skills developed](#skills-developed)
- [Sources](#sources)
- [Author](#author)


## Folder Structure

<p align="justify">

```
.
├── fdf
│   ├── include
│   │   ├── linux
│   │   │   ├── color_config.h
│   │   │   ├── error_msg.h
│   │   │   ├── functions.h
│   │   │   ├── key_bindings_config.h
│   │   │   ├── movements_config.h
│   │   │   ├── resolution_settings_config.h
│   │   │   └── structure.h
│   │   ├── macOS
│   │   │   ├── color_config.h
│   │   │   ├── error_msg.h
│   │   │   ├── functions.h
│   │   │   ├── key_bindings_config.h
│   │   │   ├── movements_config.h
│   │   │   ├── resolution_settings_config.h
│   │   │   └── structure.h
│   │   └── fdf.h
│   ├── lib
│   │   ├── fcorvaro_lib
│   │   ├── mlx_linux
│   │   └── mlx_macos
│   ├── maps
│   │   ├── 10-2.fdf
│   │   ├── 10-70.fdf
│   │   ├── 100-6.fdf
│   │   ├── 20-60.fdf
│   │   ├── 42.fdf
│   │   ├── 50-4.fdf
│   │   ├── basictest.fdf
│   │   ├── elem-col.fdf
│   │   ├── elem-fract.fdf
│   │   ├── elem.fdf
│   │   ├── elem2.fdf
│   │   ├── julia.fdf
│   │   ├── mars.fdf
│   │   ├── pentenegpos.fdf
│   │   ├── plat.fdf
│   │   ├── pnp_flat.fdf
│   │   ├── pylone.fdf
│   │   ├── pyra.fdf
│   │   ├── pyramide.fdf
│   │   ├── t1.fdf
│   │   └── t2.fdf
│   ├── srcs_linux
│   │   ├── color
│   │   │   ├── color_calculation.c
│   │   │   └── color_parsing.c
│   │   ├── errors
│   │   │   └── handling.c
│   │   ├── input
│   │   │   ├── height_handling.c
│   │   │   ├── key.c
│   │   │   ├── rotation.c
│   │   │   ├── translation.c
│   │   │   └── zoom.c
│   │   ├── maps
│   │   │   ├── filling.c
│   │   │   ├── init.c
│   │   │   ├── parse_file.c
│   │   │   └── statistics.c
│   │   ├── math
│   │   │   ├── atoi_base.c
│   │   │   ├── bresenham_algorithm.c
│   │   │   ├── isometric_conversion.c
│   │   │   ├── rotation.c
│   │   │   └── utils.c
│   │   ├── memory_management
│   │   │   ├── map.c
│   │   │   ├── memory_management.c
│   │   │   └── window_management.c
│   │   ├── mlx_handling
│   │   │   └── utils.c
│   │   ├── points_operations
│   │   │   ├── creation.c
│   │   │   └── trasformation.c
│   │   ├── rendering
│   │   │   ├── draw.c
│   │   │   ├── image_handling.c
│   │   │   └── menu.c
│   │   ├── vars_management
│   │   │   └── utils.c
│   │   └── main.c
│   ├── srcs_macos
│   │   ├── color
│   │   │   ├── color_calculation.c
│   │   │   └── color_parsing.c
│   │   ├── errors
│   │   │   └── handling.c
│   │   ├── input
│   │   │   ├── height_handling.c
│   │   │   ├── key.c
│   │   │   ├── rotation.c
│   │   │   ├── translation.c
│   │   │   └── zoom.c
│   │   ├── maps
│   │   │   ├── filling.c
│   │   │   ├── init.c
│   │   │   ├── parse_file.c
│   │   │   └── statistics.c
│   │   ├── math
│   │   │   ├── atoi_base.c
│   │   │   ├── bresenham_algorithm.c
│   │   │   ├── isometric_conversion.c
│   │   │   ├── rotation.c
│   │   │   └── utils.c
│   │   ├── memory_management
│   │   │   ├── map.c
│   │   │   ├── memory_management.c
│   │   │   └── window_management.c
│   │   ├── mlx_handling
│   │   │   └── utils.c
│   │   ├── points_operations
│   │   │   ├── creation.c
│   │   │   └── trasformation.c
│   │   ├── rendering
│   │   │   ├── draw.c
│   │   │   ├── image_handling.c
│   │   │   └── menu.c
│   │   ├── vars_management
│   │   │   └── utils.c
│   │   └── main.c
│   └── Makefile
├── rescources_macos
│   ├── fdf
│   ├── minilibx_macos_sierra_20161017.tgz
│   └── minilibx_mms_20191025_beta.tgz
├── resources_linux
│   ├── fdf_linux
│   ├── minilibx-linux.tgz
│   └── sources.tgz
├── LICENSE
├── README.md
└── run_fdf_tests.sh

```
</p>

## About

<p align="justify">

The FDF project is a 3D Wireframe Viewer. The program should represent this landscape with a wireframe (also known as "mesh"). This means that it should draw lines between each point and its neighbors to form a grid of polygons (usually triangles or quadrilaterals). It's a software development project that focuses on graphics programming, specifically in the field of rendering. The main goal of the project is to create a simplified 3D graphic representation of a relief landscape.
The project takes a file as input, which contains a set of coordinates. Each coordinate represents a point in space (X, Y, Z) and corresponds to a pixel on the screen. The X and Y values are the coordinates on the screen, and the Z value will be represented by the color of the pixel.
The FDF project is written in C, using the miniLibX, a simple graphics library provided for the project. 
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
./fdf map_name.fdf
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

<p align="justify">

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
You can find all the maps given from the school [here](https://github.com/f-corvaro/FDF/tree/main/fdf/maps).

</p>

**Graphic Management**

<p align="justify">

- The program has to display the image in a window.

- The management of your window must remain smooth (changing to another window, minimizing and so forth).

- Pressing ESC must close the window and quit the program in a clean way.

- The use of the images of the MiniLibX is MANDATORY. In order to verify that the student is correctly using the images from the MiniLibX library in their FDF project, you need to identify the files where the drawing functions are implemented and look for MiniLibX library function.

- Clicking on the cross on the window’s frame must close the window and quit the program in a clean way.

</p>

## Provided Resources and Library Differences

[macOS v.](https://github.com/f-corvaro/FDF/tree/main/rescources_macos)

[linux v.](https://github.com/f-corvaro/FDF/tree/main/resources_linux)

[maps](https://github.com/f-corvaro/FDF/tree/main/fdf/maps)

<p align="justify">

You can find the resources provided by my 42School for this project in both folders. These resources include:
- The maps;
- A binary file for testing the maps, one tailored for each operating system;
- Different versions of the MinilibX library: I would use the Sierra version for macOS and the MinilibX-Linux for Linux.

The macOS version includes files with the *.m extension in the folder. The Linux version doesn't have these *.m files as Linux doesn't natively support Objective-C. Instead, it uses C files for the implementation. This is one of the main differences between the two versions of the library.

</p>

## Bonus Part

<p align="justify">

You will get some extra points if you can:

- Include one extra projection (such as parallel or conic)!
- Zoom in and out.
- Translate your model.
- Rotate your model.
- Add one more bonus of your choice.

</p>

## Overview

<p align="justify">

![Overview Gif](https://github.com/f-corvaro/FDF/blob/main/.extra/overview.gif)

![Key](https://github.com/f-corvaro/FDF/blob/main/.extra/key.png)

![Screen1](https://github.com/f-corvaro/FDF/blob/main/.extra/screen1.png)

![Screen2](https://github.com/f-corvaro/FDF/blob/main/.extra/screen2.png)

</p>

## MiniLibX

### Setting Up MiniLibX

<p align="justify">

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

The MLX library requires the use of the `make all` command; it does not work with the `make` command alone.

</p>

### Understanding MiniLibX

<p align="justify">

MiniLibX is a simple X-Window interface library designed for students. It provides an easy way to create graphical software without needing any X-Window programming knowledge. The library offers simple window creation, a drawing tool, image management, and basic event handling.

The X-Window system is a network-oriented graphical system for Unix. It consists of two main parts: your software that wants to draw something on the screen and/or get keyboard & mouse inputs, and the X-Server that manages the screen, keyboard, and mouse. A network connection must be established between these two entities to send drawing orders and keyboard/mouse events.

</p>

### Including MiniLibX in Your Project

<p align="justify">

To use MiniLibX, you need to include the `mlx.h` header file. This file only contains function prototypes, and no structure is needed. To use MiniLibX functions, you need to link your software with several libraries, including the MiniLibX library itself.

</p>

### Getting Started with MiniLibX

<p align="justify">

Before using other MiniLibX functions, you need to initialize the connection between your software and the display using the `mlx_init` function. This function takes no parameters and returns a `void *` identifier, which is used for further calls to the library routines.

Other MiniLibX functions include `mlx_new_window` for managing windows, `mlx_pixel_put` for drawing inside a window, `mlx_new_image` for manipulating images, and `mlx_loop` for handling keyboard or mouse events.

If `mlx_init()` fails to set up the connection to the X server, it will return NULL. Otherwise, it returns a non-null pointer as a connection identifier.

</p>

### Image Manipulation with MiniLibX

<p align="justify">

- `mlx_new_image`: This function creates a new image in memory. It requires the size of the image to be created and the connection identifier. The function returns a void pointer that is used to manipulate the image later.

- `mlx_put_image_to_window`: This function displays an image on the screen. It requires identifiers for the connection to the display, the window to use, and the image. It also needs the coordinates where the image should be placed in the window.

- `mlx_get_data_addr`: This function returns information about the created image, allowing a user to modify it later. It requires the image pointer and the addresses of three different valid integers. It returns a char pointer that represents the beginning of the memory area where the image is stored.

- `mlx_destroy_image`: This function destroys the given image.

- `mlx_get_color_value`: This function translates a standard RGB color parameter to fit the bits_per_pixel requirement of the image, and make the color understandable to the X-Server.

- `mlx_xpm_to_image` and `mlx_xpm_file_to_image`: These functions create a new image and fill it using the specified xpm_data or filename. They handle transparency but may not be able to read all types of xpm images.

The three functions that create images, `mlx_new_image`, `mlx_xpm_to_image`, and `mlx_xpm_file_to_image`, will return NULL if an error occurs. Otherwise, they return a non-null pointer as an image identifier.

</p>

### Event Handling in MiniLibX

<p align="justify">

- `mlx_loop`: This function is an infinite loop that waits for an event and then calls a user-defined function associated with this event. It requires the connection identifier.

- `mlx_key_hook`, `mlx_mouse_hook`, `mlx_expose_hook`: These functions assign user-defined functions to specific events (key press, mouse button press, and window expose respectively). They require the window identifier, a pointer to the function to be called when the event occurs, and a parameter that will be passed to the function every time it is called.

- `mlx_loop_hook`: This function assigns a user-defined function that will be called when no event occurs. It requires the connection identifier, a pointer to the function to be called, and a parameter that will be passed to the function.

When an event occurs, MiniLibX calls the corresponding function with fixed parameters. For key and mouse events, additional information is passed, such as the keycode for the key that was pressed, the coordinates of the mouse click in the window, and which mouse button was pressed.

The MiniLibX also provides a more generic access to all X-Window events through the `mlx_hook` function. The event and mask values will be taken from the X11 include file "X.h".

</p>

### Window handling in MiniLibX

<p align="justify">

- `mlx_new_window`: This function creates a new window on the screen. It requires the connection identifier, the size of the window, and the title of the window. The function returns a void pointer that is used as a window identifier for other MiniLibX calls.

- `mlx_clear_window`: This function clears the given window (fills it with black). It requires the connection identifier and the window identifier.

- `mlx_destroy_window`: This function destroys the given window. It requires the same parameters as `mlx_clear_window`.

The `mlx_new_window` function can handle an arbitrary number of separate windows. If it fails to create a new window for any reason, it will return NULL. Otherwise, it returns a non-null pointer as a window identifier.

The `mlx_clear_window` and `mlx_destroy_window` functions currently do not return anything.

</p>

### Drawing and Displaying Content in MiniLibX

<p align="justify">

- `mlx_pixel_put`: This function draws a pixel in the window at the specified coordinates and color. The origin (0,0) is the upper left corner of the window, with the x and y axis pointing right and down respectively. The function requires the connection identifier, the window identifier, the coordinates, and the color.

- `mlx_string_put`: This function displays a string at the specified coordinates and color in the window. The parameters have the same meaning as for `mlx_pixel_put`. Instead of a pixel, the specified string will be displayed.

In both functions, it is impossible to display anything outside the specified window, nor display in another window in front of the selected one.

The color parameter is an integer. The displayed color needs to be encoded in this integer, following a defined scheme. All displayable colors can be split into 3 basic colors: red, green, and blue. These three values, in the 0-255 range, represent how much of each color is mixed up to create the original color. These three values must be set inside the integer to display the right color.

</p>

## Background Knowledge

<p align="justify">

1. **Putting the pixels in their according places**: In the context of the FDF project, you're given a map of points in a file. Each point represents a pixel and has a corresponding x, y, and z (height) coordinate. You need to translate these coordinates into screen coordinates to know where to draw each pixel.

2. **Connecting those coordinates**: Once you've plotted the individual points, the next step is to connect them with lines to form a wireframe model. This involves drawing a line between each pair of adjacent points.

3. **Choosing an algorithm to draw the lines**: There are many algorithms you can use to draw a line between two points on a 2D grid. Two of the most popular ones are the DDA (Digital Differential Analyzer) and Bresenham's line algorithm. Both of these algorithms calculate which pixels in the grid should be highlighted to form a line between the two points. However, they use different techniques to do this, and each has its own advantages and disadvantages.

- **DDA (Digital Differential Analyzer)**: The DDA algorithm is a scan-conversion method for drawing a line which uses simple arithmetic. The concept behind the algorithm is to take the difference in the x-coordinates and y-coordinates, and then divide the difference by the number of steps needed to draw the line. The algorithm uses floating-point arithmetic to calculate the exact positions of the pixels along the line, which makes it highly accurate. However, the use of floating-point arithmetic can make the DDA algorithm slower than other line drawing algorithms, especially on hardware that doesn't handle floating-point operations efficiently.

- **Bresenham's Line Algorithm**: Bresenham's line algorithm is an efficient method for drawing a line as it only uses integer arithmetic. The algorithm determines the points of an n-dimensional raster that should be selected in order to form a close approximation to a straight line between two given points. It's generally faster than the DDA algorithm because it avoids the use of floating-point arithmetic. However, because it uses approximation to determine which pixels to illuminate, it can be less accurate than the DDA algorithm for certain lines.

Both algorithms have their uses and are chosen based on the requirements of the application. If precision is a priority, the DDA algorithm is a better choice. If speed is more important, Bresenham's line algorithm is typically the preferred option.

4. **Projections**:

   1. **Parallel Projection**: In parallel (or orthographic) projection, lines from each point in the object to the viewer are parallel. This means that the size and shape of the object are preserved, but there's no sense of depth - objects further away don't appear smaller. There are three types of parallel projections:

   - **Frontal (or Orthographic)**: The object is viewed from the front and only the front face is visible.
   - **Top-down (or Plan)**: The object is viewed from the top and only the top face is visible.
   - **Side (or Profile)**: The object is viewed from the side and only the side face is visible.

   2. **Isometric Projection**: Isometric projection is a type of parallel projection where the same scale is used for every axis, resulting in a 3D effect without perspective. Lines are drawn at 30-degree angles, which gives a clear view of all sides and all dimensions are proportionally represented.

<p align="center">
  <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/isometric_parallel.png" alt="Isometric and Parallel">
</p>

   3. **Conic (or Perspective) Projection**: In conic projection, lines from each point in the object converge at a single point (the viewer's eye). This gives a realistic view with a sense of depth - objects further away appear smaller. However, the size and shape of the object are distorted. There are two types of perspective projections:

   - **One-point perspective**: There's a single vanishing point. This is typically used when the viewer is facing one side of the object directly.
   - **Two-point perspective**: There are two vanishing points. This is typically used when the viewer is facing the corner of an object.

<p align="center">
  <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/Perspective.png" alt="Perspective" width="50%" height="50%">
</p>

5. **Points and Vectors**: In the FDF project, each point in the landscape is represented as a vector in 3D space. A vector is essentially an ordered list of numbers, which in this case are the x, y, and z coordinates of a point. Vectors can be added together and multiplied by scalars (individual numbers), which are operations that you'll use frequently in the FDF project.

6. **Transformations**: Transformations are ways of modifying the points in the landscape. The three basic transformations are:

   - **Translation**: This involves moving the object without changing its orientation or size. In terms of vectors, this means adding a certain amount to the x, y, and z coordinates of each point.

<p align="center">
  <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/3d-translation.png" alt="3D Translation">
</p>

   - **Rotation**: This involves turning the object around the origin. This can be represented as a matrix operation on the vectors. For example, to rotate a point around the origin, you multiply its vector by a rotation matrix. The rotation matrix is determined by the angle of rotation and the axis of rotation.

<p align="center">
  <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/elementary-rotations.png" alt="Elementary Rotations" width="75%" height="75%">
</p>

   - **Scaling**: This involves changing the size of the object without changing its shape or orientation. In terms of vectors, this means multiplying the x, y, and z coordinates of each point by a certain factor.

<p align="center">
  <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/scaling.png" alt="Scaling">
</p>

7. **Matrix Operations**: Many of the operations in the FDF project involve multiplying matrices and vectors. This is a key operation in linear algebra. For example, to apply a transformation to a point, you multiply the matrix representing the transformation by the vector representing the point. Matrix multiplication is associative, which means that the order of multiplication matters. This is important to keep in mind when applying multiple transformations.

8.  **Systems of Equations**: Linear algebra also involves solving systems of linear equations, which can come up in various ways in the FDF project. For example, when you're interpolating between two points to draw a line, you're essentially solving a system of equations to find the points on the line.

In summary, linear algebra provides the mathematical framework for manipulating points and shapes in the FDF project. Understanding the basics of vectors, matrices, and linear transformations can greatly help in implementing the project.

</p>

## Tester

### run_fdf_tests.sh

<p align="justify">

The `run_fdf_tests.sh` script is a testing tool for the FDF project. It's designed to automate the process of running the FDF program with various map files and checking for memory leaks. 

When executed, the script prompts the user to enter the directory path where the map files are located. If no path is provided, it defaults to a `./maps` directory.

The script identifies the operating system it's running on and uses the appropriate tool to check for memory leaks. On Linux, it uses `valgrind`, and on macOS (Darwin), it uses the `leaks` command. 

For each map file in the specified directory, the script runs the FDF program, checks for memory leaks, and displays the results. It also provides a progress update, indicating which map is currently being processed and how many maps are left.

Please note that using this script may slow down the performance of the FDF program. This is not a problem with the FDF program itself, but a side effect of the memory leak checks. These checks involve monitoring the program's memory usage in detail, which can be a resource-intensive process.

</p>

### Usage

<p align="justify">

You need to store the script into fdf folder and run the script:

```shellscript
bash run_fdf_tests.sh
```

</p>

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

- [Fdf explained (42 ecole project)](https://www.youtube.com/watch?v=QVobB3pZoIY)

- [Fil de Fer(Fdf)](https://m4nnb3ll.medium.com/fil-de-fer-fdf-the-first-graphical-project-at-42-the-network-5cce69203448)

- [linear algebra](https://en.wikipedia.org/wiki/Linear_algebra)

- [Rotations in 3D](https://www.youtube.com/watch?app=desktop&v=wg9bI8-Qx2Q)

<br>

## Author

<p align="center"><a href="https://profile.intra.42.fr/users/fcorvaro"><img style="height:auto;" src="https://avatars.githubusercontent.com/u/102758065?v=4" width="100" height="100"alt=""></a>
<p align="center">
<a href="mailto:fcorvaro@student.42roma.it"><kbd>Email</kbd><alt=""></a>
<a href="https://github.com/f-corvaro"><kbd>Github</kbd><alt=""></a>
<a href="https://www.linkedin.com/in/f-corvaro/"><kbd>Linkedin</kbd><alt=""></a>
<a href="https://42born2code.slack.com/team/U050L8XAFLK"><kbd>Slack</kbd><alt=""></a>

<hr/>
