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
        texture=ImageTexture(url=['../../images/4/Malacca14-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(6.391418833468429,92.8115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[-99,-99,-99,-99,5,3,1,6,7,4,3,3,3,3,1,3,2,2,0,0,-1,2,-99,-99,-99,-99,2,5,3,0,2,4,5,0,2,2,1,0,0,2,0,0,1,0,-99,-99,-99,-99,1,2,4,5,4,6,6,5,2,2,1,1,1,2,3,0,1,3,-99,-99,-99,-99,5,3,5,5,4,3,4,4,5,3,3,0,4,0,2,5,1,1,-99,-99,-99,-99,1,7,2,6,4,7,5,3,3,4,2,1,4,2,2,0,1,1,-99,-99,-99,-99,3,4,4,3,4,1,3,3,2,2,2,3,0,1,5,5,2,0,-99,-99,-99,-99,3,3,5,5,2,4,3,2,3,2,4,1,2,1,3,2,6,3,-99,-99,-99,-99,4,3,3,4,6,3,3,3,2,2,2,2,2,1,0,6,3,0,-99,-99,-99,-99,3,3,4,3,3,3,3,3,3,2,1,3,3,0,2,2,1,1,-99,-99,-99,-99,4,4,3,4,2,2,2,3,3,3,3,2,1,2,2,2,32,35,-99,-99,-99,-99,4,4,5,3,3,3,3,2,3,2,2,3,2,3,1,0,12,34,-99,-99,-99,-99,3,4,3,4,4,4,3,4,4,2,2,2,1,3,2,16,76,45,-99,-99,-99,-99,4,5,4,5,3,5,3,4,2,1,2,1,1,3,3,22,40,39,-99,-99,-99,-99,6,6,5,4,4,2,2,1,0,1,3,2,3,5,7,46,96,68,-99,-99,-99,-99,4,5,7,5,4,6,2,1,0,1,2,3,5,2,57,173,75,88,-99,-99,-99,-99,4,5,4,6,5,3,3,2,3,2,3,1,5,10,31,116,72,112,-99,-99,-99,-99,5,3,4,4,4,5,4,3,2,2,1,2,1,43,40,74,283,221,-99,-99,-99,-99,4,4,5,3,4,4,4,4,1,2,1,1,2,2,35,129,180,248,-99,-99,-99,-99,3,3,3,5,3,1,4,6,1,1,2,3,2,2,93,4,91,189,-99,-99,-99,-99,3,2,2,2,2,8,1,1,0,2,4,2,3,114,0,0,2,2,-99,-99,-99,-99,2,2,2,1,-4,6,4,6,1,1,4,3,1,72,102,0,1,0,-99,-99,-99,-99,4,2,0,0,-3,2,3,5,4,0,7,3,0,76,152,0,1,2],
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
