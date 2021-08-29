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
        texture=ImageTexture(url=['../../images/4/Malacca7-11.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-0.6602065014657854,103.92975052808853,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[2,3,2,2,1,2,1,1,1,3,3,2,3,5,2,4,2,3,3,4,2,3,1,3,3,2,1,0,0,2,1,25,2,1,4,7,4,4,3,2,2,2,1,2,2,3,3,4,2,2,0,0,0,33,6,5,8,6,3,6,4,3,2,2,1,4,2,2,2,2,2,2,1,1,0,30,9,32,27,4,3,3,3,3,2,3,4,3,1,1,2,2,2,2,2,17,10,22,50,91,60,11,3,4,4,4,4,4,4,3,0,2,2,2,2,1,2,3,9,5,67,68,212,44,2,3,6,4,5,7,7,5,2,1,1,1,2,2,10,1,10,4,3,55,94,1,2,3,3,5,4,2,2,6,1,2,2,2,2,4,1,0,2,0,-5,10,3,5,1,0,1,4,2,6,3,4,1,1,2,3,3,3,2,2,2,0,34,32,1,4,3,3,1,1,3,39,0,8,1,1,2,1,2,3,3,3,2,5,2,26,4,9,7,0,1,13,23,20,27,16,2,2,1,1,3,3,2,2,2,2,2,152,300,763,17,7,30,17,4,29,0,0,2,2,2,2,1,1,2,4,4,1,0,1,115,514,122,43,34,5,3,0,8,0,2,2,2,3,3,1,2,2,1,2,0,0,-1,24,29,3,3,1,2,0,7,8,1,2,2,2,2,3,1,0,2,0,0,0,35,36,24,2,4,5,1,-3,3,7,2,1,2,2,1,0,2,1,0,0,0,0,6,1,4,3,6,0,6,6,0,4,3,1,2,0,2,1,0,2,4,2,2,18,5,2,2,19,2,2,9,0,5,7,4,3,3,2,0,0,2,1,1,0,16,15,-1,2,15,0,5,5,6,7,4,3,2,2,3,4,3,1,-1,2,72,0,13,7,4,10,0,2,2,1,9,5,4,3,1,2,3,2,2,4,5,3,0,2,3,3,0,3,5,4,2,5,4,3,5,6,3,3,2,3,4,5,5,5,0,7,5,3,39,1,2,6,2,7,2,1,1,2,0,0,2,3,3,3,3,4,5,25,55,0,4,5,1,0,4,3,8,3,4,3,0,0,3,2,1,4,5,4,10,20,23,1,2,6,1,0,2,4,5,5,4,3],
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
