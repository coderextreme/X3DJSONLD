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
        texture=ImageTexture(url=['../../images/5/newport11-3.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.37958958474797,-71.72526478466978,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0010469216,zDimension=24,zSpacing=0.0010517425,height=[34,35,36,36,38,35,30,26,25,21,20,22,20,18,19,17,17,17,16,19,21,21,34,35,36,37,39,37,31,24,25,23,22,22,20,18,19,18,16,17,15,14,18,19,29,33,35,37,39,36,31,26,25,23,22,22,17,15,17,17,15,16,13,13,13,13,29,34,37,37,40,37,34,29,26,23,23,21,16,14,15,16,16,15,14,12,12,12,32,35,39,39,40,37,34,30,26,24,27,26,22,18,18,18,18,17,16,11,11,11,39,40,42,43,41,36,34,33,29,28,29,28,24,22,18,19,18,21,22,18,11,11,41,45,45,46,45,40,35,33,30,29,30,30,27,25,18,15,15,18,18,17,11,11,39,44,47,49,46,42,38,34,33,34,31,29,28,24,20,16,16,16,16,16,11,11,41,44,50,51,49,43,38,36,37,39,34,30,32,28,25,19,15,14,14,14,12,11,42,46,52,53,48,45,41,37,39,44,39,33,30,29,29,21,17,15,16,16,14,13,43,49,55,55,51,47,43,41,46,48,44,40,35,34,32,27,20,16,15,11,12,11,42,49,55,56,53,48,49,50,51,50,47,44,40,34,32,27,22,18,15,11,11,11,36,45,51,54,52,50,49,52,53,51,48,44,41,32,29,22,19,17,15,11,11,11,34,41,47,49,47,44,46,48,50,49,45,43,38,30,21,18,17,16,11,11,11,11,28,39,42,42,39,37,42,43,45,42,44,40,35,27,21,15,12,11,11,11,11,11,19,26,32,34,32,35,39,44,46,43,38,32,30,25,17,16,13,11,11,11,11,11,16,16,19,22,24,29,32,35,36,35,29,25,24,21,16,14,13,11,11,11,11,11,12,13,11,11,14,16,20,22,21,23,18,15,18,19,15,13,11,11,11,11,12,13,13,13,11,11,11,11,12,14,16,11,11,15,11,11,11,11,11,11,11,11,14,16,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,15,12,11,16,20,22,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,12,16,15,16,19,20,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,14,12,21,18,15,19,20,11,11,11,11,11,11,11,11,11,16,12,15,13,15,16,16,24,32,28,24,25,25,11,11,11,11,11,11,11,11,11,16,13,16,14,15,17,16,25,34,29,26,27,27],
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
