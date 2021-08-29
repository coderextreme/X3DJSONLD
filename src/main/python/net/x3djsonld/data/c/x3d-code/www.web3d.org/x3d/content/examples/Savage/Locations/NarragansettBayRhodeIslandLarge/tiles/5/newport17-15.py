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
        texture=ImageTexture(url=['../../images/5/newport17-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[45,49,52,60,64,67,66,64,57,35,22,24,13,6,10,9,15,13,11,13,18,19,43,46,51,55,58,59,56,54,40,23,14,8,2,2,3,12,3,2,5,13,20,20,40,44,46,46,49,48,39,27,19,11,8,2,2,2,3,10,8,6,9,13,15,19,40,41,42,37,31,26,25,15,14,11,2,2,2,2,2,10,5,7,6,13,18,21,29,28,29,22,22,19,14,12,9,4,2,2,2,2,2,7,11,6,5,12,16,17,14,16,14,18,21,17,8,6,4,4,3,4,10,11,17,14,10,6,6,6,14,16,16,13,18,22,18,7,5,9,4,8,14,22,21,27,21,14,10,10,9,5,12,15,13,12,10,12,6,6,5,6,15,20,22,25,27,25,21,17,10,6,7,7,11,12,10,8,8,6,6,8,10,13,17,26,30,26,29,28,23,18,13,10,9,9,13,15,7,7,7,8,9,9,13,16,21,26,33,32,34,31,27,19,18,7,8,9,8,7,12,7,12,7,10,11,14,18,25,31,37,41,44,38,26,20,13,12,10,9,8,8,12,15,11,10,12,19,23,23,27,34,38,37,42,38,29,21,13,12,7,8,11,10,16,12,13,19,29,34,34,31,29,32,30,33,35,33,27,19,18,9,12,9,9,9,12,15,23,31,38,43,44,41,28,27,31,32,29,26,25,18,12,15,6,15,11,11,16,21,34,40,41,47,45,45,41,27,26,24,22,19,18,17,12,11,14,13,11,14,19,23,34,40,43,46,45,46,37,25,27,23,18,21,16,14,13,8,11,10,15,14,23,22,29,37,40,42,40,38,37,30,23,23,19,14,13,12,10,7,11,13,15,14,22,24,31,31,35,36,33,31,25,28,22,20,17,15,13,9,8,8,8,13,16,16,20,25,25,30,31,28,24,24,25,18,25,19,15,14,13,11,8,11,10,10,12,14,24,22,23,25,28,21,23,23,21,19,19,19,23,15,13,12,13,14,11,9,11,13,25,26,22,22,23,25,24,23,23,24,23,20,19,19,18,16,14,14,15,12,13,16,26,27,30,25,25,26,25,21,25,24,24,24,28,26,23,18,17,19,12,14,16,14,29,25,27,27,26,30,35,28,28,26,23,27,29,28,23,23,18,14,18,17,13,11,30,26,27,29,27,31,34,27,28,26,23,27,28,28,24,22,18,15,17,18,12,11],
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
