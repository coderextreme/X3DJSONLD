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
        texture=ImageTexture(url=['../../images/5/newport20-27.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.19761628762797,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[1,1,1,1,4,11,15,22,23,18,14,10,12,20,27,37,39,40,37,36,34,34,1,1,2,3,11,12,13,17,18,14,11,10,14,24,32,42,41,35,34,34,34,34,1,1,2,7,6,6,10,12,13,10,9,10,20,31,46,47,42,38,34,34,34,34,0,2,3,1,2,4,8,10,11,11,9,11,19,28,43,44,44,43,39,35,34,34,2,5,5,7,8,5,5,8,9,9,7,10,18,29,41,46,46,43,40,40,38,38,5,7,11,14,13,7,6,6,7,7,7,9,19,34,46,49,50,44,41,42,48,49,8,10,14,20,12,7,6,7,7,7,7,8,17,35,43,49,51,47,45,45,43,44,7,11,18,16,7,6,7,8,6,7,7,7,16,32,45,46,43,46,51,44,44,44,10,13,14,7,3,4,7,9,8,7,7,6,14,35,50,44,44,46,45,45,46,46,10,10,9,3,1,3,5,9,10,10,7,8,13,36,45,44,44,47,48,45,44,45,8,7,4,0,0,0,3,6,10,10,6,6,27,31,37,42,43,45,44,44,48,48,7,2,0,0,0,0,1,4,11,10,7,7,14,26,33,38,41,41,41,40,43,43,2,0,0,0,0,0,0,10,15,10,6,7,14,26,35,40,42,42,41,40,41,42,1,0,0,0,0,0,1,6,14,12,7,11,18,31,40,45,48,48,46,43,44,45,0,0,0,0,0,0,0,5,11,13,10,13,21,32,43,47,50,48,47,48,51,51,0,0,0,0,0,0,0,4,11,13,14,16,30,33,40,46,48,50,51,54,47,46,0,0,0,0,0,0,0,9,12,11,14,27,37,39,40,48,52,55,54,49,48,48,0,0,0,0,0,0,5,11,9,11,23,39,46,48,51,53,55,57,56,57,55,53,0,0,0,0,0,0,4,9,7,17,33,41,46,51,56,56,62,60,57,58,56,56,0,0,0,0,0,0,3,5,8,22,22,29,44,54,55,57,58,60,62,58,55,55,0,0,0,2,4,2,2,8,16,14,19,23,31,49,55,58,64,61,60,56,52,52,0,0,0,3,7,6,12,16,19,18,19,26,29,40,52,61,62,66,64,58,55,54,0,0,2,10,15,19,30,30,30,26,26,35,35,33,44,55,58,61,66,62,58,58,0,0,4,15,18,22,28,31,33,28,28,36,36,34,42,53,57,61,64,61,59,58],
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
