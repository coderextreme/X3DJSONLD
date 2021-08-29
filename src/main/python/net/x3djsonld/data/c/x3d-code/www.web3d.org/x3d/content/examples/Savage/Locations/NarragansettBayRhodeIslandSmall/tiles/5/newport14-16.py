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
        texture=ImageTexture(url=['../../images/5/newport14-16.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.551080519985156,-71.30572987125981,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[20,21,21,21,22,24,24,25,26,29,29,29,29,29,30,31,29,29,29,30,33,35,36,21,21,21,22,24,26,28,27,28,30,31,30,29,30,31,29,29,28,29,30,31,33,33,22,23,23,23,23,25,28,29,30,33,32,30,31,30,29,28,28,28,30,32,34,34,34,20,22,24,24,26,27,29,30,30,30,30,29,29,30,32,31,29,29,31,34,35,35,36,19,22,25,26,28,29,30,30,31,31,31,29,29,29,31,30,30,30,31,34,34,35,36,19,23,26,27,28,29,30,30,29,29,30,30,27,29,30,30,30,31,32,32,33,34,34,20,22,23,25,27,29,31,30,29,27,28,29,27,27,28,27,29,30,31,32,33,33,33,19,20,22,23,24,27,29,29,28,25,25,27,27,27,28,27,28,29,29,30,31,31,31,16,18,20,22,23,23,25,26,27,24,24,25,25,26,27,29,28,28,28,29,30,30,30,11,15,18,21,22,22,23,23,23,22,22,22,25,25,25,26,27,27,27,28,28,29,30,7,13,15,18,21,21,21,21,21,21,20,20,22,23,24,24,26,25,25,25,24,26,27,5,11,13,14,17,18,18,19,19,19,19,19,20,22,23,24,24,22,22,23,23,25,26,1,8,11,10,13,16,16,16,16,16,18,19,18,21,21,21,20,20,21,22,24,27,28,0,5,8,9,11,14,14,14,14,14,15,16,17,19,17,16,17,21,23,23,26,27,27,0,0,6,10,13,13,14,14,14,14,15,14,15,14,12,11,14,20,23,25,26,27,28,0,0,1,4,9,11,11,13,14,15,14,11,11,11,9,12,16,19,20,21,22,26,28,0,0,0,0,2,5,7,8,10,11,11,11,11,11,11,13,16,18,21,23,25,26,27,0,0,0,0,0,1,3,4,7,10,12,13,12,11,12,14,15,18,22,24,27,26,27,0,0,0,0,0,0,2,4,6,9,11,12,13,13,14,16,18,19,22,24,26,28,29,0,0,0,0,0,0,0,4,7,9,10,12,13,13,14,16,18,20,22,23,23,25,27,0,0,0,0,0,0,0,5,6,7,9,11,12,13,15,18,20,21,22,24,23,25,28,0,0,0,0,0,0,0,2,5,7,9,11,12,15,17,19,21,20,21,24,26,29,31,0,0,0,0,0,0,0,1,5,7,9,11,13,16,17,20,21,20,21,25,27,29,31],
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
