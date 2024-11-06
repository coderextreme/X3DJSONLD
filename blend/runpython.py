import subprocess
import sys

blender_path = r"C:\Program Files\Blender Foundation\Blender 4.2\blender.exe"
print(f"starting {sys.argv[1]}")
subprocess.run([blender_path, "--python", sys.argv[1]])
