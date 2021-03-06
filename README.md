# DirectXGameEngine
#### From Scratch, C++ 3D Engine using Direct X 11 (Windows only)

Worked out from (some minor syntax updates) from this Youtube series: 
- [C++ 3D Game From Scratch](https://www.youtube.com/watch?v=ssGka-bSTvQ&list=PLv8DnRaQOs5-ST_VDqgbbMRtzMtpK36Hy)


###  Build and run notes: 
- Windows 10 + Visual Studio 2019 community edition
- project properties>Linker>Input>Additional Dependencies: add d3d11.lib; d3dcompiler.lib
    - //TODO ...I would like to use pragma syntax instead of clicky-ui-dependency-linking. Todo on mac? (lol not likely with DX11...)
- solution config: debug
- solution platform: x86
- Local Windows debugger
- (ctrl + f5) -> See a cube that rotates via {w,a,s,d} or mouse on a teal background pop up!


## Notes:

## Graphics Pipeline Stages. Called by (*)-device->Draw()
- Input-Assembler stage
- Programmable Shaders stage
    - Vertex and Geometry
- Rasterize stage
- Pixel Shader stage
- Output-Merger stage

## Shaders
- Vertex Shader
    - performed on gpu. Affine matrix transformations (surprised it isn't colors...I had a self imposed constraint 'shader != 'geometry'....displacement?)
- Hull Shader
- Tesselation Shader
- Domain Shader
- Geometry Shader
- Pixel Shader
    - Per pixel shading for surface diffuse + spec = lighting. Also "post" processing effects.

## Coordinate systems
- Model Space
- World Space
- View Space
- Screen / Projection Space
- cam/view = obj-mat * cam-mat^-1 = world-matrix * view-matrix
    - camera-new-position-on-dir-axis = (pos-current + distance) * direction-axis
- projection matrix
    - orthographic
    - perspective

## RAI principle in refactor
- [Resource acquisition is initialization](https://en.wikipedia.org/wiki/Resource_acquisition_is_initialization)
    - Seems similar to Dependency Injection