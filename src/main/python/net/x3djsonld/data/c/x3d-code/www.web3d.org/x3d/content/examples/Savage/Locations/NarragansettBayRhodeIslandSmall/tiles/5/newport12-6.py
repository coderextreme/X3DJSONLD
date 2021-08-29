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
        texture=ImageTexture(url=['../../images/5/newport12-6.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[22,21,23,24,25,25,25,26,29,30,32,36,38,38,37,36,37,37,38,38,41,42,42,21,21,23,23,23,25,26,27,28,31,34,36,37,37,37,36,38,39,39,40,41,43,43,20,20,23,24,25,25,26,28,29,30,33,33,35,36,38,39,39,40,40,41,42,43,43,19,20,22,24,26,26,26,27,30,30,31,32,34,36,38,39,40,40,41,40,42,43,43,18,20,21,23,25,27,27,27,28,30,30,30,33,36,39,40,42,43,42,40,42,43,43,17,19,21,22,25,27,28,27,28,28,29,30,34,36,38,39,41,41,42,43,42,42,44,17,20,21,22,25,28,27,26,27,28,29,29,33,35,37,39,41,41,42,43,42,42,44,17,18,20,22,23,26,25,25,25,26,29,29,31,33,35,39,39,41,42,42,43,43,44,15,16,19,21,21,22,23,25,25,25,27,29,30,32,35,36,37,40,41,42,44,45,45,13,14,17,20,20,20,21,23,24,24,25,27,28,31,33,35,37,40,42,42,43,44,43,10,12,15,18,19,20,21,21,21,23,23,24,26,28,31,34,36,38,40,41,42,43,43,9,12,13,15,17,18,20,21,21,21,22,24,24,25,28,31,34,37,39,40,42,42,42,8,10,11,13,16,17,18,19,20,20,21,22,21,22,26,28,30,33,36,38,40,41,41,4,7,11,13,15,16,16,17,18,18,19,20,20,21,25,27,28,30,34,36,38,39,40,3,6,9,11,12,13,14,15,16,16,16,17,17,19,22,26,29,32,33,35,36,37,38,3,5,6,7,8,10,13,15,16,15,15,16,16,17,20,23,26,29,31,34,36,37,38,1,3,3,5,6,9,11,13,14,15,15,15,15,16,18,21,24,27,29,31,34,36,38,0,1,2,3,5,6,9,10,12,14,14,14,15,17,17,19,21,25,27,30,32,36,39,0,0,1,3,4,4,6,10,11,11,11,13,16,16,17,19,21,22,26,30,31,33,37,0,0,1,2,2,3,5,8,9,10,10,11,15,16,17,17,19,20,24,28,30,31,34,0,0,0,0,1,3,5,6,7,10,10,10,14,15,16,17,18,20,23,26,28,30,33,0,0,0,0,0,2,3,5,8,11,12,11,13,14,14,17,18,18,22,25,27,29,33,0,0,0,0,0,2,3,5,9,12,14,12,13,14,14,17,18,18,22,25,27,28,33],
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
