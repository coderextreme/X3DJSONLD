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
    meta(content='CockpitTop.x3d',name='title'),
    meta(content='This file defines a cockpit top that is inlined to create the cockpit of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original cockpittop.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='9 January 2001',name='created'),
    meta(content='26 September 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitTop.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(1,0,0,3.1415),translation=(0,.6,1.3),
      children=[
      Shape(
        appearance=Appearance(DEF='GREEN',
          material=Material(diffuseColor=(0.0,0.2,0.05))),
        geometry=Extrusion(beginCap=False,convex=False,creaseAngle=1.3,crossSection=[(-0.675,.05),(-0.575,0),(0.575,0),(0.675,.05)],endCap=False,solid=False,spine=[(0.0,0.0,0.0),(0.0,0.6,0.0)]))]),
    Transform(
      children=[
      Transform(center=(0,0,0.45),rotation=(1.0,0.0,0.0,0.8),translation=(0.0,0.629,0.81),
        children=[
        Shape(DEF='DOOR_BAR',
          appearance=Appearance(USE='GREEN'),
          geometry=Box(size=(0.05,0.02,1))),
        Transform(rotation=(0,0,1,-0.456),
          children=[
          Transform(rotation=(1,0,0,-0.256),translation=(0.59,0.13,-0.004),
            children=[
            Shape(
              appearance=Appearance(USE='GREEN'),
              geometry=Box(size=(0.04,0.02,1)))])]),
        Transform(rotation=(0,0,1,0.456),
          children=[
          Transform(rotation=(1,0,0,-0.256),translation=(-.59,0.13,-0.004),
            children=[
            Shape(
              appearance=Appearance(USE='GREEN'),
              geometry=Box(size=(0.04,0.02,1)))])])]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.4,1.3),
        children=[
        Transform(rotation=(0.0,1.0,0.0,1.57),
          children=[
          Shape(
            appearance=Appearance(USE='GREEN'),
            #  right side, left side, back, front 
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1,5,9,8,7,6,-1,0,4,9,5,-1,4,3,8,9,-1,1,6,7,2,-1,7,8,3,2,-1],
              coord=Coordinate(point=[(0.0,0.0,0.0),(0.15,0.0,0.0),(0.1,0.1,0.0),(0.5,0.4,0.0),(0.0,0.1,0.0),(0.0,0.0,-0.03),(0.15,0.0,-0.03),(0.1,0.1,-0.03),(0.5,0.4,-0.03),(0.0,0.1,-0.03)])))])]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.15,0.5,1.3),
        children=[
        Transform(DEF='ANTENNA_BASE_TRANSFORM',rotation=(0.0,1.0,0.0,1.57),
          children=[
          Shape(DEF='ANTENNA_BASE',
            appearance=Appearance(USE='GREEN'),
            #  right side, left side, back, front 
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,4,7,6,5,-1,0,3,7,4,-1,1,5,6,2,-1],
              coord=Coordinate(point=[(0.0,0.0,0.0),(0.1,0.0,0.0),(0.075,0.5,0.0),(0.025,0.5,0.0),(0.0,0.0,-0.04),(0.1,0.0,-0.04),(0.075,0.5,-0.04),(0.025,0.5,-0.04)])))]),
        Transform(DEF='ANTENNA_TIP_TRANSFORM',rotation=(1.0,0.0,0.0,1.57),translation=(-0.020,0.47,0.1),
          children=[
          Shape(DEF='ANTENNA_TIP',
            appearance=Appearance(USE='GREEN'),
            geometry=Cone(bottomRadius=0.015,height=0.3))])]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(-0.15,0.5,1.3),
        children=[
        Transform(USE='ANTENNA_BASE_TRANSFORM'),
        Transform(USE='ANTENNA_TIP_TRANSFORM')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CockpitTop.py")
