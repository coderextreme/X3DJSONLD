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
        texture=ImageTexture(url=['../../images/4/Malacca4-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,100.04106255949056,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[19,22,64,45,54,42,45,60,71,51,48,47,56,39,31,29,30,36,35,29,25,24,27,25,32,26,46,29,36,76,49,45,34,40,43,43,29,22,18,32,25,31,26,23,22,17,23,36,40,36,47,72,46,33,27,41,35,30,17,15,28,27,21,20,25,33,34,17,18,31,36,34,64,64,42,34,24,31,27,29,16,26,39,13,30,26,14,26,50,30,30,16,27,22,25,28,38,22,20,28,26,23,13,15,43,21,30,19,19,13,25,42,18,17,19,23,29,23,21,14,18,16,15,22,21,29,27,24,27,16,31,13,57,49,43,25,19,9,29,24,20,18,36,15,24,28,15,12,22,20,20,10,17,10,42,51,52,11,11,13,12,17,18,23,23,22,36,14,10,11,10,20,26,10,8,9,44,17,23,27,10,12,9,22,25,22,21,17,15,15,22,11,16,10,8,9,10,12,39,32,33,34,12,8,9,20,20,21,23,17,16,16,13,44,12,13,13,19,21,6,51,56,37,50,10,8,11,10,15,16,18,18,15,15,14,20,14,16,25,20,26,23,38,61,56,49,33,13,8,7,15,9,19,14,17,17,14,10,8,9,11,25,15,17,56,42,38,20,33,34,6,7,11,7,17,12,12,10,12,10,10,12,9,16,19,11,46,66,29,35,39,9,12,16,6,8,16,10,10,11,10,8,9,19,29,30,26,21,50,41,49,42,36,31,10,9,7,6,14,14,8,9,9,10,10,17,37,36,22,25,39,30,30,43,21,25,7,8,8,10,13,7,8,8,8,9,10,28,35,31,29,26,40,34,30,26,24,21,19,9,6,8,13,10,10,9,9,6,8,25,37,37,33,31,44,40,30,36,19,8,12,5,4,12,6,9,8,9,9,9,17,20,36,37,34,23,43,31,20,17,15,16,7,5,5,10,7,7,10,9,10,10,32,33,35,34,31,23,37,27,24,20,19,16,5,4,6,7,7,7,7,9,9,8,33,35,29,30,30,21,29,26,19,17,17,15,9,8,3,9,5,4,6,8,8,12,32,30,27,27,37,33,10,20,14,11,10,11,7,7,6,11,4,4,5,6,7,10,30,29,29,29,33,28,10,19,13,9,11,10,7,7,6,11,5,5,5,5,7,11,29,27,29,30,33,30],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
