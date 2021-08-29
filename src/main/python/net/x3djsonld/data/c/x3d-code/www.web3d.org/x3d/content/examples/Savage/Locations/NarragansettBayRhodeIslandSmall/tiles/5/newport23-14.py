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
        texture=ImageTexture(url=['../../images/5/newport23-14.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.62371823998276,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[25,26,29,31,33,33,35,34,33,33,33,34,34,33,31,32,34,31,31,32,32,32,36,25,28,30,31,31,33,33,32,33,35,36,35,33,33,33,31,31,32,32,31,30,30,33,25,27,29,30,31,31,32,34,33,33,34,34,34,34,32,31,32,33,32,31,30,30,30,25,26,27,28,29,31,33,33,32,32,32,32,33,33,33,32,32,32,31,31,31,32,31,25,25,27,28,30,33,33,33,33,33,33,35,34,34,33,32,32,30,29,30,30,31,31,24,24,26,28,31,33,32,32,34,33,33,34,34,34,33,34,33,31,30,30,30,32,31,22,23,25,29,31,33,32,33,34,35,34,34,34,34,34,34,33,32,32,31,31,31,30,21,24,26,27,29,31,33,34,33,33,34,35,34,33,32,32,31,31,32,31,30,30,31,21,24,25,26,26,27,31,33,32,32,33,33,34,34,35,35,34,33,32,32,32,31,30,20,22,24,24,25,26,29,31,31,32,32,33,34,36,37,37,34,33,32,31,31,30,27,21,21,22,21,21,25,27,27,29,33,34,33,33,34,34,34,33,32,30,28,29,27,26,19,21,20,19,20,23,25,26,27,29,31,31,31,31,32,32,31,31,31,30,28,26,25,16,17,17,15,17,19,21,25,26,26,27,29,31,31,31,31,31,32,32,31,27,25,25,14,14,14,12,13,16,17,21,23,23,25,27,29,30,30,30,31,31,33,31,27,25,24,10,10,11,12,12,14,17,19,20,21,22,23,25,27,28,29,30,30,30,28,26,24,22,9,8,9,8,9,10,12,15,17,18,20,21,23,25,27,28,29,30,29,27,25,23,22,9,9,7,6,8,8,9,11,12,15,16,18,21,23,24,25,27,28,27,27,25,23,22,5,5,4,4,6,8,10,10,10,11,12,15,17,18,20,22,24,25,26,27,26,24,23,3,3,3,4,5,5,7,7,8,10,12,13,14,15,17,19,22,24,26,27,25,23,21,1,2,3,5,5,5,5,5,7,9,10,10,11,13,14,16,19,21,24,26,25,23,21,1,2,2,3,2,2,2,3,4,5,7,9,11,12,12,12,14,17,20,23,23,23,22,2,2,1,1,1,1,1,2,4,4,5,8,9,8,10,11,12,13,15,18,20,22,22,2,2,1,1,1,1,1,1,3,3,4,7,7,6,8,10,11,12,13,16,18,21,22],
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
