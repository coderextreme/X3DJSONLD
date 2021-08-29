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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='RotorDisk.x3d',name='title'),
    meta(content='This file defines a rotor disk that is inlined to create the main rotor group for a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original rotordisk.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='Del Beilstein',name='contributor'),
    meta(content='1 January 2019',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/RotorDisk.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0.0),(0.4,0.25,0.2),(0.6,0.60,0.6)],skyAngle=[0.785,1.571],skyColor=[(0.0,0.2,0.7),(0.0,0.5,1.0),(1.0,1.0,1.0)]),
    Group(
      children=[
      Transform(DEF='MAIN_ROTOR',
        #  No rotation or translation, used to group for animation 
        children=[
        Transform(
          children=[
          Shape(DEF='SHAFT_SHAPE',
            appearance=Appearance(DEF='GRAY',
              material=Material(diffuseColor=(0.75,0.75,0.75))),
            geometry=Cylinder(bottom=False,height=1.50,radius=0.08,top=False)),
          Transform(translation=(0,-.5,0),
            children=[
            Shape(DEF='Rubber_boot',
              geometry=Cylinder(height=.4,radius=.14),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,0)))),
            Transform(translation=(0,.1,0),
              children=[
              Shape(
                geometry=Cylinder(height=.3,radius=.12),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))))]),
            Transform(translation=(0,.15,0),
              children=[
              Shape(
                geometry=Cylinder(height=.3,radius=.1),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))))]),
            Transform(translation=(0,-.05,0),
              children=[
              Shape(
                geometry=Cylinder(height=.3,radius=.16),
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))))])])]),
        Transform(
          children=[
          Shape(DEF='ROTOR_DISK_SHAPE',
            appearance=Appearance(DEF='SEMI_TRANSPARENT_WHITE',
              material=Material(diffuseColor=(1.0,1.0,1.0),transparency=0.5)),
            geometry=Cylinder(height=0.04,radius=5.5))]),
        TimeSensor(DEF='CLOCK',cycleInterval=2.0,loop=True),
        OrientationInterpolator(DEF='MAIN_ROTOR_PATH',key=[0.0,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.142)])])]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='MAIN_ROTOR_PATH'),
    ROUTE(fromField='value_changed',fromNode='MAIN_ROTOR_PATH',toField='set_rotation',toNode='MAIN_ROTOR')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RotorDisk.py")
