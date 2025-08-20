import matplotlib.pyplot as plt
import numpy as np
import pynari as anari
import random
import time
from matplotlib.animation import FuncAnimation

if anari.has_cuda_capable_gpu():
   print('@pynari: detected cuda-capable GPU; using higher res and sample count')
   fb_size = (1600,800)
   num_paths_per_pixel = 8
else:
   print('@pynari: no CUDA-capable GPU detected, reducing sample count')
   fb_size = (800,400)
   num_paths_per_pixel = 2

look_from_initial = (13., 2., 3.)
look_at = np.array([0., 0., 0.])
look_up = np.array([0.,1.,0.])
fovy = 20.

print('@pynari: -------------------------------------------------------')
print('@pynari: running sample02 - interactive RTOW scene           ')
print('@pynari: DRAG MOUSE to orbit/tilt, SCROLL to zoom.           ')
print('@pynari: -------------------------------------------------------')
random.seed(80577)

# --- Helper functions ---

def add_sphere(pos, radius, material):
    global spheres
    geom = device.newGeometry('sphere')
    array = device.newArray(anari.FLOAT32_VEC3, np.array([pos], dtype=np.float32))
    geom.setParameter('vertex.position', anari.ARRAY, array)
    geom.setParameter('radius', anari.FLOAT32, radius)
    geom.commitParameters()

    surf = device.newSurface()
    surf.setParameter('geometry', anari.GEOMETRY, geom)
    surf.setParameter('material', anari.MATERIAL, material)
    surf.commitParameters()
    spheres.append(surf)
    # Return both geom and the surface for easier handling
    return geom, surf

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

# --- NEW: Function for creating a "bubble" or "thin-film" material ---
# This simulates prismatic/iridescent effects by adding a thin coating to a glass sphere.
def make_bubble_material(ior):
    mat = device.newMaterial('physicallyBased')
    mat.setParameter('baseColor', anari.float3, (1., 1., 1.))
    mat.setParameter('transmission', anari.FLOAT32, 1.0) # Fully transparent base
    mat.setParameter('ior', anari.FLOAT32, ior)
    mat.setParameter('metallic', anari.FLOAT32, 0.0)
    mat.setParameter('roughness', anari.FLOAT32, 0.0)

    # --- Thin-film coating parameters for the bubble effect ---
    mat.setParameter('coat', anari.FLOAT32, 1.0) # Enable the coating layer
    mat.setParameter('coatIor', anari.FLOAT32, 1.8) # IOR of the thin film
    mat.setParameter('coatRoughness', anari.FLOAT32, 0.05) # A little roughness on the film
    # We will animate 'coatThickness' and 'coatColor' in the update loop.
    mat.commitParameters()
    return mat

