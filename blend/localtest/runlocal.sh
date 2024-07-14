export PATH=/c/Users/jcarl/Downloads/castle-model-viewer-5.1.0-win64-x86_64/castle-model-viewer:"/c/Program Files/Blender Foundation/Blender 4.1":${PATH}
castle-model-viewer.exe Humanoid4.x3d
blender.exe --python localfinal.py
castle-model-viewer.exe localcenters.x3d
blender.exe --python localcenters.py
castle-model-viewer.exe localcentersjoe.x3d
blender.exe --python localcentersjoe.py
castle-model-viewer.exe localJinLOA1scaled1.x3d
blender.exe --python localJinLOA1scaled1.py
castle-model-viewer.exe localLOAminus1.x3d
blender.exe --python localLOAminus1.py
castle-model-viewer.exe localrotation.x3d
blender.exe --python localrotation.py
blender.exe --python localJinLOA1qtr.py
