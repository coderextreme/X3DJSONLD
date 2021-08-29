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
        texture=ImageTexture(url=['../../images/5/newport22-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.615647382205246,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[42,46,49,47,45,47,47,47,46,46,45,43,41,40,41,46,51,52,49,45,44,44,45,41,46,49,49,46,48,49,48,46,45,43,42,42,40,40,43,48,52,50,46,44,44,45,42,45,48,48,48,50,48,46,46,45,44,43,41,40,39,40,46,51,50,45,44,46,47,43,48,50,48,48,50,46,45,47,49,46,45,42,42,41,43,48,51,49,42,41,44,47,45,47,50,49,51,53,51,50,51,49,47,45,41,39,38,39,44,49,49,43,40,41,44,45,46,47,47,50,53,54,53,52,48,46,46,43,39,36,36,39,46,50,47,42,40,41,43,45,45,47,49,49,51,51,48,45,45,46,45,44,39,37,39,44,48,47,42,41,41,42,44,44,49,49,47,49,48,46,47,47,47,45,45,43,40,39,42,47,48,44,41,42,42,43,46,51,51,48,48,47,46,45,44,45,43,43,43,42,40,40,45,48,45,41,41,40,41,44,48,48,46,44,44,44,43,42,43,45,43,41,43,40,40,43,47,46,42,40,37,38,40,42,44,45,41,40,41,42,43,43,45,45,43,43,41,40,44,49,49,45,44,34,36,38,40,41,42,43,42,43,44,43,42,43,44,43,42,40,41,45,50,51,47,47,32,32,34,36,37,40,42,40,41,43,43,42,42,43,43,41,41,42,44,48,51,50,50,27,30,33,34,35,38,40,40,39,40,41,42,43,43,42,42,41,44,44,48,53,53,52,27,30,31,31,34,36,37,38,39,40,40,42,41,41,42,42,43,44,45,49,55,55,53,26,27,28,29,32,34,35,37,41,41,41,43,42,41,41,42,43,44,46,50,55,57,54,22,25,28,31,32,34,36,40,42,43,42,43,43,43,42,43,43,43,45,48,53,57,55,21,24,28,31,32,33,36,38,38,40,40,40,41,40,40,43,44,45,46,49,53,56,56,20,21,24,27,30,31,32,33,35,36,37,37,39,40,42,45,46,48,49,50,53,56,57,19,19,21,25,29,30,31,33,33,33,34,37,41,42,43,48,47,47,50,51,52,56,55,18,20,21,24,28,30,31,33,33,33,35,38,41,42,44,47,46,47,49,48,50,54,55,19,22,23,25,27,30,31,33,34,36,37,38,39,41,42,43,44,47,48,48,50,53,55,20,24,24,26,27,29,30,32,34,38,38,38,39,40,42,42,43,46,46,47,49,51,52],
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
