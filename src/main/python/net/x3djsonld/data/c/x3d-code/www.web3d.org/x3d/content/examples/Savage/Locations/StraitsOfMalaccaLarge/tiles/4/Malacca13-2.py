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
        texture=ImageTexture(url=['../../images/4/Malacca13-2.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(5.384043785620684,94.8330000960161,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[2,4,0,0,2,1,-3,-6,13,483,409,865,265,188,69,80,161,218,209,278,187,128,3,4,1,2,3,5,0,-6,0,56,1320,410,76,40,61,51,126,87,193,125,32,29,3,3,2,2,3,3,3,3,2,447,855,129,41,28,83,256,478,689,374,389,21,26,2,3,2,3,2,3,2,4,1,116,92,21,26,50,291,393,611,906,352,213,41,45,3,3,3,2,3,2,5,2,178,120,12,12,21,161,375,295,279,490,265,61,7,10,2,3,2,2,3,2,2,2,160,0,5,8,20,361,40,197,120,185,94,0,0,0,3,3,3,2,3,4,204,172,3,1,2,0,163,29,17,13,10,0,0,0,0,1,2,2,3,3,3,6,3,4,3,3,3,2,3,1,1,0,0,0,0,0,0,0,2,3,3,4,3,222,3,3,2,3,2,3,2,2,1,0,0,0,0,0,1,1,2,2,3,2,1,3,2,2,3,4,4,0,1,1,2,0,2,1,1,0,1,1,1,2,3,1,1,3,3,2,4,397,269,6,1,2,1,1,2,1,0,2,0,0,2,1,3,2,2,1,2,2,6,4,100,3,1,2,0,1,1,0,0,0,0,0,2,3,2,2,1,2,1,0,3,3,2,3,2,1,2,3,3,5,1,0,0,0,4,3,3,2,2,1,1,1,1,2,3,2,2,1,1,0,3,2,1,1,0,1,-99,-99,-99,-99,1,1,2,3,3,2,2,2,1,1,0,2,4,2,2,1,1,0,-99,-99,-99,-99,1,2,2,2,1,2,2,1,1,2,0,2,1,1,2,3,1,1,-99,-99,-99,-99,2,2,2,2,2,1,1,1,2,2,2,3,2,0,2,1,3,2,-99,-99,-99,-99,2,2,1,2,2,1,1,1,2,2,2,1,1,1,0,0,1,1,-99,-99,-99,-99,2,1,2,2,1,2,2,2,3,2,1,2,0,1,2,2,2,3,-99,-99,-99,-99,1,2,2,1,2,2,2,2,1,1,2,2,3,3,0,2,1,2,-99,-99,-99,-99,0,1,3,2,1,1,0,2,2,2,3,2,2,1,1,1,1,1,-99,-99,-99,-99,0,1,3,2,1,2,1,2,1,2,2,2,2,1,1,2,1,1],
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
