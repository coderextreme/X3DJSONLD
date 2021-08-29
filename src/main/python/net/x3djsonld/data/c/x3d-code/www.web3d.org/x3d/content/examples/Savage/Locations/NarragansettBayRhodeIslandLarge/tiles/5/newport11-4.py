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
        texture=ImageTexture(url=['../../images/5/newport11-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[21,19,16,20,28,32,29,29,33,29,29,27,19,13,12,11,13,15,16,16,15,15,19,18,17,18,26,27,23,27,31,28,23,23,17,13,12,12,12,13,14,14,14,14,13,15,18,16,23,23,19,21,24,23,20,19,14,12,12,12,12,12,12,13,13,13,12,12,13,12,14,17,18,20,20,20,16,12,12,12,12,12,12,12,12,12,12,12,11,11,11,11,11,11,12,12,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,13,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,13,15,18,19,11,11,11,11,11,11,12,12,11,11,11,11,11,11,11,11,11,11,14,21,26,27,11,11,11,11,11,12,17,16,15,13,11,11,11,11,11,11,11,11,13,19,27,29,11,11,11,11,11,16,20,19,17,15,11,11,11,11,11,11,11,11,11,14,24,26,11,11,11,11,15,20,23,23,19,15,14,11,11,11,11,11,11,11,12,19,27,29,11,11,11,11,17,21,24,25,20,14,16,11,11,11,12,12,14,16,18,24,29,30,11,11,11,11,18,20,24,29,21,16,11,10,11,11,13,14,20,21,21,25,34,35,11,11,16,15,16,18,23,27,24,18,13,12,12,13,16,20,26,27,24,25,33,33,13,20,21,15,19,23,27,29,25,13,14,16,18,20,23,28,32,33,31,29,32,33,16,25,28,26,25,28,30,30,25,16,18,23,29,28,29,34,38,39,36,35,34,33,22,28,32,35,34,36,33,30,24,16,20,27,34,38,35,35,40,42,42,38,32,32,20,29,35,38,37,37,37,36,27,19,21,27,33,37,40,39,42,46,44,42,38,38,20,28,36,40,40,41,41,38,33,25,31,31,34,36,44,46,44,47,48,46,37,37,25,28,35,40,44,47,45,40,36,32,36,38,39,44,45,50,48,46,49,45,41,41,27,28,36,40,44,48,46,40,36,33,36,39,40,45,46,50,49,46,50,45,42,42],
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
