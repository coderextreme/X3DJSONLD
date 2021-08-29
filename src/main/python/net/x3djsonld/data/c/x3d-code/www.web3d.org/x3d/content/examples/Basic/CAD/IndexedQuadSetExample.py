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

newModel=X3D(profile='CADInterchange',version='3.1',
  head=head(
    children=[
    component(level=2,name='CADGeometry'),
    meta(content='IndexedQuadSetExample.x3d',name='title'),
    meta(content='Simple IndexedQuadSet example.',name='description'),
    meta(content='Andrew Grieve, Don Brutzman',name='creator'),
    meta(content='15 October 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='create similar test for QuadSet',name='TODO'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/CAD/IndexedQuadSetExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='IndexedQuadSetExample.x3d'),
    NavigationInfo(type=["EXAMINE"]),
    Viewpoint(DEF='Side',description='IndexedQuadSet side view'),
    Viewpoint(DEF='Front',description='IndexedQuadSet front view',orientation=(0,1,0,1.57),position=(10,0,0)),
    Viewpoint(DEF='Top',description='IndexedQuadSet top view',orientation=(1,0,0,-1.57),position=(0,10,0)),
    Transform(scale=(2,2,2),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=IndexedQuadSet(ccw=True,colorPerVertex=True,index=[0,3,2,1,4,5,6,7,2,7,9,8,2,3,4,7],normalPerVertex=True,solid=True,
          coord=Coordinate(point=[(-1.5,0,0),(-1.5,1,-1),(-.5,1,-1),(-.5,0,0),(0.5,0,0),(1.5,0,0),(1.5,1,-1),(0.5,1,-1),(-0.5,2,-1),(0.5,2,-1)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for IndexedQuadSetExample.py")
