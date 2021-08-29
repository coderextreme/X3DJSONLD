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
        texture=ImageTexture(url=['../../images/5/newport18-31.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.10967487145433,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[0,0,0,0,0,0,0,1,1,1,4,9,9,10,10,10,13,15,15,15,14,14,0,0,0,0,0,0,0,1,1,3,5,9,10,11,11,12,17,16,17,18,15,15,0,0,0,1,1,2,1,0,2,4,5,6,11,13,15,18,20,18,20,21,19,20,1,2,1,3,6,6,1,1,3,4,6,8,9,12,16,20,21,20,21,20,24,25,5,7,4,7,10,7,5,6,5,5,6,10,11,16,19,23,23,25,25,24,29,30,10,11,10,12,10,8,9,12,10,7,8,10,14,16,20,22,26,30,28,29,35,36,12,13,16,16,10,13,16,13,10,8,9,12,16,20,23,27,34,36,34,36,41,41,13,14,18,12,12,20,19,14,11,9,10,13,18,23,26,31,40,41,38,42,45,44,16,15,14,12,16,22,19,13,12,11,13,16,19,25,28,35,42,43,45,48,46,44,20,16,13,15,19,20,15,13,14,13,14,17,23,26,29,35,41,43,47,49,41,39,22,17,20,20,22,20,15,14,15,15,16,17,20,24,29,34,38,42,48,44,36,35,21,19,21,23,24,17,19,19,17,17,18,21,23,26,29,33,38,44,46,42,35,35,24,23,24,24,21,20,21,19,18,19,21,22,25,27,29,32,39,45,45,42,39,39,25,25,24,23,21,21,21,20,19,22,25,26,26,29,30,33,39,45,44,45,45,45,27,26,23,23,23,22,21,20,20,22,26,29,34,33,31,32,36,40,42,44,47,47,30,28,24,23,24,23,23,23,23,23,25,29,33,35,35,33,36,39,41,44,47,48,32,28,24,23,24,24,24,25,25,25,27,27,31,32,33,37,37,38,40,43,47,48,33,29,26,25,25,25,25,26,29,29,31,30,29,33,34,36,37,40,43,46,48,49,33,29,26,26,26,26,26,28,31,31,32,32,32,33,35,36,38,41,45,48,50,50,34,30,28,27,26,27,28,29,32,34,35,34,33,34,35,37,39,41,44,48,48,48,34,31,29,30,29,30,35,34,34,35,36,34,34,35,36,38,40,43,46,46,44,44,34,33,32,33,33,37,40,39,39,38,37,36,36,36,36,38,41,43,44,43,44,44,34,34,34,35,38,43,44,41,43,43,41,39,38,38,38,39,42,42,43,43,44,44,35,34,34,35,39,44,45,43,44,44,42,40,39,39,38,39,41,42,43,43,44,44],
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
