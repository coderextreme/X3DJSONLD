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
    meta(content='Head.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='LT Terry D. Norbraten, USN',name='contributor'),
    meta(content='10 March 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='Helicopter main rotor head in horizontal position.',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Head.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.2,.2,.2))),
        geometry=IndexedFaceSet(coordIndex=[14,23,16,15,-1,23,18,17,16,-1,22,24,23,14,13,-1,20,19,18,23,24,-1,24,21,4,3,20,-1,24,22,9,8,21,-1,12,11,10,9,22,13,-1,8,7,6,5,4,21,-1,19,20,3,2,1,0,-1,0,1,2,27,26,25,-1,2,3,28,27,-1,3,4,29,28,-1,4,5,30,29,-1,5,6,7,32,31,30,-1,7,8,33,32,-1,8,9,34,33,-1,9,10,35,34,-1,10,11,12,37,36,35,-1,12,13,38,37,-1,13,14,39,38,-1,14,15,40,39,-1,15,16,17,42,41,40,-1,17,18,43,42,-1,18,19,44,43,-1,19,0,25,44,-1,45,44,25,26,-1,45,26,27,28,-1,49,48,43,44,45,-1,49,45,28,29,46,-1,49,46,33,34,47,-1,49,47,38,39,48,-1,29,30,31,46,-1,46,31,32,33,-1,47,34,35,36,-1,47,36,37,38,-1,48,39,40,41,-1,48,41,42,43,-1],creaseAngle=.9,
          coord=Coordinate(point=[(1.7,0,0),(2.0,0,0),(2.3,0,0),(2.5,0,1),(3,0,1.5),(4,0,1.7),(4,0,2.0),(4,0,2.3),(3,0,2.5),(2.5,0,3),(2.3,0,4.0),(2.0,0,4.0),(1.7,0,4.0),(1.5,0,3),(1,0,2.5),(0,0,2.3),(0,0,2.0),(0,0,1.7),(1,0,1.5),(1.5,0,1),(2,.2,1),(3,.2,2),(2,.2,3),(1,.2,2),(2,.5,2),(1.7,-.5,0),(2.0,-.5,0),(2.3,-.5,0),(2.5,-.5,1),(3,-.5,1.5),(4,-.5,1.7),(4,-.5,2.0),(4,-.5,2.3),(3,-.5,2.5),(2.5,-.5,3),(2.3,-.5,4.0),(2.0,-.5,4.0),(1.7,-.5,4.0),(1.5,-.5,3),(1,-.5,2.5),(0,-.5,2.3),(0,-.5,2.0),(0,-.5,1.7),(1,-.5,1.5),(1.5,-.5,1),(2,-.7,1),(3,-.7,2),(2,-.7,3),(1,-.7,2),(2,-.9,2)])))]),
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

print ("python x3d.py load successful for Head.py")
