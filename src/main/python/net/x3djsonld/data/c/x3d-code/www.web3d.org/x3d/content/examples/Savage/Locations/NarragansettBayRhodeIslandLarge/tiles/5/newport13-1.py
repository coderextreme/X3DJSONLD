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
        texture=ImageTexture(url=['../../images/5/newport13-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.42796973708396,-71.7692354927566,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[54,51,50,48,43,32,27,25,18,15,22,34,43,51,54,54,53,49,45,42,35,34,49,46,47,44,39,34,24,18,15,16,19,28,41,48,53,52,49,45,42,40,38,37,50,45,37,33,29,24,20,16,13,13,16,24,34,42,45,47,45,41,39,38,39,39,42,36,27,22,18,18,17,17,13,11,15,22,27,35,40,41,42,40,40,39,39,39,34,27,22,17,17,15,17,13,12,14,19,26,32,35,35,40,42,39,41,41,42,43,29,21,17,18,18,17,18,16,13,14,20,28,37,44,46,46,44,41,41,42,45,45,28,24,22,20,20,22,18,16,13,16,22,31,44,53,60,57,54,52,48,46,47,48,34,32,27,22,20,20,19,18,18,20,25,37,49,60,66,66,62,60,56,54,54,53,35,28,26,22,19,20,21,24,25,25,32,42,54,63,66,65,66,65,60,57,56,55,39,33,26,21,20,20,19,21,22,25,34,44,56,64,65,66,67,68,64,63,62,62,38,33,26,23,21,21,20,23,21,28,38,48,57,64,65,66,67,65,64,64,66,67,38,31,25,22,21,23,24,25,28,32,39,46,54,59,62,65,66,67,69,70,72,73,38,31,29,29,27,24,24,27,30,32,36,44,48,54,61,63,67,67,69,71,75,76,40,35,34,30,29,28,26,25,27,32,34,39,46,51,57,62,66,66,69,70,73,74,41,39,36,33,31,29,27,27,28,29,33,39,43,50,57,60,62,65,69,72,75,75,43,42,36,34,35,31,27,28,26,27,30,34,38,47,55,59,61,64,67,71,73,73,41,37,35,35,31,28,28,27,26,28,33,33,36,43,50,57,60,64,67,71,73,74,41,37,34,32,28,28,29,28,26,28,30,31,36,43,50,54,58,66,69,71,75,75,40,36,34,32,28,29,32,33,33,31,29,30,36,43,50,56,61,68,72,73,75,75,43,39,37,34,32,33,37,39,39,33,29,32,38,46,52,56,62,67,71,73,74,73,48,44,38,35,36,39,40,41,39,35,34,33,37,42,50,56,63,65,70,70,67,67,49,42,38,36,37,39,40,36,36,39,36,34,37,42,51,59,66,65,67,67,64,64,47,41,38,36,38,40,37,38,37,36,36,38,39,45,52,58,64,66,64,65,65,65,47,42,38,35,38,39,37,38,37,36,36,37,40,46,53,58,64,66,64,64,65,65],
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
