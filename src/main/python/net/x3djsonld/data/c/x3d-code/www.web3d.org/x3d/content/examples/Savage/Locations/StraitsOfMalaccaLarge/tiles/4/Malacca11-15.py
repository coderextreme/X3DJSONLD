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
        texture=ImageTexture(url=['../../images/4/Malacca11-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.369293689925194,107.97275072012073,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[2,2,2,2,3,1,2,2,2,3,2,2,2,2,1,0,1,2,2,1,2,1,2,2,3,2,3,3,2,3,2,1,3,1,1,3,3,2,2,1,0,0,1,3,0,1,1,2,3,3,2,4,2,5,1,2,2,2,3,2,2,3,2,1,0,0,1,2,1,2,3,2,3,3,2,1,2,1,2,1,2,1,2,1,3,1,0,0,1,1,1,2,2,2,3,3,1,5,2,2,2,2,2,2,2,2,2,1,2,2,0,1,89,1,3,1,1,2,3,3,3,3,1,2,1,2,2,1,0,1,3,2,2,0,20,124,1,2,2,4,1,2,2,2,2,3,2,2,2,0,3,1,0,0,0,0,3,0,7,100,1,35,2,1,0,1,2,2,1,3,1,0,2,0,1,1,2,1,0,0,62,51,31,4,1,0,2,0,2,1,3,2,3,1,1,5,2,0,1,0,4,0,3,22,2,18,1,0,3,0,0,1,0,3,2,1,0,2,4,2,1,4,0,2,0,22,10,25,32,2,3,2,0,0,1,0,1,3,1,1,2,1,1,3,0,21,15,12,32,40,20,14,1,1,0,1,0,0,1,4,1,3,2,3,0,1,12,20,25,28,35,29,14,3,0,2,1,2,0,1,0,1,0,0,2,0,0,6,20,35,35,39,35,49,850,19,1,1,1,0,0,0,7,0,0,0,0,0,1,18,22,46,54,121,61,67,9,1,0,0,0,0,1,4,0,0,2,0,-2,0,3,-1,6,35,55,110,36,4,1,1,0,0,1,0,0,0,0,0,0,1,0,0,0,2,0,1,59,73,8,1,1,1,0,0,1,1,4,0,0,2,1,3,1,1,2,1,0,1,4,61,2,0,1,2,3,0,2,1,0,0,2,0,-1,1,1,4,1,1,0,2,2,0,2,1,1,1,1,0,2,0,1,0,0,0,0,0,0,0,0,2,0,0,0,1,2,2,3,2,1,1,0,-1,3,1,0,5,0,0,-1,-3,1,0,1,1,1,2,0,2,2,2,3,1,6,1,2,0,0,5,0,0,-7,0,2,0,1,2,1,1,2,2,2,2,3,0,2,1,1,1,0,1,0,0,0,-1],
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
