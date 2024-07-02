import xml.etree.ElementTree as ET
import bpy
from mathutils import Matrix, Vector

def parse_center(joint):
    center = joint.get('center', '0 0 0')
    x, y, z = map(float, center.split())
    print(f"Parsed center for {joint.get('name')}: {x}, {y}, {z}")
    return Vector((x, y, z))

def create_empty(name, center, parent=None):
    bpy.ops.object.empty_add(type='ARROWS', location=(0, 0, 0))
    empty = bpy.context.active_object
    empty.name = name
    empty.matrix_world = Matrix.Translation(center)
    print(f"Created empty object '{name}' at {center}")
    if parent:
        empty.parent = parent
        empty.location = center
        empty.delta_location = center - parent.matrix_world.to_translation()
        print(f"Parent of '{name}' set to '{parent.name}' with delta location {empty.delta_location}")
    return empty

def process_joint(joint, parent_object=None):
    center = parse_center(joint)
    joint_empty = create_empty(joint.get('name'), center, parent_object)

    for child in joint:
        if child.tag == 'HAnimJoint':
            process_joint(child, joint_empty)

def main(file_path):
    bpy.ops.object.select_all(action='SELECT')
    bpy.ops.object.delete()

    tree = ET.parse(file_path)
    root = tree.getroot()

    hanim_humanoid = root.find(".//HAnimHumanoid")
    root_joint = hanim_humanoid.find("./HAnimJoint[@name='humanoid_root']")

    if root_joint is not None:
        process_joint(root_joint)
    else:
        print("No root joint found.")

# Run the main function
file_path = "JinLOA1qtr.x3d"  # Replace with your X3D file path
main(file_path)

