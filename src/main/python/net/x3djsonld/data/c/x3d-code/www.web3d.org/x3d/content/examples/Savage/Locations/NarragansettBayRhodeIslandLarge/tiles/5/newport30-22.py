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
        texture=ImageTexture(url=['../../images/5/newport30-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.839201031939915,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[29,31,36,40,35,36,38,38,34,30,26,24,21,17,17,16,16,16,16,14,13,13,29,35,40,42,37,39,42,38,34,30,25,22,20,18,17,17,18,18,16,14,14,14,33,39,44,41,38,40,43,37,34,30,26,21,18,17,17,18,20,19,15,14,15,15,35,40,41,39,39,42,42,37,35,30,26,21,18,16,16,16,20,18,14,13,13,12,33,37,35,36,40,41,41,38,36,31,25,21,17,17,17,17,20,17,15,14,14,14,29,31,33,37,40,38,37,40,37,32,24,20,17,18,21,19,18,15,14,13,14,14,23,27,33,37,37,32,32,34,36,32,27,23,21,20,22,21,21,17,15,14,14,14,21,27,32,35,32,25,26,26,24,24,23,23,23,24,24,23,24,21,20,17,17,17,23,28,33,32,26,22,22,23,23,24,25,26,23,25,25,25,25,23,23,21,21,21,26,30,32,28,22,22,22,23,24,25,25,26,25,26,27,28,26,26,25,24,23,23,27,31,29,24,22,22,23,24,26,26,26,27,29,28,31,29,29,30,27,25,23,23,30,28,25,22,22,22,23,26,27,26,26,27,27,29,30,33,35,36,31,27,25,24,25,24,22,22,22,22,24,26,26,26,26,27,28,29,29,31,33,36,36,31,27,26,24,24,22,23,24,23,24,26,26,27,29,29,29,28,29,31,33,35,36,34,31,31,25,27,23,25,26,24,27,28,29,30,31,31,31,29,29,32,34,36,42,37,35,35,24,23,23,24,26,26,28,29,29,32,33,33,31,30,30,31,34,36,38,37,36,36,24,23,24,24,23,25,27,29,31,33,34,35,32,32,35,34,34,35,37,37,37,37,23,23,24,26,23,26,27,29,30,33,35,35,35,35,37,36,35,36,37,38,39,39,23,23,26,28,22,27,31,33,33,36,38,37,37,40,39,38,36,39,40,42,42,41,23,23,25,28,22,26,31,32,37,40,40,38,38,39,40,40,40,44,47,48,46,46,22,23,25,22,21,24,31,35,38,41,42,40,39,40,41,42,45,48,49,51,51,50,23,23,23,23,22,23,30,37,41,41,43,43,42,42,41,45,50,51,50,51,54,53,24,24,24,23,23,25,32,36,39,42,43,45,41,40,41,48,51,51,50,51,54,54,24,24,24,23,23,26,32,36,39,41,43,45,41,40,42,48,51,51,50,51,54,54],
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
