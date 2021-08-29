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
        texture=ImageTexture(url=['../../images/4/Malacca12-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.376668737772939,97.86525024004024,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[27,63,75,44,15,11,20,2,3,4,2,3,3,3,3,1,2,2,2,1,1,0,69,137,31,55,4,7,7,1,2,1,2,1,4,3,2,2,2,2,1,1,0,0,111,70,38,29,8,2,5,0,3,2,3,1,2,3,2,2,3,1,2,0,1,0,79,50,18,3,0,1,0,3,1,1,1,2,2,1,1,2,0,0,1,0,0,0,57,50,1,0,0,1,3,2,1,1,1,2,1,2,1,1,0,0,0,0,1,1,124,6,1,3,1,1,0,0,3,1,1,2,1,1,1,1,0,0,1,1,1,0,45,22,1,2,1,1,1,1,0,2,2,2,1,1,0,0,2,2,1,1,0,0,41,13,0,1,2,1,2,1,1,1,1,2,1,2,1,3,1,2,2,1,1,1,11,7,0,1,1,2,1,2,2,1,2,1,2,2,1,2,0,0,2,0,0,0,20,0,1,0,2,2,2,1,2,2,2,3,2,1,2,3,1,1,0,0,1,2,8,1,1,1,1,1,2,1,1,3,2,2,1,0,1,2,2,0,1,1,0,1,12,2,1,1,2,1,2,3,3,2,1,2,1,0,0,3,1,2,2,1,0,0,2,1,1,1,1,2,2,1,3,2,3,1,1,0,1,2,1,1,3,0,0,0,1,1,2,1,1,2,1,0,1,1,2,1,1,1,1,0,3,1,0,0,1,1,2,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,2,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,2,1,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,3,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,1,1,1,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,0,2,2,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99,-99],
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