def make_colored_glass(r, g, b, ior, transmission_amount):
    mat = device.newMaterial('physicallyBased')
    mat.setParameter('baseColor', anari.float3, (r, g, b))
    mat.setParameter('transmission', anari.FLOAT32, transmission_amount)
    mat.setParameter('ior', anari.FLOAT32, ior)
    mat.setParameter('metallic', anari.FLOAT32, 0.0)
    mat.setParameter('specular', anari.FLOAT32, 0.5)
    mat.setParameter('roughness', anari.FLOAT32, 0.0)
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
    global animated_objects
    add_sphere((0.,-1000.,-1),1000.,make_lambertian(.5,.5,.5))
    add_sphere((0., 1., 0.), 1., make_dielectric(1.5))
    add_sphere((-4.,1.,0.),1.,make_colored_glass(1.0, 0.95, 0.9, 1.1, 0.9))
    add_sphere((4.,1.,0.),1.,make_metal((.7,.6,.5),0.))

    for a in range(-11,12):
        for b in range(-11,12):
            choose_mat = random.random()
            center = (a + 0.9*random.random(), 0.2, b + 0.9*random.random())
            if np.linalg.norm(np.array(center) - np.array([4,0.2,0])) < 1.2: continue
            if np.linalg.norm(np.array(center) - np.array([-4,0.2,0])) < 1.2: continue
            if np.linalg.norm(np.array(center) - np.array([0,0.2,0])) < 1.2: continue

            # --- MODIFIED: Create different types of animated materials ---
            anim_props = {
                "initial_pos": np.array(center),
                "speed": random.uniform(1.0, 3.0),
                "phase": random.uniform(0, 2 * np.pi),
                "type": "matte" # Default type
            }

            if choose_mat < 0.7: # Matte
                mat = make_lambertian(random.random()**2, random.random()**2, random.random()**2)
            elif choose_mat < 0.8: # Metal
                mat = make_metal((.5*(1+random.random()),.5*(1+random.random()),.5*(1+random.random())),.2)
                anim_props["type"] = "metal"
            elif choose_mat < 0.9: # Shimmering Glass (time-varying IOR)
                base_ior = 1.5
                mat = make_dielectric(base_ior)
                anim_props["type"] = "shimmering_glass"
                anim_props["base_ior"] = base_ior
                anim_props["ior_amplitude"] = random.uniform(0.05, 0.2)
                anim_props["ior_speed"] = random.uniform(2.0, 5.0)
            else: # Bubble (time-varying thin-film coating)
                mat = make_bubble_material(1.33)
                anim_props["type"] = "bubble"
                anim_props["thickness_speed"] = random.uniform(10.0, 50.0)
                anim_props["color_speed_r"] = random.uniform(0.1, 0.5)
                anim_props["color_speed_g"] = random.uniform(0.1, 0.5)
                anim_props["color_speed_b"] = random.uniform(0.1, 0.5)

            geom, _ = add_sphere(center, .2, mat)

            # --- MODIFIED: Store all info needed for animation in one list ---
            animated_objects.append({
                "geom": geom,
                "material": mat,
                "anim_props": anim_props
            })


# --- ONE-TIME SETUP ---
device = anari.newDevice('default')
fig, ax = plt.subplots()
# --- MODIFIED: Use a single list for animated objects ---
spheres, animated_objects = [], []
create_spheres()
world = device.newWorld()
world.setParameterArray('surface', anari.SURFACE, spheres )
world.commitParameters()
bg_values = np.array(((.9,.9,.9,1.),(.15,.25,.8,1.)), dtype=np.float32).reshape((2,1,4))
bg_gradient = device.newArray(anari.float4, bg_values)
renderer = device.newRenderer('default')
renderer.setParameter('pixelSamples', anari.INT32, num_paths_per_pixel)
renderer.setParameter('background', anari.ARRAY, bg_gradient)
renderer.commitParameters()
camera = device.newCamera('perspective')
camera.setParameter('aspect', anari.FLOAT32, fb_size[0]/fb_size[1])
camera.setParameter('fovy', anari.FLOAT32, fovy * np.pi / 180)
frame = device.newFrame()
frame.setParameter('size', anari.uint2, fb_size)
frame.setParameter('channel.color', anari.DATA_TYPE, anari.UFIXED8_RGBA_SRGB)
frame.setParameter('renderer', anari.OBJECT, renderer)
frame.setParameter('world', anari.OBJECT, world)
dummy_frame = np.zeros((fb_size[1], fb_size[0], 4), dtype=np.uint8)
image = ax.imshow(dummy_frame)
plt.gca().invert_yaxis()
plt.axis('off')

# --- INTERACTIVE STATE MANAGEMENT ---
class CameraState:
    def __init__(self, look_from, look_at):
        self.look_at = look_at
        vec = np.array(look_from) - self.look_at
        self.radius = np.linalg.norm(vec)
        self.azimuth = np.arctan2(vec[2], vec[0])
        self.elevation = np.arcsin(vec[1] / self.radius)
        self.is_dragging = False
        self.last_mouse_pos = (0, 0)
cam_state = CameraState(look_from_initial, look_at)
start_time = time.time()

# --- MOUSE EVENT HANDLERS ---
def on_press(event):
    if event.inaxes != ax: return
    cam_state.is_dragging = True
    cam_state.last_mouse_pos = (event.x, event.y)

def on_release(event):
    cam_state.is_dragging = False

