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
        texture=ImageTexture(url=['../../images/5/newport14-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.45215981325196,-71.46144053614887,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[21,14,6,1,0,0,0,0,0,0,0,0,0,0,4,9,12,15,17,19,21,23,26,20,12,5,3,0,0,0,0,0,0,0,0,2,9,13,15,18,20,22,25,26,29,26,19,13,6,2,0,0,0,0,0,0,0,2,8,15,17,20,22,25,27,27,32,27,23,19,12,7,1,1,0,0,0,0,0,1,7,12,17,19,23,24,25,25,35,29,25,21,17,11,5,3,3,2,0,0,0,0,3,9,16,20,22,22,23,23,37,32,29,25,22,17,11,4,2,1,0,0,0,0,0,4,12,17,19,21,20,19,38,35,33,30,27,23,15,5,2,2,0,0,0,0,0,1,6,14,18,21,21,20,37,36,34,34,32,27,22,12,3,1,0,0,0,0,0,0,2,9,13,16,18,19,41,37,35,36,35,31,29,16,3,2,1,0,0,0,0,0,0,4,9,13,16,17,42,40,39,38,37,34,28,18,5,3,1,0,0,0,1,0,0,1,8,12,16,16,41,40,40,39,39,40,32,22,8,2,0,0,0,0,0,0,0,1,7,12,16,16,41,42,43,44,44,44,39,31,15,4,0,0,0,0,0,0,0,0,7,13,14,15,45,45,45,45,45,47,46,39,27,8,0,0,0,0,0,0,0,2,7,11,12,12,46,49,51,49,47,49,50,43,34,16,2,0,0,0,0,0,1,2,5,8,10,11,45,50,50,53,52,49,51,45,34,15,3,0,0,0,0,0,1,2,3,6,8,9,45,48,51,56,55,52,48,41,30,16,4,0,0,0,0,0,1,2,3,4,7,8,43,47,52,54,57,53,48,41,28,18,6,0,0,0,0,1,1,0,1,3,5,7,40,46,52,56,55,54,48,42,31,19,10,1,2,0,0,0,2,0,0,2,5,6,35,43,50,55,55,54,49,43,36,23,14,4,0,0,0,0,0,2,0,0,4,6,33,40,48,53,54,52,50,44,37,27,16,6,2,1,0,0,0,1,2,1,4,6,30,35,41,48,52,53,51,46,41,34,17,6,0,0,0,0,0,0,1,2,3,3,31,31,35,43,50,53,51,50,43,35,17,4,0,0,0,0,1,1,3,3,3,4,30,32,33,37,44,50,51,52,43,33,19,4,0,0,0,1,1,1,1,2,3,3,30,32,32,37,43,50,51,51,43,33,20,5,0,0,0,1,1,1,1,2,3,3],
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
