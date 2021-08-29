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
        texture=ImageTexture(url=['../../images/5/newport21-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.607576524427735,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[25,26,26,24,23,28,31,29,28,28,31,30,29,28,28,28,30,30,32,32,34,33,31,22,22,23,25,24,26,29,30,30,30,32,31,31,30,28,28,30,31,32,33,33,33,33,18,18,22,25,26,26,28,30,30,31,33,33,32,31,31,30,33,34,35,36,36,35,35,17,17,20,26,28,29,29,29,31,31,33,35,35,32,33,34,37,37,38,39,37,36,36,17,17,19,24,26,27,30,34,35,37,40,42,42,38,37,38,38,39,40,39,39,40,41,19,21,23,25,25,26,28,31,32,35,41,44,44,41,39,38,37,39,42,42,42,43,43,21,23,25,26,27,29,30,28,31,33,36,41,44,43,39,39,39,40,43,44,45,45,45,21,23,24,25,27,31,32,31,34,35,37,43,48,49,44,41,41,42,43,44,45,46,47,22,24,25,26,29,32,33,33,35,38,40,45,49,52,48,44,42,43,43,44,47,48,48,23,26,27,28,30,33,34,36,39,42,43,45,49,52,49,45,44,45,45,46,47,49,48,24,25,27,30,32,34,35,36,40,44,45,45,47,51,50,46,46,46,47,48,48,49,49,25,26,26,30,33,35,36,37,40,43,46,47,49,54,55,51,49,49,50,50,50,49,49,25,26,27,31,34,37,38,41,42,43,45,46,50,56,58,54,51,50,52,53,52,49,49,23,24,27,32,35,37,38,42,43,45,46,47,50,55,57,55,52,51,52,53,53,51,51,26,26,29,32,35,36,39,44,45,46,47,48,53,56,61,60,55,51,50,51,51,52,52,29,29,30,33,37,37,39,45,47,47,47,49,53,57,62,63,58,53,50,50,49,50,50,29,32,32,31,34,35,39,45,47,46,46,49,50,52,57,59,55,52,50,50,51,51,52,30,34,35,36,37,36,39,43,46,47,49,51,51,50,53,57,56,52,49,49,51,52,51,32,35,38,40,41,41,43,45,48,48,49,50,49,49,52,56,56,51,46,47,49,50,50,37,38,42,44,45,45,48,48,48,46,46,46,44,45,48,53,55,50,46,45,48,50,48,41,43,45,46,46,47,49,47,45,45,44,43,40,41,43,48,53,51,46,45,47,49,47,42,45,47,46,45,46,48,47,45,45,44,43,41,40,41,46,51,51,48,45,45,44,45,42,46,49,47,45,47,47,47,46,46,45,43,41,40,41,46,51,52,49,45,44,44,45],
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
