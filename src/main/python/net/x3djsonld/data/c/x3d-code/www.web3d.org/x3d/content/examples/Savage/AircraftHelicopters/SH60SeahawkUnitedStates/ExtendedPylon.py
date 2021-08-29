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
    meta(content='ExtendedPylon.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='21 March 2001',name='created'),
    meta(content='27 April 2004',name='modified'),
    meta(content='Extended pylon for torpedo, fuel tank and helfire mod. Configurations include fuel tank and torpedo or helfire four missile rack. Possible future missions include transport of AUV into hostile waters for recon and mapping.',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/ExtendedPylon.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(0,1,0,3.2),
        children=[
        Transform(rotation=(1,0,0,1.57),
          children=[
          Group(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=IndexedFaceSet(coordIndex=[0,7,2,3,6,5,-1,0,5,8,3,2,9,-1,0,9,1,7,-1,9,2,7,1,-1,5,6,3,8,-1],creaseAngle=10,
                coord=Coordinate(point=[(0.0,0.0,0.0),(.3,0,0),(1,0,0),(1,5,0),(.3,5.0,0),(0,5,0),(.3,5,.1),(.3,0,.1),(.3,5,-.1),(.3,0,-.1)])))])]),
        Transform(rotation=(1,0,0,1.57),scale=(1,.6,1),translation=(.5,0,0),
          children=[
          Transform(rotation=(0,1,0,3.2),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=IndexedFaceSet(coordIndex=[0,7,2,3,6,5,-1,0,5,8,3,2,9,-1,0,9,1,7,-1,9,2,7,1,-1,5,6,3,8,-1],creaseAngle=10,
                coord=Coordinate(point=[(0.0,0.0,0.0),(.3,0,0),(2,.5,0),(2,4,0),(.3,5.0,0),(0,5,0),(.3,5,.1),(.3,0,.1),(.3,5,-.1),(.3,0,-.1)])))])])])]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtendedPylon.py")
