<h1 align="center"><a href="https://github.com/f-corvaro/FDF">
	<img src="https://github.com/f-corvaro/FDF/blob/main/.extra/FDF.png" alt="fdf">
  </a></h1>

<p align="center">
	<b><i>"Navigate the third dimension with FDF, your toolkit for wireframe modeling."</i></b><br>
</p>
<p align="center" style="text-decoration: none;">
    <a href="https://github.com/f-corvaro/FDF"><img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/f-corvaro/FDF?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/FDF"><img alt="Code language count" src="https://img.shields.io/github/languages/count/f-corvaro/FDF?color=yellow" /></a>
    <a href="https://github.com/f-corvaro/FDF"><img alt="GitHub top language" src="https://img.shields.io/github/languages/top/f-corvaro/FDF?color=blueviolet" /></a>
    <a href="https://github.com/f-corvaro/FDF"><img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/f-corvaro/FDF?color=yellow" /></a>
</p>

<h3 align="center">Index</h3>
<p align="center">
 <a href="#introduction">Introduction</a><br>
 <a href="#overview">Overview</a><br>
 <a href="#visual-overview">Visual Overview</a><br>
 <a href="#demonstration">Demonstration</a><br>
 <a href="#key-bindings">Key Bindings</a><br>
 <a href="#screenshots">Screenshots</a><br>
 <a href="#folder-structure">Folder Structure</a><br>
 <a href="#project-requirements---mandatory-part">Project Requirements - Mandatory Part</a><br>
 <a href="#important-guidelines">Important Guidelines</a><br>
 <a href="#window-and-graphics-management">Window and Graphics Management</a><br>
 <a href="#program-name">Program Name</a><br>
 <a href="#usage">Usage</a><br>
 <a href="#overview-1">Overview</a><br>
 <a href="#files-to-submit">Files to Submit</a><br>
 <a href="#allowed-external-functions">Allowed External Functions</a><br>
 <a href="#provided-resources">Provided Resources</a><br>
 <a href="#project-requirements---bonus-part">Project Requirements - Bonus Part</a><br>
 <a href="#minilibx-library">MiniLibX Library</a><br>
 <a href="#getting-started-with-minilibx">Getting Started with MiniLibX</a><br>
 <a href="#setting-up-minilibx">Setting Up MiniLibX</a><br>
 <a href="#including-minilibx-in-your-project">Including MiniLibX in Your Project</a><br>
 <a href="#introduction-to-minilibx">Introduction to MiniLibX</a><br>
 <a href="#manipulating-images-with-minilibx">Manipulating Images with MiniLibX</a><br>
 <a href="#event-handling-in-minilibx">Event Handling in MiniLibX</a><br>
 <a href="#window-handling-in-minilibx">Window Handling in MiniLibX</a><br>
 <a href="#drawing-and-displaying-content-in-minilibx">Drawing and Displaying Content in MiniLibX</a><br>
 <a href="#theoretical-background">Theoretical Background</a><br>
 <a href="#automated-testing-for-the-fdf-project">Automated Testing for the FDF Project</a><br>
 <a href="#run_fdf_testssh-script">`run_fdf_tests.sh` Script</a><br>
 <a href="#usage-1">Usage</a><br>
 <a href="#developed-skills">Developed Skills</a><br>
 <a href="#references">References</a><br>
 <a href="#support-and-contributions">Support and Contributions</a><br>
 <a href="#author">Author</a><br>
</p>
<br>

## Introduction

<p align="justify">

The FDF project is a 3D Wireframe Viewer developed as part of the graphics branch of the 42 School curriculum. It is a software development project that focuses on graphics programming, specifically in the field of rendering. The main goal of the project is to create a simplified 3D graphic representation of a relief landscape.

The program takes a file as input, which contains a set of coordinates representing points in space. Each coordinate corresponds to a pixel on the screen, with the X and Y values representing the coordinates on the screen and the Z value determining the color of the pixel.

By connecting the points with lines, the program creates a wireframe mesh that forms a grid of polygons, typically triangles or quadrilaterals. This wireframe representation provides a visual depiction of the landscape.

