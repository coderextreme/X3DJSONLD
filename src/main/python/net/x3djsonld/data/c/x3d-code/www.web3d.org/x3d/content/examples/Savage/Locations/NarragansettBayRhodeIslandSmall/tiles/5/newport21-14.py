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
        texture=ImageTexture(url=['../../images/5/newport21-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[33,35,34,35,35,36,36,36,36,37,40,39,39,41,42,42,42,43,43,42,42,42,42,35,36,35,34,34,34,36,37,37,39,41,40,38,39,40,41,41,40,40,40,41,40,40,35,34,35,35,34,36,36,37,38,39,39,38,37,38,39,39,40,39,41,43,43,41,41,33,31,34,36,35,36,36,38,37,38,39,39,40,42,43,43,42,41,41,42,43,42,42,33,32,33,34,34,35,36,38,38,39,40,42,44,45,44,42,42,42,42,42,43,43,44,31,32,33,36,37,36,38,39,40,41,41,43,46,46,43,43,42,42,43,44,44,44,45,32,35,38,43,42,41,39,39,40,40,40,42,43,43,44,45,43,43,44,45,45,46,47,35,36,37,42,44,43,41,39,40,41,41,42,43,44,44,44,45,44,44,45,45,46,48,36,33,33,37,44,46,42,40,42,42,45,47,45,44,46,48,48,47,45,45,45,45,47,36,35,34,34,39,42,41,44,46,46,47,48,46,45,46,48,48,47,47,48,48,48,48,33,35,35,34,37,42,42,42,44,45,47,48,47,45,44,47,47,45,48,50,50,49,48,32,34,34,35,39,41,42,39,39,42,45,47,47,46,46,47,47,46,48,49,49,49,47,30,31,31,32,36,39,42,43,43,42,43,45,46,48,46,44,45,46,48,49,48,47,47,30,31,30,31,33,38,42,45,45,43,43,46,45,46,46,44,46,46,45,46,48,47,47,29,31,31,32,33,35,38,40,41,40,40,43,44,45,46,46,49,49,45,45,48,48,47,28,30,29,29,30,33,37,39,39,39,39,39,41,42,45,49,50,50,49,50,51,49,47,28,27,28,30,31,34,37,38,39,40,39,39,39,39,43,45,45,44,46,48,47,46,47,28,28,28,29,30,31,33,36,39,41,40,40,40,41,43,44,42,42,44,44,43,43,46,25,28,28,25,26,29,32,34,34,37,39,39,41,41,40,40,41,44,44,44,44,45,46,26,29,27,25,26,29,32,34,34,36,38,39,39,39,38,40,42,44,45,44,45,47,47,26,28,27,26,27,30,32,34,35,36,37,40,40,39,38,39,40,42,43,42,43,45,45,26,26,28,29,28,29,31,35,38,37,36,38,41,40,39,39,42,41,38,38,40,42,42,26,27,30,30,29,29,31,35,38,37,36,38,39,40,40,40,42,41,37,37,39,41,42],
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
