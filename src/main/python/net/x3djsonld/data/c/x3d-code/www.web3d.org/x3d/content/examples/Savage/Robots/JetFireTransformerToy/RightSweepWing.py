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
    meta(content='RightSweepWing.x3d',name='title'),
    meta(content='Right Sweep Wing',name='description'),
    meta(content='Kreg L. Kelly',name='creator'),
    meta(content='22 September 2002',name='created'),
    meta(content='27 March 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Robots/JetFireTransformerToy/RightSweepWing.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.309,1.5702],groundColor=[(0.5,0.3,0.3),(0.5,0.3,0.3),(0.5,0.4,0.4)],skyAngle=[1.309,1.572],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Transform(
      children=[
      Shape(
        #  Main Wing 
        appearance=Appearance(
          material=Material(diffuseColor=(.7,.8,.8))),
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,-1,0,1,9,10,11,12,13,14,15,-1,1,2,9,-1,9,10,3,2,-1,10,11,4,3,-1,11,12,5,4,-1,12,13,6,5,-1,13,14,7,6,-1,14,15,8,7,-1,15,0,8,-1],solid=False,
          coord=Coordinate(point=[(5.72,0,0),(2.035,0,0),(1.705,0.11,-0.55),(0,0.1375,-0.99),(0,0.1375,-1.925),(0.88,0.1375,-1.87),(1.045,0.0275,-2.2),(5.665,0.0275,-1.1),(5.775,0.055,-0.55),(1.705,0,-0.55),(0,0,-0.99),(0,0,-1.925),(0.88,0,-1.87),(1.045,0,-2.2),(5.665,0,-1.1),(5.775,0,-0.55)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RightSweepWing.py")
