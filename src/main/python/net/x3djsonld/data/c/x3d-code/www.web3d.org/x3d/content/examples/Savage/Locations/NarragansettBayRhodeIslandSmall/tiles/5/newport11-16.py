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
        texture=ImageTexture(url=['../../images/5/newport11-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[17,16,16,18,19,21,24,27,30,31,32,34,35,34,34,35,33,32,31,31,30,29,27,13,15,18,19,21,23,27,30,30,31,33,36,36,35,35,34,32,30,30,29,28,29,29,15,16,19,20,23,25,27,31,32,33,34,35,34,33,34,33,32,32,32,30,28,28,28,16,18,19,21,26,27,27,30,33,34,34,34,34,32,33,33,34,33,32,31,30,27,26,17,18,19,23,26,29,29,31,33,34,35,35,34,34,33,34,34,32,31,32,30,27,26,16,18,22,26,27,29,31,33,34,35,37,34,33,32,32,32,33,32,30,30,30,29,27,11,15,22,25,27,30,33,35,35,36,37,35,33,32,33,33,32,31,30,30,31,30,29,9,17,23,26,28,29,31,33,34,37,37,37,36,34,34,33,32,32,32,32,31,31,30,13,18,23,27,30,31,31,31,33,35,36,37,36,35,33,34,32,32,32,32,32,31,30,18,19,24,27,30,31,30,30,32,32,33,34,33,33,33,33,34,34,35,36,36,35,33,23,23,24,25,26,29,30,30,30,30,31,31,31,32,33,33,35,35,36,39,39,38,36,24,23,24,26,26,28,30,30,31,31,31,31,32,33,33,33,33,32,32,34,35,35,34,23,23,26,29,29,29,30,31,31,31,30,30,33,32,30,31,30,29,30,30,30,31,32,25,27,30,30,31,30,30,30,30,31,30,29,32,32,31,30,28,29,30,28,28,30,32,27,30,32,33,32,30,28,27,27,29,30,29,28,29,30,29,31,32,31,31,32,33,33,28,31,34,35,33,30,29,29,28,27,27,28,28,29,29,28,30,30,29,28,30,30,29,30,32,32,32,30,30,30,29,28,27,27,28,32,32,31,29,27,27,26,25,27,28,27,31,32,32,31,31,32,32,29,27,25,26,26,26,27,28,28,26,27,28,28,30,29,29,31,33,32,31,31,31,30,29,28,27,26,26,26,27,27,27,29,29,28,27,26,27,27,31,31,31,30,30,29,27,26,27,28,26,26,27,29,27,29,32,31,29,27,24,26,26,31,30,31,31,31,31,28,26,26,24,23,24,24,25,26,26,28,28,29,30,27,27,28,32,31,32,33,33,32,31,29,27,24,24,24,22,23,25,26,26,24,25,26,26,29,30,33,32,33,33,33,32,31,29,27,25,25,23,22,22,24,25,25,23,24,26,27,29,30],
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