The FDF project is written in C and utilizes the miniLibX, a simple graphics library provided for the project. It offers a great opportunity to learn about 3D projections, event-driven programming, and the use of graphics libraries. It is a challenging project that requires a good understanding of mathematics, particularly matrix and vector operations.

Overall, the FDF project allows students to delve into the world of graphics programming and develop their skills in rendering and visualization. It serves as a foundation for more complex projects in the field of computer graphics.

</p>
</br>

### Overview

<p align="justify">

The FDF project is a graphical application written in C that visualizes 3D wireframe models from a set of 2D coordinates. The input to the program is a file containing coordinates that represent points in a 3D space. Each point is defined by X, Y, and Z values, where X and Y correspond to the pixel coordinates on the screen, and Z represents the height or depth, which can be used to determine the color intensity of the pixel.

The core functionality of the FDF project involves reading these coordinates and rendering them as a wireframe mesh on the screen. This mesh is created by connecting the points with lines, forming a grid of polygons, typically triangles or quadrilaterals. The resulting wireframe provides a visual representation of the 3D landscape.

The project leverages the miniLibX, a simple yet powerful graphics library, to handle the rendering and display of the wireframe. MiniLibX provides essential functions for creating windows, drawing pixels, and handling user input, making it an ideal choice for this project.

Key technical aspects of the FDF project include:

- **3D Projections**: Converting 3D coordinates into 2D screen coordinates using various projection techniques.
- **Matrix and Vector Operations**: Performing transformations such as translation, rotation, and scaling on the set of coordinates.
- **Event-Driven Programming**: Handling user inputs to interact with the wireframe, such as rotating or zooming the view.
- **Graphics Rendering**: Efficiently drawing lines and polygons to create the wireframe mesh.

The FDF project is an excellent opportunity to deepen your understanding of computer graphics, mathematical transformations, and event-driven programming. It serves as a foundational project that prepares you for more advanced topics in the field of graphics programming.

</p>

### Visual Overview

#### Demonstration

