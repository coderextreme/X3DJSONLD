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
        texture=ImageTexture(url=['../../images/5/newport27-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[51,54,53,46,38,28,20,17,18,19,20,20,20,19,19,18,16,11,7,5,7,8,52,53,51,45,36,30,21,17,17,19,21,21,20,20,20,19,17,12,9,5,8,9,53,54,51,45,36,30,22,19,19,18,22,22,21,21,21,19,16,10,5,4,11,12,54,54,51,47,36,30,23,21,21,22,23,22,22,22,21,17,10,5,3,7,15,15,55,55,52,45,34,29,24,23,23,23,24,23,21,19,16,13,5,3,5,13,16,16,56,55,50,42,33,28,23,21,24,24,22,19,15,15,12,7,4,4,8,13,15,16,56,55,49,41,34,28,24,22,23,22,19,17,14,11,8,4,6,5,12,16,15,15,56,53,48,39,33,29,23,20,19,16,13,12,10,8,6,9,8,6,14,15,16,16,56,53,47,39,33,28,24,18,15,12,8,6,5,5,6,6,7,7,8,13,15,15,56,50,45,37,32,26,22,15,17,10,7,6,8,7,7,7,7,7,7,10,15,15,54,49,44,36,29,23,20,16,16,10,8,9,9,9,8,8,8,8,8,11,15,15,51,48,43,38,31,24,21,19,20,8,8,9,10,10,8,7,12,11,9,13,15,15,50,47,43,37,31,24,21,17,13,7,8,10,12,10,7,7,7,9,11,14,16,17,48,46,41,35,27,22,20,20,21,11,8,12,14,15,14,7,7,8,11,14,17,18,45,44,40,34,27,23,22,21,18,13,10,8,12,17,14,8,7,7,7,9,14,15,42,42,38,34,28,23,22,21,17,12,10,9,9,15,19,18,10,7,8,13,15,16,41,40,37,35,28,23,22,21,16,12,10,9,11,18,20,21,19,16,14,16,18,18,36,33,28,28,25,22,22,20,15,12,10,10,16,21,21,20,20,20,19,19,19,19,28,27,25,23,19,14,16,16,12,11,10,11,16,22,21,21,21,21,20,20,19,19,25,23,23,21,19,21,21,15,12,10,11,20,21,20,21,21,21,20,21,16,16,17,24,24,23,23,21,22,19,14,11,12,21,21,21,21,21,22,21,21,21,20,18,18,24,23,23,23,24,24,19,13,10,10,21,21,22,22,22,22,22,21,21,21,20,20,24,24,24,24,23,21,18,12,10,17,19,20,22,22,23,23,23,22,21,21,22,22,24,24,24,24,23,21,18,12,12,17,19,20,21,22,22,23,23,23,21,21,22,22],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC'])))])
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
