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
        texture=ImageTexture(url=['../../images/5/newport17-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.43945518210546,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[19,20,25,32,38,37,42,47,50,50,51,54,53,58,60,60,63,66,59,54,45,43,20,25,28,34,38,44,50,47,47,48,52,51,54,57,63,67,65,68,64,54,46,44,19,29,33,36,39,43,44,46,49,49,50,51,61,57,63,68,66,62,63,57,44,42,21,27,34,36,40,41,47,45,47,54,51,51,55,57,63,66,66,55,58,56,47,45,17,24,27,39,40,44,47,46,45,46,48,47,47,56,59,66,63,59,57,50,42,41,16,20,31,37,41,46,45,44,42,42,42,47,47,55,58,60,60,57,52,47,40,38,15,15,26,31,35,33,36,39,43,43,44,43,48,57,59,55,59,54,50,45,38,37,12,16,17,25,28,32,35,42,39,43,40,45,50,53,54,54,56,58,47,39,37,36,15,15,13,17,22,29,32,37,38,38,47,48,50,52,50,55,55,54,44,37,31,30,7,12,16,20,21,23,26,31,39,42,48,52,53,51,54,54,51,47,40,33,26,24,8,10,15,18,20,22,27,29,38,40,44,49,49,53,53,52,51,43,40,28,14,13,10,13,17,14,19,22,27,33,35,38,44,46,43,51,52,48,43,36,31,23,13,13,9,11,14,17,22,25,28,27,32,37,44,43,42,40,42,39,39,31,24,17,5,3,11,13,14,16,16,20,22,26,32,41,42,40,41,38,31,35,29,22,22,8,3,3,14,15,13,13,17,16,19,27,31,40,41,41,39,30,28,22,22,20,11,6,5,3,14,13,16,16,14,15,21,24,28,34,37,39,37,33,22,20,15,14,7,5,1,0,14,16,15,17,15,15,17,17,21,30,35,38,38,30,21,15,7,3,0,0,0,0,16,20,17,12,15,12,16,22,22,21,28,30,27,20,16,10,6,0,0,0,0,0,14,15,16,14,12,13,17,15,19,22,20,20,15,12,9,3,4,0,0,0,0,0,13,14,11,16,16,15,15,15,14,15,18,11,11,7,4,5,0,0,0,0,0,0,16,9,11,11,10,14,14,14,13,15,13,12,7,4,2,2,0,0,0,0,0,0,14,10,12,12,12,8,10,8,12,11,11,10,5,5,7,0,0,0,0,0,0,0,11,11,12,13,13,14,9,6,2,5,1,7,10,7,8,0,0,0,0,0,0,0,11,12,13,14,14,14,9,6,1,2,0,6,11,7,7,2,0,0,0,0,0,0],
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
