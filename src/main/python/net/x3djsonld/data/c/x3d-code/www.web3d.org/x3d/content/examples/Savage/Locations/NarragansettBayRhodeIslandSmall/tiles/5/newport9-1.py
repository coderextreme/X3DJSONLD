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
        texture=ImageTexture(url=['../../images/5/newport9-1.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5107262310976,-71.42679273792248,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[38,38,40,40,39,39,39,39,38,38,36,35,34,31,31,30,26,23,21,19,18,16,13,38,37,37,37,38,38,39,39,39,39,37,37,35,32,32,30,27,24,21,21,20,16,12,39,38,36,36,37,37,37,38,40,41,39,37,34,34,33,31,29,26,22,20,18,14,11,38,39,39,39,39,39,38,38,38,38,40,40,37,33,31,29,28,25,21,20,18,15,12,37,37,39,40,40,40,38,38,37,36,38,39,39,36,31,29,27,23,21,21,18,15,12,37,37,39,39,39,39,38,38,39,36,35,36,40,38,35,32,29,25,23,21,18,15,14,40,39,39,40,40,38,38,38,39,37,35,36,40,40,38,35,31,26,23,19,17,16,16,39,39,37,38,41,40,37,35,35,37,37,37,38,42,40,38,33,28,24,19,18,18,17,36,37,37,38,39,41,38,36,36,38,38,36,36,40,39,38,34,30,27,23,21,19,16,38,39,40,38,38,39,36,37,37,37,39,38,39,39,36,36,34,30,29,28,23,19,17,40,38,38,37,37,36,35,36,37,38,37,38,38,37,35,33,33,33,32,28,25,21,18,40,39,38,37,37,37,36,38,38,38,38,38,36,34,35,34,36,35,32,27,24,22,20,40,39,39,39,39,39,37,39,39,40,41,41,39,35,37,38,37,34,30,26,24,22,20,43,43,43,41,40,40,41,42,41,41,42,41,38,35,35,35,35,35,31,27,23,20,18,46,45,45,42,39,40,44,44,41,41,39,39,38,35,36,34,33,36,34,29,24,22,21,48,47,46,46,42,43,47,46,43,43,41,40,39,37,36,34,32,33,34,31,26,24,23,46,46,46,46,44,43,45,45,45,46,45,43,39,36,37,37,35,35,34,33,29,26,24,48,48,48,47,46,45,45,45,45,46,47,45,40,37,39,39,39,38,36,36,33,28,24,50,49,49,48,48,47,46,47,47,47,47,46,43,43,41,39,38,36,35,33,31,28,25,47,48,47,47,48,47,48,48,47,48,48,46,44,45,45,41,39,37,36,36,34,29,28,47,48,48,48,49,49,50,50,49,49,50,48,47,49,49,46,43,40,38,38,35,31,29,49,49,51,51,49,49,50,49,50,51,52,50,49,50,49,47,45,41,39,37,35,31,29,49,49,50,51,49,50,50,50,51,52,51,50,50,49,49,47,44,40,39,37,34,31,30],
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
