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
        texture=ImageTexture(url=['../../images/5/newport15-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.55915137776267,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[48,49,48,47,46,45,42,38,35,34,34,33,33,31,29,26,23,20,17,14,10,8,6,47,47,47,47,46,46,45,42,38,32,29,27,28,29,27,24,21,18,14,12,9,5,4,45,46,45,45,45,45,44,42,39,35,30,25,22,23,24,21,19,16,12,10,7,3,2,43,44,43,43,42,42,41,40,37,34,31,26,20,17,17,17,15,14,12,9,6,3,1,41,41,41,40,39,39,37,36,34,32,30,26,20,15,11,10,12,11,10,8,6,2,0,39,40,39,38,37,35,34,33,31,30,27,22,16,10,7,6,6,7,6,5,3,1,0,38,38,37,36,35,34,31,29,26,22,17,14,11,7,6,5,4,3,2,2,2,1,0,35,34,33,32,32,31,27,22,18,15,13,12,10,9,8,7,6,4,3,3,2,1,0,35,31,27,25,24,24,22,18,17,17,18,17,16,15,14,12,10,8,6,5,3,1,0,34,30,26,25,23,21,20,22,23,23,23,23,21,20,19,17,14,11,8,6,3,0,0,32,29,29,30,30,28,26,27,28,28,28,27,25,23,21,19,16,13,9,6,2,0,0,31,30,32,34,34,33,31,32,33,32,31,30,29,26,23,21,17,14,11,8,4,0,0,33,32,34,36,37,37,37,37,37,36,34,32,30,27,24,21,17,13,11,8,4,1,0,35,35,37,39,40,41,41,41,40,38,36,33,30,27,23,20,17,13,11,9,4,0,0,37,37,38,40,41,42,43,42,40,38,35,33,30,28,24,21,18,14,11,7,3,0,0,38,38,40,41,42,43,43,42,40,37,35,33,31,28,25,21,17,13,9,4,0,0,0,39,40,41,42,42,43,42,41,39,37,35,33,30,27,24,21,17,13,7,3,0,0,0,40,41,42,42,42,43,42,41,38,37,35,33,31,27,23,22,19,14,8,2,0,0,0,41,42,43,43,43,44,43,42,39,37,35,33,31,27,23,19,17,13,10,3,0,0,0,42,42,43,43,44,44,44,43,41,38,35,33,30,27,23,19,16,14,9,5,1,0,0,42,43,43,44,44,45,45,44,42,39,36,34,31,28,25,21,17,15,11,8,4,0,0,43,43,44,44,45,45,45,45,42,40,38,36,33,29,26,22,18,16,14,11,6,1,0,43,44,44,45,45,45,45,45,43,41,39,37,34,30,27,23,20,17,15,12,7,2,0],
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
