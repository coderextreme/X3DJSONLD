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
        texture=ImageTexture(url=['../../images/5/newport21-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.18466700459715,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[7,10,13,20,27,33,42,48,51,49,46,44,44,43,43,43,45,45,47,48,48,45,44,7,8,14,22,29,35,41,47,50,48,45,44,44,44,44,44,45,46,46,46,45,45,45,7,8,13,22,29,35,41,45,47,46,45,45,44,44,44,45,46,46,47,47,48,46,45,8,8,13,21,28,35,40,44,46,46,44,44,44,44,44,45,46,48,49,49,49,47,46,8,9,14,23,29,36,41,44,45,44,44,44,45,44,44,45,46,47,48,48,48,48,47,8,12,21,26,31,35,39,41,42,42,43,46,45,44,44,44,45,46,46,46,46,47,47,8,16,26,28,30,33,36,39,39,39,42,43,43,43,43,44,45,45,45,45,44,45,45,9,17,27,28,29,30,33,35,36,37,40,42,42,42,43,44,44,45,45,44,44,44,44,10,16,25,26,26,28,30,32,33,35,39,40,41,42,44,43,44,45,46,44,43,43,42,10,13,19,22,24,26,28,31,33,35,37,39,40,42,43,43,43,43,44,42,42,41,40,9,11,13,19,23,25,29,32,33,34,36,38,39,40,41,41,41,41,41,41,41,41,40,9,11,13,18,22,25,27,30,33,36,37,38,39,40,40,40,40,40,40,40,41,41,41,9,11,13,18,23,26,28,31,34,36,38,39,40,41,41,40,40,40,40,40,40,40,41,10,12,14,18,23,26,29,33,36,37,39,40,41,42,42,42,43,42,41,41,41,41,41,10,12,15,19,24,28,32,35,37,39,40,41,42,44,45,46,46,44,43,43,42,41,41,12,14,17,21,25,31,35,37,39,40,42,42,43,45,48,50,50,47,45,45,44,43,43,14,16,19,23,27,31,36,39,41,43,44,45,45,45,47,49,50,49,47,46,46,46,45,15,18,21,24,28,31,35,38,41,43,45,47,48,49,47,47,48,49,49,49,49,47,47,15,18,21,24,28,32,36,39,42,44,46,48,50,51,50,48,47,47,48,48,49,48,48,16,18,21,24,28,32,36,41,43,45,46,47,49,49,50,49,49,50,49,48,47,47,47,18,20,23,26,29,32,35,39,43,46,46,47,48,48,49,50,51,52,52,51,50,48,48,19,23,27,29,31,32,33,38,41,44,46,47,47,48,49,49,50,50,50,51,50,50,50,19,24,29,31,33,32,33,36,40,44,46,46,47,48,48,49,49,50,50,51,51,51,51],
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
