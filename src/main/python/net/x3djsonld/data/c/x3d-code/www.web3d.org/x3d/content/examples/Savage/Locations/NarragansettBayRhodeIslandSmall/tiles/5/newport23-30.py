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
        texture=ImageTexture(url=['../../images/5/newport23-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[16,20,21,21,22,29,29,27,28,31,32,32,31,30,29,27,25,25,27,30,33,35,36,26,26,27,24,24,26,27,28,30,32,34,35,35,35,33,31,30,31,31,33,35,37,38,34,32,30,28,27,27,27,28,30,32,34,36,37,37,37,36,36,36,36,36,36,37,39,39,38,35,34,32,30,29,30,31,33,35,37,39,39,39,39,40,41,40,39,38,37,39,43,43,41,38,36,33,31,32,33,34,35,37,40,41,41,41,42,43,43,43,42,41,42,45,46,46,44,40,36,34,34,34,35,36,38,39,41,42,43,43,45,46,46,46,46,46,44,46,48,48,45,40,38,38,37,36,38,40,40,41,42,44,45,46,48,48,49,48,48,42,45,48,50,49,46,43,41,40,39,40,42,43,44,44,45,46,47,49,50,50,50,49,45,47,49,51,51,51,49,47,44,42,43,44,45,46,46,47,47,48,50,51,51,51,50,47,49,50,51,52,53,53,51,49,47,47,47,47,48,48,47,47,48,50,51,52,52,52,48,50,51,51,51,52,54,54,53,51,51,51,50,49,48,47,47,47,48,51,54,54,53,47,50,52,52,52,52,54,55,55,55,54,53,52,50,49,48,47,47,47,49,52,54,54,44,48,51,52,52,52,53,55,56,57,55,54,53,52,51,50,48,47,46,47,48,52,54,38,42,46,50,50,50,52,54,54,55,55,55,55,54,53,52,50,48,46,46,47,51,53,33,36,39,43,45,45,48,49,51,53,54,55,56,56,54,53,52,50,49,48,48,49,52,28,30,32,36,38,39,41,43,47,51,54,56,56,55,55,54,54,52,50,49,50,49,51,26,27,28,30,31,34,36,40,45,49,52,55,56,55,54,53,52,52,50,49,49,49,50,24,24,25,27,29,31,33,38,44,48,50,52,53,53,52,51,50,49,48,47,46,47,50,22,22,23,25,27,30,32,36,41,44,46,47,48,49,50,49,48,47,47,46,46,48,50,22,22,23,24,26,28,30,33,36,39,41,41,43,46,46,46,46,46,46,47,47,49,51,23,22,22,23,24,25,27,29,31,33,35,37,39,42,43,43,44,45,46,47,48,50,52,25,24,22,22,22,23,24,26,27,29,31,33,35,37,39,41,43,44,46,48,49,51,53,26,25,23,22,22,22,24,25,25,27,29,31,32,35,38,40,42,43,45,47,50,51,54],
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
