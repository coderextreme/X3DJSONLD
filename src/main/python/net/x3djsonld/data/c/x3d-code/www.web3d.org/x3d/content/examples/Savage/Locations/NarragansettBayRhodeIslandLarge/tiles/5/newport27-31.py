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
        texture=ImageTexture(url=['../../images/5/newport27-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.76663080343592,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[42,46,49,51,52,52,51,48,44,40,47,50,52,57,62,69,73,71,70,70,69,69,37,39,39,41,42,43,46,45,41,39,47,52,53,54,60,64,68,70,72,74,71,70,24,25,26,28,29,33,41,42,35,39,49,50,53,57,58,61,63,66,70,72,73,72,26,27,25,21,21,24,29,32,31,33,43,52,54,55,57,59,60,65,68,69,70,70,17,19,19,15,18,21,25,25,23,30,38,47,53,56,57,59,60,65,66,66,63,61,3,6,4,11,13,18,22,23,20,22,30,39,46,53,57,57,62,64,61,58,54,53,1,1,1,1,4,12,18,20,18,16,21,30,45,47,49,52,55,58,55,51,44,43,1,1,1,1,1,2,10,14,16,13,14,24,33,39,40,46,51,49,48,44,39,39,1,1,1,1,1,1,1,6,13,11,12,17,21,26,31,36,41,43,42,37,36,37,1,1,1,1,1,3,1,1,2,4,8,11,13,19,23,26,28,34,35,30,36,36,1,1,1,1,1,1,6,3,1,1,3,9,13,17,19,23,23,24,22,23,28,29,1,1,1,1,1,1,1,1,10,10,12,11,12,14,15,19,22,20,17,19,22,22,1,1,1,1,1,1,1,3,6,10,12,13,15,13,14,17,18,16,14,15,15,15,1,1,1,1,3,2,4,9,5,5,7,11,12,11,13,12,14,13,12,10,10,10,1,1,3,9,9,8,6,3,1,2,2,5,9,9,10,10,11,10,9,8,10,10,1,1,1,3,3,7,3,1,1,1,1,3,4,4,6,6,10,8,8,6,7,7,1,1,1,1,1,1,1,1,2,3,3,2,1,4,3,5,6,6,7,8,8,8,1,1,1,1,1,1,2,2,5,7,8,6,4,3,3,6,5,6,6,9,8,8,1,1,1,1,2,3,5,7,6,7,9,8,4,3,3,3,4,6,6,7,7,8,1,1,1,1,1,7,4,6,8,8,9,9,5,4,7,11,11,9,9,12,14,13,1,1,1,1,1,6,4,3,10,13,11,7,7,7,14,18,19,18,15,14,14,14,1,1,1,1,1,1,1,4,12,15,9,7,10,13,17,21,24,22,20,17,16,15,1,1,2,1,1,1,1,2,8,10,9,10,13,16,20,26,28,26,21,19,18,18,1,1,3,1,1,1,1,1,7,10,10,10,13,16,21,27,29,26,22,19,19,18],
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
