Okay, Abi! With your computer graphics exam just around the corner, let's create a detailed syllabus drawing from your textbook contents, the BIT304 course syllabus, and your past exam questions. This breakdown will help you focus your study.

Here is a detailed syllabus with micro-topics and a summary of marks associated with relevant questions found in your past papers:

---

### Detailed BIT304 Computer Graphics Syllabus with Past Exam Marks

This syllabus breaks down the topics based on the provided course contents and textbook structure. Marks indicated are approximations based on your provided past exam questions and may vary.

*   **Unit 1: Introduction and Overview of Graphics System (3 Hrs.)**
    *   Definition and Representative uses of Computer Graphics (**Total Marks Asked: ~5**)
        *   Application Areas (CAD, Presentation Graphics, Computer Art, Entertainment, Education and Training, Visualization, Image Processing, Graphical User Interfaces, Science, Engineering, Medicine, Business, Industry, Government, Art, Advertising, simulations)
            *   Discussion on the use of computer graphics in different areas (5 marks).
    *   Computer Graphics vs. Image Processing
    *   Overview of Coordinate System
        *   Coordinate Representations
        *   **Pixel addressing** (scan-line number, column number, origin position)
    *   Definition of Scan Conversion, Rasterization and Rendering
    *   **Raster Scan & Random Scan Displays** (**Total Marks Asked: ~25**)
        *   Architecture of Raster Graphics System with Display Processor
        *   Architecture of Random Scan Systems
            *   Architecture explanation with diagram (5 marks).
        *   **Differences between Raster Scan and Random Scan Displays**
            *   Differentiate between raster scan and random scan display systems (5 marks).
            *   Differentiate between vector and raster scan systems (5 marks).
            *   Major differences, advantages, and disadvantages of both display architectures (10 marks).
*   **Unit 2: Output Primitives (6 Hrs.)** (**Total Marks Asked: ~43**)
    *   Scan conversions of point, line, circle and ellipse
    *   **Line-Drawing Algorithms**
        *   DDA Algorithm (**Total Marks Asked: ~10**)
            *   Plot/Draw a line using DDA with given endpoints (likely 5 marks each, total 10).
        *   **Bresenham's Line Algorithm** (**Total Marks Asked: ~17**)
            *   Algorithm (5 marks).
            *   Illustrate Bresenham's algorithm with given endpoints (7 marks).
            *   Derive the Bresenham’s decision parameter for negative slope (5 marks).
            *   Major differences between DDA and Bresenham's (3 marks, part of 10 total question).
    *   **Circle-Generating Algorithms** (**Total Marks Asked: ~16**)
        *   Properties of Circles
        *   **Midpoint Circle Algorithm**
            *   Algorithm (5 marks).
            *   Calculate points to draw a circle with given center and radius (Midpoint) (4 marks, part of 10 total question).
            *   Digitize circle with center (0,0) and radius=6 (5 marks).
            *   How decision parameter is used to draw a circle (6 marks, part of 10 total question).
    *   Midpoint Ellipse Algorithm
    *   Other Output Primitives
        *   Cell Arrays (pCellArray)
        *   Character Strings (pText) (Bitmap font, outline font)
        *   Marker Symbols (polymarker)
        *   Filled Areas (pFillArea)
        *   Scan-line fill procedure
*   **Unit 3: 2-D Geometric Transformations (6 Hrs.)** (**Total Marks Asked: ~17.5**)
    *   Basic 2D Transformations:
        *   Translation
        *   **Rotation**
            *   Perform rotation of triangle about a pivot point (5 marks).
            *   Prove that successive rotation is equal to addition of angles (5 marks).
        *   Scaling
            *   Shearing and Scaling (short note) (2.5 marks).
        *   **Reflection**
            *   Reflect a line segment about a line X=7 (5 marks).
        *   Shearing
            *   Shearing and Scaling (short note) (2.5 marks).
    *   Composite Transformations
