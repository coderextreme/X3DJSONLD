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
        texture=ImageTexture(url=['../../images/5/newport31-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.68828510220285,-71.37836759125742,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[31,30,29,27,26,25,25,26,27,26,25,22,20,19,17,14,9,6,5,4,4,3,3,31,31,31,30,29,27,26,26,26,26,25,23,21,19,16,13,9,5,4,4,3,3,3,32,32,32,31,30,29,26,25,25,25,25,24,22,18,14,11,11,8,4,4,3,3,3,34,33,33,33,32,30,28,26,24,23,23,22,20,16,13,12,9,6,4,3,3,3,2,36,35,36,36,35,33,30,27,25,23,21,20,18,15,12,9,6,4,3,3,3,3,2,37,37,38,38,36,35,32,29,26,22,19,18,17,14,11,8,4,3,3,3,3,3,2,38,38,38,38,37,36,35,31,28,23,19,17,15,14,11,8,4,3,3,3,3,3,2,40,39,38,37,37,36,35,33,30,25,21,18,15,12,10,8,5,3,3,3,3,3,2,39,39,38,37,37,36,36,34,32,28,23,20,16,12,10,9,6,4,3,3,3,3,2,39,38,38,37,37,37,36,35,33,30,26,22,18,14,11,10,8,6,3,3,3,3,2,40,40,39,38,38,38,37,36,34,31,27,23,19,15,13,11,10,10,5,3,3,3,2,41,41,39,38,38,38,37,35,33,31,28,24,21,17,14,11,11,12,6,3,3,3,2,42,41,40,40,39,38,37,35,33,32,29,26,23,19,16,14,13,12,12,4,3,3,2,43,42,41,41,41,39,38,36,34,32,30,27,24,20,18,17,15,14,13,8,4,3,3,44,43,42,41,41,41,38,36,34,32,30,27,26,24,22,21,21,18,14,10,4,3,3,44,44,43,43,43,41,39,37,35,32,30,30,29,27,26,25,24,20,16,11,4,3,3,47,46,45,45,43,41,39,37,36,35,34,33,32,30,29,27,26,23,20,15,8,4,3,47,48,46,45,43,41,39,37,37,37,37,36,34,32,30,29,27,25,22,17,11,4,3,46,47,46,45,43,41,39,38,38,38,39,37,35,32,31,30,27,25,23,19,13,5,3,46,47,47,45,43,42,40,38,38,39,38,37,36,34,32,31,28,26,23,19,14,10,4,46,46,46,45,43,41,40,39,38,38,37,37,36,36,34,32,29,27,23,20,14,9,5,45,45,45,44,43,41,40,38,37,37,36,36,35,36,33,31,28,24,21,18,14,9,5,45,44,45,44,43,41,39,38,37,36,35,35,35,35,33,30,26,22,20,17,13,10,7],
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
