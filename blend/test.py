import subprocess
import sys

blender_path = r"C:\Program Files\Blender Foundation\Blender 4.2\blender.exe"

python_script = """
import bpy
from mathutils import Vector, Quaternion

# Set top view
for screen in bpy.data.screens:
    for area in screen.areas:
        if area.type == 'VIEW_3D':
            space_3d = area.spaces[0]
            rv3d = space_3d.region_3d
            rv3d.view_rotation = Quaternion((1.0, 0.0, 0.0, 0.0))
            rv3d.update()
"""

# Create new Blender file, import X3D and set view
subprocess.run([blender_path, "--python-expr", python_script])
