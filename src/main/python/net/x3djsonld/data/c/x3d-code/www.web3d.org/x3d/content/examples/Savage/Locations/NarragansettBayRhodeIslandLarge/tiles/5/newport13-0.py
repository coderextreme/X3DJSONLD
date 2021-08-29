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
        texture=ImageTexture(url=['../../images/5/newport13-0.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[17,16,19,22,22,22,21,21,20,20,20,23,24,24,27,36,46,46,47,52,55,54,16,10,15,18,19,21,20,21,20,19,19,23,26,31,38,48,53,53,53,52,49,49,20,18,12,15,18,21,23,19,20,20,22,25,32,40,47,53,56,56,51,49,50,50,20,22,15,14,14,17,18,21,21,21,23,28,37,46,53,56,58,56,53,48,43,42,19,21,17,14,13,19,19,21,21,21,21,30,40,50,57,56,57,54,51,44,35,34,22,18,14,14,17,21,21,20,17,20,27,37,47,57,61,58,57,53,47,39,31,29,21,18,19,20,23,20,23,19,21,25,32,42,54,60,61,61,57,51,43,37,29,28,24,23,23,23,24,23,24,24,25,30,39,49,58,64,64,63,57,50,44,38,35,34,25,25,25,25,24,22,23,23,26,36,46,53,61,68,66,63,59,52,46,39,36,35,22,21,21,24,23,24,27,30,35,41,49,57,64,66,64,63,57,51,47,42,39,39,20,18,16,19,23,30,34,38,41,47,55,61,65,67,65,62,56,54,52,45,39,38,18,18,20,22,26,32,38,43,45,47,55,63,68,67,66,63,58,56,51,44,39,38,16,18,20,25,29,34,39,43,45,50,58,64,68,69,64,65,59,54,51,46,39,38,18,16,18,24,30,36,40,44,50,55,59,64,63,63,64,63,57,52,49,48,41,40,18,17,18,23,31,36,41,47,52,55,57,59,62,65,64,61,58,54,49,45,41,41,22,18,19,23,31,37,42,48,52,53,56,59,63,61,58,57,55,52,48,46,43,43,19,21,22,26,33,37,42,47,51,54,57,60,60,58,59,58,54,50,46,43,41,41,22,28,31,33,35,39,43,47,51,54,55,59,59,57,57,56,54,48,47,44,41,41,21,31,40,42,42,43,45,46,50,52,57,62,62,60,61,59,56,54,51,44,40,40,25,35,41,44,44,47,45,46,51,57,60,63,66,68,65,66,60,54,52,47,44,43,24,32,40,42,43,44,46,46,52,61,67,69,69,70,70,66,60,60,57,54,49,48,27,31,35,38,42,43,47,49,54,61,66,68,72,69,70,66,63,64,60,57,51,49,36,33,35,41,40,43,46,51,54,55,58,64,69,71,69,67,66,65,60,56,49,47,38,34,36,41,41,43,47,50,53,55,57,62,68,70,69,67,65,64,59,55,48,47],
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
