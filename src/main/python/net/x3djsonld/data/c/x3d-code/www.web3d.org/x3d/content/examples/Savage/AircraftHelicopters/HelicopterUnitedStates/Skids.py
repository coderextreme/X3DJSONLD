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
    meta(content='Skids.x3d',name='title'),
    meta(content='This file defines skids that are inlined to create a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original skids.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='12 January 2001',name='created'),
    meta(content='26 October 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Skids.x3d',name='identifier'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/SkidTube.wrl',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(0.0,0.0,1.2),
        children=[
        Inline(DEF='SKID',url=["SkidTube.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/SkidTube.wrl"])]),
      Transform(rotation=(1.0,0.0,0.0,5.498),translation=(1.1,0.3,0.9),
        children=[
        Shape(DEF='SUPPORT',
          appearance=Appearance(DEF='GRAY',
            material=Material(diffuseColor=(0.5,0.5,0.5))),
          geometry=Cylinder(bottom=False,height=0.7,radius=0.07,top=False))]),
      Transform(rotation=(1.0,0.0,0.0,5.498),translation=(-0.7,0.3,0.9),
        children=[
        Shape(USE='SUPPORT')]),
      Transform(translation=(0.0,0.0,-1.2),
        children=[
        Inline(USE='SKID')]),
      Transform(rotation=(1.0,0.0,0.0,0.785),translation=(1.1,0.3,-0.9),
        children=[
        Shape(USE='SUPPORT')]),
      Transform(rotation=(1.0,0.0,0.0,0.785),translation=(-0.7,0.3,-0.9),
        children=[
        Shape(USE='SUPPORT')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Skids.py")
