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
    meta(content='Pylon.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='LT Terry D. Norbraten, USN',name='contributor'),
    meta(content='18 March 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='Helicopter tail pylon. Tail section of the H60 helicopter which could be folded when in a stored posture such as on the deck of an aircraft carrier.',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Pylon.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=IndexedFaceSet(coordIndex=[9,8,7,6,5,4,3,2,-1,9,2,1,0,-1,0,1,11,10,-1,1,2,12,11,-1,2,3,13,12,-1,3,4,14,13,-1,4,5,6,7,8,9,0,10,19,18,17,16,15,14,-1,10,11,12,18,19,-1,18,12,13,17,-1,17,13,14,15,16,-1,20,14,21,-1,21,14,15,16,17,-1,22,20,21,-1,21,17,22,-1],creaseAngle=1.57,
          coord=Coordinate(point=[(0,0,0),(2.2,0.3,.2),(1.8,1,.2),(3.9,3.1,.2),(3,3.6,.2),(2.5,3.5,.2),(2.2,3.2,.2),(2.4,2.9,.2),(.5,1,.2),(0,1,0),(0,0,.8),(2.2,0.3,.4),(1.8,1,.4),(3.9,3.1,.4),(3,3.6,.4),(2.5,3.5,.4),(2.2,3.2,.4),(2.4,2.9,.4),(.5,1,.6),(0,1,.8),(3.3,3,.4),(2.8,3.2,.8),(2.8,2.8,.4)])))]),
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

print ("python x3d.py load successful for Pylon.py")
