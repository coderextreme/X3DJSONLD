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
    meta(content='ColorfulPilotHouse.x3d',name='title'),
    meta(content='Starboard Pilot House with highlighting color for the LCAC.',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='19 June 2001',name='created'),
    meta(content='1 July 2001',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/ColorfulPilotHouse.x3d',name='identifier'),
    meta(content='LCAC Pilot House',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Transform(DEF='Bulkhead',
        children=[
        Shape(
          geometry=Extrusion(convex=False,crossSection=[(0.6,1.3),(0.5,1.3),(0.5,-0.6),(-1.5,-0.6),(-1.5,2.5),(0.5,2.5),(0.5,1.9),(0.6,1.9),(0.6,2.6),(-1.6,2.6),(-1.6,-0.7),(0.6,-0.7),(0.6,1.3)],solid=False,spine=[(0,0.2,0),(0,1,0),(0,2,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.8,0.75,0.8))))]),
      Transform(DEF='BottomBulkhead',
        children=[
        Shape(
          geometry=Extrusion(convex=False,crossSection=[(0.6,1.3),(0.5,1.3),(0.5,-0.6),(-1.5,-0.6),(-1.5,2.5),(0.5,2.5),(0.5,1.3),(0.6,1.3),(0.6,2.6),(-1.6,2.6),(-1.6,-0.7),(0.6,-0.7),(0.6,1.3)],solid=False,spine=[(0,0,0),(0,0.2,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))))]),
      Transform(DEF='TopBulkhead',
        children=[
        Shape(
          geometry=Extrusion(convex=False,crossSection=[(0.6,1.3),(0.5,1.3),(0.5,-0.6),(-1.5,-0.6),(-1.5,2.5),(0.5,2.5),(0.5,1.3),(0.6,1.3),(0.6,2.6),(-1.6,2.6),(-1.6,-0.7),(0.6,-0.7),(0.6,1.3)],solid=False,spine=[(0,2,0),(0,2.2,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0,1,0))))]),
      Transform(DEF='Corners',
        children=[
        Transform(DEF='URDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,2,1.3),
          children=[
          Transform(scale=(0.025,1,0.025),
            children=[
            Shape(DEF='CornerExtrusion',
              geometry=Extrusion(convex=False,crossSection=[(0,0),(0,4),(-0.2,3),(-0.3,2.6),(-0.45,2.2),(-0.6,1.9),(-0.8,1.6),(-1,1.35),(-1.35,1),(-1.6,0.8),(-1.9,0.6),(-2.2,0.45),(-2.6,0.3),(-3,0.2),(-4,0),(0,0)],solid=False,spine=[(0,0,0),(0,0.1,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(1,0,0))))])]),
        Transform(DEF='ULDoorCorner',rotation=(0,0,-1,1.57),translation=(0.5,2,1.9),
          children=[
          Transform(rotation=(0,1,0,3.14),scale=(0.025,1,0.025),
            children=[
            Shape(USE='CornerExtrusion')])]),
        Transform(DEF='LLDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,0.2,1.9),
          children=[
          Transform(rotation=(0,1,0,3.14),scale=(0.025,1,0.025),
            children=[
            Shape(USE='CornerExtrusion')])]),
        Transform(DEF='LRDoorCorner',rotation=(0,0,1,1.57),translation=(0.6,0.2,1.3),
          children=[
          Transform(rotation=(0,1,0,1.57),scale=(0.025,1,0.025),
            children=[
            Shape(USE='CornerExtrusion')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ColorfulPilotHouse.py")