*   **Unit 4: 2-D Viewing (6 Hrs.)** (**Total Marks Asked: ~17.5**)
    *   Viewing operations
    *   Window-to-Viewport Mapping
    *   **Clipping**
        *   Role of Clipping (Part of 10 marks Q2).
        *   **Line Clipping Algorithms** (**Total Marks Asked: ~12.5**)
            *   **Cohen Sutherland Line Clipping Algorithm**
                *   Explain with an example (5 marks).
                *   Explanation (5 marks).
            *   Liang Barsky Algorithm
            *   Line Clipping (short note) (2.5 marks).
        *   **Polygon Clipping** (5 marks).
        *   Viewport Clipping
*   **Unit 5: 3-D Geometric Transformations and Projections (6 Hrs.)** (**Total Marks Asked: ~25**)
    *   3-D Geometric Transformations
        *   Translation
        *   **Rotation**
            *   Rotation matrix in clockwise direction w.r.t x-axis, y-axis, z-axis (Part of 10 marks Q3).
            *   Rotate object (vertices) about rotation axis y=4 (Part of 10 marks Q3).
        *   Scaling
        *   Reflection
        *   Shearing
    *   **Projections** (**Total Marks Asked: ~25**)
        *   Types of Projection (Part of 5 marks Q9).
        *   **Parallel vs Perspective Projection**
            *   Differentiate between parallel and perspective projection (5 marks).
            *   Differentiate between parallel and perspective projection (5 marks).
        *   Perspective Projection
            *   Obtain perspective projection coordinates for pyramid vertices (10 marks).
        *   Three-Dimensional Viewing Functions
        *   Viewing Pipeline (Geometric transformations, coordinate-system transformations, projections, clipping)
*   **Unit 6: Object Surface Modeling and Representation (6 Hrs.)** (**Total Marks Asked: ~42.5**)
    *   Object surface modeling
    *   Representation Techniques
        *   **Boundary Representation (BRep)** (**Total Marks Asked: ~10**)
            *   Explain the boundary representation technique (5 marks).
            *   Use of polygon tables for boundary representations (5 marks).
        *   **Polygon Table and Polygon Meshes** (**Total Marks Asked: ~12.5**)
            *   Polygon, vertex, and edge table explanation (5 marks).
            *   Polygon Table (short note) (2.5 marks).
            *   Vertex table (short note) (2.5 marks).
            *   Conditions for error free generation of polygon table (5 marks).
        *   **Wireframe Representation** (**Total Marks Asked: ~5**)
            *   Explain the wireframe representation of 3D objects (5 marks).
        *   Sweep Representation
        *   Octree Representation
        *   **Parametric Curves** (**Total Marks Asked: ~15**)
            *   Explain about parametric curve (2 marks).
            *   Explain about parametric cubic curve with its properties (5 marks).
            *   Define Hermite interpolation in defining a curve (Part of 10 marks Q1).
        *   **Bezier Curve** (**Total Marks Asked: ~7**)
            *   Describe the properties of a Bezier curve (3 marks).
            *   What is a Bezier curve? Describe its properties (1+4=5 marks).
        *   B-Spline Curve
        *   Fractal-Geometry (Fractal Dimension, Koch Curve)
    *   How the geometric and attribute information of a 3D object is stored (5 marks).
*   **Unit 7: Visible Surface Detection (6 Hrs.)** (**Total Marks Asked: ~17.5**)
    *   Introduction
    *   Image Space and Object Space techniques
    *   Back Face Detection
    *   **Z-Buffer (Depth-Buffer Method)** (**Total Marks Asked: ~12.5**)
        *   Describe z-buffer method. State its limitations and how these can be reduced (10 marks).
        *   Z-Buffer (short note) (2.5 marks).
    *   A-Buffer Method
    *   **Scan-Line method** (**Total Marks Asked: ~5**)
        *   Explain how the line method (Scan-line) detects the visible surface with an example (5 marks).
    *   Painter’s Algorithms (Depth-Sorting Method)
    *   Area Subdivision method
    *   Wireframe Methods
