# DirectXGameEngine
#### From Scratch, C++ 3D Engine using Direct X 11

Worked out from (some minor syntax updates) from this Youtube series: 
- https://www.youtube.com/watch?v=ssGka-bSTvQ&list=PLv8DnRaQOs5-ST_VDqgbbMRtzMtpK36Hy

#### Built in Visual Studio 2019(community edition)

###  Build and run notes: 
- project properties>Linker>Input>Additional Dependencies: add d3d11.lib; d3dcompiler.lib
    - //TODO ...I would to use pragama syntax instead of clicky-linking....
- solution config: debug
- solution platform: x86
- Local Windows debugger
- (ctrl + f5) -> See a lime green tri on a teal background pop up!


## Graphics Pipeline Stages. Called by (*)-device->Draw()
- Input-Assembler stage
- Programmable Shaders stage
- Rasterize stage
- Pixel Shader stage
- Output-Merger stage
