###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Oven.x3d',name='title'),
    meta(content='Oven for kitchen.',name='description'),
    meta(content='Baris AKTOP',name='creator'),
    meta(content='13 September 2002',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/HouseBarisAktop/Oven.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(-1,0),(-1,-0.95),(-0.975,-0.975),(-0.95,-1),(-0.05,-1),(-0.025,-0.975),(0,-0.95),(0,0),(0.1,0),(0.1,-1.05),(0.075,-1.075),(0.05,-1.1),(-1.05,-1.1),(-1.075,-1.075),(-1.1,-1.05),(-1.1,0),(-1,0)],solid=False,spine=[(0,0,0),(0,1.3,0)]),
          appearance=Appearance(
            material=Material(DEF='ref',diffuseColor=(0.95,0.9,0.9))))]),
      Transform(DEF='top',scale=(0.97,2.5,0.98),translation=(-0.5,1.04,-0.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='ref')),
          geometry=Extrusion(DEF='topext',creaseAngle=3.14,crossSection=[(0.55,-0.55),(0.575,-0.525),(0.6,-0.5),(0.6,0.5),(0.575,0.525),(0.55,0.55),(-0.55,0.55),(-0.575,0.525),(-0.6,0.5),(-0.6,-0.5),(-0.575,-0.525),(-0.55,-0.55),(0.6,-0.55)],solid=False,spine=[(0,0,0),(0,0.1,0)])),
        Transform(translation=(-0.25,0.1,-0.2),
          children=[
          Shape(DEF='flame',
            geometry=Cylinder(height=0.05,radius=0.08),
            appearance=Appearance(DEF='black',
              material=Material(diffuseColor=(0.2,0.2,0.2)))),
          Group(
            children=[
            Transform(translation=(0,0,0.15),
              children=[
              Shape(DEF='box1',
                geometry=Box(size=(0.3,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,1.57),translation=(0.15,0,0),
              children=[
              Shape(USE='box1')]),
            Transform(rotation=(0,1,0,3.14),translation=(0,0,-0.15),
              children=[
              Shape(USE='box1')]),
            Transform(rotation=(0,1,0,-1.57),translation=(-0.15,0,0),
              children=[
              Shape(USE='box1')]),
            Transform(rotation=(0,1,0,0.785),translation=(-0.1,0,0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,2.35),translation=(0.1,0,0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,-0.785),translation=(-0.1,0,-0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,-2.35),translation=(0.1,0,-0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))])])]),
        Transform(translation=(0.25,0.1,-0.2),
          children=[
          Shape(USE='flame'),
          Group(
            children=[
            Transform(translation=(0,0,0.15),
              children=[
              Shape(DEF='box',
                geometry=Box(size=(0.3,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,1.57),translation=(0.15,0,0),
              children=[
              Shape(USE='box')]),
            Transform(rotation=(0,1,0,3.14),translation=(0,0,-0.15),
              children=[
              Shape(USE='box')]),
            Transform(rotation=(0,1,0,-1.57),translation=(-0.15,0,0),
              children=[
              Shape(USE='box')]),
            Transform(rotation=(0,1,0,0.785),translation=(-0.1,0,0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,2.35),translation=(0.1,0,0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,-0.785),translation=(-0.1,0,-0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,-2.35),translation=(0.1,0,-0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))])])]),
        Transform(translation=(-0.25,0.1,0.2),
          children=[
          Shape(USE='flame'),
          Group(
            children=[
            Transform(translation=(0,0,0.15),
              children=[
              Shape(DEF='frame',
                geometry=Box(size=(0.3,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,1.57),translation=(0.15,0,0),
              children=[
              Shape(USE='frame')]),
            Transform(rotation=(0,1,0,3.14),translation=(0,0,-0.15),
              children=[
              Shape(USE='frame')]),
            Transform(rotation=(0,1,0,-1.57),translation=(-0.15,0,0),
              children=[
              Shape(USE='frame')]),
            Transform(rotation=(0,1,0,0.785),translation=(-0.1,0,0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,2.35),translation=(0.1,0,0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,-0.785),translation=(-0.1,0,-0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,-2.35),translation=(0.1,0,-0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))])])]),
        Transform(translation=(0.25,0.1,0.2),
          children=[
          Shape(USE='flame'),
          Group(
            children=[
            Transform(translation=(0,0,0.15),
              children=[
              Shape(DEF='frame1',
                geometry=Box(size=(0.3,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,1.57),translation=(0.15,0,0),
              children=[
              Shape(USE='frame1')]),
            Transform(rotation=(0,1,0,3.14),translation=(0,0,-0.15),
              children=[
              Shape(USE='frame1')]),
            Transform(rotation=(0,1,0,-1.57),translation=(-0.15,0,0),
              children=[
              Shape(USE='frame1')]),
            Transform(rotation=(0,1,0,0.785),translation=(-0.1,0,0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,2.35),translation=(0.1,0,0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,-0.785),translation=(-0.1,0,-0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))]),
            Transform(rotation=(0,1,0,-2.35),translation=(0.1,0,-0.1),
              children=[
              Shape(
                geometry=Box(size=(0.1,0.03,0.01)),
                appearance=Appearance(USE='black'))])])]),
        Transform(rotation=(1,0,0,1.57),scale=(0.5,0.2,0.2),translation=(0.3,0.065,0.58),
          children=[
          Shape(USE='flame')]),
        Transform(rotation=(1,0,0,1.57),scale=(0.5,0.2,0.2),translation=(0.1,0.065,0.58),
          children=[
          Shape(USE='flame')]),
        Transform(rotation=(1,0,0,1.57),scale=(0.5,0.2,0.2),translation=(-0.1,0.065,0.58),
          children=[
          Shape(USE='flame')]),
        Transform(rotation=(1,0,0,1.57),scale=(0.5,0.2,0.2),translation=(-0.3,0.065,0.58),
          children=[
          Shape(USE='flame')]),
        Transform(rotation=(1,0,0,1.57),scale=(0.5,0.2,0.2),translation=(0.3,0.15,-0.45),
          children=[
          Shape(USE='flame')]),
        Transform(rotation=(1,0,0,1.57),scale=(0.5,0.2,0.2),translation=(0.1,0.15,-0.45),
          children=[
          Shape(USE='flame')]),
        Transform(rotation=(1,0,0,1.57),scale=(0.5,0.2,0.2),translation=(-0.1,0.15,-0.45),
          children=[
          Shape(USE='flame')]),
        Transform(rotation=(1,0,0,1.57),scale=(0.5,0.2,0.2),translation=(-0.3,0.15,-0.45),
          children=[
          Shape(USE='flame')])]),
      Transform(DEF='bottom',scale=(0.97,1,0.98),translation=(-0.5,-0.05,-0.55),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='ref')),
          geometry=Extrusion(USE='topext'))]),
      Transform(scale=(0.9,1,0.9),translation=(-0.5,0.45,-0.55),
        children=[
        Shape(DEF='shelf',
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.55,-0.55),(0.575,-0.525),(0.6,-0.5),(0.6,0.5),(0.575,0.525),(0.55,0.55),(-0.55,0.55),(-0.575,0.525),(-0.6,0.5),(-0.6,-0.5),(-0.575,-0.525),(-0.55,-0.55),(0.6,-0.55)],solid=False,spine=[(0,0,0),(0,0.03,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.95,0.95,0.95),shininess=1,transparency=0.5)))]),
      Transform(DEF='seperator',scale=(0.9,2,0.1),translation=(-0.5,1.3,-1.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='ref')),
          geometry=Extrusion(USE='topext'))])]),
    Transform(rotation=(0,0,0.9,-1.57),
      children=[
      Group(
        children=[
        Transform(DEF='maincover',center=(0.6,0,0),scale=(0.9,1,1),translation=(-0.6,-1,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='ref')),
            geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.6,-0.05),(0.6,0.03),(0.57,0.04),(0.55,0.05),(-0.55,0.05),(-0.57,0.04),(-0.6,0.03),(-0.6,-0.05),(0.6,-0.05)],solid=False)),
          CylinderSensor(DEF='mainopen',maxAngle=1.65),
          ROUTE(fromField='rotation_changed',fromNode='mainopen',toField='set_rotation',toNode='maincover')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Oven.py")
