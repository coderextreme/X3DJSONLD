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
        texture=ImageTexture(url=['../../images/5/newport30-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.48342589019228,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[61,60,53,50,42,35,34,33,33,34,33,31,26,27,21,19,17,16,16,16,17,18,59,55,50,48,39,35,34,33,32,30,29,27,22,19,18,20,20,19,18,20,28,29,54,50,45,42,36,35,34,33,32,30,29,27,22,18,26,27,27,27,27,28,30,30,49,46,42,39,36,34,34,33,32,32,33,25,21,20,29,30,30,30,32,34,38,39,44,41,39,36,35,33,30,27,29,32,26,24,21,21,31,30,29,32,35,40,44,44,42,39,37,36,33,29,26,23,22,19,19,23,19,26,29,27,31,34,41,48,53,54,47,42,38,36,32,29,25,23,21,22,20,19,20,26,26,28,31,35,47,54,56,56,47,39,37,34,33,31,28,22,22,24,23,27,28,27,26,27,32,44,52,56,58,58,41,36,35,34,33,32,28,22,23,26,26,31,33,33,32,35,37,41,50,56,58,58,40,35,32,33,30,28,27,22,25,26,28,30,33,33,35,42,46,47,46,53,54,55,38,33,30,28,28,29,22,26,24,30,31,32,34,38,41,44,46,48,49,49,51,51,37,33,32,30,34,28,22,23,25,34,35,33,36,38,39,41,44,50,50,49,51,51,36,37,35,28,29,22,23,24,24,25,28,31,33,32,33,39,43,44,45,49,52,52,38,32,27,26,22,22,25,27,26,29,29,29,30,32,37,41,45,48,51,53,55,54,36,30,22,23,22,23,23,25,28,32,29,29,33,34,32,35,42,50,55,60,59,59,37,30,23,23,23,23,25,29,33,33,34,33,36,31,32,34,41,49,56,61,62,62,35,32,24,24,24,23,26,32,36,35,34,36,36,35,37,36,39,45,53,59,62,63,39,35,27,27,26,26,28,29,31,35,36,38,35,35,36,39,42,46,54,61,64,65,35,33,32,28,28,30,30,30,32,33,36,37,34,35,36,38,42,49,58,63,67,67,33,29,28,28,28,32,36,34,32,32,32,34,35,36,37,39,43,52,60,65,67,68,30,28,29,30,33,37,39,40,36,32,33,37,37,39,39,40,45,55,62,69,72,73,28,28,30,33,36,40,41,40,39,39,36,37,39,41,43,44,51,59,65,72,75,75,28,30,34,35,39,41,41,41,41,45,45,46,40,41,43,46,53,61,70,76,76,76,28,30,35,36,38,41,41,41,42,51,48,47,42,42,44,47,53,62,71,76,77,76],
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