def on_motion(event):
    if not cam_state.is_dragging or event.inaxes != ax: return
    dx = event.x - cam_state.last_mouse_pos[0]
    dy = event.y - cam_state.last_mouse_pos[1]
    cam_state.last_mouse_pos = (event.x, event.y)
    
    sensitivity = 0.01
    cam_state.azimuth -= dx * sensitivity
    cam_state.elevation += dy * sensitivity
    cam_state.elevation = np.clip(cam_state.elevation, -np.pi/2.01, np.pi/2.01)

def on_scroll(event):
    if event.inaxes != ax: return
    zoom_speed = 0.9 if event.button == 'up' else 1.1
    cam_state.radius *= zoom_speed
    cam_state.radius = max(2.0, cam_state.radius)

fig.canvas.mpl_connect('button_press_event', on_press)
fig.canvas.mpl_connect('button_release_event', on_release)
fig.canvas.mpl_connect('motion_notify_event', on_motion)
fig.canvas.mpl_connect('scroll_event', on_scroll)

# --- MAIN UPDATE AND RENDER FUNCTION ---
def update(frame_num):
    elapsed_time = time.time() - start_time

    # --- MODIFIED: Update position AND material properties ---
    for obj in animated_objects:
        geom = obj["geom"]
        mat = obj["material"]
        props = obj["anim_props"]
        
        # 1. Update sphere position (bobbing)
        new_y = props["initial_pos"][1] + 0.4 * np.sin(props["speed"] * elapsed_time + props["phase"])
        new_pos = (props["initial_pos"][0], new_y, props["initial_pos"][2])
        new_pos_array = device.newArray(anari.FLOAT32_VEC3, np.array([new_pos], dtype=np.float32))
        geom.setParameter('vertex.position', anari.ARRAY, new_pos_array)
        geom.commitParameters()

        # 2. Update material properties based on type
        material_updated = False
        if props["type"] == "shimmering_glass":
            # Vary index of refraction over time
            ior_offset = props["ior_amplitude"] * np.sin(props["ior_speed"] * elapsed_time + props["phase"])
            new_ior = props["base_ior"] + ior_offset
            mat.setParameter('ior', anari.FLOAT32, new_ior)
            material_updated = True

        elif props["type"] == "bubble":
            # Vary the thin-film coating thickness to create the iridescent effect
            # A range of 100-700nm is typical for soap bubbles
            new_thickness = 400.0 + 300.0 * np.sin(props["thickness_speed"] * elapsed_time * 0.1 + props["phase"])
            mat.setParameter('coatThickness', anari.FLOAT32, new_thickness)

            # Slowly vary the tint of the coating to simulate swirling
            r = 0.5 + 0.5 * np.sin(props["color_speed_r"] * elapsed_time)
            g = 0.5 + 0.5 * np.sin(props["color_speed_g"] * elapsed_time + props["phase"] * 0.5)
            b = 0.5 + 0.5 * np.sin(props["color_speed_b"] * elapsed_time + props["phase"])
            mat.setParameter('coatColor', anari.float3, (r, g, b))
            material_updated = True

        if material_updated:
            mat.commitParameters()

    world.commitParameters()

    # --- Camera and Rendering (unchanged) ---
    x = cam_state.radius * np.cos(cam_state.elevation) * np.cos(cam_state.azimuth)
    y = cam_state.radius * np.sin(cam_state.elevation)
    z = cam_state.radius * np.cos(cam_state.elevation) * np.sin(cam_state.azimuth)
    pos = cam_state.look_at + np.array([x, y, z])
    direction = cam_state.look_at - pos

    camera.setParameter('position', anari.FLOAT32_VEC3, pos)
    camera.setParameter('direction', anari.float3, direction)
    camera.setParameter('up', anari.float3, look_up)
    camera.commitParameters()
    frame.setParameter('camera', anari.OBJECT, camera)
    frame.commitParameters()

    print(f"Rendering frame {frame_num}...")
    frame.render()
    fb_color = frame.get('channel.color')
    pixels = np.array(fb_color)
    image.set_data(pixels)
    
    return [image]

# --- START THE APPLICATION ---
ani = FuncAnimation(fig, update, interval=33, blit=False)
plt.show()
