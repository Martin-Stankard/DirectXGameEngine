# DirectXGameEngine
#### From Scratch, C++ 3D Engine using Direct X 11

Worked out from (some minor syntax updates) from this Youtube series: 
- https://www.youtube.com/watch?v=ssGka-bSTvQ&list=PLv8DnRaQOs5-ST_VDqgbbMRtzMtpK36Hy

#### Built in Visual Studio 2019(community edition)

###  Build and run notes: 
- Windows 10 + Visual Studio 2019 community
- project properties>Linker>Input>Additional Dependencies: add d3d11.lib; d3dcompiler.lib
    - //TODO ...I would like to use pragma syntax instead of clicky-ui-linking. Todo on mac.
- solution config: debug
- solution platform: x86
- Local Windows debugger
- (ctrl + f5) -> See a lime green quad on a teal background pop up!


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
