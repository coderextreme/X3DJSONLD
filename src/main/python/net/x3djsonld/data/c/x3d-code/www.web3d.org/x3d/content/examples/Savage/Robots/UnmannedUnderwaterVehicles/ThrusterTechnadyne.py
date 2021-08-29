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
    meta(content='ThrusterTechnadyne.x3d',name='title'),
    meta(content='Don Brutzman and Jeff Weekley',name='creator'),
    meta(content='A thruster is a shrouded propeller used for propulsion or posture control.',name='description'),
    meta(content='15 March 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/ThrusterTechnadyne.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      #  Outer blue casing 
      children=[
      Shape(
        geometry=Extrusion(beginCap=False,creaseAngle=2,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],endCap=False,scale=[(0.09,0.09),(0.08,0.08),(0.07,0.07),(0.08,0.08),(0.09,0.09)],spine=[(-0.08,0,0),(0.08,0,0),(0.08,0,0),(-0.08,0,0),(-0.08,0,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0.7,1)))),
      #  Screw and shaft 
      Group(
        children=[
        Transform(rotation=(0,0,1,1.57079),translation=(.0281,0,0),
          children=[
          Shape(DEF='SCREW_SHAFT',
            appearance=Appearance(DEF='SCREW_APPEARANCE',
              material=Material(diffuseColor=(.226,.197,0))),
            geometry=Cylinder(height=.0762,radius=.008,top=False)),
          Transform(DEF='Motor',translation=(0,-0.1,0),
            children=[
            Shape(
              geometry=Cylinder(height=0.175,radius=0.05),
              appearance=Appearance(
                material=Material(diffuseColor=(0.25,0.3,0.33))))])]),
        Transform(rotation=(0,0,1,1.57079),translation=(-.015,0,0),
          children=[
          Shape(DEF='SHAFT_END_CAP',
            appearance=Appearance(USE='SCREW_APPEARANCE'),
            geometry=Cone(bottom=False,bottomRadius=.008,height=.01))]),
        Transform(DEF='STARBOARD_BLADE',
          children=[
          Transform(rotation=(0,1,0,-.39),
            children=[
            Shape(
              appearance=Appearance(USE='SCREW_APPEARANCE'),
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1,0,7,6,5,4,3,2,1,-1],
                coord=Coordinate(DEF='BLADE_COORDINATES',point=[(0,0,-.00508),(0,.02540,-.02032),(0,.04572,-.01524),(0,.05080,-.00508),(0,.05080,.00508),(0,.04572,.01524),(0,.02540,.02032),(0,0,.00508)])))])]),
        Transform(rotation=(1,0,0,1.57079),
          children=[
          Transform(USE='STARBOARD_BLADE')]),
        Transform(rotation=(1,0,0,3.14159267),
          children=[
          Transform(USE='STARBOARD_BLADE')]),
        Transform(rotation=(1,0,0,-1.57079),
          children=[
          Transform(USE='STARBOARD_BLADE')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ThrusterTechnadyne.py")
