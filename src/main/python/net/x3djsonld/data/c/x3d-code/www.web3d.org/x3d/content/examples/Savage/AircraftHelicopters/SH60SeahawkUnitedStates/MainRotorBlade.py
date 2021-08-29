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
    meta(content='MainRotorBlade.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='10 March 2001',name='created'),
    meta(content='27 April 2004',name='modified'),
    meta(content='Helicopter main rotor blade in full down position. Single blade created of index face sets. Airfoil and chord dimensions in proportion with actual blade.',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/MainRotorBlade.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,-1,0,10,9,11,-1,0,9,10,-1,11,10,8,-1,3,2,12,6,-1,5,4,12,6,-1,12,2,1,11,-1,7,6,12,11,8,-1,1,0,10,11,-1,10,9,8,-1,3,6,5,4,-1],creaseAngle=.9,
          coord=Coordinate(point=[(0,.5,0),(1.5,0,0),(15.5,.5,0),(16,.75,0),(17,.75,0),(17,1.25,0),(14,1.25,0),(13,1.75,0),(1.5,1.5,0),(0,2,0),(.5,1.0,-.2),(1.5,.5,-.2),(14,.5,-.2)])))]),
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

print ("python x3d.py load successful for MainRotorBlade.py")
