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
        texture=ImageTexture(url=['../../images/5/newport11-5.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.68129407658296,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[15,17,25,28,34,35,33,30,27,27,28,29,19,15,16,15,15,16,15,16,15,14,14,14,14,24,29,32,34,27,28,32,33,31,25,16,15,15,15,13,13,15,15,14,13,13,13,15,24,25,33,28,31,36,37,32,29,19,14,15,11,9,11,13,16,16,12,12,12,12,20,24,29,29,33,36,36,32,28,25,19,18,9,8,11,10,14,16,11,11,11,13,24,28,30,29,34,35,36,34,31,29,24,19,14,12,11,9,13,15,11,11,11,20,30,35,33,32,37,39,40,38,34,27,24,22,20,17,14,10,14,15,11,11,14,24,31,38,36,37,39,40,41,38,33,28,25,25,21,16,15,10,11,12,11,14,21,25,30,34,38,40,42,41,39,38,33,28,26,24,20,13,12,12,14,15,11,21,27,30,31,35,41,41,43,40,37,36,29,24,21,20,20,19,19,19,20,22,19,25,30,34,36,39,43,38,37,35,33,31,24,19,17,19,26,24,22,21,25,28,27,31,35,38,39,41,40,34,32,31,25,24,20,16,14,20,30,27,22,19,25,27,29,35,41,43,42,40,36,33,31,26,20,19,16,15,16,21,28,27,22,15,20,22,26,35,43,47,45,38,35,33,29,25,23,19,16,16,18,21,20,19,14,14,14,16,29,36,42,45,42,39,35,29,25,23,21,19,16,16,16,20,16,13,14,14,15,15,30,36,38,39,38,34,31,27,23,20,19,16,16,14,16,16,17,13,14,14,17,15,35,36,39,38,34,30,27,25,21,18,16,16,17,19,16,16,16,15,16,18,19,20,33,36,40,39,38,34,29,24,22,17,17,19,21,23,21,16,16,16,16,17,20,21,33,35,37,36,36,34,30,26,23,18,17,20,22,23,23,17,16,16,16,16,16,17,33,33,34,35,32,32,28,25,23,17,17,20,21,18,16,16,16,16,16,18,18,18,32,34,35,35,31,30,25,24,21,20,20,18,19,16,16,16,16,16,18,21,22,21,38,36,35,36,31,27,24,20,18,19,16,16,17,16,16,18,16,15,19,22,21,21,37,37,37,36,32,27,23,16,16,16,16,16,16,16,16,16,17,19,19,18,19,20,41,39,37,35,29,24,18,16,16,16,16,16,16,16,16,16,16,17,16,15,18,19,42,39,37,35,28,24,18,16,16,16,16,16,16,16,16,16,16,16,16,15,18,19],
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
