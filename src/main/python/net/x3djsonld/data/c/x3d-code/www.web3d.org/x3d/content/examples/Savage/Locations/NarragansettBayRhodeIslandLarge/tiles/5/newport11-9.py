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
        texture=ImageTexture(url=['../../images/5/newport11-9.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.59335266040932,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[7,6,6,6,6,7,8,6,4,0,0,0,0,0,1,2,3,2,1,1,1,1,6,6,7,9,5,6,6,7,5,1,0,0,0,1,1,2,4,2,1,1,0,0,5,5,6,6,6,5,4,5,4,1,0,2,2,2,2,3,4,2,1,2,0,0,6,6,7,5,5,5,4,4,4,1,2,3,4,3,3,3,4,3,2,2,1,1,6,7,9,8,7,6,5,4,3,3,3,5,5,4,4,4,3,3,3,3,3,2,2,2,5,7,9,8,8,7,5,5,4,6,5,7,5,5,4,4,4,5,4,4,4,5,6,6,8,8,9,8,8,6,6,7,6,9,8,6,5,5,5,4,4,4,4,6,10,9,10,8,10,9,8,8,6,6,6,7,8,7,7,9,7,6,5,5,5,7,10,13,13,11,11,10,9,9,9,7,5,7,8,9,9,9,9,8,7,6,7,7,8,12,14,15,14,11,10,10,11,10,9,10,9,10,10,9,9,9,8,8,7,7,8,13,14,16,17,14,11,10,11,12,12,11,8,9,11,10,9,9,8,8,6,6,8,12,16,18,19,17,14,12,12,13,13,13,9,9,12,12,10,10,10,10,8,8,9,11,17,19,21,17,16,15,15,15,15,15,11,10,11,13,12,12,12,12,11,10,10,11,16,19,22,19,19,19,21,21,17,16,15,13,12,12,13,13,13,13,13,14,13,15,19,20,22,21,22,24,26,24,19,19,19,17,15,14,15,15,15,15,15,17,17,20,22,25,26,24,22,25,28,26,23,23,23,20,17,18,18,18,17,17,18,19,20,24,26,29,29,28,27,29,32,30,27,25,24,21,18,18,19,20,18,18,19,20,25,27,27,31,31,32,32,32,34,32,30,29,27,25,24,20,20,20,20,20,23,24,27,32,33,33,34,36,36,37,36,34,33,33,31,30,28,24,23,23,25,25,33,29,31,38,39,40,37,38,39,40,38,36,35,34,32,31,29,27,25,25,25,25,34,31,36,35,37,44,42,44,42,41,39,38,37,35,34,34,31,28,27,26,26,26,33,33,36,37,39,45,48,48,48,45,43,39,38,37,36,35,34,31,30,30,31,31,35,37,35,40,41,51,52,47,55,51,48,47,46,42,40,38,36,33,34,36,34,34,35,37,34,40,41,51,52,46,56,53,50,49,48,44,41,38,36,34,35,38,34,34],
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
