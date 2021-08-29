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
        texture=ImageTexture(url=['../../images/5/newport18-22.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,6,9,10,12,17,22,24,29,36,46,52,50,48,50,45,50,53,53,49,52,52,0,9,14,15,17,23,27,26,28,32,43,50,49,50,47,48,46,47,53,52,51,51,0,8,16,21,23,25,30,29,29,30,36,45,48,48,49,48,47,47,52,53,57,54,0,3,16,22,27,30,30,30,29,34,37,41,51,51,46,41,47,47,48,53,56,57,0,0,11,22,26,30,27,27,28,32,31,39,45,46,47,46,48,48,49,49,55,58,0,0,0,15,22,22,22,25,27,28,30,37,43,45,47,45,45,47,44,51,54,53,0,0,0,8,12,16,18,21,19,22,30,34,43,47,40,41,41,41,41,48,46,47,0,0,0,0,6,12,12,10,16,21,30,35,41,35,40,40,39,38,40,37,37,38,0,0,0,0,0,4,11,13,18,23,30,36,38,41,42,36,33,33,33,36,39,39,0,0,0,0,0,2,9,15,21,25,32,36,40,46,38,31,32,26,29,35,41,41,0,0,0,0,0,0,8,18,24,28,33,39,41,43,36,31,24,24,31,36,41,42,0,0,0,0,0,1,4,17,24,29,35,40,38,36,31,23,22,22,31,42,47,48,0,0,0,0,0,0,2,9,21,27,34,37,40,32,27,21,17,21,29,36,43,45,0,0,0,0,0,0,0,2,14,23,28,34,35,28,26,20,16,19,22,33,43,43,0,0,0,0,0,0,0,0,5,18,23,28,27,29,22,18,16,18,27,37,41,42,0,0,0,0,0,0,0,0,1,12,22,21,26,26,24,16,14,19,28,35,41,42,0,0,0,0,0,0,0,0,0,5,13,20,24,25,21,13,17,20,25,34,41,42,0,0,0,0,0,0,0,0,0,0,5,15,20,20,18,15,17,19,24,29,36,37,0,0,0,0,0,0,0,0,0,0,0,7,13,15,10,11,15,18,23,30,35,36,0,0,0,0,0,0,0,0,0,0,0,0,1,4,8,11,13,15,21,24,31,33,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,9,12,15,21,24,31,33,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,6,8,13,20,26,30,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,7,10,11,17,27,29,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,10,10,17,27,29,30],
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
