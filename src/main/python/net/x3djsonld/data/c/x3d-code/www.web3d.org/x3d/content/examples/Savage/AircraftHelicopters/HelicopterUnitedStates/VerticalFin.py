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
    meta(content='VerticalFin.x3d',name='title'),
    meta(content='This file defines a vertical fin that is inlined to create the tail boom of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original verticalfin.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='14 March 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/VerticalFin.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='VERTICAL_FIN',
      children=[
      Transform(rotation=(0.0,0.0,1.0,1.57),
        children=[
        Shape(
          appearance=Appearance(DEF='LIGHT_GREEN',
            material=Material(diffuseColor=(0.0,0.3,0.0))),
          #  IFS coordIndex sets: right, left, bottom, lower front, upper front, top, lower back, upper back 
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,-1,6,11,10,9,8,7,-1,0,6,7,1,-1,1,7,8,2,-1,2,8,9,3,-1,3,9,10,4,-1,0,5,11,6,-1,5,4,10,11,-1],
            coord=Coordinate(point=[(0.0,0.0,0.0),(0.2,0.0,0.0),(0.35,0.325,0.0),(0.2,0.7,0.0),(0.0,0.7,0.0),(0.1,0.3,0.0),(0.0,0.0,-0.04),(0.2,0.0,-0.02),(0.35,0.325,-0.02),(0.2,0.7,-0.02),(0.0,0.7,-0.04),(0.1,0.3,-0.04)]))),
        Transform(rotation=(0.0,0.0,1.0,0.2),translation=(0.01,0.73,-0.02),
          children=[
          Shape(DEF='ANTENNA',
            appearance=Appearance(DEF='LIGHT_GRAY',
              material=Material(diffuseColor=(0.75,0.75,0.75))),
            geometry=Cylinder(height=0.07,radius=0.01))]),
        Transform(rotation=(0.0,0.0,1.0,0.2),translation=(0.17,0.73,-0.01),
          children=[
          Shape(USE='ANTENNA')]),
        Transform(rotation=(0.0,0.0,1.0,0.2),translation=(0.08,0.73,-0.015),
          children=[
          Shape(USE='ANTENNA')]),
        Transform(rotation=(0.0,1.0,0.0,-0.07),
          children=[
          Transform(rotation=(0.0,0.0,1.0,4.712),translation=(0.085,0.76,-0.02),
            children=[
            Shape(
              appearance=Appearance(USE='LIGHT_GRAY'),
              geometry=Cylinder(height=0.18,radius=0.01))])]),
        Transform(rotation=(0.0,0.0,1.0,5.0),translation=(0.06,-0.027,-0.01),
          children=[
          Shape(
            appearance=Appearance(USE='LIGHT_GRAY'),
            geometry=Cylinder(height=0.3,radius=0.01))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for VerticalFin.py")
