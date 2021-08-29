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
        texture=ImageTexture(url=['../../images/4/Malacca14-8.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(6.391418833468429,100.89750038406439,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.048130956,zDimension=22,zSpacing=0.04797024,height=[212,177,301,84,417,262,460,129,40,125,532,220,39,38,295,87,40,20,17,11,11,7,509,109,225,99,130,134,63,150,41,427,324,58,33,51,164,222,62,19,10,7,14,10,126,118,239,82,172,60,366,111,44,261,44,118,37,38,118,199,16,8,6,5,5,3,316,187,92,97,50,44,63,43,477,53,42,62,45,72,62,472,20,8,16,5,4,5,154,170,36,62,88,77,27,30,38,71,18,31,17,70,605,32,5,6,4,4,4,5,43,34,37,97,381,332,52,81,18,27,13,60,37,32,488,46,10,4,4,4,4,5,51,30,26,48,578,319,29,49,19,15,57,18,29,22,14,12,7,5,4,4,4,4,29,19,55,37,66,67,27,13,20,18,41,185,81,78,10,12,4,4,4,4,3,4,128,18,17,40,21,19,7,7,16,8,8,156,132,20,11,6,4,4,5,4,4,5,57,22,17,25,19,6,11,15,5,7,5,6,4,114,11,2,3,4,4,3,4,5,39,6,16,9,8,3,6,3,9,10,8,8,10,151,5,3,4,3,4,3,3,4,7,8,9,1,0,12,2,3,5,5,4,8,6,4,3,3,4,4,4,4,5,4,64,0,5,4,4,2,3,4,3,5,4,4,4,4,4,3,4,4,3,3,3,2,-3,3,3,0,2,3,1,2,3,3,3,4,3,4,3,2,4,5,3,3,5,4,0,4,1,1,3,4,2,2,3,3,3,3,4,3,3,4,3,3,3,4,5,5,0,3,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,2,2,4,5,4,3,3,2,4,4,4,3,3,3,4,4,3,2,3,4,3,1,3,3,3,4,4,4,7,4,4,3,4,3,3,3,3,3,3,3,4,3,4,3,3,3,2,4,3,5,5,5,5,4,4,4,4,3,3,2,3,2,4,4,3,4,3,4,4,3,3,6,3,4,5,4,4,4,4,4,4,3,3,3,3,3,3,4,3,4,4,2,2,0,3,3,4,4,4,3,5,4,2,5,4,4,4,4,3,2,4,4,3,4,4,3,4,3,4,5,3,4,5,3,3,4,4,3,4,3,2,4,4,4,3,3,5],
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
