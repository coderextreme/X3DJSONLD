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
        texture=ImageTexture(url=['../../images/5/newport25-28.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.71825065109993,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[10,9,8,4,6,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,13,13,12,12,5,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,16,17,13,11,7,5,4,2,2,2,1,1,1,1,1,1,1,1,1,1,1,1,19,18,16,13,10,9,7,5,4,3,4,4,1,1,1,1,1,1,1,1,1,1,22,21,19,15,11,12,11,8,5,4,4,3,1,1,1,1,1,1,1,1,1,1,26,24,21,17,13,13,14,13,8,5,5,5,3,1,1,1,1,1,1,1,1,1,28,25,22,18,16,17,18,16,12,8,9,9,8,4,1,1,1,1,1,1,1,1,30,28,25,21,20,22,22,19,15,12,13,14,13,10,6,1,1,1,1,1,1,1,31,29,27,24,24,25,25,22,19,17,18,19,18,15,8,6,3,1,1,1,1,1,31,29,27,26,27,27,27,26,22,22,23,24,23,20,16,11,9,5,1,1,1,1,30,30,28,28,29,30,30,28,25,26,28,29,26,23,21,17,14,11,8,3,1,1,27,30,30,29,31,32,31,29,29,30,32,33,31,27,24,21,18,15,13,9,4,3,25,28,30,31,32,33,33,31,31,32,34,36,34,30,27,25,23,20,17,13,9,9,23,27,30,31,32,33,34,33,32,34,38,40,37,32,29,27,27,24,21,17,13,13,18,23,28,31,33,34,34,34,35,36,40,43,39,36,32,31,30,28,24,19,15,15,14,20,27,30,32,34,35,36,36,39,42,44,42,39,35,34,33,30,25,19,17,16,12,19,27,31,33,34,36,38,38,40,41,43,42,40,37,36,36,31,27,22,19,18,14,20,28,32,34,36,37,39,40,41,44,45,44,41,38,38,36,32,28,23,20,19,16,30,35,37,35,36,38,40,41,43,46,46,44,41,40,39,37,33,29,25,21,20,21,32,32,33,35,37,38,40,42,44,46,47,47,43,41,40,39,34,30,25,22,22,15,23,29,32,35,37,39,42,43,44,47,49,48,44,42,40,39,35,31,27,24,23,16,24,29,32,33,37,41,44,44,44,48,51,50,46,43,42,39,35,33,29,26,25,17,24,28,31,33,37,42,45,45,45,49,52,51,47,45,43,40,36,33,30,28,27,17,24,28,31,33,38,42,45,46,45,49,53,51,47,45,44,40,36,33,30,28,27],
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
