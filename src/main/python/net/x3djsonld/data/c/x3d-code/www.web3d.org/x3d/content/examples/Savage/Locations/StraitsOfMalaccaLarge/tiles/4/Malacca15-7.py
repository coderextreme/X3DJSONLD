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
        texture=ImageTexture(url=['../../images/4/Malacca15-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(7.398793881316173,99.88675033605634,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[395,887,148,61,33,63,32,33,20,42,5,3,5,2,2,2,3,2,5,1,1,3,599,454,121,46,44,28,17,10,5,40,4,5,6,0,2,2,0,2,3,2,3,3,1024,204,209,34,21,20,13,6,4,2,0,6,4,2,4,0,0,1,3,1,3,3,787,54,36,32,18,29,6,4,3,3,4,7,2,3,2,1,1,2,1,2,2,2,79,53,49,22,17,10,3,2,3,5,2,8,3,1,3,2,2,1,2,2,1,2,66,60,29,31,12,21,0,3,3,2,7,5,2,1,2,1,1,2,2,3,2,3,210,68,22,14,13,2,1,4,5,3,4,2,1,2,2,0,1,3,2,3,1,1,114,127,18,16,10,3,2,0,3,4,5,4,2,3,1,2,2,2,1,2,1,2,77,37,22,18,2,2,1,2,1,3,4,1,3,1,0,1,1,3,2,2,2,2,60,35,23,12,2,3,2,1,2,2,3,2,0,0,1,2,2,2,3,3,4,3,47,28,17,10,2,3,4,1,1,2,0,2,2,1,0,2,0,3,2,2,2,2,40,32,20,7,2,3,2,4,3,2,6,2,1,2,1,2,2,2,1,3,2,2,37,23,16,6,1,6,3,5,3,3,3,1,2,1,2,2,2,2,2,2,1,2,26,14,6,8,5,2,2,3,3,3,2,4,2,2,3,2,2,2,1,2,1,1,24,33,7,3,3,2,4,3,2,1,2,1,3,2,1,1,2,2,2,2,2,1,28,33,7,3,4,2,5,4,2,6,4,3,2,2,1,1,1,3,2,2,2,2,17,6,3,2,3,4,3,4,2,2,4,3,2,3,3,1,2,1,2,2,2,2,18,8,4,4,3,3,2,2,1,4,0,3,2,1,2,3,3,3,1,1,1,1,30,10,5,11,6,3,2,3,2,0,1,2,1,1,1,2,2,2,1,2,2,1,36,11,5,5,4,5,3,3,5,3,2,1,1,2,1,2,1,2,2,2,1,1,26,9,3,4,6,4,4,3,0,2,2,2,1,1,1,2,3,2,1,1,2,1,25,9,3,4,5,3,3,3,1,2,2,1,1,1,1,1,1,2,1,2,2,1],
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
