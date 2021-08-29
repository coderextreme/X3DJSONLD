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
        texture=ImageTexture(url=['../../images/5/newport25-13.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.50541124423569,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[31,29,26,25,25,28,28,28,28,26,25,23,21,23,27,31,32,32,36,38,42,42,25,23,22,33,36,31,28,25,29,33,33,33,28,20,20,26,32,31,34,38,42,42,19,17,19,27,30,28,28,25,28,33,36,35,30,27,21,20,28,31,32,39,43,43,17,17,17,17,16,17,18,21,24,32,35,32,31,29,20,15,23,30,28,36,38,38,25,25,21,28,32,32,26,16,22,30,30,31,36,32,24,17,14,22,26,29,30,31,35,35,27,33,36,34,26,20,16,20,25,28,24,17,14,12,10,17,23,26,28,29,42,41,35,33,34,35,36,37,31,21,19,18,22,26,28,25,14,10,15,21,26,26,51,50,50,48,50,53,57,54,48,43,42,43,41,35,30,24,14,10,15,19,22,22,66,64,64,65,65,65,63,63,59,57,54,50,47,42,32,18,7,12,17,19,20,20,73,70,70,71,72,70,66,63,63,61,58,55,50,41,27,17,9,13,14,16,17,17,75,74,74,76,75,71,67,63,63,64,60,54,49,36,19,17,14,5,8,12,12,13,78,78,79,77,74,69,67,64,63,64,61,56,42,25,17,15,13,8,4,4,6,6,80,81,80,76,72,66,63,63,63,60,55,43,30,24,21,13,11,10,5,5,4,5,78,80,76,71,65,61,63,65,63,50,40,29,24,22,22,20,11,7,7,8,6,6,73,70,67,61,56,56,58,60,53,36,25,21,22,24,24,26,23,13,11,10,10,9,72,74,68,59,49,48,49,47,43,33,23,21,22,21,25,25,27,21,14,11,13,13,70,66,61,55,46,53,55,58,51,39,25,20,19,19,19,19,26,27,26,24,19,19,72,65,55,45,45,54,55,54,52,44,34,23,19,19,20,18,22,27,28,23,20,20,73,68,62,52,44,44,46,45,45,43,40,30,20,20,22,23,23,26,26,21,26,26,70,60,55,52,49,42,41,42,42,43,42,35,25,19,22,26,21,20,20,26,25,24,65,61,58,53,53,50,49,51,47,43,42,38,33,23,18,22,21,20,23,25,25,25,67,62,61,60,59,56,57,55,53,48,42,40,35,25,18,19,17,20,25,27,27,27,70,69,66,64,65,66,65,60,56,54,46,40,35,26,19,19,20,18,21,24,24,24,70,70,67,65,66,68,67,60,56,54,46,41,34,27,18,20,20,17,19,23,23,24],
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
