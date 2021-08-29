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
        texture=ImageTexture(url=['../../images/5/newport24-30.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.63178909776027,-71.19273786237466,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[26,25,23,22,22,22,24,25,25,27,29,31,32,35,38,40,42,43,45,47,50,51,54,29,28,25,23,22,22,23,23,24,25,26,27,29,31,34,36,38,41,43,46,50,53,55,32,29,26,24,22,22,22,22,24,24,25,26,28,30,32,32,34,37,40,45,49,54,56,35,32,27,25,24,23,22,22,23,23,24,26,29,30,31,31,32,35,38,42,48,54,56,35,33,30,27,26,24,24,23,23,24,25,27,29,31,30,30,31,33,36,40,44,49,54,36,34,32,29,27,26,26,25,24,24,25,28,31,31,30,28,29,31,34,37,41,45,51,35,34,33,31,28,28,29,27,25,24,24,27,30,29,28,28,29,31,34,37,41,45,49,34,34,34,33,31,30,32,31,27,25,24,24,26,26,27,28,30,34,38,40,43,46,50,32,33,34,33,32,32,34,33,29,26,24,24,25,26,27,28,32,36,40,42,45,48,53,32,33,34,33,32,34,35,33,30,26,25,25,26,26,27,28,31,35,40,44,46,50,54,32,33,33,33,32,33,34,34,31,26,25,26,27,28,29,28,30,34,40,43,46,50,55,32,33,32,32,32,32,33,33,30,26,26,26,28,30,31,30,30,34,38,42,45,49,57,33,32,32,32,31,31,32,32,29,26,27,29,31,32,32,30,31,34,37,40,44,51,60,32,32,32,31,31,31,32,32,29,26,28,31,33,33,33,32,32,34,37,40,45,52,58,32,32,31,32,32,32,32,32,30,27,28,31,34,35,35,34,33,35,37,40,45,49,53,31,31,31,31,31,32,33,33,31,28,29,31,33,35,36,36,35,35,37,39,41,44,47,31,31,31,31,31,31,31,31,30,29,30,32,33,34,36,38,38,38,38,38,40,41,42,32,32,31,31,31,30,29,29,29,29,31,32,32,34,36,38,40,41,41,40,41,41,40,32,32,32,32,31,30,29,29,29,29,31,32,32,34,37,40,42,43,43,44,45,44,43,32,32,33,33,31,30,29,29,29,30,31,32,33,35,38,42,45,45,46,47,48,48,47,32,32,33,33,32,31,30,29,30,31,31,32,35,38,41,46,48,48,49,50,50,50,49,32,33,33,32,31,30,29,30,32,33,33,33,36,41,46,50,51,51,52,52,52,51,50,32,33,33,32,31,30,29,31,34,35,34,34,37,42,48,52,52,52,53,53,52,52,51],
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
