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
        texture=ImageTexture(url=['../../images/5/newport23-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.669870498763935,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[26,30,34,42,49,52,56,57,56,51,49,42,35,26,19,19,12,4,0,0,0,0,28,32,39,46,52,57,60,61,58,53,48,42,32,25,22,18,11,4,0,0,0,0,34,42,50,56,64,62,61,62,59,56,48,38,31,26,22,20,10,0,0,0,0,0,42,54,60,64,68,62,59,61,60,54,47,36,31,27,24,18,7,0,0,0,0,0,51,61,65,69,72,67,63,63,60,55,45,36,33,26,22,17,6,0,0,0,0,0,57,65,70,74,74,70,67,66,61,54,45,38,33,29,23,15,1,0,0,0,0,0,55,64,71,75,78,71,67,66,64,57,49,39,32,27,21,14,3,0,0,0,0,0,56,64,72,76,75,71,70,69,64,54,49,40,35,26,21,14,9,0,0,0,0,0,58,69,77,81,76,72,71,67,60,54,45,40,33,27,18,15,16,12,4,0,2,3,64,76,79,81,78,75,71,64,58,55,47,44,33,26,17,13,13,10,6,2,4,4,67,75,82,82,80,73,71,68,62,58,48,41,32,26,17,13,15,7,0,0,0,0,68,78,82,82,79,73,72,72,67,60,51,42,33,24,16,13,11,1,0,0,0,0,69,78,81,79,77,76,75,67,64,60,54,43,36,26,16,9,0,0,0,0,0,0,72,77,78,74,74,72,72,67,61,57,59,48,35,25,16,2,0,0,0,0,0,0,67,73,72,70,69,70,65,64,59,57,56,49,34,23,14,1,0,0,0,0,0,0,61,67,67,66,65,66,64,60,54,56,54,44,33,20,11,0,0,0,0,0,0,0,55,58,63,66,64,64,60,55,55,52,47,40,27,16,6,0,0,0,0,0,0,0,53,53,58,63,64,61,56,51,49,46,37,28,21,12,1,0,0,0,0,0,0,0,50,48,51,55,57,54,50,48,44,37,27,19,16,5,0,0,0,0,0,0,0,0,45,45,43,44,46,45,40,40,34,27,19,18,7,1,0,0,0,0,0,0,0,0,37,36,34,36,34,31,31,27,22,16,13,9,3,0,0,0,0,0,0,0,0,0,32,29,25,21,21,22,21,19,13,8,1,1,1,0,0,0,0,0,0,0,0,0,31,27,23,18,16,16,13,6,2,2,3,0,0,0,0,0,0,0,0,1,6,8,31,26,22,17,16,15,12,5,2,3,3,0,0,0,0,0,0,0,0,1,6,8],
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
