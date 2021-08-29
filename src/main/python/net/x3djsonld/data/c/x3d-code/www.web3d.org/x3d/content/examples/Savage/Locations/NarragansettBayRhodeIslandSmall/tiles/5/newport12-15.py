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
        texture=ImageTexture(url=['../../images/5/newport12-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.53493880443013,-71.31380072903733,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=23,xSpacing=3.6685716E-4,zDimension=23,zSpacing=3.6685716E-4,height=[0,0,0,0,0,0,1,1,4,11,15,16,19,22,25,28,32,35,39,39,37,36,33,0,0,0,0,0,0,0,1,10,14,17,18,23,26,30,33,32,33,34,36,34,33,33,0,0,0,0,0,0,0,0,10,15,15,18,24,28,33,35,34,34,34,34,33,34,34,0,0,0,0,0,0,0,0,2,11,14,19,25,29,32,34,35,35,37,35,36,39,37,0,0,0,0,0,0,0,0,0,3,15,21,27,30,33,32,33,34,34,35,38,41,39,0,0,0,0,0,0,0,0,0,3,15,20,25,29,32,35,35,34,34,35,37,38,37,0,0,0,0,0,0,0,0,0,2,13,18,24,28,31,36,37,37,37,39,39,38,36,0,0,0,0,0,0,0,0,0,2,10,16,23,27,30,34,37,37,37,36,36,36,39,0,0,0,0,0,0,0,0,0,2,10,15,20,25,29,31,35,37,37,34,33,33,35,0,0,0,0,0,0,0,0,0,2,11,14,19,23,25,29,34,37,36,34,32,31,31,0,0,0,0,0,0,0,0,1,3,10,13,19,22,23,26,29,30,31,32,30,31,30,0,0,0,0,0,0,1,5,6,8,9,13,17,20,22,22,26,29,29,29,28,29,30,0,0,0,0,0,0,4,7,8,9,10,11,12,16,19,21,27,31,31,28,24,24,24,0,0,0,0,0,0,3,6,7,9,10,10,9,11,15,18,21,26,29,30,27,23,22,0,0,0,0,0,0,1,5,7,8,6,6,6,9,12,15,16,19,22,26,25,22,21,0,0,0,0,0,0,0,2,5,3,1,1,1,4,9,13,15,16,17,18,18,19,19,0,0,0,0,0,0,0,0,0,0,0,0,0,1,5,9,13,15,15,15,14,16,17,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,8,11,14,15,14,15,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,5,11,16,16,14,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,6,11,13,11,11,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,8,8,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,5,7,8,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,6,8],
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