![Program Overview](https://github.com/f-corvaro/FDF/blob/main/.extra/overview.gif)

#### Key Bindings
![Key Bindings](https://github.com/f-corvaro/FDF/blob/main/.extra/key.png)

#### Screenshots
![Screenshot 1](https://github.com/f-corvaro/FDF/blob/main/.extra/screen1.png)
![Screenshot 2](https://github.com/f-corvaro/FDF/blob/main/.extra/screen2.png)

</p>

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

## Project Requirements - Mandatory Part

### Important Guidelines:

<p align="justify">

- The project must be written in C, following the Norm guidelines.
- Functions should not have unexpected errors, such as segmentation faults or double frees. Avoid undefined behaviors.
- Properly free all dynamically allocated memory when necessary.
- Include a Makefile that compiles the source files with the flags -Wall, -Wextra, and -Werror. Use the cc compiler. The Makefile should not relink. It should include the rules $(NAME), all, clean, fclean, and re. Bonus points if additional rules are included.
- If allowed, use your libft. Copy its sources and Makefile into a libft folder. The project's Makefile should compile the library using its Makefile, and then compile the project.
- Do not use global variables.

</p>

### Window and Graphics Management

<p align="justify">

- The program must display the image within a window.
- The window management should be smooth, allowing for actions such as switching to another window or minimizing without issues.
- Pressing the ESC key should close the window and terminate the program cleanly.
- The use of MiniLibX images is mandatory. To ensure proper usage of the MiniLibX library in the FDF project, verify the files where the drawing functions are implemented and check for MiniLibX library functions.
- Clicking the close button on the window's frame should also close the window and terminate the program cleanly.

</p>

### Program name

`fdf`

#### Usage

<p align="justify">

To run the program, use the following syntax:

```bash
./fdf <map_name.fdf>
```
Replace `<map_name.fdf>` with the path to your FDF map file.

</p>

#### Overview

<p align="justify">

This program generates an isometric projection of a model based on landscape coordinates stored in a `.fdf` file, which is provided as a parameter. Here is how the coordinates are interpreted:

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

- The horizontal position corresponds to the x-axis.
- The vertical position corresponds to the y-axis.
- The value corresponds the altitude (z-axis).

The program is designed to efficiently read data from the file and should handle all provided maps without crashing. You can find all the maps provided by the school [here](https://github.com/f-corvaro/FDF/tree/main/fdf/maps).

</p>

### Files to Submit

`Makefile, *.h, *.c`

### Allowed External Functions

<p align="justify">

The program requires the following functions and libraries:

- File I/O functions: `open`, `close`, `read`, `write`
- Memory management functions: `malloc`, `free`
- Error handling functions: `perror`, `strerror`, `exit`
- Math library functions: All functions from the math library (-lm compiler option, `man man 3 math`)
- MiniLibX functions: All functions from the MiniLibX library
- Custom printf function: `ft_printf` or any equivalent function that you have implemented

Please note that the program must use the MiniLibX library in the version available on the school machines.

## Provided Resources

[macOS Resources](https://github.com/f-corvaro/FDF/tree/main/rescources_macos)

[Linux Resources](https://github.com/f-corvaro/FDF/tree/main/resources_linux)

[Maps](https://github.com/f-corvaro/FDF/tree/main/fdf/maps)

<p align="justify">

The resources provided by 42 Roma Luiss for this project are available in both the macOS and Linux folders. These resources include:

- Various maps
- A binary file for testing the maps, specific to each operating system
- Different versions of the MinilibX library: the Sierra version for macOS and MinilibX-Linux for Linux
  
  The macOS version includes files with the .m extension, which are not present in the Linux version due to the lack of native Objective-C support on Linux. Instead, the Linux version uses C files for implementation. This is one of the primary differences between the two versions of the library.

</p>

## Project Requirements - Bonus Part

<p align="justify">

You can earn additional points by implementing the following bonus features:

- Implement an additional projection, such as parallel or conic, to provide more visual options for your model.
- Enable zoom functionality to allow users to zoom in and out of the model for a closer or wider view.
- Implement translation functionality to allow users to move the model horizontally and vertically within the window.
- Enable rotation functionality to allow users to rotate the model around its axis, providing different perspectives.
- Add one more bonus feature of your choice to enhance the functionality or visual appeal of your program.

Remember, implementing these bonus features is not mandatory, but it can earn you extra points for your project.

</p>

## MiniLibX Library

### Getting Started with MiniLibX

<p align="justify">

The MiniLibX library is a lightweight X-Window interface library designed for students. It provides a simple and intuitive way to create graphical software without requiring extensive knowledge of X-Window programming. With MiniLibX, you can easily create windows, draw graphics, manage images, and handle basic events. It is a versatile library that allows you to develop interactive graphical applications and display images within a window. MiniLibX is available for both macOS and Linux systems and can be seamlessly integrated into your project. By using MiniLibX, you can streamline the process of working with the X-Window system, making it more accessible and efficient for your programming needs.

</p>

### Setting Up MiniLibX

<p align="justify">

To set up MiniLibX, follow these steps:

1. Choose the version of MiniLibX that is suitable for your system.
2. Extract the library and rename it to `mlx` for macOS or `mlx_linux` for Linux.
3. Install the required dependencies for MiniLibX on Linux by running the following command on Ubuntu:
   
  ```bash
  sudo apt-get update && sudo apt-get install xorg libxext-dev zlib1g-dev libbsd-dev
  ```

4. Configure MiniLibX by running the `configure` script in the root of the repository.
   
  ```bash
  ./configure
  ```

  You should see the following message:

  ```bash
  configure [info] : Execute "make all" from file "test/makefile.gen"
  gcc -I/usr/include -O3 -I.. -g   -c -o main.o main.c
  gcc -o mlx-test main.o -L.. -lmlx -L/usr/include/../lib -lXext -lX11 -lm -lbsd
  ```

  Note that the MLX library requires the use of the `make all` command, not just `make`.

By following these steps, you will have MiniLibX set up and ready to use in your project.

</p>

### Including MiniLibX in Your Project

<p align="justify">

To integrate MiniLibX into your project, you need to include the `mlx.h` header file. This file contains function prototypes for MiniLibX functions. Additionally, you need to link your software with the necessary libraries, including the MiniLibX library itself.

</p>

### Introduction to MiniLibX

<p align="justify">

To get started with MiniLibX, you need to establish a connection between your software and the display. This can be achieved by calling the `mlx_init` function, which returns a `void *` identifier for further library calls.

Once the connection is established, you can leverage various MiniLibX functions to manage windows, draw graphics, manipulate images, and handle keyboard or mouse events. Some of these functions include `mlx_new_window`, `mlx_pixel_put`, `mlx_new_image`, and `mlx_loop`.

If the `mlx_init()` function fails to set up the connection to the X server, it will return NULL. Otherwise, it will provide a non-null pointer as the connection identifier.

</p>

### Manipulating Images with MiniLibX

<p align="justify">

- `mlx_new_image`: This function creates a new image in memory. It requires the size of the image to be created and the connection identifier. The function returns a void pointer that can be used to manipulate the image later.

- `mlx_put_image_to_window`: This function displays an image on the screen. It requires identifiers for the connection to the display, the window to use, and the image. It also needs the coordinates where the image should be placed in the window.

- `mlx_get_data_addr`: This function returns information about the created image, allowing you to modify it later. It requires the image pointer and the addresses of three different valid integers. It returns a char pointer that represents the beginning of the memory area where the image is stored.

- `mlx_destroy_image`: This function destroys the given image.

- `mlx_get_color_value`: This function translates a standard RGB color parameter to fit the bits_per_pixel requirement of the image, making the color understandable to the X-Server.

- `mlx_xpm_to_image` and `mlx_xpm_file_to_image`: These functions create a new image and fill it using the specified xpm_data or filename. They handle transparency but may not be able to read all types of xpm images.

The three functions that create images, `mlx_new_image`, `mlx_xpm_to_image`, and `mlx_xpm_file_to_image`, will return NULL if an error occurs. Otherwise, they return a non-null pointer as an image identifier.

</p>

### Event Handling in MiniLibX

<p align="justify">

Event handling is an essential aspect of graphical software development. In MiniLibX, you can easily handle events such as key presses, mouse clicks, and window exposes. Here are some functions provided by MiniLibX for event handling:

- `mlx_loop`: This function creates an infinite loop that waits for an event and then calls a user-defined function associated with that event. It requires the connection identifier.

- `mlx_key_hook`, `mlx_mouse_hook`, `mlx_expose_hook`: These functions allow you to assign user-defined functions to specific events. For example, you can assign a function to be called when a key is pressed, a mouse button is clicked, or a window is exposed. These functions require the window identifier, a pointer to the function to be called, and a parameter that will be passed to the function every time it is called.

- `mlx_loop_hook`: This function allows you to assign a user-defined function that will be called when no event occurs. It requires the connection identifier, a pointer to the function to be called, and a parameter that will be passed to the function.

When an event occurs, MiniLibX calls the corresponding function with fixed parameters. For key and mouse events, additional information is passed, such as the keycode for the pressed key, the coordinates of the mouse click in the window, and which mouse button was pressed.

Additionally, MiniLibX provides a more generic access to all X-Window events through the `mlx_hook` function. This function allows you to handle any X-Window event by specifying the event and mask values.

</p>

### Window Handling in MiniLibX

<p align="justify">

- `mlx_new_window`: This function creates a new window on the screen. It requires the connection identifier, the size of the window, and the title of the window. The function returns a void pointer that serves as a window identifier for other MiniLibX calls.

- `mlx_clear_window`: This function clears the given window by filling it with black. It requires the connection identifier and the window identifier.

- `mlx_destroy_window`: This function destroys the given window. It requires the same parameters as `mlx_clear_window`.

The `mlx_new_window` function allows you to create multiple separate windows. If it fails to create a new window, it will return NULL. Otherwise, it returns a non-null pointer as a window identifier.

The `mlx_clear_window` and `mlx_destroy_window` functions do not return any values.

</p>

### Drawing and Displaying Content in MiniLibX

<p align="justify">

To create visually appealing graphics in MiniLibX, you can use the following functions:

- `mlx_pixel_put`: This function allows you to draw a pixel at specific coordinates and color in the window. The origin (0,0) is located at the upper left corner of the window, with the x and y axis pointing right and down, respectively. You need to provide the connection identifier, window identifier, coordinates, and color as parameters.

- `mlx_string_put`: This function enables you to display a string at specified coordinates and color in the window. The parameters are the same as `mlx_pixel_put`, but instead of drawing a pixel, the specified string will be displayed.

It's important to note that both functions only work within the specified window and cannot display content outside of it or in front of other windows.

The color parameter is an integer that encodes the desired color. The color is created by mixing three basic colors: red, green, and blue. Each color value ranges from 0 to 255 and represents the intensity of that color in the final color. To display the desired color, you need to set the appropriate values within the integer.

With these functions, you can create and display various graphics and text in your MiniLibX project.

</p>

## Theoretical Background

<p align="justify">



1. **Putting the pixels in their according places**: In the FDF project, a map of points is provided, where each point represents a pixel with x, y, and z (height) coordinates. These coordinates need to be translated into screen coordinates to determine where to draw each pixel.

2. **Connecting those coordinates**: After plotting the individual points, the next step is to connect them with lines to create a wireframe model. This involves drawing a line between each pair of adjacent points.

3. **Choosing an algorithm to draw the lines**: Two popular algorithms for drawing lines on a 2D grid are the DDA (Digital Differential Analyzer) and Bresenham's line algorithm. The DDA algorithm uses floating-point arithmetic to calculate the exact positions of pixels along the line, making it highly accurate but potentially slower. Bresenham's line algorithm, on the other hand, uses integer arithmetic and is generally faster but may be less accurate for certain lines.

4. **Projections**: Projections are used to represent the 3D objects in 2D space. There are three types of projections:

  - **Parallel Projection**: In parallel projection, lines from each point in the object to the viewer are parallel. This type of projection preserves the size and shape of the object but lacks depth perception. There are three common types of parallel projections:

    - **Frontal (or Orthographic)**: The object is viewed from the front, and only the front face is visible.
    - **Top-down (or Plan)**: The object is viewed from the top, and only the top face is visible.
    - **Side (or Profile)**: The object is viewed from the side, and only the side face is visible.

  - **Isometric Projection**: Isometric projection uses the same scale for every axis, resulting in a 3D effect without perspective. Lines are drawn at 30-degree angles, providing a clear view of all sides.
   <p align="center">
    <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/isometric_parallel.png" alt="Isometric and Parallel">
   </p>

  - **Conic (or Perspective) Projection**: Conic projection simulates realistic depth perception by converging lines from each point to a single point (the viewer's eye). However, the size and shape of the object may be distorted. There are two types of perspective projections:

   - **One-point perspective**: This type of perspective projection has a single vanishing point. It is typically used when the viewer is facing one side of the object directly.
   - **Two-point perspective**: This type of perspective projection has two vanishing points. It is typically used when the viewer is facing the corner of an object.
   
   <p align="center">
    <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/Perspective.png" alt="Perspective" width="50%" height="50%">
   </p>

5. **Points and Vectors**: In the FDF project, points in the landscape are represented as vectors in 3D space. Vectors can be added together and multiplied by scalars, which are operations frequently used in the project.

6. **Transformations**: Transformations modify the points in the landscape. The three basic transformations are translation, rotation, and scaling.

 - **Translation**: Translation involves moving the object without changing its orientation or size. It is achieved by adding a certain amount to the x, y, and z coordinates of each point.
 
   <p align="center">
    <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/3d-translation.png" alt="3D Translation">
   </p>

 - **Rotation**: Rotation involves turning the object around the origin. It can be represented as a matrix operation on the vectors. For example, to rotate a point around the origin, you multiply its vector by a rotation matrix. The rotation matrix is determined by the angle of rotation and the axis of rotation.

   <p align="center">
    <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/elementary-rotations.png" alt="Elementary Rotations" width="75%" height="75%">
   </p>

 - **Scaling**: Scaling involves changing the size of the object without changing its shape or orientation. In terms of vectors, this means multiplying the x, y, and z coordinates of each point by a certain factor.

   <p align="center">
    <img src="https://github.com/f-corvaro/FDF/blob/main/.extra/scaling.png" alt="Scaling">
   </p>

 These transformations are fundamental in manipulating points and shapes in the landscape.

7. **Matrix Operations**: Matrix operations, such as matrix multiplication, are used to apply transformations to points. The order of multiplication matters, so it's important to consider the sequence of transformations.

8. **Systems of Equations**: Solving systems of linear equations is necessary in various aspects of the FDF project, such as interpolating between points to draw lines.

In summary, understanding linear algebra concepts, such as vectors, matrices, and transformations, is crucial for manipulating points and shapes in the FDF project.

</p>

## Automated Testing for the FDF Project

### `run_fdf_tests.sh` Script

<p align="justify">

The `run_fdf_tests.sh` script is a valuable tool for automating the testing process of the FDF project. It simplifies the task of running the FDF program with multiple map files and checking for memory leaks.

When executed, the script prompts the user to enter the directory path where the map files are located. If no path is provided, it defaults to a `./maps` directory.

The script intelligently detects the operating system it's running on and utilizes the appropriate tool to check for memory leaks. On Linux, it employs `valgrind`, while on macOS (Darwin), it utilizes the `leaks` command.

For each map file in the specified directory, the script runs the FDF program, performs memory leak checks, and displays the results. It also provides a progress update, indicating which map is currently being processed and how many maps are left.

Please note that using this script may impact the performance of the FDF program. This is not a flaw in the FDF program itself, but rather a consequence of the memory leak checks. These checks involve monitoring the program's memory usage in detail, which can be resource-intensive.

</p>

### Usage

<p align="justify">

To utilize the script, follow these steps:

1. Store the `run_fdf_tests.sh` script in the FDF project folder.
2. Open a terminal and navigate to the FDF project folder.
3. Run the script using the following command:

```bash
bash run_fdf_tests.sh
```

</p>

## Developed Skills

<p align="center">
  <a href="https://skillicons.dev">
    <img src="https://skillicons.dev/icons?i=git,c,vim,vscode" />
  </a>
</p><br>

## References

- [MiniLibX Documentation](https://harm-smits.github.io/42docs/libs/minilibx)
- [Fdf Explained (42 École Project)](https://www.youtube.com/watch?v=QVobB3pZoIY)
- [Fil de Fer (Fdf) - The First Graphical Project at 42](https://m4nnb3ll.medium.com/fil-de-fer-fdf-the-first-graphical-project-at-42-the-network-5cce69203448)
- [Linear Algebra](https://en.wikipedia.org/wiki/Linear_algebra)
- [3D Rotations](https://www.youtube.com/watch?app=desktop&v=wg9bI8-Qx2Q)

<br>

## Support and Contributions

<p align="center">
If you find this repository helpful, please consider starring it to show your support. Your support is greatly appreciated!</p>

<p align="center">
<a href="https://ko-fi.com/fcorvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-ko-fi.svg"><alt=""></a>
<a href="https://github.com/sponsors/f-corvaro"><img width="180" img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/.extra/support-me-github.svg"><alt=""></a>

<br>

## Author

<p align="center"><a href="https://profile.intra.42.fr/users/fcorvaro"><img style="height:auto;" src="https://avatars.githubusercontent.com/u/102758065?v=4" width="100" height="100"alt=""></a>
<p align="center">
<a href="mailto:fcorvaro@student.42roma.it"><kbd>Email</kbd><alt=""></a>
<a href="https://github.com/f-corvaro"><kbd>Github</kbd><alt=""></a>
<a href="https://www.linkedin.com/in/f-corvaro/"><kbd>Linkedin</kbd><alt=""></a>
<a href="https://42born2code.slack.com/team/U050L8XAFLK"><kbd>Slack</kbd><alt=""></a>

<hr/>
