import matplotlib.pyplot as plt
import numpy as np
#from pynari import *
import pynari as anari
import random
from matplotlib.animation import FuncAnimation

if anari.has_cuda_capable_gpu():
   print('@pynari: detected cuda-capable GPU; using higher res and sample count')
   fb_size = (1600,800)
   num_paths_per_pixel = 32
else:
   print('@pynari: no CUDA-capable GPU detected, reducing sample count')
   fb_size = (800,400)
   num_paths_per_pixel = 4

look_from_initial = (13., 2., 3.)
look_at = (0., 0., 0.)
look_up = (0.,1.,0.)
fovy = 20.
num_frames=60 # Total number of frames for one full rotation

print('@pynari: -------------------------------------------------------')
print('@pynari: running sample02 - the first real barney-based sample ')
print('@pynari: that renders a pynari-version of Pete Shirley\'s famous ')
print('@pynari: RTOW (ray tracing in one week-end) scene.')
print('@pynari: -------------------------------------------------------')
random.seed(80577)

# --- Helper functions (unchanged) ---

def add_sphere(pos, radius, material):
    geom = device.newGeometry('sphere')
    array = device.newArray(anari.FLOAT32_VEC3,np.array(pos,dtype=np.float32))
    geom.setParameter('vertex.position',anari.ARRAY,array)
    geom.setParameter('radius',anari.FLOAT32,radius)
    geom.commitParameters()

    surf = device.newSurface()
    surf.setParameter('geometry', anari.GEOMETRY, geom)
    surf.setParameter('material', anari.MATERIAL, material)
    surf.commitParameters()

    spheres.append(surf)

def make_lambertian(r,g,b):
    mat = device.newMaterial('matte')
    mat.setParameter('color',anari.float3,(r,g,b))
    mat.commitParameters()
    return mat

def make_dielectric(ior):
    mat = device.newMaterial('physicallyBased')
    mat.setParameter('baseColor',anari.float3,(1.,1.,1.))
    mat.setParameter('transmission',anari.FLOAT32,1.)
    mat.setParameter('specular',anari.FLOAT32,0.)
    mat.setParameter('metallic',anari.FLOAT32,0.)
    mat.setParameter('ior',anari.FLOAT32,ior)
    mat.commitParameters()
    return mat

def make_metal(albedo,fuzz):
    mat = device.newMaterial('physicallyBased')
    mat.setParameter('baseColor',anari.float3,(albedo[0],albedo[1],albedo[2]))
    mat.setParameter('ior',anari.FLOAT32,1.45)
    mat.setParameter('metallic',anari.FLOAT32,1.)
    mat.setParameter('specular',anari.FLOAT32,0.)
    mat.setParameter('roughness',anari.FLOAT32,fuzz)
    mat.commitParameters()
    return mat

def create_spheres():
    add_sphere((0.,-1000.,-1),1000.,make_lambertian(.5,.5,.5))
    add_sphere((0., 1., 0.), 1., make_dielectric(1.5))
    add_sphere((-4.,1.,0.),1.,make_lambertian(.4,.2,.1))
    add_sphere((4.,1.,0.),1.,make_metal((.7,.6,.5),0.))
    for a in range(-11,12):
        for b in range(-11,12):
            choose_mat = random.random()
            center = (a + random.random(), 0.2, b + random.random())
            if choose_mat < 0.8:
                x = random.random()
                y = random.random()
                z = random.random()
                add_sphere(center,.2,make_lambertian(x*x,y*y,z*z))
            elif choose_mat < .95:
                x = random.random()
                y = random.random()
                z = random.random()
                x = .5*(1+x)
                y = .5*(1+y)
                z = .5*(1+z)
                add_sphere(center,.2,make_metal((x,y,z),.2))
            else:
                add_sphere(center,.2,make_dielectric(1.5))


# --- ONE-TIME SETUP ---

# Create ANARI device and matplotlib figure
device = anari.newDevice('default')
fig, ax = plt.subplots()

# Create the scene geometry (this doesn't change between frames)
spheres = []
create_spheres()

world = device.newWorld()
world.setParameterArray('surface', anari.SURFACE, spheres )
world.commitParameters()

# Create the renderer
bg_values = np.array(((.9,.9,.9,1.),(.15,.25,.8,1.)), dtype=np.float32).reshape((2,1,4))
bg_gradient = device.newArray(anari.float4, bg_values)
renderer = device.newRenderer('default')
# **FIX 1: Removed the ambientRadiance parameter that was causing over-exposure**
renderer.setParameter('pixelSamples', anari.INT32, num_paths_per_pixel)
renderer.setParameter('background', anari.ARRAY, bg_gradient)
renderer.commitParameters()

# **FIX 2: Create Camera and Frame objects once, to be reused in the loop**
camera = device.newCamera('perspective')
camera.setParameter('aspect', anari.FLOAT32, fb_size[0]/fb_size[1])
camera.setParameter('up',anari.float3,look_up)
camera.setParameter('fovy',anari.FLOAT32,fovy*3.14/180)

frame = device.newFrame()
frame.setParameter('size', anari.uint2, fb_size)
frame.setParameter('channel.color', anari.DATA_TYPE, anari.UFIXED8_RGBA_SRGB)
frame.setParameter('renderer', anari.OBJECT, renderer)
frame.setParameter('world', anari.OBJECT, world)


# Initialize the image plot with a dummy array.
dummy_frame = np.zeros((fb_size[1], fb_size[0], 4), dtype=np.uint8)
image = ax.imshow(dummy_frame)
plt.gca().invert_yaxis()
plt.axis('off')


# --- ANIMATION CALLBACK FUNCTION ---

def update(frame_number):
    print(f"Rendering frame {frame_number+1}/{num_frames}...")

    # Animate the camera by orbiting it around the center of the scene
    angle = 0.3 * np.pi * frame_number / num_frames
    orbit_radius = np.sqrt(look_from_initial[0]**2 + look_from_initial[2]**2)

    look_from_x = orbit_radius * np.cos(angle)
    look_from_z = orbit_radius * np.sin(angle)
    look_from = (look_from_x, look_from_initial[1], look_from_z)

    # Update the existing camera's parameters
    camera.setParameter('position',anari.FLOAT32_VEC3, look_from)
    direction = [ look_at[0] - look_from[0],
                  look_at[1] - look_from[1],
                  look_at[2] - look_from[2] ]
    camera.setParameter('direction',anari.float3, direction)
    camera.commitParameters()

    # Link the updated camera to the frame and commit
    frame.setParameter('camera', anari.OBJECT, camera)
    frame.commitParameters()

    # Render the frame and get the pixel data
    frame.render()
    fb_color = frame.get('channel.color')
    pixels = np.array(fb_color)

    # Update the data in the existing image plot
    image.set_data(pixels)

    # Return the modified artists, required for blitting
    return [image]


# --- RUN THE ANIMATION ---
ani = FuncAnimation(fig, update, frames=num_frames, interval=50, blit=True)
plt.show()
