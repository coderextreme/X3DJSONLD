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
    meta(content='TailRotor.x3d',name='title'),
    meta(content='This file defines a tail rotor that is inlined to create the tail boom of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original tailrotor2.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='15 March 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/TailRotor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(DEF='TailRotor',
        children=[
        Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.0,-0.14),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.75,0.75,0.75))),
            geometry=Cylinder(height=0.35,radius=0.02))]),
        Transform(translation=(-0.05,0.0,0.0),
          children=[
          Shape(DEF='Blade',
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))),
            geometry=Extrusion(creaseAngle=0.8,crossSection=[(0.00,0.00),(0.03,-0.005),(0.05,-0.007),(0.07,-0.009),(0.09,-0.01),(0.11,-0.009),(0.12,-0.007),(0.13,-0.005),(0.135,0.0),(0.13,0.005),(0.12,0.007),(0.11,0.009),(0.09,0.01),(0.07,0.009),(0.05,0.007),(0.03,0.005),(0,0)],solid=False,spine=[(-0.015,0.02,0.0),(-0.015,0.82,0.0)]))]),
        Transform(rotation=(1,0,0,3.14),translation=(0.05,0,0),
          children=[
          Transform(rotation=(0,1,0,3.14),
            children=[
            Shape(USE='Blade')])])]),
      TimeSensor(DEF='Clock',loop=True),
      OrientationInterpolator(DEF='TailRotorPath',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.00,0.00,1.00,0.00),(0.00,0.00,1.00,1.57),(0.00,0.00,1.00,3.14),(0.00,0.00,1.00,4.712),(0.00,0.00,1.00,6.284)])]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='TailRotorPath'),
    ROUTE(fromField='value_changed',fromNode='TailRotorPath',toField='set_rotation',toNode='TailRotor')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TailRotor.py")
