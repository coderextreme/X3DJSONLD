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
        texture=ImageTexture(url=['../../images/5/newport18-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.5833639510952,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[53,51,50,49,47,45,43,40,38,36,33,31,29,27,25,24,22,19,16,12,6,2,1,52,51,50,49,47,45,43,40,38,35,33,31,28,25,23,21,18,16,14,9,4,1,0,52,50,49,48,46,44,42,39,37,35,33,31,28,25,23,21,18,14,9,4,1,0,0,51,50,49,47,45,42,40,38,35,33,31,29,26,24,22,20,18,15,11,5,0,0,0,51,50,49,47,43,40,38,35,33,31,30,27,25,23,20,19,17,14,9,3,0,0,0,51,50,48,47,44,40,36,33,30,28,27,25,23,22,19,17,15,10,5,1,0,0,0,49,49,48,46,43,39,36,32,29,26,24,22,21,19,17,14,11,6,2,0,0,0,0,48,46,45,43,39,36,33,30,27,25,23,21,18,16,14,12,9,5,1,0,0,0,0,48,46,42,39,36,33,29,26,23,21,20,19,17,14,11,8,6,1,0,0,0,0,0,48,46,42,39,36,33,29,25,21,17,15,14,13,12,9,5,1,0,0,0,0,0,0,47,44,41,38,35,31,27,24,20,14,11,11,10,9,7,3,0,0,0,0,0,0,0,47,42,39,35,33,30,26,22,17,12,9,8,7,7,5,2,0,0,0,0,0,0,0,46,42,38,34,30,28,25,21,14,10,7,6,5,4,2,0,0,0,0,0,0,0,0,44,40,36,33,29,26,23,19,14,9,6,5,3,1,0,0,0,0,0,0,0,0,0,44,39,35,32,28,25,21,15,11,8,5,3,2,0,0,0,0,0,0,0,0,0,0,42,37,34,30,27,23,19,14,9,6,3,1,0,0,0,0,0,0,0,0,0,0,0,40,36,32,29,25,21,17,13,8,5,1,0,0,0,0,0,0,0,0,0,0,0,0,38,34,31,27,23,19,15,10,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,36,32,28,25,21,16,12,8,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,29,26,22,19,14,10,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,29,24,20,16,11,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,27,23,18,13,9,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,26,22,17,13,8,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
