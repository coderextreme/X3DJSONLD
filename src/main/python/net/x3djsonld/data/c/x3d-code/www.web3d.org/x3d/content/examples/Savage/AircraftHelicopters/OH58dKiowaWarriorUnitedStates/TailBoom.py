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
    meta(content='TailBoom.x3d',name='title'),
    meta(content='This file defines the tail boom part of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from original tailboom3.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='Del Beilstein',name='contributor'),
    meta(content='1 January 2019',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/TailBoom.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='TAILBOOM',
      children=[
      Shape(DEF='TAILBOOM_SHAPE',
        appearance=Appearance(DEF='GREEN',
          material=Material(diffuseColor=(0.0,0.2,0.05))),
        geometry=Extrusion(convex=False,creaseAngle=0.8,crossSection=[(0.5,0.0),(0.46,-0.19),(0.355,-0.355),(0.19,-0.46),(0.0,-0.5),(-0.19,-0.46),(-0.355,-0.355),(-0.46,-0.19),(-0.5,-0.0),(-0.46,0.19),(-0.355,0.355),(-0.19,0.46),(0.0,0.50),(0.19,0.46),(0.355,0.355),(0.46,0.19),(0.50,0.0)],endCap=False,scale=[(0.10,0.10),(0.15,0.15),(0.20,0.20),(0.25,0.25),(0.30,0.30),(0.35,0.35),(0.40,0.40),(0.45,0.45),(0.475,0.475),(0.50,0.50),(0.525,0.525),(0.55,0.55),(0.565,0.565),(0.575,0.575),(0.58,0.58),(0.60,0.60)],solid=False,spine=[(0.00,0.00,0.00),(0.00,0.05,0.00),(0.00,0.10,0.00),(0.00,0.20,0.00),(0.00,0.30,0.00),(0.00,0.40,0.00),(0.00,0.80,0.00),(0.00,1.00,0.00),(0.00,2.00,0.00),(0.00,3.00,0.00),(0.00,3.25,0.00),(0.00,3.50,0.00),(0.00,3.75,0.00),(0.00,4.00,0.00),(0.00,4.25,0.00),(0.00,4.50,0.00)])),
      Shape(DEF='AC_LIGHT_SHAPE',
        appearance=Appearance(DEF='BALL_COLOR',
          material=Material(emissiveColor=(1.0,1.0,1.0))),
        geometry=Sphere(radius=.04)),
      Transform(DEF='GEAR_BOX',translation=(-0.23,0.4,0.0),
        children=[
        Shape(DEF='GEAR_BOX_SHAPE',
          appearance=Appearance(DEF='BLACK',
            material=Material(diffuseColor=(0.0,0.0,0.0))),
          geometry=Box(size=(0.17,0.37,0.15)))]),
      Transform(DEF='HF_ANTENA',translation=(0.35,2.2,0.0),
        children=[
        Inline(url=["HfAntenna.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/HfAntenna.x3d","HfAntenna.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/HfAntenna.wrl"])]),
      Transform(DEF='TAIL_ROTOR_DRIVE_SHAFT',center=(0.0,2.2,0.0),rotation=(0.0,0.0,1.0,0.03),translation=(-0.325,2.2,0.0),
        children=[
        Inline(url=["TailRotorDriveShaft.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/TailRotorDriveShaft.x3d","TailRotorDriveShaft.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/TailRotorDriveShaft.wrl"])]),
      Transform(DEF='HORIZONTAL_STABILIZER',rotation=(0.0,1.0,0.0,1.57),scale=(1,.3,1),translation=(0.0,1.4,0.0),
        children=[
        Inline(url=["HorizontalStabilizer.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/HorizontalStabilizer.x3d","HorizontalStabilizer.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/HorizontalStabilizer.wrl"])]),
      Transform(DEF='VERTICAL_FIN',rotation=(1.0,0.0,0.0,-0.09),scale=(2.5,2.5,2.5),translation=(0.7,0.125,0.3),
        children=[
        Inline(url=["VerticalFin.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/VerticalFin.x3d","VerticalFin.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/VerticalFin.wrl"])]),
      Transform(rotation=(0.0,1.0,0.0,3.142),translation=(-0.2,0.4,-0.35),
        children=[
        Inline(url=["TailRotor.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/TailRotor.x3d","TailRotor.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/TailRotor.wrl"])]),
      Transform(rotation=(0,0,1,1.57),translation=(-0.6,3.6,0.0),
        children=[
        Shape(DEF='ALQ_Cylinder',
          geometry=Cylinder(height=.5,radius=.28),
          appearance=Appearance(
            material=Material(diffuseColor=(0.9,0.9,0.9),shininess=0.7))),
        Shape(DEF='ALQWindowPanes',
          geometry=Cylinder(height=.01,radius=.285),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0)))),
        Transform(translation=(0,0.085,0),
          children=[
          Shape(USE='ALQWindowPanes')]),
        Transform(translation=(0,0.17,0),
          children=[
          Shape(USE='ALQWindowPanes')]),
        Transform(translation=(0,-0.085,0),
          children=[
          Shape(USE='ALQWindowPanes')]),
        Transform(translation=(0,-0.17,0),
          children=[
          Shape(USE='ALQWindowPanes')]),
        Transform(
          children=[
          Shape(DEF='ALQVerticalPanes',
            geometry=Box(size=(0.01,.5,.57)),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0))))]),
        Transform(rotation=(0,1,0,0.785),
          children=[
          Shape(USE='ALQVerticalPanes')]),
        Transform(rotation=(0,1,0,1.57),
          children=[
          Shape(USE='ALQVerticalPanes')]),
        Transform(rotation=(0,1,0,2.355),
          children=[
          Shape(USE='ALQVerticalPanes')]),
        Transform(rotation=(0,1,0,.393),
          children=[
          Shape(USE='ALQVerticalPanes')]),
        Transform(rotation=(0,1,0,1.178),
          children=[
          Shape(USE='ALQVerticalPanes')]),
        Transform(rotation=(0,1,0,1.962),
          children=[
          Shape(USE='ALQVerticalPanes')]),
        Transform(rotation=(0,1,0,2.748),
          children=[
          Shape(USE='ALQVerticalPanes')]),
        Transform(rotation=(0,1,0,3.138),
          children=[
          Shape(USE='ALQVerticalPanes')]),
        Transform(translation=(0,-.3,0),
          children=[
          Shape(DEF='ALQ_Base',
            geometry=Box(size=(0.575,0.08,0.575)),
            appearance=Appearance(
              material=Material(diffuseColor=(.2,.2,.2))))]),
        Transform(translation=(0,.25,0),
          children=[
          Shape(
            geometry=Cylinder(height=.05,radius=.29),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TailBoom.py")
