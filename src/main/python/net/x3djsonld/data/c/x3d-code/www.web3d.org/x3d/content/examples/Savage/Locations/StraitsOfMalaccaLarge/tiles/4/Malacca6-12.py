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
        texture=ImageTexture(url=['../../images/4/Malacca6-12.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(-1.6675815493135302,104.94050057609658,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[2,1,1,2,1,1,1,0,1,20,22,27,27,8,10,12,0,13,16,159,31,38,2,2,2,2,1,1,2,2,1,4,45,49,23,34,25,0,8,5,18,70,37,35,2,2,2,2,2,3,2,1,2,1,1,29,39,19,7,2,0,24,34,51,23,17,2,2,0,2,2,2,2,1,2,1,0,1,2,3,1,0,0,14,7,15,7,7,2,3,2,3,1,2,2,2,2,1,1,0,3,0,1,0,1,1,0,1,3,1,1,3,1,3,2,2,1,1,3,2,3,1,1,0,0,5,0,1,2,2,0,2,1,0,0,1,1,1,1,2,2,0,1,4,3,1,1,0,1,2,1,2,2,1,1,1,1,1,3,2,2,1,2,0,2,2,2,0,2,4,3,2,1,2,1,1,2,2,2,1,1,0,1,1,1,0,0,2,1,1,2,3,1,4,2,2,2,2,2,2,1,2,2,2,2,1,2,3,0,2,2,3,1,2,2,1,1,2,1,1,3,2,1,2,1,1,2,3,1,2,0,1,2,1,0,1,0,2,2,2,2,1,1,1,3,2,1,2,1,0,1,1,0,1,1,1,2,0,1,1,2,1,1,1,2,3,1,2,3,2,3,2,2,2,1,1,2,1,2,1,0,0,1,3,2,2,3,2,2,3,1,1,2,4,3,0,2,0,2,0,2,2,0,1,0,1,1,1,6,4,2,3,1,1,1,3,0,0,3,2,0,0,1,0,1,1,1,0,1,1,3,3,4,4,2,4,2,3,0,2,0,0,0,0,1,0,2,1,0,0,2,4,3,4,2,4,5,2,4,2,0,0,0,1,2,0,2,0,0,2,1,2,3,1,2,2,5,3,3,3,2,2,2,0,0,0,0,0,0,1,3,3,2,3,2,2,2,3,2,5,4,3,1,1,4,4,2,0,2,0,2,2,4,2,1,1,1,1,0,4,3,3,2,3,2,2,1,-1,0,0,1,3,2,4,1,2,2,0,1,3,3,1,3,4,4,3,0,0,0,4,7,2,1,3,1,3,3,1,2,1,0,0,3,1,3,1,3,3,0,1,0,4,5,3,2,3,1,2,3,0,0,2,0,0],
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
