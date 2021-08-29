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
        texture=ImageTexture(url=['../../images/5/newport11-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.52686794665262,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[28,28,29,29,31,33,33,34,34,33,33,35,38,40,42,46,45,42,39,36,35,33,29,27,29,29,29,30,31,32,32,33,33,33,35,37,38,40,44,45,42,38,35,35,33,29,24,26,28,28,28,30,31,31,32,34,35,35,35,37,38,40,43,42,41,36,34,32,28,23,24,25,27,28,29,30,30,31,32,33,33,34,37,39,39,40,39,39,38,36,33,32,23,23,24,26,27,28,28,29,30,31,32,33,34,38,38,38,39,39,39,40,37,34,32,23,24,25,25,26,27,27,28,29,31,32,33,37,39,38,38,39,39,38,38,36,34,32,25,26,25,25,25,26,27,27,28,30,31,32,34,36,37,37,39,39,39,39,37,35,33,24,24,24,24,25,26,27,26,28,29,31,33,34,34,35,37,38,38,39,38,37,35,33,25,26,26,26,27,27,27,26,27,30,31,33,34,33,34,34,35,37,39,40,37,35,33,23,24,26,27,26,25,25,26,27,31,32,32,34,35,34,34,35,38,39,38,36,36,35,22,23,27,28,27,24,24,26,27,30,31,31,33,35,35,35,37,38,38,38,36,36,35,23,27,27,25,25,26,27,26,26,27,29,29,30,32,34,36,38,39,41,41,39,37,35,21,24,26,25,26,27,28,28,28,28,29,30,31,32,34,36,36,37,38,38,39,37,37,22,24,25,26,26,27,27,29,29,29,30,31,33,33,33,34,35,37,37,37,39,39,37,25,27,26,27,27,27,27,28,27,29,29,30,32,33,33,34,36,39,41,40,39,39,36,27,28,27,28,26,24,25,26,27,29,31,32,32,32,33,35,37,39,39,40,40,39,38,26,25,24,25,25,26,27,28,26,28,30,32,32,32,34,35,36,36,37,38,39,40,39,23,22,22,22,25,26,28,30,29,29,31,32,33,34,35,36,36,35,35,37,38,39,39,22,24,25,27,28,27,26,27,28,29,31,33,34,34,35,36,37,36,36,37,37,38,39,22,25,27,28,29,29,27,27,29,30,31,34,35,33,33,35,36,36,38,37,37,38,40,22,24,28,28,28,28,26,26,27,31,32,34,36,35,35,35,35,36,38,38,39,38,39,23,22,25,25,27,26,25,26,29,31,32,36,37,38,37,36,37,36,38,38,41,40,40,22,21,23,24,25,25,25,26,29,30,32,36,38,38,37,36,37,37,38,38,41,42,42],
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
