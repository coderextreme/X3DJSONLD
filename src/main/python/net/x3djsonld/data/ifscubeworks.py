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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(name='title',content='ifscubeworks.x3d'),
    meta(name='identifier',content='http://coderextreme.net/X3DJSONLD/src/main/data/ifscubeworks.x3d'),
    meta(name='description',content='Template for an Indexed Face Set'),
    meta(name='creator',content='John Carlson'),
    meta(name='created',content='4 April 2017')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        geometry=IndexedFaceSet(DEF='IndexedFaceSet',coordIndex=[0,0,1,-1,0,1,1,-1,2,2,3,3,-1,0,3,3,0,-1,0,3,2,1,-1,1,2,2,1,-1,1,2,3,0,-1],normalIndex=[0,0,1,2,3,4,5],normalPerVertex=False,colorIndex=[0,0,0,-1,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,-1],
          coord=Coordinate(point=[(0,0,1),(0,1,1),(1,1,1),(1,0,1)]),
          normal=Normal(vector=[(1,0,0),(-1,0,0),(0,1,0),(0,0,-1),(0,-1,0),(0,0,1)]),
          color=Color(color=[(0,1,0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for ifscubeworks.py")