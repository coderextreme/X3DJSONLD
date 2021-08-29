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
        texture=ImageTexture(url=['../../images/5/newport8-17.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.50265537332009,-71.2976590134823,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[21,20,19,19,19,18,17,17,18,19,20,22,23,24,24,24,23,21,18,17,14,12,9,21,21,21,21,21,21,19,18,17,19,21,23,25,26,25,24,24,23,22,19,16,13,9,20,21,23,24,23,22,21,20,20,22,23,25,27,27,26,26,25,24,22,19,16,13,11,23,23,25,26,27,25,22,21,21,22,23,24,25,27,28,27,25,23,22,20,17,16,13,26,27,28,29,29,28,26,24,24,24,23,23,26,27,28,27,26,25,23,22,20,16,12,27,26,27,28,28,29,28,27,26,26,26,25,29,29,29,29,28,28,26,23,21,17,13,27,26,27,27,28,28,28,28,28,29,29,31,31,31,31,30,30,30,28,24,21,18,15,30,30,29,28,29,30,29,29,29,30,33,34,33,32,33,32,31,31,29,24,20,17,15,33,33,31,29,31,31,32,30,29,31,33,34,34,34,33,33,33,32,29,26,22,19,15,34,34,33,32,32,33,33,32,33,34,35,35,36,37,36,35,33,33,31,27,24,20,15,36,36,35,35,35,36,35,34,36,37,36,37,38,39,38,36,33,32,29,26,25,21,16,37,37,36,37,36,37,36,37,36,35,36,38,40,43,41,39,35,33,31,28,25,21,18,39,39,39,39,39,39,40,41,38,37,38,40,41,42,41,39,36,33,31,28,24,20,17,41,42,42,41,40,42,44,43,39,38,37,40,43,40,39,38,36,35,31,27,25,21,17,45,44,43,42,42,43,44,43,41,40,37,40,40,39,40,39,36,34,30,29,28,23,17,46,44,42,41,43,43,43,43,42,42,40,40,39,38,39,38,35,34,30,28,28,22,16,44,44,44,44,43,42,43,45,43,43,43,43,42,40,38,36,34,30,30,27,24,17,12,43,44,46,45,44,45,43,42,42,42,44,44,42,42,38,35,35,31,28,28,24,17,12,44,45,46,46,45,47,45,44,43,44,44,42,40,41,39,34,34,29,26,25,21,13,10,46,47,47,47,47,47,46,46,45,44,43,41,39,38,37,33,30,25,23,22,19,13,9,47,48,49,49,49,48,46,45,44,42,41,39,38,36,33,31,28,25,22,20,16,10,6,49,50,50,49,48,48,46,45,43,42,41,39,38,34,30,29,25,22,20,18,14,9,5,49,50,49,49,48,48,46,45,43,41,41,38,36,33,29,27,24,21,18,17,13,9,7],
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