*   **Unit 8: Illumination and Surface Rendering methods (6 Hrs.)** (**Total Marks Asked: ~35**)
    *   Introduction
    *   **Illumination Models** (**Total Marks Asked: ~15**)
        *   Ambient, Diffuse and Specular reflections
            *   Ambient light (short note) (2.5 marks).
            *   Diffuse reflection (short note) (2.5 marks).
            *   Explain ambient light, diffuse reflection, and specular reflection with examples (5 marks).
            *   Differentiate between ambient light and diffuse reflection (Part of 10 marks Q2).
            *   Explain the Phong illumination model for specular reflection (5 marks).
        *   Intensity Attenuation (Part of 5 marks Q9).
    *   **Shading models** (Constant, Gouraud and Phong) (**Total Marks Asked: ~20**)
        *   Constant (Flat) shading
            *   Disadvantages of flat shading? How they can be eliminated? (5 marks).
        *   **Gouraud Shading model**
            *   Describe Gouraud Shading model with necessary derivations (Part of 10 marks Q2).
            *   Differentiate Phong Shading from Gouraud Shading method (5 marks).
        *   **Phong Shading model**
            *   Write procedure/algorithm to render the polygon surface using Phong shading model (5 marks + Part of 10 marks Q2).
            *   Differentiate Phong Shading from Gouraud Shading method (5 marks).
*   **Unit 9: Virtual Reality and Animation (3 Hrs.)** (**Total Marks Asked: ~7.5**)
    *   Virtual Reality (Concept, Components, Types, 3D position Tracker, Interface, Application)
    *   **Animation**
        *   Introduction to Animation
        *   Traditional Animation Techniques
        *   Principles of Animation
        *   **Key framing**
            *   Key frame (short note) (2.5 marks).
            *   Character and Facial Animation
        *   Deformation
        *   **Motion capture**
            *   Explain motion capture with an example (5 marks).
*   **Unit 10: Introduction to Open GL (2 Hrs.)** (**Total Marks Asked: ~10**)
    *   Introduction to OpenGL
    *   Callback Functions
    *   Drawing Pixels, Lines, and Polygons
    *   **OpenGL and call back functions** (5 marks).
    *   **How a polygon can be created in OpenGL** (5 marks).


**Prioritization Notes based on Past Exams:**

Based on the provided past papers, the following areas seem to have a high probability of being tested and often carry significant marks:

1.  **Output Primitives:** Line drawing (DDA, Bresenham), Circle drawing (Midpoint). Expect algorithm steps and numerical examples
2.  **Transformations (2D & 3D):** Basic transformations (Translation, Rotation, Scaling, Reflection, Shearing). Be prepared for matrix representations and applying transformations to points or objects, including transformations about a pivot point or line.
3.  **Projections (3D):** Parallel vs Perspective projection differences and calculations for perspective projection coordinates.
4.  **Object Representation:** Understanding Polygon Tables, Vertex Tables, Edge Tables, Boundary Representation, Wireframe Representation, and properties of Parametric/Bezier/Hermite curves.
5.  **Visible Surface Detection:** Z-Buffer (description, limitations, reduction) and Scan-Line method explanations are important.
6.  **Illumination and Shading:** Definitions and differences between Ambient, Diffuse, and Specular light. Understanding and being able to describe/apply Phong and Gouraud shading models, including differences.
7.  **Raster vs. Random Scan:** Understanding the architecture and differences between these display systems.
8.  **OpenGL Basics:** How to create simple primitives like polygons and understanding callback functions.
9.  **Animation:** Motion capture and Key framing concepts have been asked.

Focus on understanding the core algorithms and concepts in these areas, practicing problems (like drawing lines/circles, applying transformations, calculating projections), and being able to explain the methods
