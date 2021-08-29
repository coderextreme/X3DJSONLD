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
        texture=ImageTexture(url=['../../images/5/newport17-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52473004175595,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[75,71,69,68,65,62,58,54,55,53,54,48,49,47,42,41,38,36,38,38,44,45,70,68,71,64,59,59,52,48,47,47,46,49,44,47,49,40,37,37,36,38,43,43,68,60,58,56,59,54,52,42,38,37,45,42,42,43,42,41,39,37,39,39,41,40,64,63,58,59,52,47,44,41,42,33,37,38,38,39,43,38,39,34,33,32,37,40,68,61,56,54,60,55,49,42,37,34,26,27,35,42,35,33,33,34,31,25,29,29,69,63,60,57,55,48,45,45,39,34,28,24,31,30,33,37,38,32,25,19,14,14,72,66,58,57,51,50,48,40,38,39,41,27,25,30,26,26,23,19,17,16,16,16,65,63,61,58,51,49,43,45,40,37,33,25,19,9,18,21,17,12,13,13,13,13,60,61,64,53,48,43,43,40,39,34,29,25,19,9,20,19,11,12,12,12,10,10,59,62,54,51,48,46,42,44,37,31,27,28,20,17,15,18,11,13,10,6,7,7,58,53,49,46,47,41,41,39,34,30,29,31,17,16,17,13,17,14,12,12,11,12,52,50,46,45,46,44,42,35,33,26,22,19,20,18,15,13,17,17,15,13,12,12,45,43,41,43,41,41,35,33,27,21,17,16,17,14,16,15,16,17,19,15,16,16,46,39,40,39,37,35,31,27,22,19,16,16,17,14,16,15,18,15,17,15,12,12,43,40,39,37,32,29,27,22,19,24,21,14,12,18,20,20,13,11,10,11,16,16,35,33,32,31,24,29,32,24,26,25,22,11,15,19,23,17,10,13,15,15,17,19,29,27,27,30,28,26,27,24,25,24,18,11,17,19,16,14,17,18,19,18,24,23,24,24,24,27,27,25,25,28,23,22,16,11,15,20,11,13,20,18,16,18,22,22,28,26,25,26,25,23,24,23,23,15,19,22,11,11,11,15,15,19,20,19,21,20,26,28,31,30,26,21,21,22,17,16,20,20,16,12,13,16,18,18,18,20,23,24,31,33,33,29,25,25,24,23,21,19,20,21,19,19,25,19,20,20,19,22,24,25,37,41,42,31,27,25,24,23,30,27,25,23,27,25,23,21,23,23,25,23,25,26,50,45,40,40,33,28,24,26,27,28,23,25,25,27,29,31,28,29,29,27,29,29,50,45,40,40,36,27,24,26,27,26,23,25,26,27,31,29,28,29,29,29,30,30],
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
