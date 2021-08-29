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
        texture=ImageTexture(url=['../../images/5/newport25-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,5,7,12,25,35,44,51,57,62,68,72,71,69,67,65,62,61,62,67,67,1,1,5,7,9,12,23,33,41,46,51,58,65,67,67,66,66,63,63,65,70,71,1,3,7,8,9,9,11,21,29,33,39,48,55,62,65,65,65,64,65,65,70,71,1,3,5,8,7,8,9,11,18,23,29,36,43,54,61,63,64,65,66,66,67,67,1,1,3,5,6,7,9,9,11,18,22,24,34,47,58,60,62,63,65,64,63,63,1,1,2,6,9,8,8,9,10,11,12,15,21,38,50,56,59,61,62,62,60,60,1,1,2,6,8,8,10,10,11,11,10,11,13,26,39,48,55,58,59,60,58,58,1,1,3,5,7,9,11,11,11,12,12,10,10,16,27,40,51,55,57,57,57,57,1,1,2,3,9,11,11,11,12,11,12,9,8,9,19,30,45,52,54,55,55,55,1,1,1,1,8,9,9,11,12,12,9,7,6,4,12,24,37,47,51,53,53,53,1,1,1,1,1,10,11,11,12,13,13,9,5,4,8,17,29,40,48,50,51,51,3,1,1,1,1,1,2,10,12,12,12,7,4,6,5,10,21,30,38,47,50,50,9,7,1,1,1,1,1,1,5,4,5,6,5,6,8,6,13,24,36,45,52,52,13,9,8,2,1,1,1,1,1,7,4,6,6,6,8,9,9,19,31,41,52,53,15,13,10,9,5,1,1,1,1,1,3,6,5,6,6,6,7,11,22,35,48,50,16,15,12,10,6,1,1,1,1,1,1,1,4,5,4,4,5,9,13,25,41,43,18,16,13,11,7,1,1,1,1,1,1,1,1,1,1,2,5,4,5,18,22,24,19,17,14,11,8,4,1,1,1,1,1,1,1,1,1,1,3,7,7,12,15,16,20,18,15,12,10,8,1,1,1,1,1,1,1,1,1,1,5,7,8,9,11,12,22,20,17,12,8,5,1,1,1,1,1,1,1,1,1,1,2,7,7,8,8,9,23,21,19,14,9,3,1,1,1,1,1,1,1,1,1,1,1,3,5,7,7,7,25,23,20,16,12,7,3,4,5,6,2,1,1,1,1,1,1,1,1,1,4,5,27,24,21,17,13,8,7,8,9,9,8,2,1,1,1,1,1,1,1,1,1,2,27,24,21,17,13,8,7,9,9,10,9,3,1,1,1,1,1,1,1,1,1,1],
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
