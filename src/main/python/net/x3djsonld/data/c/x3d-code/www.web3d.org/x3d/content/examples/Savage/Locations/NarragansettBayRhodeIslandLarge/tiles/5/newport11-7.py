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
        texture=ImageTexture(url=['../../images/5/newport11-7.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.63732336849614,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[8,9,9,7,5,3,7,9,9,8,8,7,7,5,5,3,4,4,3,2,2,2,8,9,9,8,5,3,7,10,9,8,7,7,6,6,6,5,5,4,3,4,2,2,6,9,9,9,6,4,6,7,9,9,8,8,7,6,6,5,4,4,4,5,2,1,3,5,6,6,6,6,6,7,9,9,8,7,7,8,7,6,5,5,5,4,2,2,3,4,5,6,6,4,5,7,10,10,8,7,8,8,8,6,6,6,4,4,2,2,2,3,3,5,4,3,3,7,10,10,10,10,10,10,10,10,8,6,6,5,4,3,4,3,3,4,3,3,4,9,11,12,11,10,10,10,10,10,9,5,4,4,4,4,3,4,4,5,7,5,6,11,12,13,13,12,11,11,11,9,9,6,6,5,6,6,4,4,4,4,7,7,9,11,13,13,13,13,13,12,11,10,9,6,6,6,6,6,4,4,4,4,4,8,12,13,14,13,13,13,13,13,12,12,11,9,8,9,9,9,5,4,4,4,4,5,14,15,14,14,14,15,15,14,14,13,14,12,11,11,11,11,4,4,4,4,4,4,12,16,18,17,17,18,17,16,15,15,16,15,14,12,14,14,11,8,4,4,4,4,11,15,19,18,18,18,18,18,19,21,19,18,16,16,16,16,17,16,14,13,12,11,12,15,17,20,20,20,21,21,22,23,22,22,20,21,21,21,18,18,19,19,18,21,17,18,19,20,21,21,21,22,23,24,25,25,25,26,25,25,21,21,16,15,18,26,26,25,23,22,23,23,23,23,24,25,27,28,28,28,27,27,25,24,16,13,22,28,30,25,23,24,22,24,27,30,31,29,30,31,30,31,32,32,27,27,21,22,29,29,27,24,23,26,26,30,37,39,40,40,36,35,36,39,40,40,28,31,23,31,35,33,28,25,28,32,36,35,41,45,46,47,47,43,48,44,42,42,33,28,25,28,28,31,30,32,34,32,43,41,40,46,45,51,56,56,53,44,42,42,29,22,22,23,26,33,38,39,41,32,41,48,44,41,41,54,60,59,50,42,46,47,26,24,20,25,31,36,38,34,46,43,35,45,49,40,39,54,60,59,47,43,47,49,25,25,25,32,33,38,38,38,48,41,35,43,43,39,38,53,58,56,41,46,51,51,25,26,26,33,33,38,38,39,48,41,36,43,43,39,39,53,57,55,40,47,53,54],
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
