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
    meta(content='Hatch.x3d',name='title'),
    meta(content='An extruded circular hatch cover with primitive geometry hinges for the AAV7PA1.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='29 May 2001',name='created'),
    meta(content='14 June 2001',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/AAV/Hatch.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Hatch',orientation=(1,0,0,-1.57),position=(0,3,0)),
    Group(
      children=[
      Transform(DEF='FullHatchWithHinges',scale=(2,2,2),
        children=[
        Transform(DEF='FullHatch',scale=(1.5,1.5,1.5),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='OliveDrab',diffuseColor=(0.15,0.66,0.2))),
            geometry=Extrusion(creaseAngle=1,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.16,0.16),(0.16,0.16),(0.16,0.16),(0.155,0.155),(0.15,0.15),(0.13,0.13),(0.12,0.12),(0.1,0.1),(0.07,0.07),(0.02,0.02)],spine=[(0,0,0),(0,0.02,0),(0,0.04,0),(0,0.05,0),(0,0.06,0),(0,0.07,0),(0,0.08,0),(0,0.09,0),(0,0.09025,0),(0,0.090125,0)]))]),
        Transform(DEF='TurretHatchHinges',rotation=(0,1,0,1.57),translation=(-0.015,-0.01,-0.275),
          children=[
          Transform(rotation=(1,0,0,1.57),translation=(0,0.04,-0.08),
            children=[
            Shape(
              geometry=Cylinder(height=0.025,radius=0.04),
              appearance=Appearance(
                material=Material(USE='OliveDrab'))),
            Transform(translation=(-0.09,0,-0.01),
              children=[
              Shape(
                appearance=Appearance(
                  material=Material(USE='OliveDrab')),
                geometry=Box(size=(0.125,0.025,0.04)))]),
            Transform(translation=(0,0.175,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.025,radius=0.04),
                appearance=Appearance(
                  material=Material(USE='OliveDrab'))),
              Transform(translation=(-0.09,0,-0.01),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(USE='OliveDrab')),
                  geometry=Box(size=(0.125,0.025,0.04)))])]),
            Transform(translation=(0,0.0875,0),
              children=[
              Shape(
                geometry=Cylinder(height=0.175,radius=0.03),
                appearance=Appearance(
                  material=Material(USE='OliveDrab')))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Hatch.py")
