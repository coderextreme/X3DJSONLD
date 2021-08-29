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
        texture=ImageTexture(url=['../../images/4/Malacca11-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(3.369293689925194,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[0,0,2,2,1,1,0,0,2,0,1,1,1,0,1,1,2,1,0,2,0,1,0,1,0,0,1,1,2,2,0,2,2,1,1,2,1,1,1,1,1,0,1,1,0,0,1,0,0,0,2,1,1,1,1,1,1,1,1,0,1,2,0,2,0,4,0,0,0,1,0,0,0,1,3,1,1,0,1,2,1,0,1,1,2,2,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,1,0,0,1,2,3,0,1,1,0,0,2,1,1,0,0,0,0,1,1,1,1,0,1,2,1,1,1,1,1,2,0,1,1,1,1,0,3,-1,0,0,0,0,1,1,2,2,2,1,2,1,0,1,1,0,1,1,1,1,0,2,2,0,0,1,1,2,1,1,1,1,1,0,0,1,1,0,1,2,1,0,0,2,0,-2,0,2,2,1,2,1,1,1,0,2,0,0,1,1,1,1,0,1,1,0,5,1,1,0,0,1,0,0,1,1,1,0,1,3,2,0,0,1,0,0,0,1,1,0,0,0,0,0,1,0,0,1,0,5,6,6,0,0,0,0,1,1,0,1,2,1,0,0,1,0,0,0,1,-2,0,6,9,7,1,0,0,1,2,0,1,0,-1,0,0,0,1,0,0,0,1,6,5,4,6,6,0,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,1,7,5,7,0,6,-99,-99,-99,2,1,1,0,1,2,1,2,0,0,1,1,0,1,0,9,5,8,8,-99,-99,-99,2,0,1,1,2,3,0,0,-2,0,1,0,-3,2,0,4,6,3,3,-99,-99,-99,0,1,1,1,2,2,1,0,0,1,0,0,0,1,-13,7,8,11,15,-99,-99,-99,0,0,0,0,0,1,2,0,0,0,0,2,11,-7,4,4,11,9,10,-99,-99,-99,2,2,0,2,1,2,2,0,0,0,0,8,19,5,14,20,16,16,13,-99,-99,-99,1,2,1,2,1,0,0,0,-1,0,18,10,49,2,11,16,18,12,15,-99,-99,-99,4,2,2,1,0,0,0,1,0,0,0,5,12,3,14,16,23,13,22,-99,-99,-99,4,2,2,1,0,0,0,0,0,0,0,11,11,3,16,15,23,13,19],
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
