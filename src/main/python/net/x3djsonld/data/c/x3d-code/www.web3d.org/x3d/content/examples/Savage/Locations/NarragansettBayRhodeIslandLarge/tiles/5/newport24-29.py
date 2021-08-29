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
        texture=ImageTexture(url=['../../images/5/newport24-29.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.69406057493193,-71.15364557954115,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[69,68,66,66,64,63,62,59,54,50,46,43,38,37,38,40,42,43,38,39,40,40,71,70,69,68,65,62,60,59,53,51,49,48,42,37,37,38,41,38,39,41,42,42,71,71,69,68,64,60,54,53,51,53,50,46,42,37,37,39,38,40,44,43,44,45,71,69,68,64,62,57,50,44,43,43,43,41,40,38,38,37,37,41,43,44,45,45,69,65,62,58,55,50,42,41,41,40,43,44,40,39,38,37,37,40,42,43,44,45,65,61,58,54,50,42,40,41,41,42,46,42,40,38,38,38,38,40,43,45,45,45,59,55,54,53,48,41,40,39,40,41,42,40,38,38,38,40,39,39,41,43,45,45,53,52,52,51,45,40,39,39,39,42,39,38,38,39,39,41,40,40,39,41,41,41,49,50,50,47,45,41,39,38,39,38,39,39,39,41,40,40,40,41,40,40,40,40,46,48,48,46,43,40,39,40,38,38,39,39,40,41,41,42,41,42,41,40,41,41,41,43,44,42,39,35,36,39,39,39,40,40,40,41,44,44,44,43,42,40,41,41,33,37,38,37,34,35,39,39,40,41,40,40,41,41,44,46,46,46,45,44,43,43,26,30,31,28,35,37,39,40,41,43,41,40,41,42,47,49,49,49,48,49,50,50,23,24,32,35,37,40,43,44,49,47,44,41,41,45,51,53,52,53,54,57,58,58,21,27,31,36,39,43,46,49,51,50,47,45,46,49,56,57,56,58,62,64,63,63,18,23,28,34,40,44,50,53,53,54,50,49,50,57,60,60,59,60,65,69,67,66,11,21,27,34,39,44,52,56,58,57,53,53,56,63,66,63,62,63,68,72,66,66,5,18,25,33,38,44,54,59,61,59,57,57,63,68,68,65,65,66,69,67,61,61,4,14,23,31,36,45,57,62,64,64,63,62,69,71,71,68,67,68,67,63,59,59,2,5,18,27,35,46,58,64,66,66,67,68,73,74,71,69,68,67,64,61,59,59,1,5,10,22,31,43,54,60,65,67,68,71,75,75,72,68,67,64,62,60,59,58,1,1,2,14,23,35,47,54,60,65,68,73,75,74,71,68,66,63,61,59,60,60,1,1,5,7,13,26,37,46,53,58,63,69,72,72,69,67,65,62,61,61,65,66,1,1,5,7,12,25,35,44,51,57,62,68,72,71,69,67,65,62,61,62,67,67],
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
