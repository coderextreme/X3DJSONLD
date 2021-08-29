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
        texture=ImageTexture(url=['../../images/5/newport2-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.161878899235994,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[40,48,47,43,44,40,40,38,43,39,39,37,36,26,26,26,26,29,28,26,25,24,42,49,49,48,42,37,37,38,43,43,43,43,32,26,30,30,35,34,31,22,18,18,45,46,49,48,42,37,39,41,46,43,46,46,35,36,39,37,37,37,35,29,20,20,42,43,46,45,41,39,37,40,42,44,50,45,39,40,40,36,35,36,35,32,24,24,44,41,44,47,48,40,36,36,39,33,37,39,40,43,40,37,33,35,32,26,22,22,50,48,49,53,51,47,41,39,39,28,25,34,41,38,38,39,34,33,32,27,22,22,52,54,54,58,54,48,45,42,38,25,27,35,38,37,35,35,36,35,34,32,25,24,56,54,57,59,55,49,35,36,29,27,32,34,37,37,37,37,36,34,32,31,27,26,60,59,58,61,54,50,34,33,31,31,33,30,31,35,35,34,31,31,29,23,21,20,60,62,61,63,58,47,36,30,29,35,39,33,32,35,27,26,24,18,16,21,23,23,59,61,63,65,60,48,32,27,31,34,36,34,30,30,21,21,19,15,16,18,22,21,55,54,62,62,59,51,32,29,31,32,33,34,29,25,18,21,22,17,18,18,14,14,54,56,58,56,58,49,39,31,38,36,25,36,34,26,21,21,24,18,15,19,12,10,44,52,57,58,61,48,36,31,37,33,33,41,39,30,25,28,23,17,5,9,11,11,29,38,48,50,54,45,37,33,31,31,31,35,34,29,28,30,24,7,0,15,17,17,26,31,41,43,44,41,33,30,30,35,31,32,26,23,23,24,19,14,0,4,0,2,24,29,37,40,43,43,35,34,35,35,28,28,30,28,19,15,17,21,19,0,0,0,23,25,28,30,30,31,32,36,34,30,25,23,25,26,19,15,17,21,23,0,0,0,20,24,22,26,27,28,26,28,26,22,21,17,16,20,14,12,13,11,16,15,8,3,17,25,25,28,29,29,23,26,20,20,19,17,10,11,5,6,7,0,0,0,0,0,14,20,21,24,27,24,23,20,17,16,13,12,1,0,0,0,0,0,0,0,0,0,12,15,17,17,20,19,21,16,14,13,9,0,0,0,0,0,0,0,0,0,0,0,9,11,14,18,13,12,10,14,14,11,6,0,0,0,0,0,0,0,0,0,0,0,9,10,13,18,12,11,9,13,13,11,5,0,0,0,0,0,0,0,0,0,0,0],
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
