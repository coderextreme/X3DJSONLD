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
        texture=ImageTexture(url=['../../images/5/newport14-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[46,45,44,44,43,43,41,38,36,35,38,39,41,41,40,39,37,35,34,31,27,24,22,45,45,44,43,42,41,39,37,36,38,41,41,42,41,40,39,37,36,34,32,27,24,22,45,44,43,43,41,39,38,39,40,42,42,43,43,42,40,39,38,36,34,31,27,24,22,44,43,43,42,41,40,40,41,43,44,44,43,43,42,41,39,38,36,33,31,27,24,22,43,43,42,42,41,41,42,44,45,46,45,44,44,42,41,39,38,36,33,30,27,23,21,44,43,42,42,42,42,43,45,46,46,45,45,44,42,41,39,37,35,33,31,27,23,21,44,43,43,42,42,43,44,46,46,46,46,45,45,43,41,39,37,35,33,30,26,22,20,44,44,43,43,43,44,45,46,46,46,46,46,45,44,41,39,37,35,32,29,25,21,19,45,44,43,43,44,45,46,46,46,46,46,46,45,43,41,39,37,34,31,28,25,21,20,45,44,44,44,44,46,46,46,46,46,46,46,45,43,41,39,37,34,31,28,24,21,19,45,44,44,45,45,46,46,46,46,46,45,45,44,42,40,38,36,33,30,27,24,21,19,44,44,45,45,46,46,46,46,46,46,45,44,43,41,40,38,35,32,29,26,23,20,19,45,45,45,46,46,46,46,46,46,46,46,45,43,41,38,36,33,31,28,25,22,19,18,45,45,46,46,46,46,46,46,46,46,45,45,43,40,38,36,33,30,26,23,20,18,17,45,46,46,46,46,46,46,46,46,46,45,44,42,40,38,35,32,29,25,22,19,17,15,46,46,47,47,46,46,46,46,46,45,44,42,41,38,36,33,30,27,25,21,18,16,14,45,46,46,47,46,46,46,46,46,45,43,42,40,37,35,32,29,26,24,21,18,15,14,46,45,45,45,45,46,46,46,45,44,42,41,39,36,34,31,28,25,23,19,16,13,12,46,46,44,44,44,45,45,45,45,43,41,39,37,34,32,30,27,24,21,18,15,12,10,47,46,45,44,42,43,44,45,44,42,40,38,35,33,31,28,25,22,19,16,14,11,10,48,47,46,45,43,41,42,42,42,41,39,37,35,32,30,28,24,21,18,15,13,11,9,49,48,48,46,46,43,40,37,37,37,37,35,34,32,29,27,24,21,17,14,11,9,7,48,49,48,47,46,45,42,38,35,34,34,33,33,31,29,26,23,20,17,14,10,8,6],
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
