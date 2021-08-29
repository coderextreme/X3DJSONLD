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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca7-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.6602065014657854,98.87600028804829,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[0,2,2,11,1,1,2,1,1,1,25,-1,-1,2,10,10,4,-1,-3,3,6,4,0,0,0,1,1,2,-1,5,3,1,-11,-1,-1,-1,2,10,-7,3,-1,-3,3,5,0,0,0,1,2,0,5,3,0,0,1,-11,-1,-1,-1,2,2,-6,4,-1,-3,0,3,0,0,2,-1,5,3,0,0,0,0,1,-11,-1,-1,9,-2,2,-7,3,-1,9,2,4,6,-4,-4,-4,0,0,0,0,0,0,1,-11,-1,2,9,-1,2,-6,4,4,2,2,1,-4,-4,3,1,0,0,0,0,0,0,1,-11,1,2,8,-1,2,-6,0,3,1,0,-4,3,1,0,0,0,0,0,0,0,0,7,0,1,2,9,-2,1,-6,1,1,1,-1,1,0,0,0,0,0,0,0,-1,-10,4,6,0,1,2,9,0,1,0,0,2,0,0,0,0,0,0,0,0,-1,-11,-13,0,4,6,0,1,1,8,6,1,0,1,7,-2,0,8,0,0,0,-1,-10,-13,0,2,0,4,6,0,8,7,7,1,1,3,3,0,27,8,8,0,-1,-10,-13,0,2,1,0,0,4,6,4,8,9,2,-7,4,0,6,5,27,-8,8,1,-13,0,2,1,0,-2,0,0,3,4,9,10,2,7,0,-3,0,0,1,1,0,-4,0,-2,1,0,-2,0,11,0,8,8,11,11,1,5,2,2,0,16,3,0,-4,2,0,-1,0,1,0,0,13,11,5,8,23,26,3,2,3,0,-9,4,2,0,3,0,0,0,1,2,2,0,9,3,6,22,66,79,2,3,8,-1,25,0,8,1,2,1,1,1,0,0,0,3,20,3,17,47,122,177,1,2,4,1,17,3,-3,1,1,1,3,0,1,0,4,5,6,10,13,56,137,166,3,0,1,1,1,4,3,5,0,1,2,10,4,26,13,10,20,14,17,41,114,116,1,1,0,10,-1,0,10,0,20,0,1,3,6,6,14,15,18,13,23,45,354,244,1,2,0,-4,2,4,28,21,11,21,29,26,27,20,24,28,53,215,184,163,678,184,-1,1,3,7,2,0,27,58,33,35,19,43,58,53,60,71,123,166,525,650,465,739,-1,1,15,-4,2,-4,28,60,41,34,19,45,61,53,63,82,129,207,610,680,495,725],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(0.3471685463819618,100.89750038406439,0),geoSystem=['GDC'])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
