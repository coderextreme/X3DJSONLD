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
        texture=ImageTexture(url=['../../images/5/newport23-23.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.24923386681724,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[52,53,54,53,53,54,55,52,51,48,46,45,43,41,40,38,36,34,32,30,28,26,25,49,49,48,48,50,51,52,51,50,47,45,43,42,40,39,38,36,34,32,30,28,26,24,47,47,47,46,47,47,48,48,46,44,43,42,40,39,38,37,36,34,32,30,27,25,23,46,47,47,43,42,42,44,46,44,41,40,39,38,37,37,36,35,34,32,30,27,25,23,43,45,46,42,38,37,39,42,40,38,37,36,36,36,35,35,35,33,32,30,27,26,24,40,43,44,40,36,34,34,37,36,35,33,32,34,34,34,34,34,33,32,30,28,26,24,39,42,44,40,34,32,30,29,28,29,30,30,32,32,33,33,33,33,32,30,28,26,24,38,40,43,41,35,31,27,23,23,24,27,29,30,31,31,32,32,32,31,30,28,27,24,36,36,38,39,33,29,27,25,23,22,25,28,29,30,30,31,31,31,30,29,28,27,25,34,34,35,37,33,29,26,25,23,21,24,26,28,29,29,30,30,30,30,29,28,27,25,32,31,31,34,34,30,24,22,20,20,23,25,26,27,28,30,30,30,29,28,28,27,25,30,30,28,30,32,29,24,21,19,19,22,24,25,27,28,29,29,29,29,28,28,27,25,30,28,25,26,29,29,24,20,20,21,22,23,25,26,27,28,29,28,28,28,28,27,25,28,25,23,24,28,29,25,21,20,21,22,23,24,25,26,27,28,28,28,28,28,27,25,28,25,23,24,26,27,27,23,21,21,21,22,23,24,26,27,27,27,28,28,28,27,25,25,27,25,23,23,23,25,25,23,21,21,21,22,23,25,26,27,27,27,28,28,26,24,26,26,25,23,22,22,25,27,25,23,20,20,21,23,24,25,26,26,27,27,27,26,24,25,24,24,24,22,21,24,26,25,23,20,19,20,22,23,24,25,25,26,26,26,25,24,22,21,22,21,20,20,20,22,24,23,20,20,20,22,23,24,24,24,24,25,25,24,23,21,21,21,19,17,18,17,18,20,22,21,21,21,22,22,23,23,23,24,24,24,24,23,24,23,21,18,18,19,17,17,18,20,20,20,20,21,21,22,22,22,22,23,23,22,22,27,24,20,19,19,19,17,16,16,18,19,19,19,19,20,21,21,21,21,22,22,21,21,26,23,21,20,20,17,16,16,16,17,19,19,18,18,19,20,21,21,21,21,21,21,20],
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
