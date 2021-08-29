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
        texture=ImageTexture(url=['../../images/5/newport15-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[31,34,36,35,36,38,40,42,44,46,48,45,41,35,32,31,31,31,31,28,27,27,27,30,33,34,34,36,39,43,43,43,45,47,45,41,35,31,29,28,26,26,24,26,26,27,30,32,34,37,40,40,41,42,42,44,43,41,39,36,33,32,30,26,25,24,24,24,25,32,34,36,38,38,39,40,41,41,42,42,39,37,34,31,30,28,24,23,23,24,24,24,33,35,37,37,37,38,40,40,40,40,39,38,36,33,29,27,25,24,21,22,23,22,22,34,35,37,39,39,38,39,40,39,37,36,34,32,29,27,24,23,22,23,21,22,20,21,36,35,37,38,40,39,38,38,36,35,35,34,32,29,26,24,23,22,22,20,19,22,24,35,35,36,37,40,40,40,39,35,34,34,34,32,29,26,24,23,22,19,18,19,22,23,34,35,37,37,38,38,40,40,37,34,31,32,30,27,25,23,21,21,18,18,22,24,23,33,33,35,36,37,38,39,39,36,33,31,29,28,25,23,22,20,17,16,17,20,21,21,30,31,34,36,37,38,37,36,36,33,30,27,25,24,23,22,19,17,16,17,18,20,20,27,31,34,35,36,35,36,36,36,33,28,25,25,25,24,20,18,17,17,17,16,18,20,28,29,30,33,34,34,35,34,33,30,27,26,25,25,22,21,20,18,17,16,17,18,20,27,28,28,31,32,31,32,31,30,28,27,26,24,23,23,23,22,19,17,17,17,18,19,25,28,29,29,29,28,29,29,29,29,29,28,24,22,21,21,21,18,16,16,16,17,19,20,24,27,27,27,25,26,27,28,28,29,27,23,21,19,18,17,17,16,16,17,17,20,18,21,23,23,23,25,26,25,26,27,26,24,24,23,21,19,17,17,17,18,18,18,20,18,21,21,22,21,25,26,26,26,26,26,24,25,24,23,21,17,15,15,16,17,19,20,20,23,22,21,21,23,25,26,26,25,25,23,23,23,22,17,14,14,14,15,17,19,20,15,18,19,21,22,23,25,26,25,25,23,22,21,22,21,16,14,15,16,17,18,20,22,13,16,18,21,22,23,24,25,27,25,24,23,22,21,19,15,14,14,16,17,18,19,20,11,15,17,19,21,23,23,24,24,24,24,23,22,20,16,13,14,16,17,16,18,19,20,10,14,16,18,21,23,23,23,24,23,23,23,22,19,15,14,15,16,16,16,17,18,20],
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
