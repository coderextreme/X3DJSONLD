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
        texture=ImageTexture(url=['../../images/5/newport12-24.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.24116300903972,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[38,37,36,34,33,32,31,30,29,28,26,26,24,23,22,21,21,20,18,16,13,12,11,39,37,36,35,34,33,31,30,29,28,27,26,24,23,22,22,20,18,17,15,13,12,11,39,38,37,35,34,33,31,30,29,28,28,27,26,25,23,22,21,19,17,15,13,12,11,39,38,36,35,34,33,32,32,31,30,29,28,27,25,24,23,21,19,17,15,14,12,11,39,38,36,35,35,34,34,33,32,31,30,28,27,25,24,22,20,19,17,16,14,12,11,40,38,37,36,35,35,34,33,32,31,30,28,27,25,23,22,20,18,17,16,14,13,12,40,38,37,36,35,35,34,33,32,30,29,28,26,25,23,22,20,18,16,15,14,13,12,40,39,37,36,36,35,33,33,31,30,29,27,26,24,22,21,20,18,16,15,14,12,12,40,39,38,37,36,34,33,32,31,30,28,27,25,24,22,20,18,17,15,14,13,11,11,40,39,37,36,35,34,33,31,30,29,28,26,25,23,21,19,18,16,15,13,12,10,9,40,39,38,37,36,34,32,30,29,27,26,25,23,22,20,18,16,15,13,12,10,8,7,41,40,38,37,35,34,33,31,29,26,24,23,21,20,18,16,15,13,12,10,8,7,6,40,39,38,36,35,34,32,30,29,26,23,22,20,19,18,17,15,13,12,10,9,7,7,40,39,37,36,34,33,32,30,29,26,24,22,20,20,19,18,17,15,13,11,10,8,7,39,38,37,35,34,33,32,30,28,26,24,22,23,22,21,20,18,16,14,12,11,9,7,39,37,36,35,34,33,31,30,28,26,25,25,25,23,22,21,19,17,16,14,12,9,8,38,37,36,35,34,33,31,30,29,28,27,27,26,25,24,22,20,18,17,15,12,9,8,38,37,36,35,34,33,32,31,30,29,29,28,27,25,24,22,20,19,17,15,12,10,8,39,38,37,37,36,35,33,32,31,31,30,29,27,25,23,22,20,18,17,15,12,10,9,38,37,36,36,35,34,34,33,32,31,30,29,27,25,23,22,20,18,17,15,12,9,8,38,37,36,35,34,33,32,31,31,30,30,29,28,26,24,23,21,18,16,14,11,9,7,38,37,35,34,33,31,30,29,29,29,29,28,27,26,24,23,21,18,15,12,10,7,6,38,36,35,34,32,31,29,28,28,28,28,28,27,26,24,22,20,17,14,11,9,6,4],
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
